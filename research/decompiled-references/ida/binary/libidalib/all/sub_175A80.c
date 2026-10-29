__int64 __fastcall sub_175A80(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi

  qmutex_lock();
  v3 = a1[3];
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    while ( *(_DWORD *)(a1[2] + 24 * v5 + 16) != a2 )
    {
      v5 = ++v4;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 256LL))(a1, v5, 1);
    qmutex_unlock();
    return 1;
  }
  else
  {
LABEL_6:
    qmutex_unlock();
    return 0;
  }
}

