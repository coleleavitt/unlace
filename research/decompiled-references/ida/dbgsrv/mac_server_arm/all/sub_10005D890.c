/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D890
// Address: 0x000000010005D890

//----- (000000010005D890) ----------------------------------------------------
void __fastcall sub_10005D890(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x19
  unsigned __int64 v4; // x8
  size_t v5; // x21
  const void *v6; // x22
  unsigned __int64 v7; // x9
  size_t v8; // x21
  const void *v9; // x22
  void *v10; // x1
  unsigned __int64 v11; // x9
  size_t v12; // x21
  const void *v13; // x22
  void *v14; // x1
  size_t v15; // x0
  size_t v16; // x21
  unsigned __int64 v17; // x22
  void *v18; // x0
  const char *v19; // x0
  _QWORD *v20; // x21
  unsigned __int64 v21; // x25
  size_t v22; // x22
  void *v23; // x1
  size_t v24; // x22
  __darwin_time_t v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  __int64 v33; // x0
  __int64 *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  const char *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  char v50; // [xsp+0h] [xbp-520h]
  __int64 v51; // [xsp+28h] [xbp-4F8h] BYREF
  void *v52; // [xsp+30h] [xbp-4F0h]
  __int64 v53; // [xsp+38h] [xbp-4E8h]
  __int64 v54; // [xsp+40h] [xbp-4E0h]
  void *__src; // [xsp+48h] [xbp-4D8h] BYREF
  size_t v56; // [xsp+50h] [xbp-4D0h]
  unsigned __int64 v57; // [xsp+58h] [xbp-4C8h]
  __int64 v58; // [xsp+60h] [xbp-4C0h] BYREF
  void *v59; // [xsp+68h] [xbp-4B8h] BYREF
  size_t v60; // [xsp+70h] [xbp-4B0h]
  __int64 v61; // [xsp+78h] [xbp-4A8h]
  __int16 v62; // [xsp+80h] [xbp-4A0h]
  void *__dst[2]; // [xsp+88h] [xbp-498h] BYREF
  void *__ptr[2]; // [xsp+98h] [xbp-488h] BYREF
  __int128 v65; // [xsp+A8h] [xbp-478h]
  char v66[25]; // [xsp+BEh] [xbp-462h] BYREF
  char __s[1025]; // [xsp+D7h] [xbp-449h] BYREF

  sub_10005E2CC(*(unsigned __int8 *)(a1 + 106));
  *(_QWORD *)(a1 + 80) = v2;
  v3 = (__int64 *)(a1 + 80);
  v58 = 88;
  v59 = nullptr;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  *(_OWORD *)__dst = 0u;
  *(_OWORD *)__ptr = 0u;
  v65 = 0u;
  if ( &v58 != (__int64 *)a1 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = v4 ? v4 - 1 : 0LL;
    if ( v4 >= 2 )
    {
      v6 = *(const void **)(a1 + 8);
      v59 = qvector_reserve(&v59, nullptr, v5 + 1, 1u);
      v60 = v5 + 1;
      memmove(v59, v6, v5);
      *((_BYTE *)v59 + v5) = 0;
    }
  }
  v62 = *(_WORD *)(a1 + 104);
  if ( __dst != (void **)(a1 + 32) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 )
      v8 = v7 - 1;
    else
      v8 = 0;
    if ( v7 >= 2 )
    {
      v9 = *(const void **)(a1 + 32);
      v10 = __dst[0];
      if ( __ptr[0] <= (void *)v8 )
      {
        v10 = qvector_reserve(__dst, (_QWORD *)__dst[0], v8 + 1, 1u);
        __dst[0] = v10;
      }
      __dst[1] = (void *)(v8 + 1);
      memmove(v10, v9, v8);
      *((_BYTE *)__dst[0] + v8) = 0;
    }
    else
    {
      __dst[1] = nullptr;
    }
  }
  if ( &__ptr[1] != (void **)(a1 + 56) )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
      v12 = v11 - 1;
    else
      v12 = 0;
    if ( v11 >= 2 )
    {
      v13 = *(const void **)(a1 + 56);
      v14 = __ptr[1];
      if ( *((_QWORD *)&v65 + 1) <= v12 )
      {
        v14 = qvector_reserve(&__ptr[1], (_QWORD *)__ptr[1], v12 + 1, 1u);
        __ptr[1] = v14;
      }
      *(_QWORD *)&v65 = v12 + 1;
      memmove(v14, v13, v12);
      *((_BYTE *)__ptr[1] + v12) = 0;
    }
    else
    {
      *(_QWORD *)&v65 = 0;
    }
  }
  if ( (sub_10005E320(*v3) & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) >= 2u )
      v42 = *(const char **)(a1 + 8);
    else
      v42 = "0.0.0.0";
    sub_10005E2FC(*(_QWORD *)(a1 + 80));
    sub_100060EB4("%s:%u: %s\n", v43, v44, v45, v46, v47, v48, v49, (char)v42);
    sub_10005E374((_QWORD *)(a1 + 80));
    exit(1);
  }
  __src = nullptr;
  v56 = 0;
  v57 = 0;
  v52 = nullptr;
  v53 = 0;
  v54 = 0;
  sub_10005E350(*v3);
  if ( sub_10006F7C4(__s, 2) )
  {
    v15 = strlen(__s);
    if ( v15 )
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = __src;
      if ( v57 < v17 )
      {
        v18 = qvector_reserve(&__src, __src, v17, 1u);
        __src = v18;
      }
      v56 = v17;
      memmove(v18, __s, v16);
      *((_BYTE *)__src + v16) = 0;
      if ( v53 )
        v19 = (const char *)v52;
      else
        v19 = &byte_100075A30;
      v20 = __src;
      v21 = v56;
      if ( v56 )
      {
        if ( strcmp(v19, (const char *)__src) )
        {
LABEL_35:
          if ( v21 )
            v22 = v21 - 1;
          else
            v22 = 0;
          if ( v57 < v22 + 9 )
          {
            v20 = qvector_reserve(&__src, v20, v22 + 9, 1u);
            __src = v20;
          }
          v56 = v22 + 9;
          *((_BYTE *)v20 + v22 + 8) = 0;
          if ( v21 >= 2 )
            memmove((char *)__src + 8, __src, v22);
          *(_QWORD *)__src = 0x20706920796D2820LL;
          v23 = __src;
          if ( v56 )
            v24 = v56 - 1;
          else
            v24 = 0;
          if ( v57 < v24 + 2 )
          {
            v23 = qvector_reserve(&__src, __src, v24 + 2, 1u);
            __src = v23;
          }
          v56 = v24 + 2;
          *((_BYTE *)v23 + v24 + 1) = 0;
          *((_BYTE *)__src + v24) = 41;
          goto LABEL_52;
        }
        goto LABEL_50;
      }
    }
    else
    {
      v21 = 0;
      v56 = 0;
      v19 = &byte_100075A30;
      v20 = __src;
    }
    if ( strcmp(v19, &byte_100075A30) )
      goto LABEL_35;
LABEL_50:
    if ( v20 )
    {
      v56 = 0;
      qfree(v20);
      __src = nullptr;
      v57 = 0;
    }
  }
LABEL_52:
  v25 = qtime64();
  format_timestamp(v66, 0x19u, v25, 0);
  sub_100060EB4("%s Listening on %s:%u%s...\n", v26, v27, v28, v29, v30, v31, v32, (char)v66);
  while ( *v3 )
  {
    sub_10005E2CC(*(unsigned __int8 *)(a1 + 106));
    v51 = v33;
    if ( (unsigned int)sub_10005E32C(v33)
      && (v34 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v51)) != nullptr )
    {
      sub_10005D3F8(a1, v34);
    }
    else
    {
      sub_10005E374(&v51);
      if ( !*v3 )
        break;
      sub_100060EB4("Rejected client\n", v35, v36, v37, v38, v39, v40, v41, v50);
    }
  }
  if ( v52 )
  {
    v53 = 0;
    qfree(v52);
  }
  if ( __src )
  {
    v56 = 0;
    qfree(__src);
  }
  if ( __ptr[1] )
  {
    *(_QWORD *)&v65 = 0;
    qfree(__ptr[1]);
    __ptr[1] = nullptr;
    *((_QWORD *)&v65 + 1) = 0;
  }
  if ( __dst[0] )
  {
    __dst[1] = nullptr;
    qfree(__dst[0]);
    __dst[0] = nullptr;
    __ptr[0] = nullptr;
  }
  if ( v59 )
  {
    v60 = 0;
    qfree(v59);
  }
}
// 10005DBC4: conditional instruction was optimized away because %var_4E8.8==0
// 10005D8CC: variable 'v2' is possibly undefined
// 10005DC3C: variable 'v26' is possibly undefined
// 10005DC3C: variable 'v27' is possibly undefined
// 10005DC3C: variable 'v28' is possibly undefined
// 10005DC3C: variable 'v29' is possibly undefined
// 10005DC3C: variable 'v30' is possibly undefined
// 10005DC3C: variable 'v31' is possibly undefined
// 10005DC3C: variable 'v32' is possibly undefined
// 10005DC6C: variable 'v33' is possibly undefined
// 10005DCB0: variable 'v35' is possibly undefined
// 10005DCB0: variable 'v36' is possibly undefined
// 10005DCB0: variable 'v37' is possibly undefined
// 10005DCB0: variable 'v38' is possibly undefined
// 10005DCB0: variable 'v39' is possibly undefined
// 10005DCB0: variable 'v40' is possibly undefined
// 10005DCB0: variable 'v41' is possibly undefined
// 10005DCB0: variable 'v50' is possibly undefined
// 10005DD88: variable 'v43' is possibly undefined
// 10005DD88: variable 'v44' is possibly undefined
// 10005DD88: variable 'v45' is possibly undefined
// 10005DD88: variable 'v46' is possibly undefined
// 10005DD88: variable 'v47' is possibly undefined
// 10005DD88: variable 'v48' is possibly undefined
// 10005DD88: variable 'v49' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
