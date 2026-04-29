__int64 __fastcall sub_385B70(__int64 a1, signed int a2)
{
  char *v3; // rsi
  unsigned __int64 v4; // rax
  unsigned int v5; // ebp
  size_t v6; // r14
  const char **v7; // rax
  __int64 v8; // rdx
  const char *v9; // rbx
  unsigned __int8 *i; // r15
  unsigned __int8 *v11; // rax
  const char *v13; // rax
  const char *v14; // rbx
  char *s2; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a2 > 0 )
  {
    v3 = (char *)a1;
    s2 = nullptr;
    v16 = 0;
    sub_25F660((__int64 *)&s2, a1, a2, 0.0);
    v4 = *(int *)(a1 + 152);
    v5 = *(_DWORD *)(a1 + 152);
    v6 = ((_QWORD)v16 == 0) + (_QWORD)v16 - 1LL;
    if ( v4 < *(_QWORD *)(a1 + 136) )
    {
      while ( 2 )
      {
        v7 = (const char **)(*(_QWORD *)(a1 + 128) + 32 * v4);
        v8 = 0;
        v9 = s1;
        if ( v7[1] )
        {
          v9 = *v7;
          v8 = *(unsigned __int8 *)*v7;
        }
        for ( i = (unsigned __int8 *)v9; (_BYTE)v8 != 1 || i[1] != 32; i = v11 )
        {
          v11 = (unsigned __int8 *)tag_skipcode(i, v3, v8);
          if ( i == v11 )
            goto LABEL_10;
          v8 = *v11;
        }
        v13 = (const char *)tag_skipcodes(v9);
        v14 = v13;
        v3 = (char *)s1;
        if ( (_QWORD)v16 )
          v3 = s2;
        if ( !strncmp(v13, v3, v6) && v14[v6] == 2 && v14[v6 + 1] )
        {
          if ( s2 )
          {
            *(_QWORD *)&v16 = 0;
            qfree(s2);
          }
          return v5;
        }
LABEL_10:
        v4 = (int)++v5;
        if ( (unsigned __int64)(int)v5 < *(_QWORD *)(a1 + 136) )
          continue;
        break;
      }
    }
    if ( s2 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(s2);
    }
  }
  return (unsigned int)-1;
}
