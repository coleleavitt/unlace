__int64 __fastcall sub_3BD9F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8
    || (unsigned __int64)(a2 + a4) <= 0x100000000LL && (unsigned __int64)(a4 + a3) <= 0x100000000LL )
  {
    return sub_848CE0(a1 + 1040);
  }
  else
  {
    return 4294967294LL;
  }
}
