__int64 __fastcall sub_666350(__int64 *a1, unsigned int *a2, const char *a3, __int16 a4)
{
  size_t v6; // r15
  unsigned int v7; // ecx
  const char *v8; // rdx
  char *v9; // rbp
  unsigned int v10; // ebx
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v13; // [rsp+18h] [rbp-70h]
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v13 = 0;
  s1 = nullptr;
  v6 = strlen(a3);
  s1 = (char *)qvector_reserve(&s1, 0, v6 + 1, 1);
  *(_QWORD *)&v13 = v6 + 1;
  memmove(s1, a3, v6);
  s1[v6] = 0;
  if ( (unsigned __int8)validate_name(&s1, 6, (8 * a4) & 0x400 | 1u) )
  {
    s2 = nullptr;
    v7 = a2[2];
    v15 = 0;
    if ( v7 )
    {
      sub_4F9200((__int64)a1, (__int64 *)&s2, a2, 0);
      if ( (_QWORD)v15 )
      {
        v9 = s2;
        if ( (_QWORD)v13 )
        {
          if ( !strcmp(s1, s2) )
            goto LABEL_9;
        }
        else if ( !*s2 )
        {
          goto LABEL_9;
        }
        v8 = v9;
        goto LABEL_6;
      }
      if ( !(_QWORD)v13 || !*s1 )
      {
LABEL_8:
        v9 = s2;
LABEL_9:
        if ( v9 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v9);
        }
        v10 = 1;
        goto LABEL_12;
      }
    }
    v8 = haystack;
LABEL_6:
    sub_396090(0x19u, a2, v8);
    sub_4FAB30(*a1, *a2, a2[2]);
    a2[2] = sub_4FB850(*a1, *a2, (const char *)&s1);
    if ( !(unsigned __int8)update_segm(a2) )
    {
      if ( !under_debugger )
        interr(1255);
      BUG();
    }
    sub_635350((__int64)a1, 134217760, 0, 1);
    sub_396090(0x1Au, a2, s1);
    goto LABEL_8;
  }
  v10 = 0;
LABEL_12:
  if ( s1 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(s1);
  }
  return v10;
}

