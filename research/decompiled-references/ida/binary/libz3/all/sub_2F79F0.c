__int64 __fastcall sub_2F79F0(__int64 *a1, __int64 a2, char a3)
{
  char **exception; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm0
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r15
  void *v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  _DWORD *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-90h] BYREF
  __m128i v33; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+50h] [rbp-68h] BYREF
  __int64 v37; // [rsp+58h] [rbp-60h]
  char v38; // [rsp+60h] [rbp-58h]
  __int64 v39; // [rsp+68h] [rbp-50h]
  unsigned int v40; // [rsp+70h] [rbp-48h]

  v29 = *a1;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v7 = sub_15D1F10(a2);
  if ( !(unsigned __int8)sub_1673B10(a1 + 3, v7) )
  {
    v28 = *(_DWORD **)(sub_15D1F10(a2) + 24);
    if ( !v28 || *v28 != 5 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_2EB560(&v30, "Objective must be bit-vector, integer or real");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v30);
      sub_233E40((__int64)&v30);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  v8 = a1[19];
  v9 = (__m128i)_mm_loadh_ps((const double *)&v29);
  if ( v8 )
    v10 = *(_DWORD *)(v8 - 4);
  else
    v10 = 0;
  LODWORD(v30) = a3 == 0;
  v31 = v9;
  ++*(_DWORD *)(a2 + 8);
  v33 = 0u;
  v32 = v29;
  v34 = 0;
  v35 = 0;
  v36 = 1;
  v37 = 0;
  sub_182CBA0(qword_1C7F2C0, &v36);
  v11 = a1[19];
  BYTE4(v36) &= ~1u;
  LODWORD(v36) = 1;
  v39 = 0;
  v40 = v10;
  v38 = a3 ^ 1;
  if ( !v11 || (v12 = *(unsigned int *)(v11 - 4), v13 = v10, (_DWORD)v12 == *(_DWORD *)(v11 - 8)) )
  {
    sub_2FDD40(a1 + 19);
    v11 = a1[19];
    v13 = v40;
    v12 = *(unsigned int *)(v11 - 4);
  }
  v14 = v11 + 104 * v12;
  *(_DWORD *)v14 = v30;
  v15 = _mm_loadu_si128(&v31);
  v31.m128i_i64[0] = 0;
  *(__m128i *)(v14 + 8) = v15;
  *(_QWORD *)(v14 + 24) = v32;
  v16 = _mm_load_si128(&v33);
  v33.m128i_i64[0] = 0;
  *(__m128i *)(v14 + 32) = v16;
  v33.m128i_i64[1] = 0;
  *(_DWORD *)(v14 + 48) = v34;
  *(_BYTE *)(v14 + 52) = BYTE4(v34) & 3 | *(_BYTE *)(v14 + 52) & 0xFC;
  v17 = v35;
  v35 = 0;
  *(_QWORD *)(v14 + 56) = v17;
  *(_DWORD *)(v14 + 64) = v36;
  *(_BYTE *)(v14 + 68) = BYTE4(v36) & 3 | *(_BYTE *)(v14 + 68) & 0xFC;
  v18 = v37;
  v37 = 0;
  *(_QWORD *)(v14 + 72) = v18;
  LOBYTE(v18) = v38;
  *(_DWORD *)(v14 + 96) = v13;
  *(_BYTE *)(v14 + 80) = v18;
  *(_QWORD *)(v14 + 88) = v39;
  ++*(_DWORD *)(v11 - 4);
  sub_25A130((char *)&v34);
  v19 = v33.m128i_i64[1];
  if ( v33.m128i_i64[1] )
  {
    v20 = *(unsigned int *)(v33.m128i_i64[1] - 4);
    if ( (_DWORD)v20 )
    {
      v21 = v33.m128i_i64[1] + 32 * v20;
      do
      {
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v19);
        v23 = v19 + 16;
        v19 += 32;
        sub_182CBA0(v22, v23);
      }
      while ( v21 != v19 );
      v19 = v33.m128i_i64[1];
    }
    sub_186B220((void *)(v19 - 8));
  }
  sub_2334C0(&v32);
  v24 = v31.m128i_i64[0];
  if ( v31.m128i_i64[0] )
  {
    v25 = v31.m128i_i64[1];
    v26 = (*(_DWORD *)(v31.m128i_i64[0] + 8))-- == 1;
    if ( v26 )
    {
      sub_15D7BC0(v25, v24);
      v26 = (*(_DWORD *)(a2 + 8))-- == 1;
      if ( !v26 )
        return v10;
      goto LABEL_18;
    }
  }
  v26 = (*(_DWORD *)(a2 + 8))-- == 1;
  if ( v26 )
LABEL_18:
    sub_15D7BC0(v29, a2);
  return v10;
}

