__int64 __fastcall sub_AFD420(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rdi

  v3 = (__int64 *)(a1 + 880);
  result = *v3;
  *(_QWORD *)(*v3 + 9328) = a2;
  return result;
}

