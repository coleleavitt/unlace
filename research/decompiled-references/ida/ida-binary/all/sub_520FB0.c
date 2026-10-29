__int64 __fastcall sub_520FB0(QT::QAbstractItemView *a1, int a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[3] = __readfsqword(0x28u);
  v2 = (_QWORD *)QT::QAbstractItemView::model(a1);
  if ( v2
    && a2 >= 0
    && (v3 = v2,
        v4 = *v2,
        v6[0] = -1,
        v6[1] = 0,
        v6[2] = 0,
        a2 < (*(int (__fastcall **)(_QWORD *, _QWORD *))(v4 + 128))(v3, v6)) )
  {
    return *(unsigned int *)(v3[12] + 4LL * a2);
  }
  else
  {
    return 0;
  }
}
