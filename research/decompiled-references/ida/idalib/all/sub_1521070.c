__int64 __fastcall sub_1521070(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax

  if ( a3 )
    return 0;
  v4 = a2 == 12 && *(_QWORD *)a1 == 0x6E6F6974636E7566LL && *(_DWORD *)(a1 + 8) == 1701869908;
  return (v4 << 32) | 0x11;
}
