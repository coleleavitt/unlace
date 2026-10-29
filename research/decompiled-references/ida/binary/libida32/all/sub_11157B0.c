__int64 __fastcall sub_11157B0(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // r13d
  __int64 **v11; // r15
  __int64 *v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  __int64 *v15; // rsi
  char *v16; // rdx
  __m128i si128; // xmm0
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, void *, __int64); // r14
  void *v20; // r14
  size_t v21; // rax
  char *v22; // rsi
  char *v23; // rsi
  __int64 **v24; // rax
  char *v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 **v29; // [rsp+18h] [rbp-1F0h]
  __int64 v30; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-1E0h]
  _QWORD v32[2]; // [rsp+30h] [rbp-1D8h] BYREF
  void *v33; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-1C0h]
  int v35; // [rsp+4Ch] [rbp-1BCh]
  void *v36[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+70h] [rbp-198h] BYREF
  _QWORD v38[4]; // [rsp+80h] [rbp-188h] BYREF
  __int16 v39; // [rsp+A0h] [rbp-168h]
  void *ptr; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v41; // [rsp+B8h] [rbp-150h]
  _BYTE v42[320]; // [rsp+C8h] [rbp-140h] BYREF

  v30 = a2;
  v31 = a3;
  v32[0] = 0;
  v32[1] = 0;
  sub_2222710(v36, &v30);
  v9 = sub_1114870(a1, (__int64)v36[0], (unsigned __int64)v36[1], v32, a5);
  if ( (_BYTE)v9 && v31 == 6 && *(_DWORD *)v30 == 1769234798 && *(_WORD *)(v30 + 4) == 25974 )
  {
    sub_2280F80(&v33);
    sub_1005BB0((__int64 **)&ptr, (__int64 *)v33, v34 == 0);
    v11 = (__int64 **)ptr;
    sub_1005BB0((__int64 **)&ptr, (__int64 *)v33 + v34, 1);
    v29 = (__int64 **)ptr;
    if ( ptr != v11 )
    {
      v12 = *v11;
      do
      {
        v13 = *v12;
        v14 = *((_BYTE *)v12 + 8) == 0;
        v15 = v12 + 2;
        v16 = "-";
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
        v38[2] = v15;
        v38[3] = v13;
        if ( !v14 )
          v16 = "+";
        v39 = 1283;
        ptr = v42;
        v18 = *a4;
        v38[0] = v16;
        v19 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v18 + 16);
        v41 = si128;
        sub_222FB80(v38, &ptr);
        v20 = (void *)v19(a4, ptr, v41.m128i_i64[0]);
        if ( ptr != v42 )
          free(ptr);
        ptr = v20;
        v21 = 0;
        if ( v20 )
          v21 = strlen((const char *)v20);
        v41.m128i_i64[0] = v21;
        v22 = *(char **)(a6 + 8);
        if ( v22 == *(char **)(a6 + 16) )
        {
          sub_1052040(a6, v22, &ptr);
        }
        else
        {
          *(_QWORD *)v22 = v20;
          v23 = v22 + 16;
          *((_QWORD *)v23 - 1) = v21;
          *(_QWORD *)(a6 + 8) = v23;
        }
        v12 = v11[1];
        if ( v12 && v12 != (__int64 *)-8LL )
        {
          ++v11;
        }
        else
        {
          v24 = v11 + 2;
          do
          {
            do
            {
              v12 = *v24;
              v11 = v24++;
            }
            while ( !v12 );
          }
          while ( v12 == (__int64 *)-8LL );
        }
      }
      while ( v29 != v11 );
    }
    v25 = (char *)v33;
    if ( v35 && v34 )
    {
      v26 = 0;
      v27 = 8LL * (v34 - 1) + 8;
      do
      {
        v28 = *(_QWORD *)&v25[v26];
        if ( v28 && v28 != -8 )
        {
          operator delete();
          v25 = (char *)v33;
        }
        v26 += 8;
      }
      while ( v27 != v26 );
    }
    free(v25);
  }
  if ( v36[0] != &v37 )
    operator delete(v36[0]);
  return v9;
}

