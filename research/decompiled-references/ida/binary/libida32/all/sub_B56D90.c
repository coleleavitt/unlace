__int64 __fastcall sub_B56D90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 72) = a2;
  result = sub_EC7AA0(a2);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}

