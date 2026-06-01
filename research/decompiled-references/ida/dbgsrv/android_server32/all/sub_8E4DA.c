/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E4DA
// Address: 0x0008E4DA

//----- (0008E4DA) --------------------------------------------------------
int __fastcall sub_8E4DA(int a1, int a2, unsigned int a3)
{
  int v3; // r5
  int v4; // r4
  bool v5; // cf
  unsigned __int64 v6; // r0
  unsigned int v7; // r0
  int v8; // r3
  _DWORD *v9; // r7
  unsigned int v10; // r5
  unsigned int v11; // r2
  int v12; // r6
  _BOOL4 v13; // r0
  unsigned int v14; // r6
  unsigned int i; // r0
  unsigned int v16; // r7
  int v17; // r6
  unsigned int v18; // r7
  int *v20; // [sp+20h] [bp-34h]
  unsigned int v21; // [sp+28h] [bp-2Ch]
  unsigned __int8 *v22; // [sp+30h] [bp-24h]
  _DWORD *v23; // [sp+34h] [bp-20h]
  _DWORD *v24; // [sp+38h] [bp-1Ch]
  unsigned int *v25; // [sp+44h] [bp-10h]
  _QWORD *v26; // [sp+48h] [bp-Ch]
  _DWORD *v27; // [sp+4Ch] [bp-8h]
  int v28; // [sp+50h] [bp-4h]
  int v29; // [sp+50h] [bp-4h]

  v3 = -102;
  if ( !a1 )
    return v3;
  v4 = *(_DWORD *)(a1 + 224);
  if ( !v4 )
    return v3;
  v3 = -100;
  if ( !*(_DWORD *)v4 )
    return v3;
  v3 = 0;
  if ( !a3 )
    return v3;
  *(_DWORD *)(v4 + 16) = a2;
  *(_DWORD *)(v4 + 20) = a3;
  v6 = *(_QWORD *)(v4 + 128);
  v25 = (unsigned int *)(v4 + 128);
  v3 = 0;
  v5 = v6 >= a3;
  HIDWORD(v6) = a3;
  if ( !v5 )
  {
    HIDWORD(v6) = a3;
    if ( !*(_DWORD *)(v4 + 200) )
    {
      *(_DWORD *)(v4 + 20) = v6;
      HIDWORD(v6) = v6;
    }
  }
  v7 = *(_DWORD *)(v4 + 8);
  v28 = *(_DWORD *)(v4 + 120);
  v26 = (_QWORD *)(v4 + 120);
  v8 = (*(_QWORD *)(v4 + 120) + v7 - (unsigned __int64)a3) >> 32;
  if ( *(_QWORD *)(v4 + 120) + (unsigned __int64)v7 < a3 && *(_DWORD *)(v4 + 200) )
  {
    HIDWORD(v6) = v28 + v7;
    *(_DWORD *)(v4 + 20) = v28 + v7;
  }
  if ( !HIDWORD(v6) )
    return v3;
  v9 = (_DWORD *)(v4 + 104);
  v23 = (_DWORD *)(v4 + 64);
  v20 = (int *)(v4 + 180);
  v27 = (_DWORD *)(v4 + 184);
  v29 = 0;
  v24 = (_DWORD *)(v4 + 104);
  while ( v7 )
  {
LABEL_24:
    if ( *v27 && !*(_DWORD *)(v4 + 200) )
    {
      if ( *v27 != 12 )
      {
        v22 = *(unsigned __int8 **)(v4 + 16);
        v16 = *(_DWORD *)(v4 + 24);
        v3 = sub_88D24((_DWORD *)(v4 + 4), 2, 0, v8);
        if ( v3 >= 0 && *(_DWORD *)(v4 + 28) )
          v3 = -3;
        v17 = (__PAIR64__(*(_DWORD *)(v4 + 24) < v16, *(_DWORD *)(v4 + 24)) - v16) >> 32;
        v18 = *(_DWORD *)(v4 + 24) - v16;
        v5 = __CFADD__(v18, *v24);
        *v24 += v18;
        *(_DWORD *)(v4 + 108) += v17 + v5;
        *(_DWORD *)(v4 + 112) = sub_85468(*(_DWORD *)(v4 + 112), v22, v18);
        v5 = *v25 >= v18;
        *v25 -= v18;
        *(_DWORD *)(v4 + 132) -= v17 + !v5;
        v12 = v29 + v18;
        if ( v3 )
        {
          if ( v3 == 1 )
            return v12;
          return v3;
        }
        v29 += v18;
        v9 = (_DWORD *)(v4 + 104);
      }
    }
    else
    {
      if ( !v7 && !*v26 )
        return v29;
      v14 = *(_DWORD *)(v4 + 20);
      if ( v14 >= v7 )
        v14 = v7;
      if ( v14 )
      {
        for ( i = 0; i < v14; ++i )
          *(_BYTE *)(*(_DWORD *)(v4 + 16) + i) = *(_BYTE *)(*(_DWORD *)(v4 + 4) + i);
      }
      v5 = __CFADD__(*v9, v14);
      *v9 += v14;
      v9[1] += v5;
      *(_DWORD *)(v4 + 112) = sub_85468(*(_DWORD *)(v4 + 112), *(unsigned __int8 **)(v4 + 16), v14);
      v5 = *v25 >= v14;
      *v25 -= v14;
      *(_DWORD *)(v4 + 132) -= !v5;
      *(_DWORD *)(v4 + 8) -= v14;
      *(_DWORD *)(v4 + 24) += v14;
      *(_DWORD *)(v4 + 4) += v14;
      *(_DWORD *)(v4 + 16) += v14;
      *(_DWORD *)(v4 + 20) -= v14;
      v29 += v14;
    }
    if ( !*(_DWORD *)(v4 + 20) )
      return v29;
    v7 = *(_DWORD *)(v4 + 8);
  }
  v10 = *(_DWORD *)v26;
  v11 = *(_DWORD *)(v4 + 124);
  v7 = 0;
  if ( !*v26 )
    goto LABEL_24;
  v12 = 0;
  v13 = __PAIR64__(v11, v10) < 0x4000;
  if ( __PAIR64__(v11, v10) >= 0x4000 )
    v10 = 0x4000;
  if ( !v13 )
    v11 = 0;
  if ( v10 )
  {
    v21 = v11;
    v12 = -1;
    if ( !sub_8F128(v4 + 136, *v20, *(_DWORD *)(v4 + 192) + *v23, (*(_QWORD *)(v4 + 192) + *(_QWORD *)v23) >> 32, 0) )
    {
      v9 = (_DWORD *)(v4 + 104);
      if ( (*(int (__fastcall **)(_DWORD, int, _DWORD, unsigned int))(v4 + 140))(
             *(_DWORD *)(v4 + 164),
             *v20,
             *(_DWORD *)v4,
             v10) == v10 )
      {
        v5 = __CFADD__(*v23, v10);
        *v23 += v10;
        *(_DWORD *)(v4 + 68) += v21 + v5;
        v5 = *(_DWORD *)v26 >= v10;
        *(_DWORD *)v26 -= v10;
        *(_DWORD *)(v4 + 124) -= v21 + !v5;
        *(_DWORD *)(v4 + 4) = *(_DWORD *)v4;
        *(_DWORD *)(v4 + 8) = v10;
        v7 = v10;
        goto LABEL_24;
      }
    }
  }
  return v12;
}
// 8E6F2: variable 'v8' is possibly undefined
