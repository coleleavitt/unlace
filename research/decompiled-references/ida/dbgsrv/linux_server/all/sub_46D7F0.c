/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D7F0
// Address: 0x000000000046D7F0

//----- (000000000046D7F0) ----------------------------------------------------
__int64 __fastcall sub_46D7F0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rdi
  unsigned int v3; // ecx

  *(_QWORD *)(a1 + 8) = 0;
  v1 = a1;
  v2 = a1 + 16;
  *(_QWORD *)(v2 + 112) = 0;
  v2 &= 0xFFFFFFFFFFFFFFF8LL;
  v3 = v1 - v2 + 136;
  memset((void *)v2, 0, 8LL * (v3 >> 3));
  return 0;
}
