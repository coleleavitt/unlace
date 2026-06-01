/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37C6C
// Address: 0x0000000000037C6C

//----- (0000000000037C6C) ----------------------------------------------------
__int64 __fastcall sub_37C6C(_DWORD *a1)
{
  __int64 result; // x0
  DIR *v3; // x0
  DIR *v4; // x19
  __int64 v5; // [xsp+0h] [xbp-50h] BYREF
  char name[32]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v7; // [xsp+28h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = ps_pglobal_lookup(0, nullptr, off_164000, &v5);
  if ( !(_DWORD)result )
  {
    sub_37BAC((__int64)name, 32, 32, (__int64)"/proc/%d/task/", *a1);
    v3 = opendir(name);
    if ( v3 )
    {
      v4 = v3;
      while ( readdir(v4) )
        ;
      closedir(v4);
    }
    return 10;
  }
  return result;
}
// 164000: using guessed type char *off_164000;
