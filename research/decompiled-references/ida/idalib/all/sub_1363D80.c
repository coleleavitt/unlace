void __fastcall sub_1363D80(__int64 a1, __int64 a2, int a3, _BYTE *a4, signed __int64 a5)
{
  __int64 v7; // r13
  _QWORD *v8; // rax
  _BYTE *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
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
  double v23[2]; // [rsp+8h] [rbp-C0h] BYREF
  int v24; // [rsp+18h] [rbp-B0h]
  __int64 v25; // [rsp+27h] [rbp-A1h]
  char v26; // [rsp+2Fh] [rbp-99h]
  void *src; // [rsp+30h] [rbp-98h] BYREF
  size_t n; // [rsp+38h] [rbp-90h]
  _QWORD v29[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  char v31; // [rsp+58h] [rbp-70h]
  __int64 v32; // [rsp+5Ch] [rbp-6Ch]
  char v33; // [rsp+64h] [rbp-64h]
  void *dest; // [rsp+68h] [rbp-60h]
  __m128 v35; // [rsp+70h] [rbp-58h] BYREF
  char v36; // [rsp+88h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v23[1] = a2;
  v24 = a3;
  dest = &v35.m128_u16[4];
  src = v29;
  v25 = a2;
  v26 = a3;
  v32 = 0;
  v33 = 0;
  v35.m128_u64[0] = 0;
  v35.m128_i8[8] = 0;
  v36 = 0;
  v30 = a2;
  v31 = a3;
  if ( &a4[a5] && !a4 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a5 > 0xF )
  {
    if ( a5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v8 = (_QWORD *)operator new(a5 + 1);
    v29[0] = a5;
    src = v8;
LABEL_23:
    memcpy(v8, a4, a5);
    v8 = src;
    goto LABEL_6;
  }
  if ( a5 == 1 )
  {
    LOBYTE(v29[0]) = *a4;
    v8 = v29;
    goto LABEL_6;
  }
  v8 = v29;
  if ( a5 )
    goto LABEL_23;
LABEL_6:
  n = a5;
  *((_BYTE *)v8 + a5) = 0;
  v9 = dest;
  if ( src == v29 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v29[0];
      else
        memcpy(dest, src, n);
      v17 = n;
      v9 = dest;
    }
    v35.m128_u64[0] = v17;
    v9[v17] = 0;
    v9 = src;
  }
  else
  {
    if ( dest == &v35.m128_u16[4] )
    {
      v23[0] = *(double *)v29;
      dest = src;
      v35 = _mm_loadh_ps(v23);
    }
    else
    {
      v23[0] = *(double *)v29;
      v10 = v35.m128_u64[1];
      dest = src;
      v35 = _mm_loadh_ps(v23);
      if ( v9 )
      {
        src = v9;
        v29[0] = v10;
        goto LABEL_10;
      }
    }
    v9 = v29;
    src = v29;
  }
LABEL_10:
  n = 0;
  *v9 = 0;
  if ( src != v29 )
    operator delete(src);
  v11 = *(unsigned int *)(v7 + 8);
  v12 = v11 + 1;
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
  {
    v18 = *(_QWORD *)v7;
    v19 = v7 + 16;
    if ( *(_QWORD *)v7 > (unsigned __int64)&v30 || (unsigned __int64)&v30 >= v18 + (v11 << 6) )
    {
      v13 = sub_2237400(v7, v7 + 16, v12, 64, &src);
      sub_9EF810((__int64 *)v7, v13);
      v22 = (int)src;
      if ( v19 != *(_QWORD *)v7 )
        free(*(void **)v7);
      *(_QWORD *)v7 = v13;
      v11 = *(unsigned int *)(v7 + 8);
      v14 = (char *)&v30;
      *(_DWORD *)(v7 + 12) = v22;
    }
    else
    {
      v20 = (char *)&v30 - v18;
      v13 = sub_2237400(v7, v7 + 16, v12, 64, &src);
      sub_9EF810((__int64 *)v7, v13);
      v21 = (int)src;
      if ( v19 != *(_QWORD *)v7 )
        free(*(void **)v7);
      *(_QWORD *)v7 = v13;
      v14 = &v20[v13];
      v11 = *(unsigned int *)(v7 + 8);
      *(_DWORD *)(v7 + 12) = v21;
    }
  }
  else
  {
    v13 = *(_QWORD *)v7;
    v14 = (char *)&v30;
  }
  v15 = v13 + (v11 << 6);
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
  ++*(_DWORD *)(v7 + 8);
  if ( dest != &v35.m128_u16[4] )
    operator delete(dest);
}
