__int64 __fastcall sub_11790(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // rbx
  char *v10; // rax
  char *v11; // rax
  const char *v12; // r14
  size_t v13; // rax
  size_t v14; // rbp
  void *v15; // rdi
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  char *haystack; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v3 = *a1;
  v21 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 424))(a1, a3);
  if ( !(_BYTE)v5 )
  {
    v6 = *a1;
    v18 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v6 + 464))(a1, &v18, a3) )
    {
      v7 = *a1;
      haystack = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char **, __int64))(v7 + 136))(a1, &haystack, a1[36] + v18) )
        LOBYTE(v5) = get_strlit_contents() > 0;
    }
    return v5;
  }
  v20 = 0;
  haystack = 0;
  v9 = 0;
  if ( get_ea_name() && (_QWORD)v20 )
  {
    v10 = strstr(haystack, "_OBJC_CLASS_$_");
    if ( v10 && v10 != (char *)-1LL )
    {
      v12 = byte_9 + 5;
      goto LABEL_13;
    }
    v11 = strstr(0, "_OBJC_METACLASS_$_");
    if ( v11 && v11 != (char *)-1LL )
    {
      v12 = (const char *)&word_12;
LABEL_13:
      v13 = strlen(v12);
      v14 = v13;
      if ( !v13 )
      {
        *(_QWORD *)(a2 + 8) = 0;
        return v5;
      }
      v15 = *(void **)a2;
      v16 = v13 + 1;
      if ( *(_QWORD *)(a2 + 16) < v13 + 1 )
      {
        v17 = qvector_reserve();
        *(_QWORD *)a2 = v17;
        v15 = (void *)v17;
      }
      *(_QWORD *)(a2 + 8) = v16;
      memmove(v15, v12, v14);
      *(_BYTE *)(*(_QWORD *)a2 + v14) = 0;
      v9 = haystack;
      goto LABEL_17;
    }
  }
  v5 = 0;
LABEL_17:
  if ( v9 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v5;
}
