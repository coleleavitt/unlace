/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEC2C
// Address: 0x00000000000CEC2C

//----- (00000000000CEC2C) ----------------------------------------------------
__int64 __fastcall sub_CEC2C(__int64 a1)
{
  __int64 v2; // x21
  int v3; // w8
  unsigned int v4; // w12
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned __int64 v8; // x10
  int v9; // w8
  unsigned __int64 v10; // x10
  char v11; // w9
  unsigned int v12; // w8
  unsigned __int64 v13; // x11
  int v14; // w9
  unsigned int v15; // w9
  unsigned __int64 v16; // x10
  unsigned int v17; // w14
  _BYTE *v18; // x9
  unsigned __int64 v19; // x12
  unsigned int v20; // w16
  int v21; // w16
  int v22; // w16
  __int64 v23; // x13
  int v24; // w9
  __int64 v25; // x10
  __int64 v26; // x11
  int v27; // w22
  unsigned int v28; // w8
  __int64 v29; // x23
  __int64 v30; // x24
  _BYTE v31[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v32; // [xsp+8h] [xbp-48h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 64) )
    return 4294967294LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 4294967294LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 4294967294LL;
  if ( *(_QWORD *)v2 != a1 )
    return 4294967294LL;
  v3 = *(_DWORD *)(v2 + 8);
  if ( (unsigned int)(v3 - 16180) > 0x1F )
    return 4294967294LL;
  v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 && *(_DWORD *)(v2 + 88) < 8u )
    return 4294967291LL;
  if ( v3 != 16211 )
  {
    v9 = *(_DWORD *)(v2 + 88);
    v10 = *(_QWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 8) = 16211;
    v11 = v9 & 7;
    v12 = v9 & 0xFFFFFFF8;
    v13 = v10 >> v11;
    *(_QWORD *)(v2 + 80) = v10 >> v11;
    *(_DWORD *)(v2 + 88) = v12;
    if ( v12 )
    {
      v14 = 7 - v12;
      if ( v12 == 15 || 7 - v12 < 0xFFFFFFF8 )
        v14 = -8;
      v15 = v14 + v12;
      v16 = (v15 >> 3) + 1;
      v17 = v15 & 0xFFFFFFF8;
      v18 = v31;
      v19 = v16;
      do
      {
        *v18++ = v13;
        --v19;
        v13 >>= 8;
      }
      while ( v19 );
      v20 = v12 - 8;
      *(_DWORD *)(v2 + 140) = 0;
      v6 = (unsigned int *)(v2 + 140);
      v7 = 0;
      *(_QWORD *)(v2 + 80) = v13;
      *(_DWORD *)(v2 + 88) = v20 - v17;
      do
      {
        if ( v7 >= 2 )
          v21 = 255;
        else
          v21 = 0;
        if ( v21 == (unsigned __int8)v31[v19] )
        {
          ++v7;
        }
        else
        {
          v7 = 4 - v7;
          if ( v31[v19] )
            v7 = 0;
        }
        ++v19;
      }
      while ( v19 < v16 && v7 < 4 );
    }
    else
    {
      v7 = 0;
      *(_DWORD *)(v2 + 140) = 0;
      v6 = (unsigned int *)(v2 + 140);
    }
    *v6 = v7;
    v4 = *(_DWORD *)(a1 + 8);
    LODWORD(v8) = 0;
    if ( !v4 )
      goto LABEL_43;
    goto LABEL_32;
  }
  v6 = (unsigned int *)(v2 + 140);
  v7 = *(_DWORD *)(v2 + 140);
  LODWORD(v8) = 0;
  if ( v4 )
  {
LABEL_32:
    if ( v7 <= 3 )
    {
      v8 = 0;
      do
      {
        if ( v7 >= 2 )
          v22 = 255;
        else
          v22 = 0;
        if ( v22 == *(unsigned __int8 *)(*(_QWORD *)a1 + v8) )
        {
          ++v7;
        }
        else
        {
          v7 = 4 - v7;
          if ( *(_BYTE *)(*(_QWORD *)a1 + v8) )
            v7 = 0;
        }
        ++v8;
      }
      while ( v8 < v4 && v7 < 4 );
    }
  }
LABEL_43:
  *v6 = v7;
  v23 = (unsigned int)v8;
  v24 = *(_DWORD *)(a1 + 8) - v8;
  v25 = *(_QWORD *)a1 + (unsigned int)v8;
  v26 = *(_QWORD *)(a1 + 16) + v23;
  *(_DWORD *)(a1 + 8) = v24;
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 16) = v26;
  if ( *v6 != 4 )
    return 4294967293LL;
  v27 = *(_DWORD *)(v2 + 24);
  if ( v27 == -1 )
    v28 = 0;
  else
    v28 = *(_DWORD *)(v2 + 16) & 0xFFFFFFFB;
  *(_DWORD *)(v2 + 16) = v28;
  v29 = *(_QWORD *)(a1 + 16);
  v30 = *(_QWORD *)(a1 + 40);
  sub_CCA0C((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = v29;
  *(_QWORD *)(a1 + 40) = v30;
  *(_DWORD *)(v2 + 24) = v27;
  *(_DWORD *)(v2 + 8) = 16191;
  return 0;
}
