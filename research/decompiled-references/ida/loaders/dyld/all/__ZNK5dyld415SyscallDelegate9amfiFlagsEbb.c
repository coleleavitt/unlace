__int64 __fastcall dyld4::SyscallDelegate::amfiFlags(dyld4::SyscallDelegate *this, int a2, int a3)
{
  __int64 v3; // x8
  __int64 v4; // x0
  __int64 v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = 0;
  v3 = 2;
  if ( !a2 )
    v3 = 0;
  if ( a3 )
    v4 = v3 | 4;
  else
    v4 = v3;
  if ( (unsigned int)amfi_check_dyld_policy_self(v4, &v6) )
    return 0;
  else
    return v6;
}
