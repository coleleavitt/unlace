__int64 __fastcall sub_49F3C0(__int64 *a1, QT::QAbstractItemView *a2, int *a3)
{
  __int64 v3; // rax
  unsigned __int8 (*v5)(void); // rax
  __int64 *v6; // r13
  unsigned __int64 v7; // rbx
  int v8; // ebp
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *a1;
  v13[3] = __readfsqword(0x28u);
  v5 = *(unsigned __int8 (**)(void))(v3 + 464);
  if ( (char *)v5 == (char *)sub_49AF10 )
  {
    v6 = a1 + 13;
    if ( !(unsigned __int8)sub_4DFF10(a1 + 13) && *((_DWORD *)a1 + 594) != 1 )
    {
      if ( a1[247] )
      {
        if ( (QT::QAbstractItemView *)a1[298] == a2 )
          goto LABEL_10;
        goto LABEL_4;
      }
      return 0;
    }
  }
  else
  {
    v6 = a1 + 13;
    if ( !v5() )
      return 0;
  }
  if ( (QT::QAbstractItemView *)a1[298] == a2 )
  {
LABEL_10:
    v10 = (_QWORD *)QT::QAbstractItemView::model(a2);
    sub_4988A0(v13, v10, (__int64)a3);
    v7 = SLODWORD(v13[0]);
    v8 = HIDWORD(v13[0]);
    goto LABEL_5;
  }
LABEL_4:
  v7 = *a3;
  v8 = a3[1];
LABEL_5:
  if ( v7 >= *(_QWORD *)(sub_4E07A0(v6, -2) + 16) )
    return 0;
  v11 = sub_4DFB30(v6);
  v12 = sub_4D8990(v11);
  if ( !v12 || *(_DWORD *)(v12 + 96) != v8 )
    return 0;
  return v12 + 48;
}
