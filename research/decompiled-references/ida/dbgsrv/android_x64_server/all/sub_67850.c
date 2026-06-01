/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67850
// Address: 0x0000000000067850

//----- (0000000000067850) ----------------------------------------------------
__int64 __fastcall sub_67850(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  _DWORD *v5; // rax

  v2 = (_QWORD *)(a1 + 368);
  v3 = *(_QWORD *)(a1 + 376);
  v4 = v3 + 1;
  if ( *(_QWORD *)(a1 + 384) >= (unsigned __int64)(v3 + 1) )
  {
    v5 = (_DWORD *)*v2;
  }
  else
  {
    v5 = qvector_reserve((__int64)v2, *(char **)(a1 + 368), v4, 0x10u);
    *(_QWORD *)(a1 + 368) = v5;
    v3 = *(_QWORD *)(a1 + 376);
    v4 = v3 + 1;
  }
  *(_QWORD *)(a1 + 376) = v4;
  v5[4 * v3] = *(_DWORD *)(a1 + 208);
  return 0;
}
