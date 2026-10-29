/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65640
// Address: 0x0000000000065640

//----- (0000000000065640) ----------------------------------------------------
__int64 __fastcall sub_65640(_QWORD *a1)
{
  __int64 v1; // r13
  const char *v2; // r14
  _DWORD *v3; // rbx
  void *v4; // r12

  v1 = *(_QWORD *)(a1[43] + 8LL * a1[44] - 8);
  if ( a1[6] )
    v2 = (const char *)a1[5];
  else
    v2 = s1;
  v3 = operator new(0x20u);
  v3[6] = 0;
  *v3 = 5;
  v4 = operator new(0x18u);
  sub_37F60((__int64)v4, v2);
  *((_QWORD *)v3 + 1) = v4;
  *((_QWORD *)v3 + 2) = v1;
  *(_QWORD *)(a1[43] + 8LL * a1[44] - 8) = v3;
  return 0;
}
