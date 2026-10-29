__int64 __fastcall sub_479300(_QWORD *a1, int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rsi

  v2 = a1[8];
  qmutex_lock(v2);
  v4 = a1[3];
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    while ( *(_DWORD *)(a1[2] + 24 * v6 + 16) != a2 )
    {
      v6 = ++v5;
      if ( v5 >= v4 )
        goto LABEL_6;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 256LL))(a1, v6, 1);
    qmutex_unlock(v2);
    return 1;
  }
  else
  {
LABEL_6:
    qmutex_unlock(v2);
    return 0;
  }
}
