/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72F40
// Address: 0x0000000000072F40

//----- (0000000000072F40) ----------------------------------------------------
__int64 __fastcall sub_72F40(__int64 a1, int a2, char *a3, double a4, __m128 a5)
{
  _QWORD *v7; // rdi
  int v8; // ebp
  __int64 v9; // rcx
  _DWORD *v10; // rax

  v7 = (_QWORD *)(a1 + 72);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v9 + 1) )
  {
    v10 = (_DWORD *)*v7;
  }
  else
  {
    v10 = qvector_reserve((__int64)v7, *(char **)(a1 + 72), v9 + 1, 4u);
    *(_QWORD *)(a1 + 72) = v10;
    v9 = *(_QWORD *)(a1 + 80);
  }
  v10[v9] = v8;
  ++*(_QWORD *)(a1 + 80);
  sub_688B0(a1 + 24, a3, a4, a5);
  return sub_77C10((_QWORD *)a1, nullptr, nullptr, a2, a4, a5);
}
