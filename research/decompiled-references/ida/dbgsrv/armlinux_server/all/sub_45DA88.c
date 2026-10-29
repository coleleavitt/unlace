/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DA88
// Address: 0x000000000045DA88

//----- (000000000045DA88) ----------------------------------------------------
_QWORD *__fastcall sub_45DA88(__int64 a1, int a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // x2
  _QWORD *v8; // x0
  _QWORD *v9; // x20
  _QWORD *v10; // x22
  unsigned int v11; // w20
  char *v12; // x22
  char *v13; // x0
  int v15; // w20
  __int64 v16; // [xsp+48h] [xbp-48h] BYREF
  __int64 v17; // [xsp+50h] [xbp-40h]
  __int64 v18; // [xsp+58h] [xbp-38h]
  __int64 v19; // [xsp+60h] [xbp-30h]
  char v20[32]; // [xsp+68h] [xbp-28h] BYREF

  v5 = a1 + 392;
  v8 = *(_QWORD **)(a1 + 400);
  if ( !v8 )
    return nullptr;
  v9 = (_QWORD *)v5;
  do
  {
    while ( v8[4] >= a3 )
    {
      v9 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v8 )
        goto LABEL_5;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v8 );
LABEL_5:
  if ( (_QWORD *)v5 == v9 || v9[4] > a3 )
    return nullptr;
  v17 = 0;
  v18 = 0;
  LOBYTE(v16) = 2;
  v19 = 0;
  sub_49B748(v20, 0x20u, "__lc%a", a4);
  sub_461B48();
  sub_461B58(a1, a2);
  v10 = v9 + 5;
  if ( !*((_BYTE *)v9 + 464) )
  {
    if ( !(unsigned __int8)sub_440448(v20, (const char *)v9[6], 0, 0, 1) )
    {
      sub_461B50();
      goto LABEL_10;
    }
    *((_BYTE *)v9 + 464) = 1;
  }
  v15 = (unsigned __int8)sub_450368(&v16, v20, nullptr, 0, 0, 0);
  sub_461B50();
  if ( v15 )
  {
    sub_4498D8(&v16);
    if ( v17 )
    {
      v10 = nullptr;
      sub_448310(&v16);
      return v10;
    }
    goto LABEL_11;
  }
LABEL_10:
  v11 = sub_4869A0();
  v12 = (char *)sub_486C10(0);
  v13 = (char *)sub_486C60(0);
  sub_4654E8(*(_QWORD *)(a1 + 480), a3, v11, v12, v13);
  v10 = nullptr;
LABEL_11:
  sub_448310(&v16);
  return v10;
}
