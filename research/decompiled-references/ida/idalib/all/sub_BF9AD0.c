unsigned __int64 __fastcall sub_BF9AD0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_DWORD *)(a1 + 8) & 3) == 1 )
  {
    v2 = *(_QWORD *)(result + 40);
    result = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 7) != 0 )
      return 0;
  }
  return result;
}
