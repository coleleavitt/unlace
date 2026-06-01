/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D913C
// Address: 0x00000000000D913C

//----- (00000000000D913C) ----------------------------------------------------
__int64 __fastcall sub_D913C(__int64 result, __int64 a2, __int64 a3, char *a4, unsigned int a5, char a6)
{
  __int64 v6; // x8
  __int64 v12; // x24
  char v13; // w26
  char v14; // w10
  __int64 v15; // x25
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x4
  unsigned __int64 v19; // x28
  __int64 *v20; // x25
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x0
  __int64 v24; // t1
  __int64 v25; // x4
  char *v26; // x9
  __int64 v27; // x9
  int v28; // w8
  unsigned int v29; // w8
  char v30; // [xsp+Ch] [xbp-54h]

  v6 = *(_QWORD *)(a2 + 16);
  v12 = result;
  if ( (a6 & 1) != 0 )
  {
    result = strcmp(*(const char **)(result + 8), *(const char **)(v6 + 8));
    if ( (_DWORD)result )
    {
LABEL_3:
      v13 = *(_BYTE *)(a2 + 76);
      v14 = *(_BYTE *)(a2 + 77);
      v15 = *(unsigned int *)(v12 + 20);
      *(_WORD *)(a2 + 76) = 0;
      v16 = *(_QWORD *)(v12 + 32);
      v30 = v14;
      v17 = v16 >> 8;
      if ( (v16 & 1) != 0 )
        v17 = *(_QWORD *)(*(_QWORD *)a4 + v17);
      if ( (v16 & 2) != 0 )
        v18 = a5;
      else
        v18 = 2;
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, char *, __int64, _QWORD))(**(_QWORD **)(v12 + 24)
                                                                                            + 40LL))(
                 *(_QWORD *)(v12 + 24),
                 a2,
                 a3,
                 &a4[v17],
                 v18,
                 a6 & 1);
      if ( (unsigned int)v15 >= 2 )
      {
        v19 = v12 + 16 * v15 + 24;
        v20 = (__int64 *)(v12 + 40);
        do
        {
          if ( *(_BYTE *)(a2 + 78) )
            break;
          if ( *(_BYTE *)(a2 + 76) )
          {
            if ( *(_DWORD *)(a2 + 48) == 1 || (*(_BYTE *)(v12 + 16) & 2) == 0 )
              break;
          }
          else if ( *(_BYTE *)(a2 + 77) && (*(_BYTE *)(v12 + 16) & 1) == 0 )
          {
            break;
          }
          *(_WORD *)(a2 + 76) = 0;
          v21 = v20[1];
          v22 = v21 >> 8;
          if ( (v21 & 1) != 0 )
            v22 = *(_QWORD *)(*(_QWORD *)a4 + v22);
          v24 = *v20;
          v20 += 2;
          v23 = v24;
          v25 = (v21 & 2) != 0 ? a5 : 2LL;
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v23 + 40LL))(
                     v23,
                     a2,
                     a3,
                     &a4[v22],
                     v25,
                     a6 & 1);
        }
        while ( (unsigned __int64)v20 < v19 );
      }
      *(_BYTE *)(a2 + 76) = v13;
      *(_BYTE *)(a2 + 77) = v30;
      return result;
    }
  }
  else if ( result != v6 )
  {
    goto LABEL_3;
  }
  v26 = *(char **)(a2 + 8);
  *(_BYTE *)(a2 + 77) = 1;
  if ( v26 != a4 )
    return result;
  v27 = *(_QWORD *)(a2 + 32);
  *(_BYTE *)(a2 + 76) = 1;
  if ( !v27 )
  {
    *(_QWORD *)(a2 + 32) = a3;
    *(_DWORD *)(a2 + 48) = a5;
    *(_DWORD *)(a2 + 60) = 1;
    if ( a5 != 1 )
      return result;
    goto LABEL_35;
  }
  if ( v27 != a3 )
  {
    v28 = *(_DWORD *)(a2 + 60);
    *(_BYTE *)(a2 + 78) = 1;
    *(_DWORD *)(a2 + 60) = v28 + 1;
    return result;
  }
  v29 = *(_DWORD *)(a2 + 48);
  if ( v29 == 2 )
  {
    v29 = a5;
    *(_DWORD *)(a2 + 48) = a5;
  }
  if ( v29 == 1 )
  {
LABEL_35:
    if ( *(_DWORD *)(a2 + 72) == 1 )
      *(_BYTE *)(a2 + 78) = 1;
  }
  return result;
}
