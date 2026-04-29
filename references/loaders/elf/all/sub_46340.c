unsigned int *__fastcall sub_46340(__int64 a1, int a2, const char *a3)
{
  __int64 v4; // rdx
  unsigned int *v5; // rbx
  unsigned int *v6; // rax
  unsigned int *v7; // rax
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 168) )
    sub_30AC0();
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned int **)(a1 + 32);
  s1 = nullptr;
  v10 = 0;
  v6 = v5;
  if ( !(v4 << 6) )
    return nullptr;
  if ( v5[1] != a2 )
    goto LABEL_4;
  if ( v5 )
  {
LABEL_8:
    if ( *(__int64 *)(a1 + 176) > 0 )
    {
      if ( *(_QWORD *)(a1 + 192) )
      {
        sub_461E0(*(_QWORD *)(a1 + 160), (__int64 *)&s1, (__int64 *)(a1 + 176), *v5);
        if ( (_QWORD)v10 )
        {
          if ( !strcmp(s1, a3) )
            goto LABEL_15;
LABEL_12:
          v6 = *(unsigned int **)(a1 + 32);
          v4 = *(_QWORD *)(a1 + 40);
LABEL_4:
          v7 = &v6[16 * v4];
          while ( 1 )
          {
            v5 += 16;
            if ( v5 == v7 )
              break;
            if ( a2 == v5[1] )
            {
              *(_QWORD *)&v10 = 0;
              goto LABEL_8;
            }
          }
          v5 = nullptr;
          goto LABEL_15;
        }
      }
    }
  }
  if ( strcmp(&::s1, a3) )
    goto LABEL_12;
LABEL_15:
  if ( s1 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(s1);
  }
  return v5;
}
