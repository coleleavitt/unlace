/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001387C
// Address: 0x000000010001387C

//----- (000000010001387C) ----------------------------------------------------
void __fastcall sub_10001387C(_QWORD *a1, char a2)
{
  unsigned __int64 v2; // x21
  __int64 v5; // x24
  __int64 v6; // x22
  char *v7; // x0
  __int64 v8; // x7
  char *v9; // x25
  __int64 v10; // x9
  __int64 v11; // x21
  __int64 v12; // x10
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  const char *v19; // x26
  size_t v20; // x0
  size_t v21; // x28
  const char **v22; // x27
  unsigned __int64 v23; // x23
  char *v24; // x1
  const char *v25; // x0
  __int64 v26; // x0
  __int64 *v27; // x8
  __int64 v28; // x8
  __int64 v29; // x11
  char *v31; // x23
  void *v32; // x0
  __int64 v33; // x10
  unsigned int *v34; // x8
  __int64 v35; // x9
  __int64 v36; // x10
  __int64 v37; // x13
  __int64 v38; // x11
  __int64 v39; // x12
  __int64 v40; // x13
  unsigned __int64 v41; // x14
  __int64 v42; // x16
  _QWORD *v43; // x15
  unsigned __int64 v44; // x17
  bool v45; // cf
  unsigned __int64 v46; // x17
  unsigned int v47; // w14
  __int64 v48; // x8
  _QWORD *v49; // x1
  __int64 v50; // x26
  __int64 v51; // x21
  __int64 v52; // x27
  __int64 v53; // x8
  size_t v54; // x22
  char *v55; // x1
  __int64 v56; // x28
  char *v57; // x0
  void *__src; // [xsp+98h] [xbp-A8h] BYREF
  unsigned __int64 v59; // [xsp+A0h] [xbp-A0h]
  __int64 v60; // [xsp+A8h] [xbp-98h]
  char *v61; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v62; // [xsp+B8h] [xbp-88h]
  unsigned __int64 v63; // [xsp+C0h] [xbp-80h]
  _BYTE *v64; // [xsp+C8h] [xbp-78h] BYREF
  unsigned __int64 v65; // [xsp+D0h] [xbp-70h]
  __int64 v66; // [xsp+D8h] [xbp-68h]

  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v2 = a1[85];
  if ( !v2 )
    goto LABEL_66;
  v64 = qvector_reserve(&v64, nullptr, v2, 1u);
  bzero(&v64[v65], v2 - v65);
  v65 = v2;
  v5 = a1[85];
  if ( !v5 )
    goto LABEL_66;
  v6 = 0;
  do
  {
    v9 = (char *)operator new(0x360u);
    v10 = a1[87];
    v11 = v6 + 1;
    v12 = a1[95];
    *(_QWORD *)v9 = *a1;
    *((_QWORD *)v9 + 1) = 0;
    *((_OWORD *)v9 + 33) = 0u;
    *((_OWORD *)v9 + 34) = 0u;
    *((_OWORD *)v9 + 35) = 0u;
    *((_OWORD *)v9 + 36) = 0u;
    *((_OWORD *)v9 + 37) = 0u;
    *((_OWORD *)v9 + 38) = 0u;
    *((_OWORD *)v9 + 39) = 0u;
    *((_OWORD *)v9 + 40) = 0u;
    *((_OWORD *)v9 + 41) = 0u;
    *((_OWORD *)v9 + 42) = 0u;
    *((_QWORD *)v9 + 86) = 0;
    *((_QWORD *)v9 + 87) = v10;
    *((_QWORD *)v9 + 94) = 0;
    *((_OWORD *)v9 + 45) = 0u;
    *((_OWORD *)v9 + 46) = 0u;
    *((_OWORD *)v9 + 44) = 0u;
    *((_QWORD *)v9 + 95) = v12;
    *((_OWORD *)v9 + 48) = 0u;
    *((_OWORD *)v9 + 49) = 0u;
    *((_OWORD *)v9 + 50) = 0u;
    *((_OWORD *)v9 + 51) = 0u;
    *((_OWORD *)v9 + 52) = 0u;
    *((_QWORD *)v9 + 106) = 0;
    *((_DWORD *)v9 + 214) = v6 + 1;
    v9[860] = 0;
    v61 = nullptr;
    v62 = 0;
    v63 = 0;
    sub_10000273C(&v61, "%s%s", v13, v14, v15, v16, v17, v18, a2);
    if ( v62 )
    {
      v19 = v61;
      if ( !v61 )
        goto LABEL_16;
    }
    else
    {
      v19 = &byte_100075A30;
    }
    v20 = strlen(v19);
    if ( !v20 )
    {
LABEL_16:
      *((_QWORD *)v9 + 105) = 0;
      goto LABEL_17;
    }
    v21 = v20;
    v22 = (const char **)(v9 + 832);
    v23 = v20 + 1;
    v24 = *((char **)v9 + 104);
    if ( *((_QWORD *)v9 + 106) < v20 + 1 )
    {
      v24 = (char *)qvector_reserve((_QWORD *)v9 + 104, v24, v23, 1u);
      *v22 = v24;
    }
    *((_QWORD *)v9 + 105) = v23;
    memmove(v24, v19, v21);
    *(_BYTE *)(*((_QWORD *)v9 + 104) + v21) = 0;
    if ( *((_QWORD *)v9 + 105) )
    {
      v25 = *v22;
      goto LABEL_18;
    }
LABEL_17:
    v25 = &byte_100075A30;
LABEL_18:
    v26 = open_linput(v25, 0);
    *((_QWORD *)v9 + 1) = v26;
    if ( !v26 )
    {
      if ( v62 )
        v31 = v61;
      else
        v31 = &byte_100075A30;
      get_errdesc(v31, -1);
      sub_100000AA0();
LABEL_30:
      v32 = (void *)sub_1000197E8((__int64)v9);
      operator delete(v32);
      v7 = v61;
      if ( v61 )
        goto LABEL_5;
      goto LABEL_6;
    }
    v9[774] = 1;
    if ( (sub_10001275C((__int64)v9, 17, nullptr) & 1) == 0 )
    {
      sub_100000AA0();
      goto LABEL_30;
    }
    v27 = (__int64 *)(a1[84] + 56 * v6);
    v29 = *v27;
    v28 = v27[1];
    if ( *((_QWORD *)v9 + 13) != v29 || *((_QWORD *)v9 + 14) != v28 )
    {
      sub_10000EA94();
      goto LABEL_30;
    }
    v33 = a1[73];
    if ( (v33 & 0x7FFFFFFFFFFFFFFLL) != 0 )
    {
      v34 = (unsigned int *)(v9 + 768);
      v35 = a1[72];
      v36 = v35 + 32 * v33;
      v37 = *((_QWORD *)v9 + 67);
      v38 = v37 & 0x7FFFFFFFFFFFFFFLL;
      v39 = *((_QWORD *)v9 + 66) + 16LL;
      v40 = 32 * v37;
      do
      {
        if ( v38 )
        {
          v41 = *(_QWORD *)(v35 + 16);
          v42 = v40;
          v43 = (_QWORD *)v39;
          while ( 1 )
          {
            v44 = *(v43 - 2);
            v45 = v41 >= v44;
            v46 = v41 - v44;
            if ( v45 && v46 <= *(v43 - 1) )
              break;
            v43 += 4;
            v42 -= 32;
            if ( !v42 )
              goto LABEL_34;
          }
          if ( *v43 + v46 != -1 )
          {
            v47 = *(_DWORD *)(v35 + 24);
            if ( v47 > *v34 )
              *v34 = v47;
          }
        }
LABEL_34:
        v35 += 32;
      }
      while ( v35 != v36 );
    }
    v64[v6] = 1;
    v48 = a1[99];
    v49 = (_QWORD *)a1[98];
    if ( a1[100] < (unsigned __int64)(v48 + 1) )
    {
      v49 = qvector_reserve(a1 + 98, v49, v48 + 1, 8u);
      a1[98] = v49;
      v48 = a1[99];
    }
    v49[v48] = v9;
    ++a1[99];
    v7 = v61;
    if ( v61 )
    {
LABEL_5:
      v62 = 0;
      qfree(v7);
    }
LABEL_6:
    ++v6;
  }
  while ( v11 != v5 );
  v50 = 0;
  v51 = 0;
  v61 = nullptr;
  v62 = 0;
  v52 = 24;
  v63 = 0;
  do
  {
    if ( (v64[v50] & 1) == 0 )
    {
      v53 = a1[84] + v52;
      __src = nullptr;
      v59 = 0;
      v60 = 0;
      sub_10000273C(
        (char **)&__src,
        "expected name: %s%s uuid: %02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
        *(unsigned __int8 *)(v53 - 13),
        *(unsigned __int8 *)(v53 - 12),
        *(unsigned __int8 *)(v53 - 11),
        *(unsigned __int8 *)(v53 - 10),
        *(unsigned __int8 *)(v53 - 9),
        v8,
        a2);
      if ( v59 )
        v54 = v59 - 1;
      else
        v54 = 0;
      if ( v59 >= 2 )
      {
        v55 = v61;
        if ( v62 )
          v56 = v62 - 1;
        else
          v56 = 0;
        if ( v63 < v56 + v54 + 1 )
        {
          v55 = (char *)qvector_reserve(&v61, v61, v56 + v54 + 1, 1u);
          v61 = v55;
        }
        v62 = v56 + v54 + 1;
        v55[v56 + v54] = 0;
        memcpy(&v61[v56], __src, v54);
      }
      if ( __src )
      {
        v59 = 0;
        qfree(__src);
      }
      ++v51;
    }
    ++v50;
    v52 += 56;
  }
  while ( v5 != v50 );
  v57 = v61;
  if ( v51 )
  {
    sub_10000EA94();
    v57 = v61;
  }
  if ( v57 )
  {
    v62 = 0;
    qfree(v57);
  }
LABEL_66:
  if ( v64 )
  {
    v65 = 0;
    qfree(v64);
  }
}
// 1000139C4: variable 'v13' is possibly undefined
// 1000139C4: variable 'v14' is possibly undefined
// 1000139C4: variable 'v15' is possibly undefined
// 1000139C4: variable 'v16' is possibly undefined
// 1000139C4: variable 'v17' is possibly undefined
// 1000139C4: variable 'v18' is possibly undefined
// 100013CCC: variable 'v8' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
