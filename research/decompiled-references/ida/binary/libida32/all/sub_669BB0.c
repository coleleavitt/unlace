__int64 __fastcall sub_669BB0(__int64 a1)
{
  void **v1; // rbx
  __int64 result; // rax

  v1 = *(void ***)(a1 + 1584);
  free_idasgn(*v1);
  *v1 = nullptr;
  free_idasgn(v1[4]);
  result = free_idasgn(v1[5]);
  *((_OWORD *)v1 + 2) = 0;
  return result;
}

