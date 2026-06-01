/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_741E0
// Address: 0x000741E0

//----- (000741E0) --------------------------------------------------------
int __cdecl sub_741E0(int *a1, int a2, int a3, int a4)
{
  int v4; // edi
  int result; // eax
  int v6; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+4h] [ebp-18h]
  int v8; // [esp+8h] [ebp-14h]

  v8 = *a1;
  v4 = a1[1];
  v7 = a1[18];
  v6 = a1[19];
  a1[1] = a2;
  a1[19] = a4;
  a1[18] = 0;
  result = sub_73CF0((int)a1, a3);
  a1[1] = v4;
  *a1 = v8;
  a1[18] = v7;
  a1[19] = v6;
  return result;
}
