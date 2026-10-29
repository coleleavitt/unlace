/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474D68
// Address: 0x0000000000474D68

//----- (0000000000474D68) ----------------------------------------------------
__int64 __fastcall sub_474D68(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x23
  signed __int64 v8; // x19
  __int64 v9; // x24
  unsigned __int64 v10; // x25
  __int64 v11; // x26
  _BYTE *v12; // x0
  signed __int64 v13; // x19
  signed __int64 v14; // x0

  v6 = a3;
  if ( a4 == -1 )
  {
    v13 = 0;
  }
  else
  {
    v7 = a3 >> 1;
    v8 = sub_4749C8(a1, a4, a3 >> 1);
    if ( v8 <= 0 )
      return -1;
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 )
      {
        v11 = v9 - 1;
        v10 = v9 + 1;
      }
      else
      {
        v9 = 1;
        v10 = 2;
        v11 = 0;
      }
      v12 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v10 )
      {
        v12 = sub_491288(a1, *(void **)a1, v10, 1u);
        *(_QWORD *)a1 = v12;
      }
      *(_QWORD *)(a1 + 8) = v10;
      v12[v11] = 58;
      *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
    }
    v6 -= v7;
    v13 = v8 + 1;
  }
  v14 = sub_4749C8(a1, a2, v6);
  if ( v14 > 0 )
    return v13 + v14;
  return -1;
}
