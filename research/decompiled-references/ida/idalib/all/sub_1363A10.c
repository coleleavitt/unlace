void __fastcall sub_1363A10(__int64 a1, int a2, _BYTE *a3, signed __int64 a4)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  _BYTE *v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbp
  char *v14; // rdx
  __int64 v15; // rax
  char *v16; // rsi
  size_t v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  char *v20; // rbx
  int v21; // r15d
  int v22; // ebx
  __int64 v23; // [rsp+8h] [rbp-A0h] BYREF
  void *src; // [rsp+10h] [rbp-98h] BYREF
  size_t n; // [rsp+18h] [rbp-90h]
  _QWORD v26[2]; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v27[2]; // [rsp+30h] [rbp-78h] BYREF
  char v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+3Ch] [rbp-6Ch]
  char v30; // [rsp+44h] [rbp-64h]
  void *dest; // [rsp+48h] [rbp-60h]
  __m128 v32; // [rsp+50h] [rbp-58h] BYREF
  char v33; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v30 = 0;
  v32.m128_i8[8] = 0;
  dest = &v32.m128_u16[4];
  src = v26;
  v33 = 0;
  v29 = 0;
  v32.m128_u64[0] = 0;
  v27[0] = a2;
  v27[1] = a2;
  v28 = 0;
  if ( &a3[a4] && !a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a4 > 0xF )
  {
    if ( a4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (_QWORD *)operator new(a4 + 1);
    v26[0] = a4;
    src = v7;
LABEL_23:
    memcpy(v7, a3, a4);
    v7 = src;
    goto LABEL_6;
  }
  if ( a4 == 1 )
  {
    LOBYTE(v26[0]) = *a3;
    v7 = v26;
    goto LABEL_6;
  }
  v7 = v26;
  if ( a4 )
    goto LABEL_23;
LABEL_6:
  n = a4;
  *((_BYTE *)v7 + a4) = 0;
  v8 = dest;
  if ( src == v26 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v26[0];
      else
        memcpy(dest, src, n);
      v17 = n;
      v8 = dest;
    }
    v32.m128_u64[0] = v17;
    v8[v17] = 0;
    v8 = src;
  }
  else
  {
    if ( dest == &v32.m128_u16[4] )
    {
      v23 = v26[0];
      dest = src;
      v32 = _mm_loadh_ps((const double *)&v23);
    }
    else
    {
      v23 = v26[0];
      v9 = v32.m128_u64[1];
      dest = src;
      v32 = _mm_loadh_ps((const double *)&v23);
      if ( v8 )
      {
        src = v8;
        v26[0] = v9;
        goto LABEL_10;
      }
    }
    v8 = v26;
    src = v26;
  }
LABEL_10:
  n = 0;
  *v8 = 0;
  if ( src != v26 )
    operator delete(src);
  v10 = *(unsigned int *)(v6 + 8);
  v11 = *(unsigned int *)(v6 + 12);
  v33 = 0;
  v12 = v10 + 1;
  if ( v10 + 1 > v11 )
  {
    v18 = *(_QWORD *)v6;
    v19 = v6 + 16;
    if ( *(_QWORD *)v6 > (unsigned __int64)v27 || (unsigned __int64)v27 >= v18 + (v10 << 6) )
    {
      v13 = sub_2237400(v6, v6 + 16, v12, 64, &src);
      sub_9EF810((__int64 *)v6, v13);
      v22 = (int)src;
      if ( v19 != *(_QWORD *)v6 )
        free(*(void **)v6);
      *(_QWORD *)v6 = v13;
      v10 = *(unsigned int *)(v6 + 8);
      v14 = (char *)v27;
      *(_DWORD *)(v6 + 12) = v22;
    }
    else
    {
      v20 = (char *)v27 - v18;
      v13 = sub_2237400(v6, v6 + 16, v12, 64, &src);
      sub_9EF810((__int64 *)v6, v13);
      v21 = (int)src;
      if ( v19 != *(_QWORD *)v6 )
        free(*(void **)v6);
      *(_QWORD *)v6 = v13;
      v14 = &v20[v13];
      v10 = *(unsigned int *)(v6 + 8);
      *(_DWORD *)(v6 + 12) = v21;
    }
  }
  else
  {
    v13 = *(_QWORD *)v6;
    v14 = (char *)v27;
  }
  v15 = v13 + (v10 << 6);
  *(_QWORD *)v15 = *(_QWORD *)v14;
  *(_DWORD *)(v15 + 8) = *((_DWORD *)v14 + 2);
  *(_QWORD *)(v15 + 12) = *(_QWORD *)(v14 + 12);
  *(_DWORD *)(v15 + 20) = *((_DWORD *)v14 + 5);
  *(_QWORD *)(v15 + 24) = v15 + 40;
  v16 = *((char **)v14 + 3);
  if ( v16 == v14 + 40 )
  {
    *(__m128i *)(v15 + 40) = _mm_loadu_si128((const __m128i *)(v14 + 40));
  }
  else
  {
    *(_QWORD *)(v15 + 24) = v16;
    *(_QWORD *)(v15 + 40) = *((_QWORD *)v14 + 5);
  }
  *(_QWORD *)(v15 + 32) = *((_QWORD *)v14 + 4);
  *((_QWORD *)v14 + 3) = v14 + 40;
  *((_QWORD *)v14 + 4) = 0;
  v14[40] = 0;
  *(_BYTE *)(v15 + 56) = v14[56];
  ++*(_DWORD *)(v6 + 8);
  if ( dest != &v32.m128_u16[4] )
    operator delete(dest);
}
