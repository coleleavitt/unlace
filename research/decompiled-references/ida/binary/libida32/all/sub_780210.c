__int64 __fastcall sub_780210(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = a2;
  return result;
}

