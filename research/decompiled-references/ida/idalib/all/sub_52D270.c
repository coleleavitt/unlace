__int64 __fastcall sub_52D270(__int64 a1, void *a2, double a3, __m128 a4)
{
  _QWORD *std_dirtree; // rax

  std_dirtree = (_QWORD *)get_std_dirtree(a1);
  return sub_52B640(std_dirtree, a2, 0, a3, a4);
}
