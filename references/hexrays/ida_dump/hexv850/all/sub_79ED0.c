__int64 __fastcall sub_79ED0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = sub_32C840(a2, a3);
  *(_DWORD *)(a1 + 8) = unpack_dd(a2);
  *(_DWORD *)(a1 + 12) = unpack_dd(a2);
  result = (unsigned int)unpack_dd(a2) - 1;
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
