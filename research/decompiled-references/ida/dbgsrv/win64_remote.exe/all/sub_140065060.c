/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065060
// Address: 0x0000000140065060

//----- (0000000140065060) ----------------------------------------------------
__int64 __fastcall sub_140065060(_WORD *a1, _WORD *a2)
{
  unsigned int v4; // r9d
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 result; // rax
  int v17; // ecx

  v4 = (unsigned __int16)a1[10] + (unsigned __int16)a2[10];
  a2[10] = v4;
  v5 = (unsigned __int16)a2[9] + HIWORD(v4) + (unsigned __int16)a1[9];
  v6 = (unsigned __int16)a2[8];
  a2[9] = v5;
  v7 = v6 + (HIWORD(v5) & 1) + (unsigned __int16)a1[8];
  v8 = (unsigned __int16)a2[7];
  a2[8] = v7;
  v9 = v8 + (HIWORD(v7) & 1) + (unsigned __int16)a1[7];
  v10 = (unsigned __int16)a2[6];
  a2[7] = v9;
  v11 = v10 + (HIWORD(v9) & 1) + (unsigned __int16)a1[6];
  v12 = (unsigned __int16)a2[5];
  a2[6] = v11;
  v13 = v12 + (HIWORD(v11) & 1) + (unsigned __int16)a1[5];
  v14 = (unsigned __int16)a2[4];
  a2[5] = v13;
  v15 = v14 + (HIWORD(v13) & 1) + (unsigned __int16)a1[4];
  a2[4] = v15;
  result = (unsigned __int16)a2[3];
  v17 = result + (unsigned __int16)a1[3] + (HIWORD(v15) & 1);
  a2[3] = v17;
  a2[2] += a1[2] + (BYTE2(v17) & 1);
  return result;
}
