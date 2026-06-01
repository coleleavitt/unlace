__int64 __fastcall sub_2F9720(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // r13
  size_t v3; // rax
  size_t v4; // r15
  size_t v5; // rbp
  const char **v6; // r14
  const char *v7; // rsi
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  bool v11; // dl
  int v12; // ebp
  int v14; // eax
  const char **v15; // [rsp+0h] [rbp-78h] BYREF
  __int128 v16; // [rsp+8h] [rbp-70h]
  char s[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v1 = sub_2E41E0(*(QT::QAbstractItemView **)(a1 + 72));
  if ( v1 )
  {
    v2 = &s1;
    if ( *(_QWORD *)(v1 + 56) )
      v2 = *(const char **)(v1 + 48);
    if ( !getinf_buf(1, s, 16) )
      s[0] = 0;
    v15 = nullptr;
    v16 = 0;
    v3 = strlen(s);
    v4 = v3 + 1;
    v5 = v3;
    v15 = (const char **)qvector_reserve(&v15, 0, v3 + 1, 1);
    *(_QWORD *)&v16 = v4;
    memmove(v15, s, v5);
    *((_BYTE *)v15 + v5) = 0;
    v6 = v15;
    v7 = (const char *)v15;
    if ( !(_QWORD)v16 )
      v7 = &s1;
    v8 = strcasecmp(v2, v7);
    if ( v6 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v6, v7);
    }
    if ( v8 )
    {
      v14 = sub_1698A0(1, (int)"Do you want to change the processor type to %s?", v2);
      if ( v14 == 1 )
      {
        sub_2F7090(a1, 3u);
      }
      else if ( v14 == -1 )
      {
        return v18 - __readfsqword(0x28u);
      }
    }
  }
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)&v15);
  v9 = (int)v15;
  v15 = nullptr;
  v10 = sub_2F8E30((__m128i *)(a1 + 88), v9, &v15);
  v11 = 0;
  v12 = v10;
  if ( v15 )
  {
    if ( v15[5] )
      v11 = strcmp(v15[4], "Dump file") == 0;
  }
  sub_2F7020(a1, v11 || v12 == 2 || (v12 & 0xFFFFFFF7) == 5);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 432LL))(a1, 1);
}
