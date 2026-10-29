/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DEE0
// Address: 0x0045DEE0

//----- (0045DEE0) --------------------------------------------------------
int __cdecl sub_45DEE0(_WORD *a1, _WORD *a2)
{
  int v2; // edx
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // edx
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // ecx
  int result; // eax
  int v23; // edx

  v2 = (unsigned __int16)a2[9];
  v3 = (unsigned __int16)a2[10] - (unsigned __int16)a1[10];
  a2[10] = v3;
  v4 = v2 - (HIWORD(v3) & 1);
  v5 = (unsigned __int16)a2[8];
  v6 = v4 - (unsigned __int16)a1[9];
  a2[9] = v6;
  v7 = v5 - (HIWORD(v6) & 1);
  v8 = (unsigned __int16)a2[7];
  v9 = v7 - (unsigned __int16)a1[8];
  a2[8] = v9;
  v10 = v8 - (HIWORD(v9) & 1);
  v11 = (unsigned __int16)a2[6];
  v12 = v10 - (unsigned __int16)a1[7];
  a2[7] = v12;
  v13 = v11 - (HIWORD(v12) & 1);
  v14 = (unsigned __int16)a2[5];
  v15 = v13 - (unsigned __int16)a1[6];
  a2[6] = v15;
  v16 = v14 - (HIWORD(v15) & 1);
  v17 = (unsigned __int16)a2[4];
  v18 = v16 - (unsigned __int16)a1[5];
  a2[5] = v18;
  v19 = v17 - (HIWORD(v18) & 1);
  v20 = (unsigned __int16)a2[3];
  v21 = v19 - (unsigned __int16)a1[4];
  a2[4] = v21;
  result = (unsigned __int16)a1[3];
  v23 = v20 - (HIWORD(v21) & 1) - result;
  a2[3] = v23;
  a2[2] -= a1[2] + (BYTE2(v23) & 1);
  return result;
}
