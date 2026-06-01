__int64 __fastcall sub_5922D0(_QWORD *a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  bool v6; // al
  int v7; // ebx
  __int64 v9; // rdx
  const void *v10; // rsi

  if ( *a1 && ((unsigned __int8 (__fastcall *)(_QWORD))*a1)(a1[2]) != 1 )
    return 0;
  v6 = !a3[2] || a3[2] == -6;
  if ( (int)a3[2] > 0 || v6 && (v7 = a3[4], v7 == getpid()) )
    sub_591594(4, 1u, 0, 0);
  memset(&unk_8D2A40, 0, 0x630u);
  memcpy(&unk_8D2A40, a3, 0x80u);
  v9 = 117;
  qmemcpy(&unk_8D2AC8, a4, 0x3A8u);
  v10 = a4 + 117;
  if ( a4[28] )
  {
    v10 = (const void *)a4[28];
    memcpy(&unk_8D2E70, v10, 0x200u);
  }
  dword_8D2AC0 = syscall(186, v10, v9);
  if ( a1[15] && ((unsigned __int8 (__fastcall *)(void *, __int64, _QWORD))a1[15])(&unk_8D2A40, 1584, a1[2]) )
    return 1;
  else
    return sub_592500(a1, &unk_8D2A40);
}
