__int64 __fastcall sub_B74840(__int64 a1)
{
  __int64 v1; // rdi

  if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}

