__int64 __fastcall sub_33D710(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 880);
  result = *v2;
  *(_QWORD *)(*v2 + 9328) = a2;
  return result;
}

