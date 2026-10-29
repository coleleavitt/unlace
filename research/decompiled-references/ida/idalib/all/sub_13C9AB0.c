__int64 __fastcall sub_13C9AB0(
        _QWORD *a1,
        unsigned __int64 a2,
        char *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebp
  size_t v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // dl
  _QWORD *v13; // r14
  char *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rbx
  void **v26; // r12
  void **v27; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  _BYTE *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  void **v36; // rcx
  __m128i *v37; // rax
  __m128i *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  void **v43; // r14
  __int64 v44; // [rsp+0h] [rbp-118h]
  void *v48[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v49[16]; // [rsp+40h] [rbp-D8h] BYREF
  void **v50; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-C0h]
  _BYTE v52[184]; // [rsp+60h] [rbp-B8h] BYREF

  if ( !a6 )
  {
    v7 = 1;
    if ( !a5 || (*(_BYTE *)(a5 + 905) & 0x20) == 0 )
      return v7;
  }
  v8 = (size_t)a3;
  v9 = a1[5];
  v10 = a4;
  v50 = (void **)v52;
  v51 = 0x400000000LL;
  v44 = v9;
  sub_FD9440((__int64)v48, v9, a3, a4, 1);
  v11 = sub_A05D80(v48);
  if ( v12 )
  {
    v13 = (_QWORD *)v11;
    sub_A04D70((__int64 *)v48);
    if ( v13 )
    {
      v8 = sub_FDBEF0(v9, (__int64)v13);
      v10 = v29;
    }
  }
  else
  {
    v13 = nullptr;
    sub_A04D70((__int64 *)v48);
  }
  while ( 1 )
  {
    v14 = (char *)sub_228A4B0(v8, v10, 0);
    v8 = (size_t)v14;
    v10 = v15;
    if ( !v15 )
      break;
    sub_FD9440((__int64)v48, v44, v14, v15, 1);
    v16 = sub_A05D80(v48);
    if ( !v17 )
    {
      sub_A04D70((__int64 *)v48);
      break;
    }
    sub_A04D70((__int64 *)v48);
    if ( !v16 )
      break;
    v30 = sub_228AB90(v8, v10, 0);
    if ( v31 == 10 && *(_QWORD *)v30 == 0x6F77656D6172662ELL && *(_WORD *)(v30 + 8) == 27506 )
    {
      v32 = (_BYTE *)sub_228AAA0(v8, v10, 0);
      v48[0] = v49;
      sub_13BF290(v48, v32, (__int64)&v32[v33]);
      v34 = (unsigned int)v51;
      v35 = (unsigned int)v51 + 1LL;
      if ( v35 > HIDWORD(v51) )
      {
        v43 = v50;
        if ( v50 > v48 || v48 >= &v50[4 * (unsigned int)v51] )
        {
          sub_A8C1F0((__int64)&v50, v35);
          v36 = v50;
          v34 = (unsigned int)v51;
          v37 = (__m128i *)v48;
        }
        else
        {
          sub_A8C1F0((__int64)&v50, v35);
          v36 = v50;
          v34 = (unsigned int)v51;
          v37 = (__m128i *)((char *)v50 + (char *)v48 - (char *)v43);
        }
      }
      else
      {
        v36 = v50;
        v37 = (__m128i *)v48;
      }
      v38 = (__m128i *)&v36[4 * v34];
      v38->m128i_i64[0] = (__int64)v38[1].m128i_i64;
      if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
      {
        v38[1] = _mm_loadu_si128(v37 + 1);
      }
      else
      {
        v38->m128i_i64[0] = v37->m128i_i64[0];
        v38[1].m128i_i64[0] = v37[1].m128i_i64[0];
      }
      v38->m128i_i64[1] = v37->m128i_i64[1];
      v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
      v37->m128i_i64[1] = 0;
      v37[1].m128i_i8[0] = 0;
      LODWORD(v51) = v51 + 1;
      if ( v48[0] != v49 )
        operator delete(v48[0]);
      v13 = (_QWORD *)v16;
    }
  }
  v18 = sub_228AAA0(v13 + 4, *v13, 0);
  v20 = v19;
  v21 = v18;
  v24 = sub_13C8080((__int64)a1, v13, a7, 1u, v22, v23);
  if ( v24 != 2 )
  {
    if ( v24 == 3 && (*(_BYTE *)(*a1 + 280LL) & 2) != 0 )
      sub_1406640(a1 + 79, v13, a7, 0);
    sub_14075F0(a1 + 79, v21, v20);
  }
  if ( a1[190] )
    sub_13C2430((__int64)a1, a2);
  v25 = sub_1403C80(a1 + 79, a2, 1, 0);
  if ( a5
    && (v25 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (*(_BYTE *)(a5 + 905) & 0x20) != 0
    && (sub_1408340(a1 + 79, a5, 0),
        !(unsigned __int8)sub_FF5710(a5, (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL), v39, v40, v41, v42)) )
  {
    v7 = sub_13F49C0(a1 + 79, a2);
    if ( !(_BYTE)v7 )
      goto LABEL_23;
    if ( a6 )
      goto LABEL_49;
  }
  else if ( a6 )
  {
    if ( (v25 & 2) != 0 )
    {
LABEL_49:
      v7 = 1;
      *a6 = 0;
      goto LABEL_23;
    }
    *a6 = v25;
  }
  v7 = 1;
LABEL_23:
  v26 = v50;
  v27 = &v50[4 * (unsigned int)v51];
  if ( v50 != v27 )
  {
    do
    {
      while ( 1 )
      {
        v27 -= 4;
        if ( *v27 == v27 + 2 )
          break;
        operator delete(*v27);
        if ( v26 == v27 )
          goto LABEL_26;
      }
    }
    while ( v26 != v27 );
LABEL_26:
    v27 = v50;
  }
  if ( v27 != (void **)v52 )
    free(v27);
  return v7;
}
