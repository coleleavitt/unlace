unsigned __int64 __fastcall sub_F5DDD0(__int64 a1)
{
  unsigned __int64 result; // rax

  result = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (**(_DWORD **)(a1 + 24) & 0x8000) == 0 )
    return *(_QWORD *)(a1 + 32);
  return result;
}
