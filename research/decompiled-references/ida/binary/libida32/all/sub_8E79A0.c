__int64 __fastcall sub_8E79A0(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 3200) + 5616LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 3200) + 5620LL) = 0;
  result = *(_QWORD *)(a1 + 3200);
  *(_DWORD *)(result + 5624) = 0;
  return result;
}

