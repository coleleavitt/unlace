/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83768
// Address: 0x0000000000083768

//----- (0000000000083768) ----------------------------------------------------
__int64 __fastcall sub_83768(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  unsigned __int64 v6; // x8
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x11
  int v10; // w8
  unsigned __int8 v11[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v12; // [xsp+10h] [xbp-60h]
  unsigned __int8 v13[8]; // [xsp+18h] [xbp-58h] BYREF
  __int64 v14; // [xsp+20h] [xbp-50h]
  __int64 v15; // [xsp+28h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_834A4(a1, (unsigned __int8 *)a2, a3 & 1);
  while ( 1 )
  {
    while ( 1 )
    {
      v13[0] = 1;
      v14 = 0;
      LODWORD(v6) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
      if ( (_DWORD)v6 != 45 )
        break;
      result = sub_834A4(a1, v13, 1);
      *(_QWORD *)(a2 + 8) -= v14;
    }
    if ( (_DWORD)v6 != 43 )
      break;
    result = sub_834A4(a1, v13, 1);
    *(_QWORD *)(a2 + 8) += v14;
  }
  while ( 1 )
  {
    v11[0] = 1;
    v12 = 0;
    if ( (unsigned __int16)v6 != 15420 )
      break;
    result = sub_834A4(a1, v11, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v13[0] = 1;
        v14 = 0;
        v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v10 != 45 )
          break;
        result = sub_834A4(a1, v13, 1);
        v12 -= v14;
      }
      if ( v10 != 43 )
        break;
      result = sub_834A4(a1, v13, 1);
      v12 += v14;
    }
    v6 = *(_QWORD *)(a2 + 8) << v12;
LABEL_7:
    *(_QWORD *)(a2 + 8) = v6;
    LOWORD(v6) = *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL);
  }
  if ( (unsigned __int16)v6 == 15934 )
  {
    result = sub_834A4(a1, v11, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v13[0] = 1;
        v14 = 0;
        v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v7 != 45 )
          break;
        result = sub_834A4(a1, v13, 1);
        v12 -= v14;
      }
      if ( v7 != 43 )
        break;
      result = sub_834A4(a1, v13, 1);
      v12 += v14;
    }
    v8 = *(_QWORD *)(a2 + 8);
    v9 = v8 >> v12;
    v6 = (unsigned __int64)v8 >> v12;
    if ( !*(_BYTE *)a2 )
      v6 = v9;
    goto LABEL_7;
  }
  return result;
}
