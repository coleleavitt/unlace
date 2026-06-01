__int64 __fastcall sub_23D2D0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  char *v10; // rcx

  qmutex_lock(*(_QWORD *)(a1 + 264));
  if ( *(int *)(a1 + 272) <= 0 )
  {
    qmutex_unlock(*(_QWORD *)(a1 + 264));
    return 0;
  }
  else if ( *(_QWORD *)(a1 + 200) )
  {
    if ( under_debugger )
      BUG();
    interr(40211, a2, v5, v6, a3);
    return sub_23D430();
  }
  else
  {
    *(_QWORD *)(a1 + 200) = a2;
    qsem_post(*(_QWORD *)(a1 + 80));
    qmutex_unlock(*(_QWORD *)(a1 + 264));
    qmutex_unlock(QT::QCoreApplication::self[10]);
    if ( !*(_BYTE *)(a1 + 277) )
    {
      while ( (unsigned __int8)qsem_wait(*(_QWORD *)(a1 + 72), 0xFFFFFFFFLL) )
      {
        v8 = sub_227F90((_QWORD *)a1, 0xFFFFFFFFLL, a3);
        if ( v8 == 30 )
          break;
        if ( v8 == 6 )
        {
          v4 &= 0xFFFFFF0000000000LL;
          sub_232E60(a1, v4);
        }
        else
        {
          v3 = (unsigned int)sub_23C9A0((unsigned int *)a1, v8, v9, v10, a3) | v3 & 0xFFFFFF0000000000LL;
          sub_232E60(a1, v3);
        }
        if ( *(_BYTE *)(a1 + 277) )
          return 1;
      }
      sub_232E60(a1, 0x100000000uLL);
    }
    return 1;
  }
}
