/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DF00
// Address: 0x000000000042DF00

//----- (000000000042DF00) ----------------------------------------------------
__int64 __fastcall sub_42DF00(__int64 a1)
{
  __int64 v1; // rdx
  void *v3; // rsi
  __int64 v4; // rdi
  int v5; // eax
  void *v7; // rax

  v1 = *(_QWORD *)(a1 + 376);
  v3 = *(void **)(a1 + 368);
  v4 = v1 + 1;
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v1 + 1) )
  {
    v7 = sub_481540(a1 + 368, v3, v1 + 1, 0x10u);
    v1 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 368) = v7;
    v3 = v7;
    v4 = v1 + 1;
  }
  v5 = *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 376) = v4;
  *((_DWORD *)v3 + 4 * v1) = v5;
  return 0;
}
