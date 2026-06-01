/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D960
// Address: 0x0045D960

//----- (0045D960) --------------------------------------------------------
int __cdecl sub_45D960(_WORD *a1, _WORD *a2)
{
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  int result; // eax
  int v11; // edx

  v2 = (unsigned __int16)a1[10] + (unsigned __int16)a2[10];
  v3 = (unsigned __int16)a2[9];
  a2[10] = v2;
  v4 = v3 + HIWORD(v2) + (unsigned __int16)a1[9];
  a2[9] = v4;
  v5 = (unsigned __int16)a2[8] + (unsigned __int16)a1[8] + (HIWORD(v4) & 1);
  a2[8] = v5;
  v6 = (unsigned __int16)a2[7] + (unsigned __int16)a1[7] + (HIWORD(v5) & 1);
  a2[7] = v6;
  v7 = (unsigned __int16)a2[6] + (unsigned __int16)a1[6] + (HIWORD(v6) & 1);
  a2[6] = v7;
  v8 = (unsigned __int16)a2[5] + (unsigned __int16)a1[5] + (HIWORD(v7) & 1);
  a2[5] = v8;
  v9 = (unsigned __int16)a2[4] + (unsigned __int16)a1[4] + (HIWORD(v8) & 1);
  a2[4] = v9;
  result = (unsigned __int16)a2[3];
  v11 = result + (unsigned __int16)a1[3] + (HIWORD(v9) & 1);
  a2[3] = v11;
  a2[2] += a1[2] + (BYTE2(v11) & 1);
  return result;
}
