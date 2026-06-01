/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F800
// Address: 0x000000000042F800

//----- (000000000042F800) ----------------------------------------------------
__int64 __fastcall sub_42F800(__int64 a1)
{
  void **v1; // rbp
  _BYTE *v2; // rax
  void *v3; // rsi
  void *v5; // rax

  v1 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -67;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v5 = sub_481540((__int64)v1, v3, (unsigned __int64)(v2 + 1), 1u);
    *v1 = v5;
    v3 = v5;
    v2 = v1[1];
  }
  v2[(_QWORD)v3] = -67;
  v1[1] = (char *)v1[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
