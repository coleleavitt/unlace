QT::QString *__fastcall sub_40D040(QT::QString *this, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v7; // r15
  const char *v8; // rsi
  const char *v10; // rsi
  const char *v11; // rbx
  unsigned __int64 v12; // rdx
  size_t v13; // rax
  double v14; // xmm0_8
  __int64 not_tail; // rax
  const char *v16; // [rsp+0h] [rbp-78h] BYREF
  __int128 v17; // [rsp+8h] [rbp-70h]
  const char *v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v4 = a3 & 1;
  v5 = a2;
  v20 = __readfsqword(0x28u);
  v16 = nullptr;
  v17 = 0;
  v7 = 0;
  if ( (get_flags_ex(a2, 4) & 0x600) == 0x200 )
  {
    not_tail = prev_not_tail(a2);
    v7 = a2 - not_tail;
    v5 = not_tail;
  }
  if ( (int)get_nice_colored_name(&v16, v5, (2 * v4) ^ 3) > 0 && v7 > 0 )
    append_disp(&v16, v7, v4);
  if ( v4 )
  {
    v8 = (const char *)&v16;
    sub_40CA70(this, (__int64)&v16, a4);
    goto LABEL_8;
  }
  v18 = nullptr;
  v10 = &s1;
  v19 = 0;
  if ( (_QWORD)v17 )
    v10 = v16;
  tag_remove(&v18, v10, 0);
  if ( (_QWORD)v19 )
  {
    v13 = v19 - 1;
    v11 = v18;
    v12 = (unsigned __int64)(v19 - 1) >> 63;
    if ( !v18 )
    {
LABEL_19:
      v13 = 0;
      if ( v11 )
        v13 = strlen(v11);
      goto LABEL_16;
    }
  }
  else
  {
    v11 = &s1;
    LOBYTE(v12) = 0;
    v13 = 0;
    if ( !&s1 )
      goto LABEL_19;
  }
  if ( (_BYTE)v12 )
    goto LABEL_19;
LABEL_16:
  v8 = (const char *)v13;
  v14 = QT::QString::fromUtf8(this, v13, v11);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v8, v14);
  }
LABEL_8:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v8);
  }
  return this;
}
