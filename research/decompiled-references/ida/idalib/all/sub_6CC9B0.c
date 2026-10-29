__int64 __fastcall sub_6CC9B0(_QWORD *a1, __int64 a2, bool *a3, __int64 a4, int a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rbp
  __int64 v13; // rax
  const char *v14; // rsi
  size_t v15; // rdx
  size_t v16; // rax
  size_t v17; // r8
  bool v18; // bl
  unsigned int v19; // eax
  unsigned int v20; // ebx
  char *v21; // rsi
  const char *v22; // rdx
  void *v24; // rdi
  size_t v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-E8h]
  int v28; // [rsp+10h] [rbp-D8h]
  size_t v29; // [rsp+10h] [rbp-D8h]
  size_t v30; // [rsp+10h] [rbp-D8h]
  int v31; // [rsp+18h] [rbp-D0h]
  size_t v32; // [rsp+18h] [rbp-D0h]
  int v33; // [rsp+20h] [rbp-C8h]
  int v34[2]; // [rsp+28h] [rbp-C0h] BYREF
  char *s1; // [rsp+30h] [rbp-B8h] BYREF
  int v36[4]; // [rsp+38h] [rbp-B0h]
  int v37; // [rsp+48h] [rbp-A0h]
  void *dest; // [rsp+50h] [rbp-98h] BYREF
  __int128 v39; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  __int128 v41; // [rsp+98h] [rbp-50h]
  unsigned __int64 v42; // [rsp+A8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v8 = sub_3BDD60(a1, a2);
  v9 = *a1;
  *(_QWORD *)v34 = v8;
  s1 = nullptr;
  *(_OWORD *)v36 = 0;
  if ( sub_7BF130(v34, v9, &s1) <= 0 )
  {
    sub_84F5B0(
      "migrate_asmstructs: cannnot get netnode name for %a\n",
      v26,
      a5,
      v28,
      v31,
      v33,
      v34[0],
      (int)s1,
      v36[0],
      v36[2],
      v37,
      (__int64)dest);
    if ( !a4 )
    {
      v20 = 0;
      goto LABEL_32;
    }
    sub_35A790(&s1);
  }
  v10 = (char *)haystack;
  if ( *(_QWORD *)v36 )
    v10 = s1;
  v11 = sub_6BD400(v10, 0);
  dest = nullptr;
  v12 = v11;
  v39 = 0;
  if ( a4 )
  {
    v13 = *(_QWORD *)(a4 + 8);
    if ( v13 )
    {
      v14 = *(const char **)a4;
      v15 = v13 - 1;
      if ( v13 != 1 && v14 && (!*(_QWORD *)v36 || *(_QWORD *)v36 - 1LL < v15 || strncmp(s1, v14, v15)) )
      {
LABEL_11:
        if ( v12 && (v16 = strlen(v12), (v17 = v16) != 0) )
        {
          v24 = dest;
          v25 = v16 + 1;
          if ( *((_QWORD *)&v39 + 1) < v16 + 1 )
          {
            v32 = v16;
            v30 = v16 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v25, 1);
            v17 = v32;
            v24 = dest;
            v25 = v30;
          }
          *(_QWORD *)&v39 = v25;
          v29 = v17;
          memmove(v24, v12, v17);
          *((_BYTE *)dest + v29) = 0;
        }
        else
        {
          *(_QWORD *)&v39 = 0;
        }
LABEL_16:
        sub_368890();
      }
    }
    if ( (unsigned __int8)sub_6CA1E0((__int64 *)&dest, v12) )
    {
      if ( (unsigned __int64)v39 > 1 )
        goto LABEL_16;
      goto LABEL_11;
    }
  }
  if ( a3 )
  {
    if ( v12 )
    {
      v18 = 1;
      if ( strncmp(v12, "baseclass_", 0xAu) && strncmp(v12, "inner_member_", 0xDu) )
        v18 = strncmp(v12, "anonymous_", 0xAu) == 0;
    }
    else
    {
      v18 = 0;
    }
    *a3 = v18;
  }
  LOBYTE(v19) = sub_6B9820((unsigned __int8 **)&s1);
  v20 = v19;
  if ( !(_BYTE)v19 )
  {
    v21 = (char *)haystack;
    if ( *(_QWORD *)v36 )
      v21 = s1;
    sub_6B9740((__int64 *)&ptr, v21);
    v22 = haystack;
    if ( (_QWORD)v41 )
      v22 = (const char *)ptr;
    v20 = sub_7BF170(v34, *a1, v22, 0);
    if ( ptr )
    {
      *(_QWORD *)&v41 = 0;
      qfree(ptr);
    }
  }
  if ( dest )
  {
    *(_QWORD *)&v39 = 0;
    qfree(dest);
  }
LABEL_32:
  if ( s1 )
  {
    *(_QWORD *)v36 = 0;
    qfree(s1);
  }
  return v20;
}
