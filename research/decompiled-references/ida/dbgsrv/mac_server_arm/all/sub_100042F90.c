/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100042F90
// Address: 0x0000000100042F90

//----- (0000000100042F90) ----------------------------------------------------
__int64 __fastcall sub_100042F90(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  __int64 v6; // x8
  __int64 j; // x24
  int v8; // w8
  __int64 i; // x24
  int v10; // w8
  __int64 v11; // x9
  __int64 v12; // x10
  unsigned __int64 v13; // x9
  char v14[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v15; // [xsp+10h] [xbp-50h]
  char v16[8]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v17; // [xsp+20h] [xbp-40h]

  result = sub_100042E3C(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v16[0] = 1;
      v17 = 0;
      LODWORD(v6) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
      if ( (_DWORD)v6 != 45 )
        break;
      result = sub_100042E3C(a1, (__int64)v16, 1);
      *(_QWORD *)(a2 + 8) -= v17;
    }
    if ( (_DWORD)v6 != 43 )
      break;
    result = sub_100042E3C(a1, (__int64)v16, 1);
    *(_QWORD *)(a2 + 8) += v17;
  }
  while ( 1 )
  {
    v14[0] = 1;
    v15 = 0;
    if ( (unsigned __int16)v6 != 15420 )
      break;
    result = sub_100042E3C(a1, (__int64)v14, 1);
    for ( i = v15; ; i += v17 )
    {
      while ( 1 )
      {
        v16[0] = 1;
        v17 = 0;
        v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
        if ( v10 != 45 )
          break;
        result = sub_100042E3C(a1, (__int64)v16, 1);
        i -= v17;
      }
      if ( v10 != 43 )
        break;
      result = sub_100042E3C(a1, (__int64)v16, 1);
    }
    v6 = *(_QWORD *)(a2 + 8) << i;
LABEL_8:
    *(_QWORD *)(a2 + 8) = v6;
    LOWORD(v6) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 24LL);
  }
  if ( (unsigned __int16)v6 == 15934 )
  {
    result = sub_100042E3C(a1, (__int64)v14, 1);
    for ( j = v15; ; j += v17 )
    {
      while ( 1 )
      {
        v16[0] = 1;
        v17 = 0;
        v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
        if ( v8 != 45 )
          break;
        result = sub_100042E3C(a1, (__int64)v16, 1);
        j -= v17;
      }
      if ( v8 != 43 )
        break;
      result = sub_100042E3C(a1, (__int64)v16, 1);
    }
    v11 = *(_QWORD *)(a2 + 8);
    v12 = v11 >> j;
    v13 = (unsigned __int64)v11 >> j;
    if ( *(_BYTE *)a2 )
      v6 = v13;
    else
      v6 = v12;
    goto LABEL_8;
  }
  return result;
}
