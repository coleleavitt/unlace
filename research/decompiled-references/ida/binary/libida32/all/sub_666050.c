__int64 __fastcall sub_666050(__int64 *a1, __int64 a2, const char *a3, __int16 a4)
{
  size_t v7; // r15
  char *v8; // rbp
  char *v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // zf
  char *v13; // r15
  int v14; // ebp
  const char **v15; // r14
  char *v16; // rdx
  unsigned int v17; // ebx
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v20; // [rsp+18h] [rbp-70h]
  char *s2; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0;
  v20 = 0;
  s1 = nullptr;
  v7 = strlen(a3);
  s1 = (char *)qvector_reserve(&s1, 0, v7 + 1, 1);
  *(_QWORD *)&v20 = v7 + 1;
  memmove(s1, a3, v7);
  s1[v7] = 0;
  if ( (unsigned __int64)v20 <= 1 || (unsigned __int8)validate_name(&s1, 6, (8 * a4) & 0x400 | 1u) )
  {
    s2 = nullptr;
    v22 = 0;
    sub_4F8CF0((__int64)a1, (__int64 *)&s2, a2);
    if ( (_QWORD)v22 )
    {
      v8 = s2;
      v9 = (char *)haystack;
      if ( !(_QWORD)v20 )
        goto LABEL_8;
    }
    else
    {
      v8 = (char *)haystack;
      if ( !(_QWORD)v20 )
      {
LABEL_22:
        if ( s2 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(s2);
        }
        v17 = 1;
        goto LABEL_25;
      }
    }
    v9 = s1;
LABEL_8:
    if ( strcmp(v9, v8) )
    {
      sub_396090(0x1Bu, a2, v8);
      sub_4FAEC0(*a1, *(unsigned int *)(a2 + 12), v10);
      v11 = sub_4FBB40(*a1, (const char *)&s1);
      v12 = (_QWORD)v20 == 0;
      *(_DWORD *)(a2 + 12) = v11;
      v13 = (char *)haystack;
      if ( !v12 )
        v13 = s1;
      if ( *(_BYTE *)(a2 + 96) != 7 )
      {
        v14 = 0;
        v15 = (const char **)&off_2B0D4A0;
        while ( strcasecmp(v13, *v15) )
        {
          ++v14;
          v15 += 2;
          if ( v14 == 10 )
            goto LABEL_15;
        }
        *(_BYTE *)(a2 + 96) = *((_DWORD *)&off_2B0D4A0 + 4 * v14 + 2);
      }
LABEL_15:
      if ( !(unsigned __int8)update_segm(a2) )
      {
        if ( !under_debugger )
          interr(1254);
        BUG();
      }
      sub_635350((__int64)a1, 134217760, 0, 1);
      v16 = (char *)haystack;
      if ( (_QWORD)v20 )
        v16 = s1;
      sub_396090(0x1Cu, a2, v16);
    }
    goto LABEL_22;
  }
  v17 = 0;
LABEL_25:
  if ( s1 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(s1);
  }
  return v17;
}

