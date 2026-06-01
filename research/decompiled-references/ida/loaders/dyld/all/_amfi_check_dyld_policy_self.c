__int64 __fastcall amfi_check_dyld_policy_self(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  __int64 result; // x0
  unsigned __int64 v10; // [xsp+8h] [xbp-28h] BYREF
  _QWORD v11[2]; // [xsp+10h] [xbp-20h] BYREF

  if ( !a2 )
    return 22;
  *a2 = 0;
  v10 = 0xAAAAAAAAAAAAAAAALL;
  v11[0] = a1;
  v11[1] = &v10;
  result = __mac_syscall("AMFI", (char *)&stru_20.maxprot + 2, v11, a4, a5, a6, a7, a8);
  if ( (_DWORD)result )
    result = (unsigned int)*__error();
  *a2 = v10;
  return result;
}
