__int64 __fastcall sub_CDB40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r14
  unsigned int v5; // eax

  qmutex_lock();
  if ( *(int *)(a1 + 272) <= 0 )
  {
    qmutex_unlock();
    return 0;
  }
  else if ( *(_QWORD *)(a1 + 200) )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_CDCA0(40211);
  }
  else
  {
    *(_QWORD *)(a1 + 200) = a2;
    qsem_post();
    qmutex_unlock();
    qmutex_unlock();
    if ( !*(_BYTE *)(a1 + 277) )
    {
      while ( (unsigned __int8)qsem_wait() )
      {
        v5 = sub_B8B90(a1);
        if ( v5 == 30 )
          break;
        if ( v5 == 6 )
        {
          v3 &= 0xFFFFFF0000000000LL;
          sub_C3CA0(a1, v3);
        }
        else
        {
          v2 = (unsigned int)sub_CD1F0(a1, v5) | v2 & 0xFFFFFF0000000000LL;
          sub_C3CA0(a1, v2);
        }
        if ( *(_BYTE *)(a1 + 277) )
          return 1;
      }
      sub_C3CA0(a1, 0x100000000uLL);
    }
    return 1;
  }
}

