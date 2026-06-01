unsigned __int64 __fastcall sub_320ED0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _DWORD *v6; // rax
  const char *v7; // rdx
  const char *v8; // rdx
  __int64 v9; // rax
  _QWORD *v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  const char *v14; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( *a2 == (_DWORD)qword_8CDA30 )
  {
    if ( a2[1] == HIDWORD(qword_8CDA30) )
      return v16 - __readfsqword(0x28u);
    if ( !byte_8CDA59 )
      goto LABEL_3;
LABEL_20:
    sub_199CF0(a1, (__int64)"</span>");
    v4 = qword_8CDA60;
    v11 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
    if ( (_QWORD *)qword_8CDA60 != v11 )
    {
      v12 = (_DWORD *)qword_8CDA60;
      while ( *v12 != 1 || v12[1] )
      {
        v12 += 2;
        if ( v11 == (_QWORD *)v12 )
          goto LABEL_31;
      }
      if ( v11 != (_QWORD *)v12 )
        goto LABEL_26;
    }
LABEL_31:
    v13 = xmmword_8CDA68 + 1;
    if ( *((_QWORD *)&xmmword_8CDA68 + 1) < (unsigned __int64)(xmmword_8CDA68 + 1) )
      goto LABEL_34;
    goto LABEL_32;
  }
  if ( byte_8CDA59 )
    goto LABEL_20;
LABEL_3:
  if ( byte_8CDA58 )
    goto LABEL_27;
LABEL_4:
  v3 = *a2;
  v4 = a2[1];
  if ( (_DWORD)v3 == (_DWORD)qword_8CDA30 )
  {
LABEL_28:
    if ( HIDWORD(qword_8CDA30) == (_DWORD)v4 )
      return v16 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v14 = nullptr;
    v15 = 0;
    if ( !(_DWORD)v4 )
      break;
    v5 = qword_8CDA60 + 8 * xmmword_8CDA68;
    if ( qword_8CDA60 != v5 )
    {
      v6 = (_DWORD *)qword_8CDA60;
      while ( (_DWORD)v3 != *v6 || (_DWORD)v4 != v6[1] )
      {
        v6 += 2;
        if ( (_DWORD *)v5 == v6 )
          goto LABEL_33;
      }
      if ( (_DWORD *)v5 != v6 )
      {
        sub_169A50((__int64 *)&v14, (__int64)"c%zu", ((__int64)v6 - qword_8CDA60 + 424) >> 3);
        goto LABEL_13;
      }
    }
LABEL_33:
    sub_3183B0(0.0, qword_8CDA60, v4, v3, v5);
LABEL_34:
    qword_8CDA60 = qvector_reserve(&qword_8CDA60, v4, v13, 8);
    v11 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
LABEL_32:
    *v11 = 1;
    *(_QWORD *)&xmmword_8CDA68 = xmmword_8CDA68 + 1;
LABEL_26:
    qword_8CDA50 = 1;
    byte_8CDA59 = 0;
    if ( !byte_8CDA58 )
      goto LABEL_4;
LABEL_27:
    sub_199CF0(a1, (__int64)"</span>");
    v3 = *a2;
    byte_8CDA58 = 0;
    v4 = a2[1];
    qword_8CDA30 = qword_8CDA40;
    if ( (_DWORD)v3 == (_DWORD)qword_8CDA40 )
      goto LABEL_28;
  }
  sub_169A50((__int64 *)&v14, (__int64)"c%d", v3);
LABEL_13:
  v7 = &s1;
  if ( (_QWORD)v15 )
    v7 = v14;
  sub_199CF0(a1, (__int64)"<span class=\"%s\">", v7);
  v9 = *(_QWORD *)a2;
  byte_8CDA58 = 1;
  qword_8CDA30 = v9;
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, "<span class=\"%s\">", v8);
  }
  return v16 - __readfsqword(0x28u);
}
