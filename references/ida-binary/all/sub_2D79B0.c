__int64 __fastcall sub_2D79B0(QT::QAccessibleWidget *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rax
  int v7; // r8d
  int v8; // r9d
  char *v9; // rbx
  const char *v10; // rsi
  char v11; // al
  unsigned int v12; // ebp
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 i; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  bool v19; // zf

  v3 = QT::QAccessibleWidget::widget(a1);
  v6 = (char *)sub_1EB5B0(v3, a2, v4, v5, a3);
  v9 = v6;
  if ( v6[68]
    || (v10 = v6 + 40,
        v11 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v6 + 520LL))(v6, v6 + 40),
        (v9[68] = v11) != 0) )
  {
    v12 = *((_DWORD *)v9 + 16);
    goto LABEL_4;
  }
  v14 = *((_QWORD *)v9 + 5);
  if ( !v14 )
  {
    *((_DWORD *)v9 + 16) = -1;
LABEL_17:
    v12 = -1;
    goto LABEL_4;
  }
  v15 = *((_QWORD *)v9 + 6);
  if ( v15 )
  {
    for ( i = 0; i != v15; ++i )
    {
      v17 = (__int64 *)(v14 + 24 * i);
      v18 = *v17;
      if ( *v17 )
      {
        v17[1] = 0;
        qfree(v18, v10);
        v14 = *((_QWORD *)v9 + 5);
      }
    }
  }
  *((_QWORD *)v9 + 6) = 0;
  v12 = -1;
  qfree(v14, v10);
  v19 = v9[68] == 0;
  *((_QWORD *)v9 + 5) = 0;
  *((_QWORD *)v9 + 7) = 0;
  *((_DWORD *)v9 + 16) = -1;
  if ( v19 )
    goto LABEL_17;
LABEL_4:
  if ( (debug & 0x80000) == 0 || (a6[0] & 0x20) == 0 )
    return v12;
  sub_4F7CB0(32, (unsigned int)"%s IDAMemoAccessible::characterCount() => %d\n", (unsigned int)&unk_5C2F25, v12, v7, v8);
  return v12;
}
