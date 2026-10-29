__int64 __fastcall sub_5CCCE0(__int64 (__fastcall **a1)(_QWORD, __int128 *, __int64), __int64 a2)
{
  unsigned __int64 *v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 *v7; // rax

  lock_func_range(a2, 1);
  if ( !a2 )
    goto LABEL_15;
  if ( *(char *)(a2 + 17) >= 0 )
  {
    v3 = (unsigned __int64 *)a2;
    goto LABEL_4;
  }
  v7 = sub_505D70((__int64)(a1 + 213), *(_QWORD *)(a2 + 24));
  v3 = v7;
  if ( v7 )
  {
    if ( *((char *)v7 + 17) < 0 )
      v3 = sub_505D70((__int64)(a1 + 213), v7[3]);
  }
  else
  {
LABEL_15:
    v3 = nullptr;
  }
LABEL_4:
  if ( (unsigned __int8)sub_5C7820(a1, (__int64)v3, 1) )
  {
    v4 = v3[1];
    if ( *((_DWORD *)v3 + 32) && v4 < *(_QWORD *)(v3[17] + 16LL * *((int *)v3 + 32) - 8) )
      v4 = *(_QWORD *)(v3[17] + 16LL * *((int *)v3 + 32) - 8);
    if ( v4 != -1 )
    {
      v5 = sub_3C19F0(a1, v4, *v3, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr);
      if ( (unsigned int)sub_3A1820((__int64)a1) == 25 )
        sub_3A4D00(v5);
      else
        sub_3A61A0(a1, v5, v5 + 1, 0x28u);
    }
  }
  return lock_func_range(a2, 0);
}
