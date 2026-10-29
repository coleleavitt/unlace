QT::QString *__fastcall sub_518A60(QT::QString *this, unsigned __int8 *a2, _BYTE *a3, double a4)
{
  __int64 v4; // rcx
  char v5; // r8
  char *v6; // rax
  size_t v7; // rax
  void *ptr[4]; // [rsp+0h] [rbp-448h] BYREF
  char s[1023]; // [rsp+20h] [rbp-428h] BYREF
  char v11; // [rsp+41Fh] [rbp-29h] BYREF
  char v12; // [rsp+420h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+428h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
  {
    *((_QWORD *)this + 2) = 0;
    *(_OWORD *)this = 0;
    return this;
  }
  v4 = *a2;
  v5 = 1;
  v6 = s;
  if ( !(_BYTE)v4 )
    goto LABEL_15;
  v5 = 1;
  v6 = s;
  do
  {
    while ( 1 )
    {
      ++a2;
      if ( (_BYTE)v4 == 126 )
      {
        if ( !v5 )
          goto LABEL_7;
        v4 = 38;
        v5 = 0;
LABEL_5:
        if ( v6 >= &v12 )
          goto LABEL_22;
        goto LABEL_6;
      }
      if ( (_BYTE)v4 != 38 )
        goto LABEL_5;
      if ( v6 >= &v12 )
      {
LABEL_22:
        if ( under_debugger )
          goto LABEL_26;
        interr(518, a2, a3, v4, a4);
LABEL_24:
        if ( !under_debugger )
          interr(519, a2, a3, v4, a4);
LABEL_26:
        BUG();
      }
      *v6++ = 38;
      if ( v6 >= &v12 )
        break;
LABEL_6:
      *v6++ = v4;
      if ( v6 >= &v12 )
        break;
LABEL_7:
      v4 = *a2;
      if ( !(_BYTE)v4 )
        goto LABEL_14;
    }
    v4 = *a2;
    v11 = 0;
    v6 = &v11;
  }
  while ( (_BYTE)v4 );
LABEL_14:
  if ( v6 >= &v12 )
    goto LABEL_24;
LABEL_15:
  *v6 = 0;
  if ( a3 )
    *a3 = v5 ^ 1;
  v7 = strlen(s);
  QT::QString::fromUtf8(ptr, v7, s);
  QT::QString::trimmed_helper(this, (QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
