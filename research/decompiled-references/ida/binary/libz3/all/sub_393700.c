__int64 __fastcall sub_393700(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = *a3;
  ++*(_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = result;
  return result;
}

