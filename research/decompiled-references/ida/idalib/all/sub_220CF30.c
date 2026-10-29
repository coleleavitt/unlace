__int64 __fastcall sub_220CF30(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  unsigned __int64 (__fastcall *v6)(__int64, unsigned int, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v7; // r8
  __int64 *v8; // rax
  __int64 *v9; // rdi

  v6 = *(unsigned __int64 (__fastcall **)(__int64, unsigned int, __int64, __int64, __int64, __int64))(*a1 + 32LL);
  if ( v6 == sub_21831C0 )
  {
    v7 = a1[4];
    v8 = *(__int64 **)(a1[3] + 8 * (a4 % v7));
    if ( v8 )
    {
      v9 = (__int64 *)*v8;
      if ( a4 == *(_DWORD *)(*v8 + 8) )
        return *((unsigned int *)v9 + 3) | 0x100000000LL;
      while ( 1 )
      {
        v9 = (__int64 *)*v9;
        if ( !v9 || a4 % v7 != *((unsigned int *)v9 + 2) % v7 )
          break;
        if ( a4 == *((_DWORD *)v9 + 2) )
          return *((unsigned int *)v9 + 3) | 0x100000000LL;
      }
    }
    return a6;
  }
  return ((__int64 (__fastcall *)(_QWORD *, _QWORD))v6)(a1, a4);
}
