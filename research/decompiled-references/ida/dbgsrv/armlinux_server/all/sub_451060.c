/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451060
// Address: 0x0000000000451060

//----- (0000000000451060) ----------------------------------------------------
__int64 __fastcall sub_451060(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // x0
  int v5; // w20
  __int64 result; // x0
  __int64 v8; // x21
  unsigned __int64 v9; // x22
  __int64 v10; // x25
  _BYTE *v11; // x0

  *(_QWORD *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a2 + 16) <= 0x3FFu )
    *(_QWORD *)a2 = sub_491288(a2, *(void **)a2, 0x400u, 1u);
  v4 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) - 1LL);
  for ( *(_QWORD *)(a1 + 8) = v4; ; *(_QWORD *)(a1 + 8) = v4 )
  {
    v5 = *v4;
    result = *v4;
    if ( (v5 & 0x80) != 0 || (result = isalnum(result), !(_DWORD)result) )
    {
      if ( v5 != 95 && v5 != 36 )
        break;
    }
    v8 = *(_QWORD *)(a2 + 8);
    v9 = 2;
    v10 = 0;
    if ( v8 )
    {
      v10 = v8 - 1;
      v9 = v8 + 1;
    }
    else
    {
      v8 = 1;
    }
    v11 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) < v9 )
    {
      v11 = sub_491288(a2, *(void **)a2, v9, 1u);
      *(_QWORD *)a2 = v11;
    }
    *(_QWORD *)(a2 + 8) = v9;
    v11[v10] = v5;
    *(_BYTE *)(*(_QWORD *)a2 + v8) = 0;
    v4 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
  }
  return result;
}
