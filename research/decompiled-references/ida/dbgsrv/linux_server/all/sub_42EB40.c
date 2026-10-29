/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EB40
// Address: 0x000000000042EB40

//----- (000000000042EB40) ----------------------------------------------------
__int64 __fastcall sub_42EB40(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  void *v3; // rsi
  void *v5; // rax

  v1 = *(_QWORD *)(a1 + 256);
  v2 = *(_DWORD *)(a1 + 208);
  v3 = *(void **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v1 + 1) )
  {
    v5 = sub_481540(a1 + 248, v3, v1 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v5;
    v3 = v5;
    v1 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v3 + v1) = v2;
  ++*(_QWORD *)(a1 + 256);
  return 0;
}
