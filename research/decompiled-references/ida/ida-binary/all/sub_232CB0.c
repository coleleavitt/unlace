__int64 __fastcall sub_232CB0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  int v4; // ebp
  _QWORD *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbp
  int v10; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v3 = 50;
  v11 = __readfsqword(0x28u);
  v4 = a2;
  free_debug_event(a1 + 128);
  *(_QWORD *)(a1 + 136) = -1;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 128) = 0xFFFFFFFFLL;
  v5 = QT::QCoreApplication::self;
  if ( (int)a2 >= 0 )
    v3 = a2;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v5[2] + 224LL))(v5 + 2) )
    {
      if ( !under_debugger )
        interr(40199, a2, v6, v7, a3);
      BUG();
    }
    v10 = -1;
    sub_20CEA0(dbg, 10, &v10, a1 + 128, v3);
    if ( v10 < 0 )
    {
      byte_8CC55A = 1;
      *(_DWORD *)(a1 + 88) = 8;
      return 30;
    }
    if ( v10 )
      break;
    if ( v4 >= 0 )
      return 30;
    a2 = 0;
    if ( (unsigned __int8)qsem_wait(*(_QWORD *)(a1 + 72), 0) )
    {
      result = sub_227F90((_QWORD *)a1, 0, a3);
      if ( (_DWORD)result != 30 )
        return result;
    }
  }
  v9 = v5[10];
  qmutex_lock(v9);
  if ( *(_BYTE *)(a1 + 278) )
  {
    *(_BYTE *)(a1 + 120) = 1;
    *(_DWORD *)(a1 + 124) = 0;
    (*(void (__fastcall **)(_QWORD *, __int64))(v5[2] + 208LL))(v5 + 2, a1 + 96);
  }
  *(_DWORD *)(a1 + 88) = 2;
  qmutex_unlock(v9);
  return 30;
}
