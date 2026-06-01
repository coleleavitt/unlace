/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000494D0
// Address: 0x00000001000494D0

//----- (00000001000494D0) ----------------------------------------------------
__int64 __fastcall sub_1000494D0(__int64 a1)
{
  _WORD *v2; // x20
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v8; // x9
  unsigned __int64 v9; // x8
  __int64 v10; // x22
  char *v11; // x24
  __int64 v12; // x21
  char *v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  const char *v19; // x8
  size_t v20; // x20
  __int64 v21; // x21
  void *v22; // x0
  _QWORD *v23; // x1
  unsigned __int64 v24; // x8
  __int64 v25; // x9
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  bool v31; // cf
  __int64 v32; // x9
  __int64 v33; // x21
  char *v34; // x8
  _QWORD *v35; // x24
  const char *v36; // x2
  __int64 v37; // x22
  bool v38; // w28
  void *v39; // x0
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  __int64 v46; // x24
  const char *v47; // x2
  __int64 v48; // [xsp+10h] [xbp-490h]
  __int64 v49; // [xsp+10h] [xbp-490h]
  void *__ptr; // [xsp+28h] [xbp-478h] BYREF
  __int64 v51; // [xsp+30h] [xbp-470h]
  unsigned __int64 v52; // [xsp+38h] [xbp-468h]
  void *v53; // [xsp+40h] [xbp-460h] BYREF
  __int64 v54; // [xsp+48h] [xbp-458h]
  __int64 v55; // [xsp+50h] [xbp-450h]

  if ( !*(_QWORD *)(a1 + 1040) || *(_QWORD *)(a1 + 1112) < 4u )
  {
    v12 = 0;
LABEL_11:
    if ( *(_QWORD *)(a1 + 1088) >= 2u )
    {
      v13 = *(_QWORD *)(a1 + 1064) ? *(char **)(a1 + 1056) : &byte_100075A30;
      if ( qdirname((char *)&v53, 0x400u, v13) )
      {
        v19 = *(_QWORD *)(a1 + 1088) ? *(const char **)(a1 + 1080) : &byte_100075A30;
        qmakepath((char *)(a1 + 8), 1024, (const char *)&v53, v14, v15, v16, v17, v18, v19);
        v48 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
        sub_100052684();
        v12 = v48;
        if ( !(_DWORD)v48 )
        {
          qmakepath((char *)(a1 + 8), 1024, (const char *)&v53, v26, v27, v28, v29, v30, ".debug");
          v49 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
          sub_100052684();
          v12 = v49;
          if ( !(_DWORD)v49 )
          {
            if ( 24LL * *(_QWORD *)(a1 + 1040) )
            {
              v46 = *(_QWORD *)(a1 + 1032);
              do
              {
                if ( *(_QWORD *)(v46 + 8) )
                  v47 = *(const char **)v46;
                else
                  v47 = &byte_100075A30;
                qmakepath((char *)(a1 + 8), 1024, v47, v40, v41, v42, v43, v44, (const char *)&v53);
                v12 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, 1);
                sub_100052684();
                if ( (_DWORD)v12 )
                  break;
                v46 += 24;
              }
              while ( v46 != *(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040) );
            }
            else
            {
              return 0;
            }
          }
        }
      }
    }
    return v12;
  }
  v2 = *(_WORD **)(a1 + 1104);
  v54 = 0;
  v55 = 0;
  v53 = nullptr;
  v53 = qvector_reserve(&v53, nullptr, 3u, 1u);
  v54 = 3;
  *(_WORD *)v53 = *v2;
  *((_BYTE *)v53 + 2) = 0;
  v8 = *(_QWORD *)(a1 + 1112);
  v9 = v8 - 1;
  if ( !v8 )
    v9 = 0;
  if ( v9 >= 2 )
    v10 = 2;
  else
    v10 = v9;
  if ( v8 )
    v11 = *(char **)(a1 + 1104);
  else
    v11 = &byte_100075A30;
  __ptr = nullptr;
  v51 = 0;
  v52 = 0;
  if ( v9 < 3 )
  {
    v23 = nullptr;
    v24 = 0;
    v25 = 0;
  }
  else
  {
    v20 = v9 - v10;
    v21 = v9 - v10 + 1;
    if ( v9 - v10 == -1 )
    {
      v22 = nullptr;
    }
    else
    {
      v22 = qvector_reserve(&__ptr, nullptr, v9 - v10 + 1, 1u);
      __ptr = v22;
    }
    v51 = v21;
    memmove(v22, &v11[v10], v20);
    *((_BYTE *)__ptr + v20) = 0;
    v25 = v51;
    v24 = v52;
    v23 = __ptr;
  }
  v31 = v25 != 0;
  v32 = v25 - 1;
  if ( v31 )
    v33 = v32;
  else
    v33 = 0;
  if ( v24 < v33 + 7 )
  {
    v23 = qvector_reserve(&__ptr, v23, v33 + 7, 1u);
    __ptr = v23;
  }
  v51 = v33 + 7;
  *((_BYTE *)v23 + v33 + 6) = 0;
  v34 = (char *)__ptr + v33;
  *((_WORD *)v34 + 2) = 26485;
  *(_DWORD *)v34 = 1650811950;
  if ( 24LL * *(_QWORD *)(a1 + 1040) )
  {
    v35 = *(_QWORD **)(a1 + 1032);
    while ( 1 )
    {
      v36 = v35[1] ? (const char *)*v35 : &byte_100075A30;
      qmakepath((char *)(a1 + 8), 1024, v36, v3, v4, v5, v6, v7, ".build-id");
      v37 = (**(__int64 (__fastcall ***)(__int64, _QWORD))a1)(a1, 0);
      sub_100052684();
      v38 = (_DWORD)v37 == 0;
      if ( (_DWORD)v37 )
        break;
      v35 += 3;
      if ( v35 == (_QWORD *)(*(_QWORD *)(a1 + 1032) + 24LL * *(_QWORD *)(a1 + 1040)) )
      {
        v12 = 0;
        v39 = __ptr;
        if ( __ptr )
          goto LABEL_45;
        goto LABEL_46;
      }
    }
    v12 = v37;
    v39 = __ptr;
    if ( !__ptr )
      goto LABEL_46;
    goto LABEL_45;
  }
  v12 = 0;
  v38 = 1;
  v39 = __ptr;
  if ( __ptr )
  {
LABEL_45:
    v51 = 0;
    qfree(v39);
  }
LABEL_46:
  if ( v53 )
  {
    v54 = 0;
    qfree(v53);
  }
  if ( v38 )
    goto LABEL_11;
  return v12;
}
// 100049618: variable 'v14' is possibly undefined
// 100049618: variable 'v15' is possibly undefined
// 100049618: variable 'v16' is possibly undefined
// 100049618: variable 'v17' is possibly undefined
// 100049618: variable 'v18' is possibly undefined
// 100049768: variable 'v3' is possibly undefined
// 100049768: variable 'v4' is possibly undefined
// 100049768: variable 'v5' is possibly undefined
// 100049768: variable 'v6' is possibly undefined
// 100049768: variable 'v7' is possibly undefined
// 100049830: variable 'v26' is possibly undefined
// 100049830: variable 'v27' is possibly undefined
// 100049830: variable 'v28' is possibly undefined
// 100049830: variable 'v29' is possibly undefined
// 100049830: variable 'v30' is possibly undefined
// 100049910: variable 'v40' is possibly undefined
// 100049910: variable 'v41' is possibly undefined
// 100049910: variable 'v42' is possibly undefined
// 100049910: variable 'v43' is possibly undefined
// 100049910: variable 'v44' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
