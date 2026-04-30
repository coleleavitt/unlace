unsigned __int64 __fastcall sub_515870(QT::QAbstractScrollArea *this, double a2, double a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v6; // rdi
  const char *v7; // rax
  __int64 v9; // [rsp+8h] [rbp-20h] BYREF
  int v10[2]; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v3 = *((_QWORD *)this + 8);
  v11 = __readfsqword(0x28u);
  v10[0] = -1;
  v9 = qword_8D2398;
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v10[1] = v3 - 1;
    if ( v4 < v3 )
    {
      v6 = (_QWORD *)(*((_QWORD *)this + 7) + 48 * v4);
      if ( v6 )
      {
        v7 = sub_511DC0(v6, nullptr);
        v10[0] = qustrlen(v7);
      }
    }
    sub_514C10(this, (int *)&v9, 0, 0, a2, a3);
    sub_514C10(this, v10, 1, 0, a2, a3);
  }
  return v11 - __readfsqword(0x28u);
}
