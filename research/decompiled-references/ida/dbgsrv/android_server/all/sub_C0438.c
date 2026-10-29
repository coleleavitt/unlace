/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0438
// Address: 0x00000000000C0438

//----- (00000000000C0438) ----------------------------------------------------
bool __fastcall sub_C0438(__int64 *a1, char *a2)
{
  __int64 v2; // x8
  _BOOL8 result; // x0
  int v6; // w8
  _DWORD *v7; // x21
  _DWORD *v8; // x11
  __int64 v9; // x8
  int v10; // w9
  __int64 *v11; // x10
  int v12; // w11
  bool v13; // cc
  __int64 v14; // x11
  __int64 v15; // x13
  __int64 v16; // x14
  int v17; // w15
  __int64 v18; // x15
  __int64 *v19; // x22
  int v20; // w8
  int v21; // w9
  __int64 v22; // x9
  __int64 v23; // x9
  bool v24; // cc
  int v25; // w9
  __int64 v26; // x8
  __int64 v27; // x9

  v2 = (a2 - (char *)a1) >> 3;
  result = 1;
  switch ( v2 )
  {
    case 0LL:
    case 1LL:
      return result;
    case 2LL:
      v6 = *((_DWORD *)a2 - 2);
      if ( v6 == *(_DWORD *)a1 )
      {
        if ( *((_DWORD *)a2 - 1) >= *((_DWORD *)a1 + 1) )
          return 1;
      }
      else if ( v6 >= *(_DWORD *)a1 )
      {
        return 1;
      }
      v22 = *a1;
      *a1 = *((_QWORD *)a2 - 1);
      *((_QWORD *)a2 - 1) = v22;
      return 1;
    case 3LL:
      sub_C0174((int *)a1, (int *)a1 + 2, (int *)a2 - 2);
      return 1;
    case 4LL:
      v19 = a1 + 2;
      sub_C0174((int *)a1, (int *)a1 + 2, (int *)a1 + 4);
      v20 = *((_DWORD *)a2 - 2);
      v21 = *((_DWORD *)a1 + 4);
      if ( v20 == v21 )
      {
        if ( *((_DWORD *)a2 - 1) >= *((_DWORD *)a1 + 5) )
          return 1;
      }
      else if ( v20 >= v21 )
      {
        return 1;
      }
      v23 = *v19;
      *v19 = *((_QWORD *)a2 - 1);
      *((_QWORD *)a2 - 1) = v23;
      LODWORD(v23) = *((_DWORD *)a1 + 2);
      v24 = *(_DWORD *)v19 < (int)v23;
      if ( *(_DWORD *)v19 == (_DWORD)v23 )
        v24 = *((_DWORD *)a1 + 5) < *((_DWORD *)a1 + 3);
      if ( !v24 )
        return 1;
      v25 = *(_DWORD *)a1;
      v26 = a1[2];
      *(int8x16_t *)(a1 + 1) = vextq_s8(*(int8x16_t *)(a1 + 1), *(int8x16_t *)(a1 + 1), 8u);
      if ( v25 == (_DWORD)v26 )
      {
        if ( *((_DWORD *)a1 + 1) <= SHIDWORD(v26) )
          return 1;
      }
      else if ( v25 <= (int)v26 )
      {
        return 1;
      }
      v27 = *a1;
      *a1 = v26;
      a1[1] = v27;
      return 1;
    case 5LL:
      sub_C0288((int *)a1, (int *)a1 + 2, (int *)a1 + 4, (int *)a1 + 6, (int *)a2 - 2);
      return 1;
    default:
      v7 = a1 + 2;
      sub_C0174((int *)a1, (int *)a1 + 2, (int *)a1 + 4);
      v8 = a1 + 3;
      if ( a1 + 3 == (__int64 *)a2 )
        return 1;
      v9 = 0;
      v10 = 0;
      break;
  }
  while ( 1 )
  {
    v11 = (__int64 *)v7;
    v7 = v8;
    v12 = *v8;
    v13 = v12 < *(_DWORD *)v11;
    if ( v12 == *(_DWORD *)v11 )
      v13 = v7[1] < *((_DWORD *)v11 + 1);
    if ( v13 )
    {
      v14 = *(_QWORD *)v7;
      *(_QWORD *)v7 = *v11;
      if ( v11 != a1 )
      {
        v15 = v9;
        do
        {
          v16 = (__int64)a1 + v15;
          v17 = *(_DWORD *)((char *)a1 + v15 + 8);
          if ( v17 == (_DWORD)v14 )
          {
            if ( *(_DWORD *)(v16 + 12) <= SHIDWORD(v14) )
            {
              v11 = (__int64 *)((char *)a1 + v15 + 16);
              goto LABEL_19;
            }
          }
          else if ( v17 <= (int)v14 )
          {
            goto LABEL_19;
          }
          v18 = *(__int64 *)((char *)a1 + v15 + 8);
          v15 -= 8;
          --v11;
          *(_QWORD *)(v16 + 16) = v18;
        }
        while ( v15 != -16 );
        v11 = a1;
      }
LABEL_19:
      ++v10;
      *v11 = v14;
      if ( v10 == 8 )
        return v7 + 2 == (_DWORD *)a2;
    }
    v8 = v7 + 2;
    v9 += 8;
    if ( v7 + 2 == (_DWORD *)a2 )
      return 1;
  }
}
