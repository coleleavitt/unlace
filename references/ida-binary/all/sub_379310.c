__int64 __fastcall sub_379310(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64, int); // rax

  v5 = *(int *)(a4 + 12);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 640LL);
  if ( v6 == sub_374FA0 )
  {
    if ( v5 < *(_QWORD *)(a2 + 280) )
      return sub_2A9050(a1, a2, a3);
  }
  else if ( (v6(a1, a2, v5) & 0x100) == 0 )
  {
    return sub_2A9050(a1, a2, a3);
  }
  return 0;
}
