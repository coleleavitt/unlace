unsigned __int64 __fastcall sub_11C1A0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rbp
  const char *v4; // rdi
  size_t v5; // rax
  size_t v6; // r12
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  char *s2; // [rsp+8h] [rbp-50h]
  __int128 v13; // [rsp+10h] [rbp-48h]
  int v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v11 = 40;
  s2 = nullptr;
  v14 = 0;
  v13 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1])(a1[1], 40, &v11) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  v2 = *(_QWORD *)(v1 + 40);
  if ( (_QWORD)v13 )
  {
    v3 = s2;
    v4 = s1;
    if ( !v2 )
      goto LABEL_5;
  }
  else
  {
    v3 = (char *)s1;
    if ( !v2 )
      goto LABEL_10;
  }
  v4 = *(const char **)(v1 + 32);
LABEL_5:
  if ( strcmp(v4, v3) )
  {
    if ( v3 && (v5 = strlen(v3), (v6 = v5) != 0) )
    {
      v8 = *(void **)(v1 + 32);
      v9 = v5 + 1;
      if ( *(_QWORD *)(v1 + 48) < v5 + 1 )
      {
        v10 = qvector_reserve();
        *(_QWORD *)(v1 + 32) = v10;
        v8 = (void *)v10;
      }
      *(_QWORD *)(v1 + 40) = v9;
      memmove(v8, v3, v6);
      *(_BYTE *)(*(_QWORD *)(v1 + 32) + v6) = 0;
    }
    else
    {
      *(_QWORD *)(v1 + 40) = 0;
    }
    *(_BYTE *)(v1 + 64) = 1;
  }
LABEL_10:
  if ( s2 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}

