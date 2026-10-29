/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054B30
// Address: 0x0000000140054B30

//----- (0000000140054B30) ----------------------------------------------------
__int64 *__fastcall sub_140054B30(__int64 *a1, char a2)
{
  char *v4; // rax
  __int64 v5; // rax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = (char *)sub_14005ABE0((__int64)a1, nullptr, 5u, 1u);
  *a1 = (__int64)v4;
  memset(&v4[a1[1]], 0, 5 - a1[1]);
  a1[1] = 5;
  v5 = *a1;
  *(_DWORD *)v5 = 0;
  *(_BYTE *)(v5 + 4) = a2;
  return a1;
}
