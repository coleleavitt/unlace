void __fastcall sub_171BDF0(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        const __m128i *a9,
        unsigned int a10,
        unsigned int a11,
        char a12)
{
  unsigned int v12; // ebp
  __int64 v14; // r13
  bool v15; // al
  __int64 v16; // r13
  _BYTE *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char **v23; // rdi
  char *v24; // rax
  void *v25; // rdi
  size_t v26; // rdx
  char v27; // al
  __m128i si128; // xmm1
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __m128i v34; // xmm2
  unsigned int v35; // [rsp+14h] [rbp-144h]
  __int64 v36; // [rsp+18h] [rbp-140h] BYREF
  __int64 v37; // [rsp+20h] [rbp-138h]
  __int64 v38; // [rsp+28h] [rbp-130h]
  __int64 v39; // [rsp+30h] [rbp-128h]
  __int64 v40; // [rsp+38h] [rbp-120h]
  unsigned __int64 v41[2]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v42; // [rsp+50h] [rbp-108h]
  void *dest; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v44; // [rsp+68h] [rbp-F0h] BYREF
  size_t n[2]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+98h] [rbp-C0h]
  __int64 v48; // [rsp+A0h] [rbp-B8h]
  __int64 v49; // [rsp+A8h] [rbp-B0h]
  _BYTE *v50; // [rsp+B0h] [rbp-A8h]
  __int64 v51; // [rsp+B8h] [rbp-A0h]
  _BYTE v52[64]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE *v53; // [rsp+100h] [rbp-58h]
  __int64 v54; // [rsp+108h] [rbp-50h]
  _BYTE v55[72]; // [rsp+110h] [rbp-48h] BYREF

  v37 = a1;
  v12 = a11;
  v40 = a4;
  v38 = a5;
  v39 = a6;
  if ( __PAIR128__(a4, a3) == 0 )
  {
    sub_15A3210((__int64)a9, 6, "...");
    return;
  }
  if ( !a3 )
  {
    v35 = *(unsigned __int16 *)(v40 + 22);
    if ( a11 != v35 )
    {
      v44.m128i_i8[8] = 0;
      v14 = 8LL * a11;
      v44.m128i_i64[0] = 0;
      dest = &v44.m128i_u64[1];
      goto LABEL_9;
    }
    v27 = 1;
LABEL_39:
    if ( *(char *)(v40 + 19) < 0 )
    {
      si128 = _mm_load_si128(a9);
      v46 = 0;
      v51 = 0x400000000LL;
      v50 = v52;
      *(__m128i *)n = si128;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v53 = v55;
      v54 = 0x200000000LL;
      if ( !v27 )
        sub_15A3210((__int64)n, 15, (char *)&byte_22F0C30);
      a2 = (const __m128i *)"...";
      if ( a10 >= v35 )
        sub_15A31B0((__int64)n, (__int64)"...");
      else
        sub_15A3090((__int64)n, (__int64)"...");
      goto LABEL_49;
    }
    return;
  }
  v35 = sub_B76070(a3, (__int64)a2, a3, a4);
  if ( v35 != a11 )
  {
    v14 = 8LL * a11;
    v15 = sub_B74820(*(_QWORD *)(*(_QWORD *)(a3 + 120) + v14));
    if ( v15 && !a12 )
    {
LABEL_51:
      v34 = _mm_load_si128(a9);
      v46 = 0;
      v50 = v52;
      v51 = 0x400000000LL;
      *(__m128i *)n = v34;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v53 = v55;
      v54 = 0x200000000LL;
      if ( !v15 )
        sub_15A3210((__int64)n, 15, (char *)&byte_22F0C30);
      sub_171BDF0(v37, (_DWORD)a2, a3, v40, v38, v39, (__int64)n, a10, v12, 1);
LABEL_49:
      v33 = sub_15A5CA0((__int64)n, (__int64)a2, v29, v30, v31, v32);
      sub_15A3030((__int64)a9, v33);
      sub_1704B40(n);
      return;
    }
    v44.m128i_i8[8] = 0;
    v44.m128i_i64[0] = 0;
    dest = &v44.m128i_u64[1];
    while ( 2 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + v14);
LABEL_11:
      LOBYTE(v42) = 0;
      sub_171B530((__m128i *)n, a2, v16, 0, 0, a6, v41[0], v41[1], v42);
      v17 = dest;
      if ( (__int64 *)n[0] == &v46 )
      {
        v26 = n[1];
        if ( n[1] )
        {
          if ( n[1] == 1 )
            *(_BYTE *)dest = v46;
          else
            memcpy(dest, (const void *)n[0], n[1]);
          v26 = n[1];
          v17 = dest;
        }
        v44.m128i_i64[0] = v26;
        v17[v26] = 0;
        v17 = (_BYTE *)n[0];
        goto LABEL_15;
      }
      if ( dest == &v44.m128i_u64[1] )
      {
        v36 = v46;
        dest = (void *)n[0];
        a7 = (__m128i)_mm_loadh_ps((const double *)&v36);
        v44 = a7;
      }
      else
      {
        v36 = v46;
        v18 = v44.m128i_i64[1];
        dest = (void *)n[0];
        a7 = (__m128i)_mm_loadh_ps((const double *)&v36);
        v44 = a7;
        if ( v17 )
        {
          n[0] = (size_t)v17;
          v46 = v18;
LABEL_15:
          n[1] = 0;
          *v17 = 0;
          if ( (__int64 *)n[0] != &v46 )
            operator delete((void *)n[0]);
          if ( sub_B74820(v16) )
          {
            sub_17134B0(n, v16, *(__int64 **)(v37 + 2312), *(_QWORD *)(v37 + 2320), a7, a8);
            sub_9EE560(&dest, (_BYTE *)n[0], n[1]);
            v25 = (void *)n[0];
            if ( (__int64 *)n[0] != &v46 )
            {
LABEL_28:
              operator delete(v25);
              goto LABEL_18;
            }
          }
          while ( 1 )
          {
LABEL_18:
            v23 = (char **)a9->m128i_i64[0];
            LOWORD(v48) = 260;
            n[0] = (size_t)&dest;
            v24 = sub_15A4EB0(v23, (const void ***)n, v19, v20, v21, v22);
            if ( a10 == v12 )
              sub_15A31B0((__int64)a9, (__int64)v24);
            else
              sub_15A3090((__int64)a9, (__int64)v24);
            if ( dest != &v44.m128i_u64[1] )
              operator delete(dest);
            if ( ++v12 == v35 )
            {
              v27 = 0;
              goto LABEL_38;
            }
            v14 = 8LL * v12;
            if ( a3 )
              break;
            sub_15A3210((__int64)a9, 15, (char *)&byte_22F0C30);
            v44.m128i_i8[8] = 0;
            dest = &v44.m128i_u64[1];
            v44.m128i_i64[0] = 0;
LABEL_9:
            if ( v38 )
            {
              v16 = *(_QWORD *)(v14 + v39 + 16);
              goto LABEL_11;
            }
            v41[0] = *(_QWORD *)(v40 + v14 + 48);
            sub_F785A0((__int64)n, v41, a2);
            sub_A0AAD0((__int64)&dest, n);
            v25 = (void *)n[0];
            if ( (__int64 *)n[0] != &v46 )
              goto LABEL_28;
          }
          if ( !sub_B74820(*(_QWORD *)(*(_QWORD *)(a3 + 120) + 8LL * v12)) )
          {
            sub_15A3210((__int64)a9, 15, (char *)&byte_22F0C30);
            v44.m128i_i8[8] = 0;
            dest = &v44.m128i_u64[1];
            v44.m128i_i64[0] = 0;
            continue;
          }
          v15 = 0;
          goto LABEL_51;
        }
      }
      break;
    }
    v17 = &v46;
    n[0] = (size_t)&v46;
    goto LABEL_15;
  }
  v27 = 1;
LABEL_38:
  if ( v40 )
    goto LABEL_39;
}
