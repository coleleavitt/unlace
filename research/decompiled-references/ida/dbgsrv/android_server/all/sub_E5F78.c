/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E5F78
// Address: 0x00000000000E5F78

//----- (00000000000E5F78) ----------------------------------------------------
__int64 __fastcall sub_E5F78(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x9
  __int64 v4; // x20
  int v5; // w10
  unsigned __int8 *v6; // x8
  __int64 v7; // x0
  __int64 v8; // x21
  _QWORD *v9; // x22
  _QWORD *v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x0
  __int64 v13; // x0
  char *v14; // x0
  _QWORD *v15; // x22
  char *v16; // x21
  _QWORD *v17; // x8
  __int64 v18; // x9
  _QWORD *v19; // x0
  __int64 v20; // x10
  __int64 v21; // x9
  _QWORD *v22; // x20
  _QWORD *v23; // x8
  __int64 v24; // x9
  _QWORD *v25; // x0
  char *v26; // x20

  v1 = *(unsigned __int8 **)a1;
  v2 = *(unsigned __int8 **)(a1 + 8);
  if ( v2 == *(unsigned __int8 **)a1 )
    goto LABEL_22;
  if ( (unsigned int)*v1 - 48 <= 9 )
  {
    v4 = sub_E61F4(a1);
    if ( !v4 )
      return v4;
    goto LABEL_23;
  }
  if ( (unsigned __int64)&v2[-*(_QWORD *)a1] < 2 )
  {
LABEL_22:
    v4 = (__int64)sub_E64C0(a1, nullptr);
    if ( !v4 )
      return v4;
LABEL_23:
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
      return v4;
    v14 = sub_DE644(a1, 0);
    if ( v14 )
    {
      v15 = *(_QWORD **)(a1 + 4832);
      v16 = v14;
      v17 = v15 + 1;
      v18 = v15[1];
      if ( (unsigned __int64)(v18 + 32) >= 0xFF0 )
      {
        v19 = (_QWORD *)operator new[](0x1000u);
        v18 = 0;
        *v19 = v15;
        v19[1] = 0;
        v17 = v19 + 1;
        v15 = v19;
        *(_QWORD *)(a1 + 4832) = v19;
      }
      v20 = v18 + 32;
      v21 = (__int64)v15 + v18;
      *v17 = v20;
      *(_QWORD *)(v21 + 16) = off_162C08;
      v21 += 16;
      *(_QWORD *)(v21 + 16) = v4;
      *(_QWORD *)(v21 + 24) = v16;
      v4 = v21;
      *(_DWORD *)(v21 + 8) = 16843040;
      return v4;
    }
    return 0;
  }
  v5 = *v1;
  if ( v5 != 100 )
  {
LABEL_19:
    if ( v5 == 111 && v1[1] == 110 )
      *(_QWORD *)a1 = v1 + 2;
    goto LABEL_22;
  }
  if ( v1[1] != 110 )
  {
    v5 = *v1;
    goto LABEL_19;
  }
  v6 = v1 + 2;
  *(_QWORD *)a1 = v6;
  if ( v2 == v6 || (unsigned int)*v6 - 48 > 9 )
  {
    v13 = sub_E5E64((unsigned __int8 **)a1);
    if ( !v13 )
      return 0;
LABEL_30:
    v8 = v13;
    goto LABEL_31;
  }
  v7 = sub_E61F4(a1);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
  {
    v4 = (__int64)sub_DE644(a1, 0);
    if ( !v4 )
      return v4;
    v9 = *(_QWORD **)(a1 + 4832);
    v10 = v9 + 1;
    v11 = v9[1];
    if ( (unsigned __int64)(v11 + 32) >= 0xFF0 )
    {
      v12 = (_QWORD *)operator new[](0x1000u);
      v11 = 0;
      *v12 = v9;
      v12[1] = 0;
      v10 = v12 + 1;
      v9 = v12;
      *(_QWORD *)(a1 + 4832) = v12;
    }
    *v10 = v11 + 32;
    *(_QWORD *)((char *)v9 + v11 + 16) = off_162C08;
    v13 = (__int64)v9 + v11 + 16;
    *(_DWORD *)(v13 + 8) = 16843040;
    *(_QWORD *)(v13 + 16) = v8;
    *(_QWORD *)(v13 + 24) = v4;
    if ( (_QWORD *)((char *)v9 + v11) == (_QWORD *)-16LL )
      return 0;
    goto LABEL_30;
  }
LABEL_31:
  v22 = *(_QWORD **)(a1 + 4832);
  v23 = v22 + 1;
  v24 = v22[1];
  if ( (unsigned __int64)(v24 + 32) >= 0xFF0 )
  {
    v25 = (_QWORD *)operator new[](0x1000u);
    v24 = 0;
    *v25 = v22;
    v25[1] = 0;
    v23 = v25 + 1;
    v22 = v25;
    *(_QWORD *)(a1 + 4832) = v25;
  }
  v26 = (char *)v22 + v24;
  *v23 = v24 + 32;
  *((_QWORD *)v26 + 2) = off_1620A8;
  v4 = (__int64)(v26 + 16);
  *(_DWORD *)(v4 + 8) = 16843046;
  *(_QWORD *)(v4 + 16) = v8;
  return v4;
}
// 1620A8: using guessed type __int64 (__fastcall *off_1620A8[7])();
// 162C08: using guessed type __int64 (__fastcall *off_162C08[7])();
