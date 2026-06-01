/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_847CC
// Address: 0x00000000000847CC

//----- (00000000000847CC) ----------------------------------------------------
__int64 __fastcall sub_847CC(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int v6; // w8
  _BOOL8 v7; // x8
  int v8; // w8
  _BOOL8 v9; // x8
  int v10; // w8
  _BOOL8 v11; // x8
  int v12; // w9
  _BOOL8 v13; // x8
  __int64 v14; // x8
  char v15[8]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v16; // [xsp+10h] [xbp-70h]
  char v17[8]; // [xsp+18h] [xbp-68h] BYREF
  __int64 v18; // [xsp+20h] [xbp-60h]
  char v19[8]; // [xsp+28h] [xbp-58h] BYREF
  __int64 v20; // [xsp+30h] [xbp-50h]
  __int64 v21; // [xsp+38h] [xbp-48h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_839CC(a1, a2, a3 & 1);
  while ( 1 )
  {
    v19[0] = 1;
    v20 = 0;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
    if ( v6 != 8509 )
      break;
    result = sub_839CC(a1, (__int64)v19, 1);
    v7 = *(_QWORD *)(a2 + 8) != v20;
LABEL_2:
    *(_QWORD *)(a2 + 8) = v7;
    *(_BYTE *)a2 = 0;
  }
  if ( v6 == 15677 )
  {
    result = sub_839CC(a1, (__int64)v19, 1);
    v7 = *(_QWORD *)(a2 + 8) == v20;
    goto LABEL_2;
  }
  if ( v6 == 38 )
  {
LABEL_8:
    v17[0] = 1;
    v18 = 0;
    result = sub_839CC(a1, (__int64)v17, 1);
    while ( 1 )
    {
      v19[0] = 1;
      v20 = 0;
      v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
      if ( v8 == 8509 )
      {
        result = sub_839CC(a1, (__int64)v19, 1);
        v9 = v18 != v20;
      }
      else
      {
        if ( v8 != 15677 )
        {
          *(_QWORD *)(a2 + 8) &= v18;
          v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
          if ( v6 != 38 )
            break;
          goto LABEL_8;
        }
        result = sub_839CC(a1, (__int64)v19, 1);
        v9 = v18 == v20;
      }
      v18 = v9;
      v17[0] = 0;
    }
  }
  if ( v6 != 94 )
    return result;
  do
  {
    v15[0] = 1;
    v16 = 0;
    result = sub_839CC(a1, (__int64)v15, 1);
    while ( 1 )
    {
      v19[0] = 1;
      v20 = 0;
      v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
      if ( v10 != 8509 )
        break;
      result = sub_839CC(a1, (__int64)v19, 1);
      v11 = v16 != v20;
LABEL_17:
      v16 = v11;
      v15[0] = 0;
    }
    if ( v10 == 15677 )
    {
      result = sub_839CC(a1, (__int64)v19, 1);
      v11 = v16 == v20;
      goto LABEL_17;
    }
    if ( v10 != 38 )
    {
      v14 = v16;
      goto LABEL_32;
    }
    while ( 2 )
    {
      v17[0] = 1;
      v18 = 0;
      result = sub_839CC(a1, (__int64)v17, 1);
      while ( 2 )
      {
        v19[0] = 1;
        v20 = 0;
        v12 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v12 == 8509 )
        {
          result = sub_839CC(a1, (__int64)v19, 1);
          v13 = v18 != v20;
          goto LABEL_24;
        }
        if ( v12 == 15677 )
        {
          result = sub_839CC(a1, (__int64)v19, 1);
          v13 = v18 == v20;
LABEL_24:
          v18 = v13;
          v17[0] = 0;
          continue;
        }
        break;
      }
      v14 = v18 & v16;
      v16 &= v18;
      if ( v12 == 38 )
        continue;
      break;
    }
LABEL_32:
    *(_QWORD *)(a2 + 8) ^= v14;
  }
  while ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 94 );
  return result;
}
