__int64 sub_230E60()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+8h] [rbp-40h]
  int v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  QT::QWidget::setEnabled(*((QT::QWidget **)qword_8CD748 + 46), 1);
  if ( !(unsigned __int8)netnode_inited() )
    return sub_317B20(qword_8CD748);
  v7 = 0;
  v8 = 0;
  LOBYTE(v9) = 0;
  sub_268E70(&v7, 0);
  sub_2687C0((unsigned int)&v7, 2, v0, v1, v2, v3, v7, v8, v9, v10, v11, v12, v13);
  if ( !(_BYTE)byte_8CBDA8 )
  {
    if ( __cxa_guard_acquire(&byte_8CBDA8) )
    {
      xmmword_8CBDC8 = 0;
      qword_8CBDC0 = 0;
      qword_8CBDC0 = qvector_reserve(&qword_8CBDC0, 0, 5, 1);
      *(_QWORD *)&xmmword_8CBDC8 = 5;
      strcpy((char *)qword_8CBDC0, "Live");
      word_8CBDD8 = 257;
      qword_8CBDE0 = 0;
      qword_8CBDF8 = 0;
      xmmword_8CBDE8 = 0;
      xmmword_8CBE00 = 0;
      v5 = (_DWORD *)qvector_reserve(&qword_8CBDF8, 0, 8, 1);
      qword_8CBDF8 = (__int64)v5;
      *(_QWORD *)&xmmword_8CBE00 = 8;
      *v5 = 1634100548;
      *(_DWORD *)((char *)v5 + 3) = 1953264993;
      *(_BYTE *)(qword_8CBDF8 + 7) = 0;
      word_8CBE10 = 257;
      qword_8CBE18 = 0;
      qword_8CBE30 = 0;
      xmmword_8CBE20 = 0;
      xmmword_8CBE38 = 0;
      v6 = (_DWORD *)qvector_reserve(&qword_8CBE30, 0, 8, 1);
      qword_8CBE30 = (__int64)v6;
      *(_QWORD *)&xmmword_8CBE38 = 8;
      *v6 = 1634100548;
      *(_DWORD *)((char *)v6 + 3) = 1953264993;
      *(_BYTE *)(qword_8CBE30 + 7) = 0;
      word_8CBE48 = 256;
      qword_8CBE50 = 0;
      qword_8CBE68 = 0;
      xmmword_8CBE58 = 0;
      xmmword_8CBE70 = 0;
      qword_8CBE68 = qvector_reserve(&qword_8CBE68, 0, 9, 1);
      *(_QWORD *)&xmmword_8CBE70 = 9;
      strcpy((char *)qword_8CBE68, "Original");
      word_8CBE80 = 256;
      xmmword_8CBE90 = 0;
      qword_8CBE88 = 0;
      __cxa_atexit((void (*)(void *))sub_228620, nullptr, &off_85BC80);
      __cxa_guard_release(&byte_8CBDA8);
    }
  }
  sub_269140(&qword_8CBDC0, 4, 0);
  jvalue_t_clear(&v7);
  return v10 - __readfsqword(0x28u);
}
