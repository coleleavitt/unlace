unsigned __int64 __fastcall sub_EB5C30(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = a2 + (unsigned __int64)*(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8 * result + 40) = a3;
  return result;
}
