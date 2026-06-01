/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66000
// Address: 0x0000000000066000

//----- (0000000000066000) ----------------------------------------------------
__int64 __fastcall sub_66000(__int64 a1, char a2, int a3)
{
  __int64 v3; // rcx
  int *v4; // rbx
  unsigned int v5; // ebp

  v3 = *(_QWORD *)(a1 + 352);
  v4 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v3 - 8);
  if ( v3 )
    *(_QWORD *)(a1 + 352) = v3 - 1;
  if ( a3 )
  {
    if ( (*v4 | 4) == 5 )
      v5 = sub_66D00(a1, (__int64)v4, a2, a3);
    else
      v5 = 58;
  }
  else
  {
    v5 = sub_66D00(a1, (__int64)v4, a2, 0);
    if ( !v4 )
      return set_qerrno(v5);
  }
  sub_652B0(v4);
  operator delete(v4);
  return set_qerrno(v5);
}
