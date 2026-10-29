__int64 __fastcall sub_15E070(__int64 a1)
{
  __int64 v1; // rax

  if ( !*(_BYTE *)(a1 + 984) )
    return MEMORY[0x3010102464C462F](0);
  if ( *(_QWORD *)(a1 + 480) )
  {
    v1 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v1 = *(_QWORD *)(a1 + 848);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 176LL))(v1);
  }
  else
  {
    sub_1582F0(a1);
    return sub_15E0C0(a1);
  }
}

