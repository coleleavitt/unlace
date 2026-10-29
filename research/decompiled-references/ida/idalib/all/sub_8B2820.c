__int64 __fastcall sub_8B2820(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r13
  char *v9; // r14
  const char *v10; // r13
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char *s2; // [rsp+10h] [rbp-70h] BYREF
  __int128 v17; // [rsp+18h] [rbp-68h]
  void *ptr; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]

  v2 = a1[1];
  v20 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_8AFAB0(a2, (__int64)"machine id", a2 + 32, v2 + 512) )
    return 0;
  v3 = a1[2];
  s2 = nullptr;
  v4 = *(int *)(v3 + 8);
  v17 = 0;
  if ( (int)v4 >= 7 )
    v4 = 0;
  v5 = off_2C82080[v4];
  if ( v5
    && (v6 = strlen(off_2C82080[v4]),
        v7 = v6 + 1,
        v8 = v6,
        s2 = (char *)qvector_reserve(&s2, 0, v6 + 1, 1),
        *(_QWORD *)&v17 = v7,
        memmove(s2, v5, v8),
        s2[v8] = 0,
        (_QWORD)v17) )
  {
    v9 = s2;
    v10 = haystack;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_7;
  }
  else
  {
    v9 = (char *)haystack;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_15;
  }
  v10 = *(const char **)(a2 + 8);
LABEL_7:
  if ( !strcmp(v10, v9) )
  {
LABEL_15:
    sub_8ADD90(a1[1], a2);
    v13 = a1[2];
    *(_DWORD *)v13 = *(_DWORD *)(a2 + 2);
    *(_WORD *)(v13 + 4) = *(_WORD *)(a2 + 6);
    v14 = *(_QWORD *)(a2 + 80);
    if ( v14
      && (v15 = a1[3], v15 >= v14 - 2592000)
      && v15 >= v14 - 1296000
      && v15 >= v14
      && v15 >= v14 + 1296000
      && v15 >= v14 + 2592000 )
    {
      if ( (debug & 0x200) != 0 )
        sub_3879F0();
      v11 = 2;
    }
    else
    {
      v11 = 1;
    }
    goto LABEL_11;
  }
  if ( (debug & 0x200) != 0 )
  {
    ptr = nullptr;
    v19 = 0;
    sub_35A790((char **)&ptr);
    sub_3879F0();
  }
  v11 = 0;
LABEL_11:
  if ( s2 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(s2);
  }
  return v11;
}
