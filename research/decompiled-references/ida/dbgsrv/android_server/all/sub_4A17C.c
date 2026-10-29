/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A17C
// Address: 0x000000000004A17C

//----- (000000000004A17C) ----------------------------------------------------
__int64 __fastcall sub_4A17C(int *a1, __int64 a2, __int64 a3)
{
  int v3; // w9
  unsigned int v5; // w8
  _BYTE *v7; // x0
  int v8; // w9
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x9
  const void *v12; // x1
  __int64 v13; // x10

  v3 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, __int64, _QWORD))a1 + 3))(a2, a3, *((_QWORD *)a1 + 4));
    return 1;
  }
  v7 = (_BYTE *)(a2 + *((_QWORD *)a1 + 2));
  if ( (unsigned int)(v3 - 1) < 2 )
  {
    v8 = *(_DWORD *)a3;
    if ( *(int *)a3 < -1 )
      LODWORD(v9) = 8 * (v8 == -2);
    else
      v9 = *(_QWORD *)(a3 + 16);
    if ( (int)v9 != *((_QWORD *)a1 + 3) )
      return 0;
    if ( v8 < -1 )
      v12 = (const void *)(a3 + 8);
    else
      v12 = *(const void **)(a3 + 8);
    memcpy(v7, v12, (int)v9);
    return 1;
  }
  if ( v3 )
    return 1;
  v10 = *((_QWORD *)a1 + 4);
  v11 = *(_QWORD *)(a3 + 8);
  switch ( v10 )
  {
    case 4LL:
      v11 = (unsigned int)*(_QWORD *)(a3 + 8);
      break;
    case 2LL:
      v11 = (unsigned __int16)*(_QWORD *)(a3 + 8);
      break;
    case 1LL:
      v11 = (unsigned __int8)*(_QWORD *)(a3 + 8);
      break;
  }
  v13 = *((_QWORD *)a1 + 3) - 1LL;
  v5 = 1;
  switch ( v13 )
  {
    case 0LL:
      *v7 = v11;
      return 1;
    case 1LL:
      *(_WORD *)v7 = v11;
      return 1;
    case 3LL:
      *(_DWORD *)v7 = v11;
      return 1;
    case 7LL:
      *(_QWORD *)v7 = v11;
      return 1;
    default:
      return v5;
  }
  return v5;
}
