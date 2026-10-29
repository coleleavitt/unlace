/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A6A0
// Address: 0x0002A6A0

//----- (0002A6A0) --------------------------------------------------------
unsigned int __cdecl sub_2A6A0(int a1, int *a2, int a3)
{
  __int64 v3; // xmm0_8
  __int64 v4; // xmm0_8
  void **v5; // edi
  void *v6; // eax
  _QWORD src[4]; // [esp+18h] [ebp-34h] BYREF
  unsigned int v9; // [esp+38h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v3 = *(_QWORD *)(a1 + 16 * a3 + 896);
  src[1] = *(_QWORD *)(a1 + 16 * a3 + 904);
  src[0] = v3;
  v4 = *(_QWORD *)(a1 + 16 * a3 + 1312);
  src[3] = *(_QWORD *)(a1 + 16 * a3 + 1320);
  src[2] = v4;
  v5 = (void **)(a2 + 1);
  if ( *a2 >= -1 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      a2[2] = 0;
      qfree(v6);
      a2[1] = 0;
      a2[3] = 0;
    }
    *a2 = -2;
  }
  sub_2E590((int)v5, src, 0x20u);
  *a2 = 0;
  return __readgsdword(0x14u);
}
