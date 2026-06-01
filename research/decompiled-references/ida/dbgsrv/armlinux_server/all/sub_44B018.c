/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B018
// Address: 0x000000000044B018

//----- (000000000044B018) ----------------------------------------------------
__int64 __fastcall sub_44B018(__int64 a1)
{
  pthread_mutex_t *v2; // x21
  int v3; // w1
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  unsigned __int64 v7; // x3
  __int64 v8; // x1
  unsigned __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 result; // x0
  __int64 v16; // x1
  int v17; // w24
  __int64 **v18; // x23
  unsigned __int64 v19; // x21
  __int64 *v20; // x0
  unsigned __int64 v21; // x1
  __int64 v22; // x25
  __int64 *v23; // x0
  __int64 v24; // x26
  __int64 v25; // x25
  char *v26; // x4
  __int64 *v27; // x0
  char *v28; // x0
  unsigned __int64 v29; // x25
  __int64 v30; // x21
  __int64 *v31; // x2
  __int64 v32[2]; // [xsp+68h] [xbp-68h] BYREF
  __int64 v33; // [xsp+78h] [xbp-58h]
  __int64 v34; // [xsp+80h] [xbp-50h]
  __int64 v35[4]; // [xsp+88h] [xbp-48h] BYREF
  __int64 v36[4]; // [xsp+A8h] [xbp-28h] BYREF

  v2 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 || (v3 = *(_DWORD *)(v4 + 136), v3 <= 0) )
  {
    v4 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(487);
    __break(0x3E8u);
  }
  *(_DWORD *)(v4 + 136) = v3 - 1;
  sub_494760(v2);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 == *(_DWORD *)(a1 + 96) + 1 )
    goto LABEL_6;
  v16 = *(_QWORD *)(a1 + 24);
  LOBYTE(v32[0]) = 2;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  if ( (unsigned int)sub_449520(v32, (__int64 *)(v16 + 32 * v5 - 32)) )
    goto LABEL_38;
  v17 = *(_DWORD *)(a1 + 96);
  if ( LOBYTE(v32[0]) != 10 || (int)v33 < v17 )
    goto LABEL_21;
  if ( !sub_448A08(v32, 2) )
  {
LABEL_38:
    sub_448310(v32);
    return 0;
  }
  v17 = *(_DWORD *)(a1 + 96);
LABEL_21:
  v18 = (__int64 **)(a1 + 24);
  v19 = *(_QWORD *)(a1 + 32);
  if ( v17 != v19 )
  {
    memset(&v35[1], 0, 24);
    LOBYTE(v35[0]) = 2;
    if ( v17 >= v19 )
    {
      if ( v17 > v19 )
      {
        v20 = *(__int64 **)(a1 + 24);
        v21 = *(_QWORD *)(a1 + 40);
        if ( v20 <= v35 && v35 < &v20[4 * v21] )
        {
          memset(&v36[1], 0, 24);
          LOBYTE(v36[0]) = 2;
          sub_4488B8(v36, v35);
          if ( (unsigned __int64)v17 > *(_QWORD *)(a1 + 40) )
            *(_QWORD *)(a1 + 24) = sub_491288(a1 + 24, *(void **)(a1 + 24), v17, 0x20u);
          v29 = *(_QWORD *)(a1 + 32);
          if ( v17 > v29 )
          {
            v30 = 4 * v29;
            do
            {
              v31 = &(*v18)[v30];
              *(_BYTE *)v31 = 2;
              v31[1] = 0;
              v31[2] = 0;
              v31[3] = 0;
              sub_4488B8(v31, v36);
              ++v29;
              v30 += 4;
            }
            while ( v17 != v29 );
          }
          *(_QWORD *)(a1 + 32) = v17;
          sub_448310(v36);
        }
        else if ( v17 <= v21
               || (v20 = (__int64 *)sub_491288(a1 + 24, *(void **)(a1 + 24), v17, 0x20u),
                   *(_QWORD *)(a1 + 24) = v20,
                   v19 = *(_QWORD *)(a1 + 32),
                   v17 > v19) )
        {
          v22 = 4 * v19;
          while ( 1 )
          {
            LOBYTE(v20[v22]) = 2;
            v23 = &v20[v22];
            v23[1] = 0;
            v23[2] = 0;
            v23[3] = 0;
            sub_4488B8(v23, v35);
            ++v19;
            v22 += 4;
            if ( v17 <= v19 )
              break;
            v20 = *v18;
          }
          *(_QWORD *)(a1 + 32) = v17;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v17;
        }
      }
    }
    else
    {
      v24 = 32LL * v17;
      v25 = v17;
      do
      {
        ++v25;
        sub_448310((__int64 *)(*(_QWORD *)(a1 + 24) + v24));
        v24 += 32;
      }
      while ( v19 != v25 );
      *(_QWORD *)(a1 + 32) = v17;
    }
    sub_448310(v35);
    v19 = *(_QWORD *)(a1 + 32);
  }
  v26 = *(char **)(a1 + 24);
  if ( v19 + 1 > *(_QWORD *)(a1 + 40) )
  {
    v28 = (char *)sub_491288(a1 + 24, *(void **)(a1 + 24), v19 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v28;
    v26 = v28;
    v19 = *(_QWORD *)(a1 + 32);
  }
  v27 = (__int64 *)&v26[32 * v19];
  *(_BYTE *)v27 = 2;
  v27[1] = 0;
  v27[2] = 0;
  v27[3] = 0;
  ++*(_QWORD *)(a1 + 32);
  sub_449520(v27, v32);
  sub_448310(v32);
LABEL_6:
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_QWORD *)(a1 + 72) + 4 * v6;
    if ( *(int *)(v8 - 4) >= v7 )
    {
      do
      {
        *(_QWORD *)(a1 + 80) = --v6;
        if ( !v6 )
          break;
        v9 = *(int *)(v8 - 8);
        v8 -= 4;
      }
      while ( v9 >= v7 );
    }
  }
  v11 = *(_QWORD *)(a1 + 48);
  v10 = *(_QWORD *)(a1 + 56);
  v12 = 24 * v10 - 24;
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(v11 + v12 + 16);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v11 + v12 + 12);
  *(_QWORD *)(a1 + 112) = *(int *)(v11 + v12 + 8);
  v13 = *(_QWORD *)(v11 + v12);
  *(_QWORD *)(a1 + 104) = v13;
  if ( v10 )
    *(_QWORD *)(a1 + 56) = v10 - 1;
  v14 = v13 + 32;
  if ( !v13 )
    v14 = 0;
  result = 1;
  *(_QWORD *)(a1 + 128) = v14;
  return result;
}
// 44B018: could not find valid save-restore pair for x22
// 44B018: could not find valid save-restore pair for x27
// 44B088: variable 'v3' is possibly undefined
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
