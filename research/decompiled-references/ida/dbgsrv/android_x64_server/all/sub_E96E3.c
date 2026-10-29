/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E96E3
// Address: 0x00000000000E96E3

//----- (00000000000E96E3) ----------------------------------------------------
__int64 __fastcall sub_E96E3(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  char *v5; // r14
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = (unsigned __int16)*(_DWORD *)(a1 + 32) >> 3;
  v5 = (char *)sub_E959E(v4, a1);
  sub_E961A(v4, v5, (char *)(a2 + 8), &v7);
  sub_E961A((unsigned __int16)*(_DWORD *)(a1 + 32) >> 3, v5, (char *)(a3 + 8), v8);
  result = 1;
  if ( v7 <= v8[0] )
    return (unsigned int)-(v7 < v8[0]);
  return result;
}
