unsigned __int64 __fastcall sub_500150(__int64 *a1)
{
  __int64 v2; // r12
  __int64 *i; // rbx
  char *v4; // rdi
  __int64 v5; // r12
  __int64 j; // rbp
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  __int64 v11; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 128) )
  {
    *((_BYTE *)a1 + 128) = 0;
    if ( (debug & 0x100) != 0 && a1[3] )
    {
      v11 = *a1;
      ptr = nullptr;
      v13 = 0;
      sub_79BD30(a1 + 6, v11, &ptr);
      if ( *(_DWORD *)(a1[1] + 68) <= *(_DWORD *)(a1[1] + 72) )
        sub_365330();
      if ( ptr )
      {
        *(_QWORD *)&v13 = 0;
        qfree(ptr);
      }
    }
    v2 = a1[13];
    for ( i = a1 + 11; (__int64 *)v2 != i; v2 = std::_Rb_tree_increment() )
      sub_79BF70(a1 + 6, *a1, (unsigned int)(char)(*(_BYTE *)(v2 + 32) - *(_BYTE *)(a1[1] + 68) + 97));
    sub_4FCE30((void *)a1[12]);
    v4 = (char *)a1[2];
    a1[13] = (__int64)i;
    a1[12] = 0;
    a1[14] = (__int64)i;
    a1[15] = 0;
    if ( v4 )
    {
      v5 = a1[3];
      if ( v5 )
      {
        for ( j = 0; j != v5; ++j )
        {
          v7 = &v4[64 * j];
          v8 = *((void **)v7 + 4);
          if ( v8 )
          {
            *((_QWORD *)v7 + 5) = 0;
            qfree(v8);
          }
          v9 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            qfree(v9);
          }
          v4 = (char *)a1[2];
        }
      }
      a1[3] = 0;
      qfree(v4);
      a1[2] = 0;
      a1[4] = 0;
    }
    a1[6] = -1;
  }
  return v14 - __readfsqword(0x28u);
}

