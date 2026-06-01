__int64 __fastcall MACHOMERGER_HOOK___fcntl(__int64 a1, int a2, __int128 *a3)
{
  __int128 v3; // q1
  _BOOL4 *v4; // x1
  _BOOL4 v6; // [xsp+50h] [xbp-A0h] BYREF
  __int128 v7; // [xsp+58h] [xbp-98h]
  __int128 v8; // [xsp+68h] [xbp-88h]
  __int128 v9; // [xsp+78h] [xbp-78h]
  __int64 v10; // [xsp+88h] [xbp-68h]

  if ( (unsigned int)(a2 - 59) <= 0x26 && ((1LL << ((unsigned __int8)a2 - 59)) & 0x4000000005LL) != 0 )
  {
    v6 = a2 == 59;
    if ( a3 )
    {
      v3 = a3[1];
      v7 = *a3;
      v8 = v3;
      v9 = a3[2];
      v10 = *((_QWORD *)a3 + 6);
      v4 = &v6;
    }
    else
    {
      v4 = nullptr;
    }
    jbclient_mach_trust_file(a1, v4);
  }
  return msyscall_errno(92);
}
