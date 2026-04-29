__int64 __fastcall sub_3332B0(__int64 a1)
{
  int v1; // esi
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rsi
  int v7; // edx
  const char **v8; // rax
  const char *v9; // rbx
  char *v10; // rax
  unsigned __int64 v11; // rbp
  const char *v12; // r13
  char v13; // bl
  size_t v14; // rdx
  __int64 v15; // rdi
  __int64 tinfo_property; // rax
  char *v17; // rdi
  unsigned __int8 v18; // [rsp+0h] [rbp-D8h]
  __int64 v19; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-A0h]
  char *s1; // [rsp+50h] [rbp-88h] BYREF
  __int128 v26; // [rsp+58h] [rbp-80h]
  __int128 v27; // [rsp+70h] [rbp-68h] BYREF
  __int64 v28; // [rsp+80h] [rbp-58h] BYREF
  int v29; // [rsp+88h] [rbp-50h]
  __int16 v30; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v31; // [rsp+98h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 464);
  v31 = __readfsqword(0x28u);
  if ( !v1 )
    return 0;
  v4 = sub_13D280((_QWORD *)a1, 0);
  v5 = v4;
  if ( !*(_QWORD *)(v4 + 40) || strcmp(*(const char **)(v4 + 32), "this") || *(_QWORD *)(a1 + 416) <= 1u )
    return 0;
  v6 = *(_QWORD *)(a1 + 408);
  v24 = 0;
  v23 = 0;
  v7 = demangle_name(&v23, v6, 8, 2);
  v8 = (const char **)(a1 + 408);
  if ( v7 >= 0 )
    v8 = (const char **)&v23;
  v9 = *v8;
  v10 = strchr(*v8, 58);
  if ( !v10 || v10[1] != 58 )
    goto LABEL_19;
  v11 = v10 - v9;
  if ( v10[2] == 126 )
  {
    if ( *(_DWORD *)(a1 + 464) != 1 )
      goto LABEL_19;
    v12 = v10 + 3;
    v13 = 0;
  }
  else
  {
    v12 = v10 + 2;
    v13 = 1;
  }
  v14 = strlen(v12);
  if ( v14 - 1 < v11 && !strncmp(&v12[-v11 - 2], v12, v14) )
  {
    if ( !*(_BYTE *)(a1 + 320) )
    {
      if ( *(char *)(v5 + 25) >= 0 )
      {
        v15 = *(_QWORD *)(v5 + 80);
        s1 = nullptr;
        v26 = 0;
        tinfo_property = get_tinfo_property(v15, 9);
        v19 = tinfo_property;
        if ( (tinfo_property & 0x100) == 0 || !get_tinfo_pdata(&s1, tinfo_property, 0) )
          goto LABEL_25;
        v17 = (char *)::s1;
        if ( (_QWORD)v26 )
          v17 = s1;
        if ( strcmp(v17, v12) )
        {
LABEL_25:
          sub_32ACB0(&v20, (__int64)v12);
          v22 = 0;
          v21 = 0;
          v27 = 0;
          copy_tinfo_t((char *)&v27 + 8, &v21);
          v28 = 0;
          copy_tinfo_t(&v28, &v22);
          v29 = 0;
          v30 = 0;
          clear_tinfo_t(&v21);
          clear_tinfo_t(&v22);
          copy_tinfo_t(&v27, &v20);
          create_tinfo(&v19, 10, 10, &v27);
          clear_tinfo_t(&v28);
          clear_tinfo_t((char *)&v27 + 8);
          clear_tinfo_t(&v27);
          clear_tinfo_t(&v20);
          sub_1EF8F0(v5, *(_QWORD *)(a1 + 1504), &v19, 0);
          *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 24) & 0xFFFBFFFD | 2;
        }
        clear_tinfo_t(&v19);
        if ( s1 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(s1);
        }
      }
      goto LABEL_17;
    }
    if ( (get_tinfo_property(*(_QWORD *)(v5 + 80), 2) & 0xF) == 0xA )
    {
LABEL_17:
      *(_DWORD *)(a1 + 4) |= v13 == 0 ? 32 : 16;
      result = 1;
      *(_DWORD *)(v5 + 24) |= 0x8000u;
      goto LABEL_20;
    }
  }
LABEL_19:
  result = 0;
LABEL_20:
  if ( v23 )
  {
    v18 = result;
    *(_QWORD *)&v24 = 0;
    qfree(v23);
    return v18;
  }
  return result;
}
