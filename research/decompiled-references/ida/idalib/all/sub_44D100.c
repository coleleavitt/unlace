__int64 __fastcall sub_44D100(__int64 a1)
{
  unsigned int v1; // ebp
  char *v3; // rsi
  char *v4; // rdi
  char *v5; // rbx
  char *v6; // rsi
  char *v7; // rdi
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  char *s2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v12 = __readfsqword(0x28u);
  if ( (get_flags_ex(a1, 4) & 0x4000) == 0 )
    return v1;
  s1 = nullptr;
  v9 = 0;
  if ( get_ea_name(&s1, a1, 0, 0) > 0 )
  {
    v11 = 0;
    s2 = nullptr;
    sub_35A790(&s2);
    if ( (_QWORD)v11 )
    {
      v3 = s2;
      v4 = (char *)haystack;
      if ( !(_QWORD)v9 )
        goto LABEL_7;
    }
    else
    {
      v3 = (char *)haystack;
      if ( !(_QWORD)v9 )
        goto LABEL_19;
    }
    v4 = s1;
LABEL_7:
    if ( strcmp(v4, v3) )
    {
      sub_35A790(&s2);
      v5 = s2;
      v6 = s2;
      if ( !(_QWORD)v11 )
        v6 = (char *)haystack;
      v7 = (char *)haystack;
      if ( (_QWORD)v9 )
        v7 = s1;
      v1 = 2 * (strcmp(v7, v6) == 0);
      goto LABEL_13;
    }
LABEL_19:
    v5 = s2;
    v1 = 1;
LABEL_13:
    if ( v5 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v5);
    }
    goto LABEL_16;
  }
  v1 = 0;
LABEL_16:
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(s1);
  }
  return v1;
}
