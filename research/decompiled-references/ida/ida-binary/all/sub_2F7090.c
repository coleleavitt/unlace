__int64 __fastcall sub_2F7090(__int64 a1, unsigned int a2)
{
  QT::QAbstractItemView *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 *v8; // r13
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r12
  const char *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // [rsp+8h] [rbp-80h] BYREF
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  __int128 v16; // [rsp+18h] [rbp-70h]
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v3 = *(QT::QAbstractItemView **)(a1 + 72);
  v18 = __readfsqword(0x28u);
  v4 = sub_2E41E0(v3);
  if ( !v4 )
    return 0;
  if ( *(_QWORD *)(v4 + 56) )
  {
    v6 = set_processor_type(*(_QWORD *)(v4 + 48), a2, v5);
    if ( !(_BYTE)v6 )
      return 0;
  }
  else
  {
    v6 = set_processor_type(&s1, a2, v5);
    if ( !(_BYTE)v6 )
      return 0;
  }
  v8 = (__int64 *)sub_2E41D0(*(_QWORD *)(a1 + 72));
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v15 = nullptr;
  v16 = 0;
  v9 = strlen(s);
  v10 = v9 + 1;
  v11 = v9;
  v15 = (void *)qvector_reserve(&v15, 0, v9 + 1, 1);
  *(_QWORD *)&v16 = v10;
  memmove(v15, s, v11);
  v12 = &s1;
  *((_BYTE *)v15 + v11) = 0;
  if ( (_QWORD)v16 )
    v12 = (const char *)v15;
  v13 = sub_2E3EC0(v8, v12, &v14);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v12);
  }
  if ( v13 )
    sub_2E4320(*(QT::QAbstractItemView **)(a1 + 72));
  QT::QWidget::setEnabled(
    *(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 144LL),
    (*(_BYTE *)(**(_QWORD **)(a1 + 80) + 12LL) & 2) != 0);
  return v6;
}
