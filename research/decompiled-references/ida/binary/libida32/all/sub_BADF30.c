__int64 __fastcall sub_BADF30(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rbx
  __int64 v6; // rbp

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6784);
  if ( v4 == sub_BA3560 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
  {
    v5 = a2 + 64;
    v6 = a2 + 64 + 32LL * *(_QWORD *)(a2 + 48);
    if ( a2 + 64 == v6 )
      return 1;
    while ( (*(_BYTE *)v5 & 0xFD) != 1
         || (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, *(_QWORD *)(v5 + 8)) )
    {
      v5 += 32;
      if ( v6 == v5 )
        return 1;
    }
    return 0;
  }
  return 0;
}

