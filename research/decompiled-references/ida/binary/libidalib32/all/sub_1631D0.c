__int64 __fastcall sub_1631D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !*(_BYTE *)(a1 + 984) )
    return MEMORY[0x3010102464C466F](0);
  if ( *(_QWORD *)(a1 + 480) )
  {
    v2 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v2 = *(_QWORD *)(a1 + 848);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2);
  }
  else
  {
    sub_1582F0(a1);
    return sub_163220(a1, a2);
  }
}

