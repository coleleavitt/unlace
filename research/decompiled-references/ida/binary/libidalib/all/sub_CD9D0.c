__int64 __fastcall sub_CD9D0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // eax

  v2 = TProgram::application;
  v3 = TProgram::application + 136LL;
  while ( 1 )
  {
    if ( byte_2526BA )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 136) + 224LL))(v3) )
      {
        qmutex_lock();
        *(_BYTE *)(a1 + 120) = 0;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 136) + 208LL))(v3, a1 + 96);
        qmutex_unlock();
LABEL_13:
        byte_2526BA = 0;
        *(_DWORD *)(a1 + 88) = 2;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(a1 + 148) & 0xFFFFFFD) == 0 )
        goto LABEL_13;
    }
LABEL_9:
    if ( *(_DWORD *)(a1 + 88) != 4 || (v6 = sub_C3AE0(a1), v4 = v6, v6 == 30) )
    {
      v4 = 30;
      if ( (unsigned __int8)qsem_wait() )
        v4 = (unsigned int)sub_B8B90(a1);
    }
    v5 = sub_CD1F0(a1, v4);
    if ( *(_BYTE *)(a1 + 277) )
      return 0;
    v1 = v5 | v1 & 0xFFFFFF0000000000LL;
    sub_C3CA0(a1, v1);
  }
}

