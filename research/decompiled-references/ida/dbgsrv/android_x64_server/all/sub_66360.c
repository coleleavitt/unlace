/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66360
// Address: 0x0000000000066360

//----- (0000000000066360) ----------------------------------------------------
__int64 __fastcall sub_66360(__int64 a1)
{
  _QWORD *v2; // rdi
  int v3; // ebp
  __int64 v4; // rcx
  _DWORD *v5; // rax

  v2 = (_QWORD *)(a1 + 248);
  v3 = *(_DWORD *)(a1 + 208);
  v4 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 264) >= (unsigned __int64)(v4 + 1) )
  {
    v5 = (_DWORD *)*v2;
  }
  else
  {
    v5 = qvector_reserve((__int64)v2, *(char **)(a1 + 248), v4 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v5;
    v4 = *(_QWORD *)(a1 + 256);
  }
  v5[v4] = v3;
  ++*(_QWORD *)(a1 + 256);
  return 0;
}
