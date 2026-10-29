/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A83A0
// Address: 0x00000000004A83A0

//----- (00000000004A83A0) ----------------------------------------------------
__int64 *__fastcall sub_4A83A0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // x27
  int v5; // w24
  int v6; // w23
  int v8; // w22
  __int64 *v9; // x21
  __int64 *v10; // x20
  __int64 v11; // x4
  int v12; // w5
  int v13; // w0
  int v14; // w27
  __int64 v15; // x0
  __int64 v16; // x3
  _BYTE *v17; // x0
  __int64 v18; // x0
  _DWORD *v20; // x21
  int v21; // w0
  _BYTE *v22; // x0
  __int64 v23; // x3
  int v24; // w1
  __int64 v25; // [xsp+50h] [xbp+50h]

  if ( a3 )
    v5 = 30;
  else
    v5 = 27;
  if ( a3 )
    v6 = 29;
  else
    v6 = 26;
  if ( a3 )
    v8 = 28;
  else
    v8 = 25;
  v9 = a2;
  v10 = a2;
  if ( (unsigned int)sub_4A5A40(*(unsigned __int8 **)(a1 + 24)) )
  {
    while ( 1 )
    {
      *(_QWORD *)(a1 + 24) = v11 + 1;
      if ( v12 == 114 )
      {
        v24 = v8;
        v23 = 0;
        *(_DWORD *)(a1 + 80) += 9;
        goto LABEL_25;
      }
      if ( v12 == 86 )
      {
        v24 = v6;
        v23 = 0;
        *(_DWORD *)(a1 + 80) += 9;
        goto LABEL_25;
      }
      if ( v12 == 75 )
        break;
      if ( !*(_BYTE *)(v11 + 1) )
        return nullptr;
      *(_QWORD *)(a1 + 24) = v11 + 2;
      v13 = *(unsigned __int8 *)(v11 + 1);
      if ( v13 == 120 )
      {
        v23 = 0;
        v24 = 76;
        *(_DWORD *)(a1 + 80) += 17;
LABEL_25:
        v18 = sub_4A5090(a1, v24, 0, v23);
        *v10 = v18;
        if ( !v18 )
          return nullptr;
        goto LABEL_26;
      }
      if ( (v13 & 0xFFFFFFDF) != 0x4F )
      {
        if ( v13 != 119 )
          return nullptr;
        *(_DWORD *)(a1 + 80) += 6;
        v23 = sub_4A8290(a1);
        if ( !v23 )
          return nullptr;
        v22 = *(_BYTE **)(a1 + 24);
        if ( *v22 != 69 )
          return nullptr;
        v24 = 79;
        *(_QWORD *)(a1 + 24) = v22 + 1;
        goto LABEL_25;
      }
      *(_DWORD *)(a1 + 80) += 9;
      if ( v13 != 79 )
      {
        v23 = 0;
        v24 = 78;
        goto LABEL_25;
      }
      v25 = v3;
      v14 = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(a1 + 84) = 1;
      v15 = sub_4A66F8(a1);
      *(_DWORD *)(a1 + 84) = v14;
      v16 = v15;
      if ( !v15 )
        return nullptr;
      v17 = *(_BYTE **)(a1 + 24);
      if ( *v17 != 69 )
        return nullptr;
      v3 = v25;
      *(_QWORD *)(a1 + 24) = v17 + 1;
      v18 = sub_4A5090(a1, 78, 0, v16);
      *v10 = v18;
      if ( !v18 )
        return nullptr;
LABEL_26:
      v10 = (__int64 *)(v18 + 8);
      if ( !(unsigned int)sub_4A5A40(*(unsigned __int8 **)(a1 + 24)) )
        goto LABEL_27;
    }
    v24 = v5;
    v23 = 0;
    *(_DWORD *)(a1 + 80) += 6;
    goto LABEL_25;
  }
LABEL_27:
  if ( ((a3 ^ 1) & (v12 == 70)) != 0 && v10 != v9 )
  {
    do
    {
      v20 = (_DWORD *)*v9;
      v21 = *v20;
      if ( *v20 == 26 )
      {
        *v20 = 29;
      }
      else if ( v21 == 27 )
      {
        *v20 = 30;
      }
      else if ( v21 == 25 )
      {
        *v20 = 28;
      }
      v9 = (__int64 *)(v20 + 2);
    }
    while ( v10 != v9 );
  }
  return v10;
}
// 4A83A0: could not find valid save-restore pair for x27
// 4A8408: variable 'v11' is possibly undefined
// 4A8414: variable 'v12' is possibly undefined
// 4A8464: variable 'v3' is possibly undefined
