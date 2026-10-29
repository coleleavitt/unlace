/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4323C0
// Address: 0x00000000004323C0

//----- (00000000004323C0) ----------------------------------------------------
__int64 __fastcall sub_4323C0(__int64 a1)
{
  void **v1; // rbp
  _BYTE *v2; // rax
  void *v3; // rsi
  const char *v4; // rsi
  size_t v5; // rdx
  void **v6; // rbp
  _BYTE *v7; // rax
  void *v8; // rsi
  void *v10; // rax
  void *v11; // rax

  v1 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -86;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v10 = sub_481540((__int64)v1, v3, (unsigned __int64)(v2 + 1), 1u);
    *v1 = v10;
    v3 = v10;
    v2 = v1[1];
  }
  v2[(_QWORD)v3] = -86;
  v4 = s1;
  v1[1] = (char *)v1[1] + 1;
  v5 = *(_QWORD *)(a1 + 48);
  ++*(_DWORD *)(a1 + 208);
  if ( v5 )
  {
    v4 = *(const char **)(a1 + 40);
    --v5;
  }
  sub_432270(a1, v4, v5);
  v6 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = 1;
  v7 = v6[1];
  v8 = *v6;
  if ( v6[2] < v7 + 1 )
  {
    v11 = sub_481540((__int64)v6, v8, (unsigned __int64)(v7 + 1), 1u);
    *v6 = v11;
    v8 = v11;
    v7 = v6[1];
  }
  v7[(_QWORD)v8] = 1;
  v6[1] = (char *)v6[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
