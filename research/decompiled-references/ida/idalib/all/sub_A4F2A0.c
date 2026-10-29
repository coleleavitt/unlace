unsigned __int64 __fastcall sub_A4F2A0(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 result; // rax

  result = 0;
  if ( a2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) & 0xFFFFFFFFFFFFFFFCLL;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)a1 = result;
  return result;
}
