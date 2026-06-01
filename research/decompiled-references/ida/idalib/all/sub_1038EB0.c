void __fastcall sub_1038EB0(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 260) != 20 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 584LL))(
           a1,
           "quadword-atomics",
           16) )
    {
      *(_BYTE *)(a1 + 287) = 0x80;
    }
  }
}
