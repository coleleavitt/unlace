/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_382E0
// Address: 0x000382E0

//----- (000382E0) --------------------------------------------------------
int __fastcall sub_382E0(_DWORD *a1)
{
  int v2; // r9
  const char *v3; // r8
  _DWORD *v4; // r6
  _DWORD *v5; // r4
  size_t v6; // r10
  void *v7; // r0
  __int64 v8; // r2

  v2 = *(_DWORD *)(a1[48] + 4 * (a1[49] + 0x3FFFFFFF));
  if ( a1[7] )
    v3 = (const char *)a1[6];
  else
    v3 = (const char *)&dword_8DB98;
  v4 = sub_808A4(0x10u);
  v4[3] = 0;
  *v4 = 5;
  v5 = sub_808A4(0xCu);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  if ( v3 )
  {
    v6 = strlen(v3);
    v7 = sub_78018((int)v5, nullptr, v6 + 1, 1u);
    *v5 = v7;
    v5[1] = v6 + 1;
    memmove(v7, v3, v6);
    *(_BYTE *)(*v5 + v6) = 0;
  }
  v8 = *((_QWORD *)a1 + 24);
  v4[1] = v5;
  v4[2] = v2;
  *(_DWORD *)(v8 + 4 * (HIDWORD(v8) + 0x3FFFFFFF)) = v4;
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
