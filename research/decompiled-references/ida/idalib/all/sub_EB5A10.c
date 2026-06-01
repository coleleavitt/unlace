__int64 __fastcall sub_EB5A10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8 * result + 40) = a2;
  return result;
}
