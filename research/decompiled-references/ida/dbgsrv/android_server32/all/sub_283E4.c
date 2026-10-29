/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_283E4
// Address: 0x000283E4

//----- (000283E4) --------------------------------------------------------
_DWORD *__fastcall sub_283E4(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  void **v4; // r5
  void *v5; // r0
  void *v6; // r0

  v2 = a1[118];
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = (void *)a1[115];
  if ( v3 )
  {
    a1[116] = 0;
    qfree(v3);
    a1[115] = 0;
    a1[117] = 0;
  }
  v4 = (void **)(a1 + 54);
  if ( a1[54] )
  {
    sub_35D20(a1 + 54, 0);
    qfree(*v4);
    *v4 = nullptr;
    a1[56] = 0;
  }
  v5 = (void *)a1[14];
  if ( v5 )
  {
    a1[15] = 0;
    qfree(v5);
    a1[16] = 0;
    a1[14] = 0;
  }
  v6 = (void *)a1[4];
  if ( v6 )
  {
    a1[5] = 0;
    qfree(v6);
    a1[6] = 0;
    a1[4] = 0;
  }
  return a1;
}
