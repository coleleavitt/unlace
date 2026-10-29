/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065790
// Address: 0x0000000140065790

//----- (0000000140065790) ----------------------------------------------------
__int64 __fastcall sub_140065790(_WORD *a1, _WORD *a2)
{
  unsigned int v4; // r8d
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // ecx
  __int64 result; // rax
  int v24; // edx

  v4 = (unsigned __int16)a2[10] - (unsigned __int16)a1[10];
  a2[10] = v4;
  v5 = (unsigned __int16)a1[9];
  v6 = (unsigned __int16)a2[8];
  v7 = (unsigned __int16)a2[9] - (HIWORD(v4) & 1) - v5;
  a2[9] = v7;
  v8 = v6 - (HIWORD(v7) & 1);
  v9 = (unsigned __int16)a2[7];
  v10 = v8 - (unsigned __int16)a1[8];
  a2[8] = v10;
  v11 = v9 - (HIWORD(v10) & 1);
  v12 = (unsigned __int16)a2[6];
  v13 = v11 - (unsigned __int16)a1[7];
  a2[7] = v13;
  v14 = v12 - (HIWORD(v13) & 1);
  v15 = (unsigned __int16)a2[5];
  v16 = v14 - (unsigned __int16)a1[6];
  a2[6] = v16;
  v17 = v15 - (HIWORD(v16) & 1);
  v18 = (unsigned __int16)a2[4];
  v19 = v17 - (unsigned __int16)a1[5];
  a2[5] = v19;
  v20 = v18 - (HIWORD(v19) & 1);
  v21 = (unsigned __int16)a2[3];
  v22 = v20 - (unsigned __int16)a1[4];
  a2[4] = v22;
  result = (unsigned __int16)a1[3];
  v24 = v21 - (HIWORD(v22) & 1) - result;
  a2[3] = v24;
  a2[2] -= a1[2] + (BYTE2(v24) & 1);
  return result;
}
