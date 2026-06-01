__int64 __fastcall sub_5C6020(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 208) == 1 )
    return set_qerrno(65, a2);
  else
    return 0;
}

