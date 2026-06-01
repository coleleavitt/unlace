/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3CE0
// Address: 0x00000000000D3CE0

//----- (00000000000D3CE0) ----------------------------------------------------
__int64 __fastcall sub_D3CE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // x24
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x21
  unsigned int v8; // w25
  unsigned __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  _QWORD *v15; // x22
  unsigned int v16; // w21
  unsigned __int64 v17; // x8
  __int64 v18; // x0
  unsigned __int64 v19; // x23
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x8
  __int64 v23; // x22
  __int64 v24; // x0
  _QWORD *v25; // x1
  __int64 v26; // x0
  int v27; // w9
  __int64 v28; // x10
  __int64 v29; // x11
  __int64 v30; // x12
  int v31; // w13

  if ( !a1 )
    return (unsigned int)-102;
  v3 = *(__int64 **)(a1 + 320);
  if ( !v3 )
    return (unsigned int)-102;
  if ( !*v3 )
    return (unsigned int)-100;
  if ( !a3 )
    return 0;
  v4 = v3[24];
  v5 = a3;
  v3[4] = a2;
  *((_DWORD *)v3 + 10) = a3;
  if ( v4 < a3 && !*((_DWORD *)v3 + 78) )
  {
    a3 = v4;
    *((_DWORD *)v3 + 10) = v4;
  }
  v6 = v3[23];
  v7 = *((unsigned int *)v3 + 4);
  if ( v6 + v7 < v5 && *((_DWORD *)v3 + 78) )
  {
    a3 = v7 + v6;
    *((_DWORD *)v3 + 10) = v7 + v6;
  }
  if ( !a3 )
    return 0;
  v8 = 0;
  if ( (_DWORD)v7 )
    goto LABEL_33;
LABEL_13:
  v9 = v3[23];
  if ( v9 )
  {
    if ( v9 >= 0x4000 )
      v7 = 0x4000;
    else
      v7 = v3[23];
    if ( (_DWORD)v7 )
    {
      if ( !sub_D4FC4((__int64)(v3 + 25))
        && ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))v3[26])(v3[32], v3[36], *v3, v7) == v7 )
      {
        v10 = v3[15];
        v11 = v3[23];
        v12 = *v3;
        *((_DWORD *)v3 + 4) = v7;
        v3[1] = v12;
        v3[15] = v10 + v7;
        v3[23] = v11 - v7;
        v13 = v3[37];
        if ( !v13 )
          goto LABEL_34;
        goto LABEL_21;
      }
      return (unsigned int)-1;
    }
    else
    {
      return 0;
    }
  }
  LODWORD(v7) = 0;
  v13 = v3[37];
  if ( !v13 )
  {
LABEL_34:
    while ( (_DWORD)v7 || v3[23] )
    {
      if ( *((_DWORD *)v3 + 10) < (unsigned int)v7 )
        LODWORD(v7) = *((_DWORD *)v3 + 10);
      if ( (_DWORD)v7 )
      {
        v22 = 0;
        v23 = (unsigned int)v7;
        do
        {
          *(_BYTE *)(v3[4] + v22) = *(_BYTE *)(v3[1] + v22);
          ++v22;
        }
        while ( v22 < (unsigned int)v7 );
      }
      else
      {
        v23 = 0;
      }
      v24 = v3[21];
      v25 = (_QWORD *)v3[4];
      v3[20] += v23;
      v26 = sub_C8324(v24, v25, (unsigned int)v7);
      v27 = *((_DWORD *)v3 + 4);
      v28 = v3[4];
      v29 = v3[1];
      v30 = v3[6];
      v31 = *((_DWORD *)v3 + 10);
      v3[24] -= v23;
      *((_DWORD *)v3 + 4) = v27 - v7;
      v8 += v7;
      v3[21] = v26;
      *((_DWORD *)v3 + 10) = v31 - v7;
      v3[4] = v28 + v23;
      v3[1] = v29 + v23;
      v3[6] = v30 + v23;
LABEL_44:
      if ( !*((_DWORD *)v3 + 10) )
        break;
      LODWORD(v7) = *((_DWORD *)v3 + 4);
      if ( !(_DWORD)v7 )
        goto LABEL_13;
LABEL_33:
      v13 = v3[37];
      if ( v13 )
        goto LABEL_21;
    }
    return v8;
  }
LABEL_21:
  if ( *((_DWORD *)v3 + 78) )
    goto LABEL_34;
  if ( v13 == 12 )
    goto LABEL_44;
  v14 = v3[6];
  v15 = (_QWORD *)v3[4];
  v16 = sub_CCEAC((__int64)(v3 + 1), 2);
  if ( (v16 & 0x80000000) == 0 && v3[7] )
    v16 = -3;
  v17 = v3[6];
  v18 = v3[21];
  if ( v17 < v14 )
    v17 += 0x100000000LL;
  v19 = v17 - v14;
  v3[20] += v19;
  v20 = sub_C8324(v18, v15, (unsigned int)v19);
  v21 = v3[24];
  v8 += v19;
  v3[21] = v20;
  v3[24] = v21 - v19;
  if ( !v16 )
    goto LABEL_44;
  if ( v16 == 1 )
    return v8;
  return v16;
}
