__int64 __fastcall sub_100B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 40);
  result = sub_100950(a1, nullptr, v2, *(__int16 *)(a2 + 28), 1, 1);
  *(_DWORD *)(v2 + 12) = result;
  return result;
}

