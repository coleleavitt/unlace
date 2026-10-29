unsigned __int64 __fastcall sub_EB59F0(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 16) + (unsigned __int64)(unsigned int)(a2 + 1);
  *(_QWORD *)(a1 + 8 * result + 40) = a3;
  return result;
}
