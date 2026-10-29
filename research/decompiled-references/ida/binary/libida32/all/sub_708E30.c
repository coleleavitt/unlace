__int64 __fastcall sub_708E30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v2 = a1[1];
  qmutex_lock(v2);
  v3 = a1[4];
  if ( v3 )
  {
    v4 = a1[3];
    v5 = 0;
    while ( *(_QWORD *)(v4 + 8 * v5) != a2 )
    {
      if ( ++v5 == v3 )
        goto LABEL_9;
    }
    if ( v5 < v3 )
    {
      if ( a1[2] == v5 )
      {
        a1[2] = 0;
        if ( !*(_DWORD *)(a2 + 12) )
          goto LABEL_8;
      }
      else if ( !*(_DWORD *)(a2 + 12) )
      {
LABEL_8:
        *(_QWORD *)(v4 + 8 * v5) = 0;
        qmutex_unlock(v2);
        return 1;
      }
      if ( !byte_2CACFEC )
      {
        if ( !under_debugger )
          interr(2089);
        BUG();
      }
      goto LABEL_8;
    }
  }
LABEL_9:
  qmutex_unlock(v2);
  return 0;
}

