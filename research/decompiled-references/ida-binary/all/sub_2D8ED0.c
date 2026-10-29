__int64 __fastcall sub_2D8ED0(QT::QAccessibleWidget *this, const char *a2, unsigned int a3, double a4)
{
  const char *v4; // rax
  int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rax
  int v11; // r9d
  char *v12; // rbx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 i; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r15
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // r8
  int v29; // r9d
  int v30; // eax
  int v31; // ecx
  int v32; // r9d
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // [rsp+0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+10h] [rbp-68h] BYREF
  __int128 v38; // [rsp+18h] [rbp-60h]
  char *v39; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v5 = (int)a2;
  v40 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (a6[0] & 0x10) != 0 )
  {
    v30 = sub_4F7B50(a3);
    v31 = (int)a2;
    a2 = "%s IDAMemoAccessible::getBoundaries(offset=%d, boundaryType=%s)\n";
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::getBoundaries(offset=%d, boundaryType=%s)\n",
      (unsigned int)&unk_5C2F25,
      v31,
      v30,
      v32);
  }
  v7 = QT::QAccessibleWidget::widget(this);
  v10 = (char *)sub_1EB5B0(v7, (__int64)a2, v8, v9, a4);
  v12 = v10;
  if ( v10[68]
    || (a2 = v10 + 40,
        v13 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v10 + 520LL))(v10, v10 + 40),
        (v12[68] = v13) != 0) )
  {
    v20 = *((_DWORD *)v12 + 16);
    v19 = v20;
    if ( v5 < (int)v20 )
    {
      if ( v5 < 0 )
        goto LABEL_26;
      v22 = sub_2D89B0(this, (__int64)a2, a4);
      v36 = v23;
      v35 = v22;
      sub_2D8310((__int64)&v35, (const char *)(unsigned int)v5, 0, v24, v25, v26, a4);
      if ( a3 > 4 )
      {
        v20 = 0;
        if ( a3 != 5 )
        {
          v19 = 0xFFFFFFFFLL;
          v20 = -1;
          v38 = 0;
          v37 = 2;
          v39 = "default";
          v4 = (const char *)sub_4F7B50(a3);
          QT::QMessageLogger::warning(
            (QT::QMessageLogger *)&v37,
            "IDAMemoAccessible::getBoundaries: Unknown boundary type %s",
            v4);
        }
      }
      else if ( a3 > 1 )
      {
        sub_2D84A0((int *)&v35, (_BYTE *)&dword_0 + 1, 0, 1, a4, v27, v11);
        v20 = v36;
        sub_2D84A0((int *)&v35, (_BYTE *)&dword_0 + 3, 1, 1, a4, v33, v34);
        v19 = (unsigned int)(v36 - 1);
      }
      else
      {
        if ( a3 )
        {
          sub_2D84A0((int *)&v35, (_BYTE *)&dword_0 + 2, 0, 1, a4, v27, v11);
          v20 = v36;
          sub_2D84A0((int *)&v35, &byte_4, 1, 1, a4, v28, v29);
        }
        else
        {
          v20 = v36;
          sub_2D84A0((int *)&v35, &byte_5, 1, 1, a4, v27, v11);
        }
        v19 = (unsigned int)v36;
      }
    }
LABEL_15:
    if ( (debug & 0x80000) == 0 )
      return (v19 << 32) | v20;
    goto LABEL_24;
  }
  v14 = *((_QWORD *)v12 + 5);
  if ( v14 )
  {
    v15 = *((_QWORD *)v12 + 6);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = (__int64 *)(v14 + 24 * i);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, a2);
          v14 = *((_QWORD *)v12 + 5);
        }
      }
    }
    *((_QWORD *)v12 + 6) = 0;
    qfree(v14, a2);
    *((_QWORD *)v12 + 5) = 0;
    *((_QWORD *)v12 + 7) = 0;
  }
  *((_DWORD *)v12 + 16) = -1;
  if ( v5 >= -1 )
  {
    v19 = 0xFFFFFFFFLL;
    v20 = -1;
    goto LABEL_15;
  }
LABEL_26:
  v19 = 0;
  v20 = 0;
  if ( (debug & 0x80000) == 0 )
    return (v19 << 32) | v20;
LABEL_24:
  if ( (a6[0] & 0x10) != 0 )
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::getBoundaries() => <%d,%d>\n",
      (unsigned int)&unk_5C2F25,
      v20,
      v19,
      v11);
  return (v19 << 32) | v20;
}
