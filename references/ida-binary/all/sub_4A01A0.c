__int64 __fastcall sub_4A01A0(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  char *v4; // r14
  unsigned int v5; // r13d
  char *v6; // rbx
  unsigned __int64 v7; // rbp
  char *v9; // rbx
  char *v10; // rax
  char v11; // dl
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  v14 = __readfsqword(0x28u);
  s1 = nullptr;
  v13 = 0;
  (*(void (__fastcall **)(__int64 *, char **))(v2 + 536))(a1, &s1);
  v3 = v13;
  v4 = s1;
  v5 = 1;
  v6 = (char *)&::s1;
  if ( (_QWORD)v13 )
    v6 = s1;
  if ( strcmp(v6, a2) )
  {
    v5 = 0;
    if ( (a1[251] & 2) != 0 )
    {
      v7 = strlen(a2);
      LOBYTE(v5) = a2 == nullptr || v7 == 0;
      if ( (_BYTE)v5 || v3 && v3 - 1 >= v7 && !strncmp(v4, a2, v7) )
      {
        v9 = &v6[v7];
        v5 = 0;
        v10 = v9 + 1;
        if ( *v9 == 58 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            while ( 1 )
            {
              ++v10;
              if ( (unsigned __int8)(v11 - 48) > 9u )
                break;
              v11 = *v10;
              if ( !*v10 )
                goto LABEL_16;
            }
            v5 = 0;
          }
          else
          {
LABEL_16:
            v5 = 1;
          }
        }
      }
    }
  }
  if ( v4 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v4, a2);
  }
  return v5;
}
