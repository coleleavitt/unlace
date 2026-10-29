unsigned __int64 __fastcall sub_1A0B620(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = 1LL << *(_DWORD *)a1;
  if ( (v1 & 0x300045) != 0 )
    return *(_QWORD *)(a1 + 32);
  result = 0;
  if ( (v1 & 0x7FFB8) == 0 )
    return *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}
