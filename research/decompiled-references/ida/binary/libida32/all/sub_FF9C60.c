__m128i *__fastcall sub_FF9C60(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // cl
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  char v13; // cl
  size_t *v15; // rdx
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  _DWORD *v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  const char *v26; // rax
  signed __int64 *v27; // rsi
  signed __int64 m; // rax
  unsigned __int64 v29; // rax
  signed __int64 v30; // rdx
  _BYTE *v31; // rsi
  unsigned __int64 v32; // rsi
  __int64 i; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rsi
  signed __int64 j; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm2
  __m128i si128; // xmm3
  signed __int64 *v42; // rax
  signed __int64 k; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // [rsp-8h] [rbp-E0h]
  __int64 v46; // [rsp+8h] [rbp-D0h]
  __int64 v47[2]; // [rsp+10h] [rbp-C8h] BYREF
  char v48; // [rsp+20h] [rbp-B8h]
  void *v49[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-98h] BYREF
  __m128i v51; // [rsp+50h] [rbp-88h] BYREF
  __m128i v52[7]; // [rsp+60h] [rbp-78h] BYREF

  v7 = *((_BYTE *)a2 + 48);
  if ( (v7 & 8) != 0 )
    goto LABEL_5;
  v9 = *a2;
  if ( !v9 )
  {
    if ( !a2[2] )
    {
LABEL_5:
      a1[2].m128i_i8[0] = 0;
      return a1;
    }
    v13 = v7 | 8;
    v15 = (size_t *)a2[2];
    *((_BYTE *)a2 + 48) = v13;
    v16 = a4;
    sub_FB4A10((__int64)v47, a4, v15, (v13 & 2) != 0, 1u, 1, 0, 0);
    if ( (v48 & 1) != 0 )
    {
      sub_FA3370((__int64)&v51, a3, a5, 7);
      v32 = a2[2];
      for ( i = *(_QWORD *)(v32 + 8); i; i = *(_QWORD *)(v34 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v34 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v34 )
          break;
        v32 = v34;
      }
      sub_AC84E0((unsigned __int8 **)&v51, (_BYTE *)(v32 + 32), *(_QWORD *)v32);
      if ( (v48 & 1) != 0 )
      {
        v35 = LODWORD(v47[0]);
        v36 = v47[1];
      }
      else
      {
        v39 = std::_V2::system_category((std::_V2 *)&v51);
        v35 = 0;
        v36 = v39;
      }
      (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v36 + 32LL))(v49, v36, v35);
      sub_AC84E0((unsigned __int8 **)&v51, (_BYTE *)v49[0], (signed __int64)v49[1]);
      if ( v49[0] != &v50 )
        operator delete(v49[0]);
      goto LABEL_27;
    }
    v18 = v47[0];
    v19 = *a2;
    v47[0] = 0;
    *a2 = v18;
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, v16, v45);
      v18 = *a2;
    }
    v20 = *(_DWORD **)(v18 + 8);
    v21 = *(_QWORD *)(v18 + 16) - (_QWORD)v20;
    if ( v21 > 0xFFFFFFFE )
    {
      sub_FA3370((__int64)&v51, a3, a5, 21);
      v27 = (signed __int64 *)a2[2];
      for ( j = v27[1]; j; j = *(_QWORD *)(v38 + 8) )
      {
        if ( (j & 4) == 0 )
          break;
        v38 = j & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v38 )
          break;
        v27 = (signed __int64 *)v38;
      }
    }
    else
    {
      v22 = a2[2];
      v23 = v22;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 8);
        if ( !v24 )
          break;
        v23 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v24 & 4) == 0 || !v23 )
          goto LABEL_15;
      }
      v23 = 0;
LABEL_15:
      if ( !*(_BYTE *)(v23 + 76) )
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)(v22 + 8);
          if ( !v25 )
            break;
          v22 = v25 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v25 & 4) == 0 || !v22 )
            goto LABEL_19;
        }
        v22 = 0;
LABEL_19:
        if ( *(_QWORD *)(v22 + 32) > v21 )
        {
          sub_FA3370((__int64)&v51, a3, a5, 20);
          v42 = (signed __int64 *)a2[2];
          for ( k = v42[1]; k; k = *(_QWORD *)(v44 + 8) )
          {
            if ( (k & 4) == 0 )
              break;
            v44 = k & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v44 )
              break;
            v42 = (signed __int64 *)v44;
          }
          v30 = *v42;
          v31 = v42 + 4;
          goto LABEL_26;
        }
      }
      v26 = sub_FF92A0(v20, v21);
      if ( !v26 )
      {
        *((_BYTE *)a2 + 48) &= ~8u;
        sub_220CA20(&v51, *a2);
        v40 = _mm_load_si128(&v51);
        si128 = _mm_load_si128(v52);
        a1[2].m128i_i8[0] = 1;
        *a1 = v40;
        a1[1] = si128;
        goto LABEL_28;
      }
      v46 = (__int64)v26;
      sub_FA3370((__int64)&v51, a3, a5, 83);
      sub_AC60B0((unsigned __int8 **)&v51, v46, 1u);
      v27 = (signed __int64 *)a2[2];
      for ( m = v27[1]; m; m = *(_QWORD *)(v29 + 8) )
      {
        if ( (m & 4) == 0 )
          break;
        v29 = m & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v29 )
          break;
        v27 = (signed __int64 *)v29;
      }
    }
    v30 = *v27;
    v31 = v27 + 4;
LABEL_26:
    sub_AC84E0((unsigned __int8 **)&v51, v31, v30);
LABEL_27:
    sub_AC6300((__int64)&v51);
    a1[2].m128i_i8[0] = 0;
LABEL_28:
    sub_F9EDB0(v47);
    return a1;
  }
  sub_220CA20(&v51, v9);
  v10 = _mm_load_si128(&v51);
  v11 = _mm_load_si128(v52);
  a1[2].m128i_i8[0] = 1;
  *a1 = v10;
  a1[1] = v11;
  return a1;
}

