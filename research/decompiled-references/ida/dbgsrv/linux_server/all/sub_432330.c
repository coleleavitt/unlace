/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432330
// Address: 0x0000000000432330

//----- (0000000000432330) ----------------------------------------------------
__int64 __fastcall sub_432330(__int64 a1)
{
  const char *v1; // rsi
  size_t v2; // rdx
  void **v3; // rbp
  _BYTE *v4; // rax
  void *v5; // rsi
  void *v7; // rax

  v1 = s1;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v1 = *(const char **)(a1 + 40);
    --v2;
  }
  sub_432270(a1, v1, v2);
  v3 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -80;
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < v4 + 1 )
  {
    v7 = sub_481540((__int64)v3, v5, (unsigned __int64)(v4 + 1), 1u);
    *v3 = v7;
    v5 = v7;
    v4 = v3[1];
  }
  v4[(_QWORD)v5] = -80;
  v3[1] = (char *)v3[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
