unsigned __int64 __fastcall sub_509770(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
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
  int v16; // eax
  __int64 v17; // rsi
  char *v18; // rdi
  char *v19; // rdi
  size_t v20; // r15
  char v21; // [rsp+0h] [rbp-4B8h]
  int v22; // [rsp+8h] [rbp-4B0h] BYREF
  int v23; // [rsp+Ch] [rbp-4ACh] BYREF
  char *s2; // [rsp+10h] [rbp-4A8h] BYREF
  __int128 v25; // [rsp+18h] [rbp-4A0h]
  void *ptr; // [rsp+30h] [rbp-488h] BYREF
  __int128 v27; // [rsp+38h] [rbp-480h]
  __int64 v28; // [rsp+48h] [rbp-470h]
  char *s1; // [rsp+50h] [rbp-468h] BYREF
  __int128 v30; // [rsp+58h] [rbp-460h]
  int v31; // [rsp+68h] [rbp-450h]
  char v32; // [rsp+6Ch] [rbp-44Ch]
  _BYTE v33[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v34; // [rsp+478h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v2 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v2 == -1 )
  {
    sub_79BC40(a1 + 1, *a1, "$ scriptsnippets", 0);
    v2 = *((unsigned int *)a1 + 2);
  }
  v3 = netnode_altval(v2, 0, 65);
  if ( !v3 )
  {
    v22 = -1;
    current_extlang = get_current_extlang();
    v8 = current_extlang;
    if ( (*(_BYTE *)(current_extlang + 8) & 1) != 0 )
    {
      v9 = *a1;
      v3 = 1200;
      v22 = *(_DWORD *)(*a1 + 1332);
    }
    else
    {
      qsnprintf((int)v33, 1024, (int)"$ scriptbox %s", *(_QWORD *)(current_extlang + 16), v6, v7, v21);
      sub_79BBF0(&ptr, *a1, v33, 0, 0);
      v9 = *a1;
      v22 = (int)ptr;
    }
    v25 = 0;
    s2 = nullptr;
    if ( sub_79BAE0(&v22, v9, &s2, 1, v3, 1107) <= 0 )
    {
      v18 = s2;
      if ( !s2 )
      {
LABEL_32:
        if ( v8 )
          --*(_DWORD *)(v8 + 12);
        return v34 - __readfsqword(0x28u);
      }
LABEL_31:
      *(_QWORD *)&v25 = 0;
      qfree(v18);
      goto LABEL_32;
    }
    ptr = nullptr;
    v27 = 0;
    v28 = get_current_extlang();
    s1 = nullptr;
    v10 = ptr;
    v31 = -1;
    v32 = 0;
    v30 = 0;
    if ( *((_QWORD *)&v27 + 1) <= 0xFu )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, 16, 1);
      v10 = ptr;
    }
    *(_QWORD *)&v27 = 16;
    qmemcpy(v10, "Unnamed snippet", 15);
    *((_BYTE *)ptr + 15) = 0;
    if ( (_QWORD)v25 )
    {
      v11 = s2;
      v12 = (char *)haystack;
      if ( !(_QWORD)v30 )
        goto LABEL_13;
    }
    else
    {
      v11 = (char *)haystack;
      if ( !(_QWORD)v30 )
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
        if ( *((_QWORD *)&v30 + 1) < v13 + 1 )
        {
          s1 = (char *)qvector_reserve(&s1, s1, v20, 1);
          v19 = s1;
        }
        *(_QWORD *)&v30 = v20;
        memmove(v19, v11, v14);
        s1[v14] = 0;
      }
      else
      {
        *(_QWORD *)&v30 = 0;
      }
      v32 = 1;
    }
LABEL_18:
    v15 = v28;
    if ( strcmp(*(const char **)(v28 + 16), *(const char **)(v8 + 16)) )
    {
      if ( v15 )
        --*(_DWORD *)(v15 + 12);
      v28 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 12);
      v32 = 1;
    }
    v16 = sub_5096E0((__int64)&ptr, *a1);
    v17 = *a1;
    v23 = v16 + 1;
    sub_79B440(a1 + 1, v17, 0, &v23, 4, 65);
    if ( s1 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(s1);
    }
    if ( v28 )
      --*(_DWORD *)(v28 + 12);
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      qfree(ptr);
    }
    v18 = s2;
    if ( !s2 )
      goto LABEL_32;
    goto LABEL_31;
  }
  return v34 - __readfsqword(0x28u);
}

