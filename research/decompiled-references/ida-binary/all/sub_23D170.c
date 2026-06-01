__int64 __fastcall sub_23D170(__int64 a1, double a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // r15
  __int64 v5; // rdx
  char *v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v11; // [rsp+0h] [rbp-48h]

  v3 = QT::QCoreApplication::self;
  v4 = QT::QCoreApplication::self + 2;
  while ( 1 )
  {
    if ( byte_8CC55A )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(v3[2] + 224LL))(v4) )
      {
        v11 = v3[10];
        qmutex_lock(v11);
        *(_BYTE *)(a1 + 120) = 0;
        (*(void (__fastcall **)(_QWORD *, __int64))(v3[2] + 208LL))(v4, a1 + 96);
        qmutex_unlock(v11);
LABEL_13:
        byte_8CC55A = 0;
        *(_DWORD *)(a1 + 88) = 2;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(a1 + 148) & 0xFFFFFFD) == 0 )
        goto LABEL_13;
    }
LABEL_9:
    if ( *(_DWORD *)(a1 + 88) != 4 || (v9 = sub_232CB0(a1, 0xFFFFFFFFLL, a2), v7 = v9, v9 == 30) )
    {
      v7 = 30;
      if ( (unsigned __int8)qsem_wait(*(_QWORD *)(a1 + 72), 0xFFFFFFFFLL) )
        v7 = (unsigned int)sub_227F90((_QWORD *)a1, 30, a2);
    }
    v8 = sub_23C9A0((unsigned int *)a1, v7, v5, v6, a2);
    if ( *(_BYTE *)(a1 + 277) )
      return 0;
    v2 = v8 | v2 & 0xFFFFFF0000000000LL;
    sub_232E60(a1, v2);
  }
}
