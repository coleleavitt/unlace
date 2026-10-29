/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4231A0
// Address: 0x00000000004231A0

//----- (00000000004231A0) ----------------------------------------------------
__int64 __fastcall sub_4231A0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x3
  char *v4; // x1
  char *v6; // x0
  __int64 v7; // x0
  __int64 v9; // [xsp+20h] [xbp-40h]
  __int64 v10; // [xsp+28h] [xbp-38h]
  __int64 v11; // [xsp+30h] [xbp-30h]
  __int64 v12; // [xsp+38h] [xbp-28h]
  __int64 v13; // [xsp+40h] [xbp-20h]
  __int64 v14; // [xsp+48h] [xbp-18h]
  __int64 v15; // [xsp+50h] [xbp-10h]
  __int64 v16; // [xsp+58h] [xbp-8h]

  v2 = a1 + 4;
  v3 = a1[5];
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  v13 = a2[4];
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7];
  v4 = (char *)a1[4];
  if ( (unsigned __int64)(v3 + 1) > a1[6] )
  {
    v4 = (char *)sub_491288((__int64)(a1 + 4), v4, v3 + 1, 0x40u);
    a1[4] = v4;
    v3 = v2[1];
  }
  v6 = &v4[64 * v3];
  *(_QWORD *)v6 = v9;
  *((_QWORD *)v6 + 1) = v10;
  *((_QWORD *)v6 + 2) = v11;
  *((_QWORD *)v6 + 3) = v12;
  *((_QWORD *)v6 + 4) = v13;
  *((_QWORD *)v6 + 5) = v14;
  *((_QWORD *)v6 + 6) = v15;
  *((_QWORD *)v6 + 7) = v16;
  v7 = v2[1] + 1LL;
  v2[1] = v7;
  return (unsigned int)(v7 - 1);
}
