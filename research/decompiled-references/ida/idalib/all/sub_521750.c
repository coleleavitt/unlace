unsigned __int64 __fastcall sub_521750(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 current_extlang; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // r12
  __int64 v9; // rsi
  void *v10; // rsi
  char *v11; // rbp
  char *v12; // rdi
  size_t v13; // rax
  size_t v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rsi
  char *v18; // rdi
  char *v19; // rdi
  size_t v20; // r15
  __int64 v21; // [rsp+0h] [rbp-4C8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-4C0h] BYREF
  char *s2; // [rsp+10h] [rbp-4B8h] BYREF
  __int128 v24; // [rsp+18h] [rbp-4B0h]
  void *ptr; // [rsp+30h] [rbp-498h] BYREF
  __int128 v26; // [rsp+38h] [rbp-490h]
  __int64 v27; // [rsp+48h] [rbp-480h]
  char *s1; // [rsp+50h] [rbp-478h] BYREF
  __int128 v29; // [rsp+58h] [rbp-470h]
  __int64 v30; // [rsp+68h] [rbp-460h]
  char v31; // [rsp+70h] [rbp-458h]
  _BYTE v32[1032]; // [rsp+80h] [rbp-448h] BYREF
  unsigned __int64 v33; // [rsp+488h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == -1 )
  {
    sub_7BF040(a1 + 1, *a1, "$ scriptsnippets", 0);
    v2 = a1[1];
  }
  v3 = netnode_altval(v2, 0, 65);
  if ( !v3 )
  {
    v21 = -1;
    current_extlang = get_current_extlang(v2);
    v8 = current_extlang;
    if ( (*(_BYTE *)(current_extlang + 8) & 1) != 0 )
    {
      v9 = *a1;
      v3 = 1200;
      v21 = *(_QWORD *)(*a1 + 1520);
    }
    else
    {
      qsnprintf((unsigned int)v32, 1024, (unsigned int)"$ scriptbox %s", *(_QWORD *)(current_extlang + 16), v6, v7);
      sub_7BEFF0(&ptr, *a1, v32, 0, 0);
      v9 = *a1;
      v21 = (__int64)ptr;
    }
    v24 = 0;
    s2 = nullptr;
    if ( sub_7BEED0(&v21, v9, &s2, 1, v3, 1107) <= 0 )
    {
      v18 = s2;
      if ( !s2 )
      {
LABEL_32:
        if ( v8 )
          --*(_DWORD *)(v8 + 12);
        return v33 - __readfsqword(0x28u);
      }
LABEL_31:
      *(_QWORD *)&v24 = 0;
      qfree(v18);
      goto LABEL_32;
    }
    ptr = nullptr;
    v26 = 0;
    v27 = get_current_extlang(&v21);
    s1 = nullptr;
    v10 = ptr;
    v30 = -1;
    v31 = 0;
    v29 = 0;
    if ( *((_QWORD *)&v26 + 1) <= 0xFu )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, 16, 1);
      v10 = ptr;
    }
    *(_QWORD *)&v26 = 16;
    qmemcpy(v10, "Unnamed snippet", 15);
    *((_BYTE *)ptr + 15) = 0;
    if ( (_QWORD)v24 )
    {
      v11 = s2;
      v12 = (char *)haystack;
      if ( !(_QWORD)v29 )
        goto LABEL_13;
    }
    else
    {
      v11 = (char *)haystack;
      if ( !(_QWORD)v29 )
        goto LABEL_18;
    }
    v12 = s1;
LABEL_13:
    if ( strcmp(v12, v11) )
    {
      if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
      {
        v19 = s1;
        v20 = v13 + 1;
        if ( *((_QWORD *)&v29 + 1) < v13 + 1 )
        {
          s1 = (char *)qvector_reserve(&s1, s1, v20, 1);
          v19 = s1;
        }
        *(_QWORD *)&v29 = v20;
        memmove(v19, v11, v14);
        s1[v14] = 0;
      }
      else
      {
        *(_QWORD *)&v29 = 0;
      }
      v31 = 1;
    }
LABEL_18:
    v15 = v27;
    if ( strcmp(*(const char **)(v27 + 16), *(const char **)(v8 + 16)) )
    {
      if ( v15 )
        --*(_DWORD *)(v15 + 12);
      v27 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 12);
      v31 = 1;
    }
    v16 = sub_5216C0((__int64)&ptr, *a1);
    v17 = *a1;
    v22 = v16 + 1;
    sub_7BE7C0(a1 + 1, v17, 0, &v22, 8, 65);
    if ( s1 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(s1);
    }
    if ( v27 )
      --*(_DWORD *)(v27 + 12);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
    v18 = s2;
    if ( !s2 )
      goto LABEL_32;
    goto LABEL_31;
  }
  return v33 - __readfsqword(0x28u);
}
