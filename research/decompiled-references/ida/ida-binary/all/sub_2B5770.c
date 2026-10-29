unsigned __int64 __fastcall sub_2B5770(QT::QAbstractScrollArea **a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rcx
  int v7; // r14d
  void (*v8)(); // rax
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v6 = a4 & 0xC;
  if ( (_DWORD)v6 )
  {
    v7 = 2;
  }
  else
  {
    if ( (a4 & 3) == 0 )
    {
      clr_node_info(*(_QWORD *)(a2 + 72), a3, a4, v6);
      return v10 - __readfsqword(0x28u);
    }
    v7 = 1;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = *((void (**)())*a1 + 104);
    if ( v8 != nullsub_78 )
      ((void (__fastcall *)(QT::QAbstractScrollArea **, __int64, _QWORD, __int64))v8)(a1, a2, a3, 0xFFFFFFFFLL);
  }
  clr_node_info(*(_QWORD *)(a2 + 72), a3, a4, v6);
  if ( v7 == 1 )
    sub_1F4880(a1[2], 0);
  else
    (*((void (__fastcall **)(QT::QAbstractScrollArea **, _QWORD, _QWORD))*a1 + 19))(a1, 0, 0);
  return v10 - __readfsqword(0x28u);
}
