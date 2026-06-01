unsigned __int64 __fastcall sub_517D80(__int64 *a1)
{
  __int64 v2; // r12
  __int64 *i; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rdi
  __int64 v8; // r12
  __int64 j; // rbp
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  __int64 v14; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 136) )
  {
    *((_BYTE *)a1 + 136) = 0;
    if ( (debug & 0x100) != 0 && a1[3] )
    {
      v14 = *a1;
      ptr = nullptr;
      v16 = 0;
      sub_7BF130(a1 + 6, v14, &ptr);
      if ( *(_DWORD *)(a1[1] + 68) <= *(_DWORD *)(a1[1] + 72) )
        sub_368890();
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
    }
    v2 = a1[14];
    for ( i = a1 + 12; (__int64 *)v2 != i; v2 = std::_Rb_tree_increment(v2, v4, v5, v6) )
    {
      v4 = *a1;
      sub_7BF370(a1 + 6, *a1, (unsigned int)(char)(*(_BYTE *)(v2 + 32) - *(_BYTE *)(a1[1] + 68) + 97));
    }
    sub_5149B0((void *)a1[13]);
    v7 = (char *)a1[2];
    a1[14] = (__int64)i;
    a1[13] = 0;
    a1[15] = (__int64)i;
    a1[16] = 0;
    if ( v7 )
    {
      v8 = a1[3];
      if ( v8 )
      {
        for ( j = 0; j != v8; ++j )
        {
          v10 = &v7[64 * j];
          v11 = *((void **)v10 + 4);
          if ( v11 )
          {
            *((_QWORD *)v10 + 5) = 0;
            qfree(v11);
          }
          v12 = *(void **)v10;
          if ( *(_QWORD *)v10 )
          {
            *((_QWORD *)v10 + 1) = 0;
            qfree(v12);
          }
          v7 = (char *)a1[2];
        }
      }
      a1[3] = 0;
      qfree(v7);
      a1[2] = 0;
      a1[4] = 0;
    }
    *((_OWORD *)a1 + 3) = -1;
  }
  return v17 - __readfsqword(0x28u);
}
