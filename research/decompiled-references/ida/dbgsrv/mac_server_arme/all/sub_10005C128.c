/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C128
// Address: 0x000000010005C128

//----- (000000010005C128) ----------------------------------------------------
__int64 __fastcall sub_10005C128(_QWORD *a1, _DWORD *a2, __int64 a3, int a4, int a5)
{
  void *v10; // x0
  __int64 v11; // x24
  __int64 v12; // x25
  __int64 v13; // x20
  __int64 v14; // x26
  void *v15; // x0
  __int64 v16; // x28
  int v17; // w25
  char v18; // w8
  _DWORD *v19; // x8
  __int64 v20; // x9
  _DWORD *v21; // x24
  __int64 v22; // x13
  void *v23; // x0
  int v24; // w24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  char v31; // w8
  __int64 i; // x24
  int v33; // w23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  int v40; // w8
  __int64 v42; // [xsp+28h] [xbp-68h] BYREF
  unsigned int v43; // [xsp+34h] [xbp-5Ch] BYREF

  if ( !a1[20] )
  {
    v10 = (void *)a1[57];
    if ( v10 )
    {
      v11 = a1[58];
      if ( v11 )
      {
        v12 = 0;
        do
        {
          v13 = a1[57];
          v14 = v13 + v12;
          v15 = *(void **)(v13 + v12 + 8);
          if ( v15 )
          {
            *(_QWORD *)(v14 + 16) = 0;
            qfree(v15);
            *(_QWORD *)(v14 + 8) = 0;
            *(_QWORD *)(v13 + v12 + 24) = 0;
          }
          v12 += 56;
          --v11;
        }
        while ( v11 );
        v10 = (void *)a1[57];
      }
      a1[58] = 0;
      qfree(v10);
      a1[57] = 0;
      a1[59] = 0;
    }
  }
  v16 = a3 + 56LL * a4;
  v17 = 0;
  if ( a4 )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 40) )
      {
        if ( *(_DWORD *)(a3 + 32) == 4 )
        {
          v43 = a1[52];
          v42 = *(_QWORD *)a3;
          (*(void (__fastcall **)(_QWORD *, __int64 *, unsigned int *))(*a1 + 544LL))(a1, &v42, &v43);
        }
        else
        {
          v43 = *(_DWORD *)(a3 + 36);
          v42 = *(_QWORD *)a3;
        }
        v19 = (_DWORD *)a1[57];
        v20 = a1[58];
        v21 = v19;
        if ( 56 * v20 )
        {
          v22 = 56 * v20;
          v21 = (_DWORD *)a1[57];
          while ( *(_QWORD *)a3 != *(_QWORD *)v21 || *(_DWORD *)(a3 + 32) != v21[8] )
          {
            v21 += 14;
            v22 -= 56;
            if ( !v22 )
              goto LABEL_29;
          }
        }
        if ( v21 != &v19[14 * v20] && v21[12] == *(_DWORD *)(a3 + 48) )
        {
          v23 = *((void **)v21 + 1);
          if ( v23 )
          {
            *((_QWORD *)v21 + 2) = 0;
            qfree(v23);
            *((_QWORD *)v21 + 1) = 0;
            *((_QWORD *)v21 + 3) = 0;
            v19 = (_DWORD *)a1[57];
            v20 = a1[58];
          }
          memmove(v21, v21 + 14, (char *)&v19[14 * v20] - (char *)v21 - 56);
          --a1[58];
        }
LABEL_29:
        v24 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, _QWORD))(*a1 + 312LL))(
                a1,
                a3 + 8,
                *(unsigned int *)(a3 + 32),
                v42,
                v43);
        sub_1000593FC(
          (__int64)a1,
          "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n",
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          *(_DWORD *)(a3 + 32));
        switch ( v24 )
        {
          case -2:
            v18 = 7;
            break;
          case 2:
            v31 = 10;
            goto LABEL_34;
          case 1:
            v31 = 0;
LABEL_34:
            *(_BYTE *)(a3 + 40) = v31;
            ++v17;
            goto LABEL_14;
          default:
            v18 = 8;
            break;
        }
        *(_BYTE *)(a3 + 40) = v18;
      }
LABEL_14:
      a3 += 56;
      if ( a3 == v16 )
      {
        a3 = v16;
        break;
      }
    }
  }
  for ( i = v16 + 56LL * a5; a3 != i; a3 += 56 )
  {
    *(_BYTE *)(a3 + 40) = 0;
    v33 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
    sub_1000593FC(
      (__int64)a1,
      "dbg_del_bpt(type=%d, ea=%a) => %d\n",
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      *(_DWORD *)(a3 + 32));
    if ( v33 < 1 )
    {
      *(_BYTE *)(a3 + 40) = 8;
    }
    else
    {
      ++v17;
      v40 = *(_DWORD *)(a3 + 32);
      if ( v40 == 8 || v40 == 4 )
        sub_10005C4F0(a1 + 57, (__int64 *)a3);
    }
  }
  if ( a2 )
    *a2 = v17;
  return 1;
}
// 10005C388: variable 'v25' is possibly undefined
// 10005C388: variable 'v26' is possibly undefined
// 10005C388: variable 'v27' is possibly undefined
// 10005C388: variable 'v28' is possibly undefined
// 10005C388: variable 'v29' is possibly undefined
// 10005C388: variable 'v30' is possibly undefined
// 10005C460: variable 'v34' is possibly undefined
// 10005C460: variable 'v35' is possibly undefined
// 10005C460: variable 'v36' is possibly undefined
// 10005C460: variable 'v37' is possibly undefined
// 10005C460: variable 'v38' is possibly undefined
// 10005C460: variable 'v39' is possibly undefined
