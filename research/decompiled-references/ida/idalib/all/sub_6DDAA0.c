__int64 __fastcall sub_6DDAA0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v8; // r15
  const char *v9; // rdi
  int v10; // eax
  int v12; // ebp
  size_t v13; // r15
  char *v14; // rax
  char *v15; // rbx
  char *v16; // rax
  char *v17; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // r8
  size_t v20; // r12
  char *v21; // rax
  __int64 v22; // rax
  const char *v23; // rcx
  __int64 v24; // rax
  char *v25; // rax
  signed __int64 v27; // [rsp+8h] [rbp-70h]
  signed __int64 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  char *s; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 568);
  if ( !v4 )
    return v32 - __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 560);
  v8 = 0;
  while ( 1 )
  {
    v9 = haystack;
    if ( *(_QWORD *)(v5 + 32) )
      v9 = *(const char **)(v5 + 24);
    if ( !strcmp(v9, a4) )
      break;
    ++v8;
    v5 += 56;
    if ( v8 == v4 )
      return v32 - __readfsqword(0x28u);
  }
  if ( !v5 )
    return v32 - __readfsqword(0x28u);
  v10 = *(_DWORD *)(v5 + 48);
  if ( (v10 & 4) == 0 )
  {
    if ( (v10 & 2) == 0 )
    {
      if ( (v10 & 1) != 0 && *(_BYTE *)(a3 + 81) >> 5 == 2 )
        *(_DWORD *)(a2 + 24) |= 0x10u;
      return v32 - __readfsqword(0x28u);
    }
    v12 = *(_DWORD *)(a1 + 120);
    s = nullptr;
    v31 = 0;
    *(_DWORD *)(a1 + 120) = v12 & 0xFFF7FFFF;
    v13 = *(_QWORD *)(v5 + 8);
    if ( !v13 )
    {
LABEL_16:
      *(_DWORD *)(a1 + 120) = v12;
      return v32 - __readfsqword(0x28u);
    }
    v14 = (char *)qalloc_or_throw(*(_QWORD *)(v5 + 8));
    *((_QWORD *)&v31 + 1) = v13;
    s = v14;
    memcpy(v14, *(const void **)v5, v13);
    v15 = s;
    *(_QWORD *)&v31 = v13;
    v16 = strrchr(s, 58);
    v17 = s;
    if ( !v16
      || (v18 = v16 - s, v19 = v18 - 1, v20 = v18, (unsigned __int64)(v18 - 1) > 0xFFFFFFFFFFFFFFFDLL)
      || (v21 = &s[v19], s[v19] != 58) )
    {
LABEL_20:
      if ( v17 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v17);
      }
      goto LABEL_16;
    }
    if ( v19 )
    {
      if ( v13 < v20 )
      {
        if ( *((_QWORD *)&v31 + 1) < v20 )
        {
          v28 = v19;
          v25 = (char *)qvector_reserve(&s, s, v20, 1);
          v13 = v31;
          v19 = v28;
          s = v25;
          v17 = v25;
        }
        v27 = v19;
        memset(&v17[v13], 0, v20 - v13);
        *(_QWORD *)&v31 = v20;
        v21 = &s[v27];
      }
      else if ( v20 != v13 )
      {
        *(_QWORD *)&v31 = v20;
      }
      *v21 = 0;
      v22 = v31;
    }
    else
    {
      if ( !s )
      {
        v29 = 0;
        goto LABEL_34;
      }
      v31 = 0u;
      qfree(s);
      v22 = 0;
      s = nullptr;
    }
    v29 = 0;
    v23 = haystack;
    if ( !v22 )
    {
LABEL_28:
      if ( (unsigned __int8)sub_6DD660(a1, &v29, 0, v23, nullptr, 0xDu) )
      {
        sub_6D5330((__int64)&v29, (__int64)&v29, 0, 0xAu);
        v24 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 32) = v29;
        v29 = v24;
      }
      clear_tinfo_t(&v29);
      v17 = s;
      goto LABEL_20;
    }
    v15 = s;
LABEL_34:
    v23 = v15;
    goto LABEL_28;
  }
  return create_tinfo(a2 + 32, 1, 7, 0);
}
