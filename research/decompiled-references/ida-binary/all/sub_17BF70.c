__int64 __fastcall sub_17BF70(__int64 a1, __int64 a2)
{
  char redo_action_label; // al
  __int64 v4; // rdx
  char v5; // bp
  void *v6; // rsi
  __int64 v7; // rbx
  size_t v8; // r14
  __int64 v9; // r15
  _BYTE *v10; // rax
  const char *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  src = nullptr;
  v18 = 0;
  redo_action_label = get_redo_action_label(&src);
  v4 = v18;
  v5 = redo_action_label;
  v6 = src;
  if ( (_QWORD)v18 )
  {
    v7 = v18 + 5;
    v8 = v18 - 1;
    v9 = v18 + 4;
    if ( *((_QWORD *)&v18 + 1) >= (unsigned __int64)(v18 + 5) )
    {
      *(_QWORD *)&v18 = v18 + 5;
      *((_BYTE *)src + v9) = 0;
      if ( v4 == 1 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  else
  {
    if ( *((_QWORD *)&v18 + 1) > 5u )
    {
      *(_QWORD *)&v18 = 6;
      *((_BYTE *)src + 5) = 0;
      goto LABEL_4;
    }
    v8 = 0;
    v7 = 6;
    v9 = 5;
  }
  v6 = (void *)qvector_reserve(&src, src, v7, 1);
  src = v6;
  *(_QWORD *)&v18 = v7;
  *((_BYTE *)v6 + v9) = 0;
  if ( v8 )
  {
LABEL_13:
    v6 = src;
    memmove((char *)src + 5, src, v8);
  }
LABEL_4:
  v10 = src;
  v11 = &s1;
  *(_DWORD *)src = 1868850514;
  v10[4] = 32;
  if ( (_QWORD)v18 )
    v11 = (const char *)src;
  v12 = sub_534430(*(_QWORD *)(a2 + 72));
  if ( v12 )
  {
    v6 = &dword_0 + 1;
    sub_537630(v12, 1, v11);
  }
  if ( src )
  {
    *(_QWORD *)&v18 = 0;
    qfree(src, v6, v13, v14, v15);
  }
  return v5 == 0 ? 7 : 3;
}
