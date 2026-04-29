unsigned __int64 __fastcall sub_3DF0(__int64 a1)
{
  const char *plugin_options; // rax
  const char *v3; // rbp
  bool v5; // cc
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r12
  const char *v10; // rdx
  size_t v11; // rax
  size_t v12; // rbp
  void *v13; // rdi
  size_t v14; // r13
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp-8h] [rbp-1040h]
  char v20[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v21; // [rsp+1008h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  read_config2("patfind", 1, &off_12C00, 2, 0, 0, 0, a1);
  plugin_options = (const char *)get_plugin_options("patfind", 1, v19);
  if ( plugin_options )
  {
    v3 = plugin_options;
    if ( strstr(plugin_options, "auto_run=0") )
    {
      *(_DWORD *)(a1 + 168) = 0;
    }
    else
    {
      if ( strstr(v3, "auto_run=1") )
      {
        v5 = *(_QWORD *)(a1 + 152) <= 1u;
        *(_DWORD *)(a1 + 168) = 1;
        if ( !v5 )
          goto LABEL_5;
        goto LABEL_8;
      }
      if ( strstr(v3, "auto_run=2") )
        *(_DWORD *)(a1 + 168) = 2;
    }
  }
  if ( *(_QWORD *)(a1 + 152) > 1u )
    goto LABEL_5;
LABEL_8:
  v6 = (const char *)idadir("cfg");
  v7 = v6;
  if ( !v6 || (v8 = strlen(v6), (v9 = v8) == 0) )
  {
    *(_QWORD *)(a1 + 152) = 0;
LABEL_11:
    v10 = s1;
    goto LABEL_12;
  }
  v15 = *(void **)(a1 + 144);
  v16 = v8 + 1;
  if ( *(_QWORD *)(a1 + 160) < v8 + 1 )
  {
    v17 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), v16, 1);
    *(_QWORD *)(a1 + 144) = v17;
    v15 = (void *)v17;
  }
  *(_QWORD *)(a1 + 152) = v16;
  memmove(v15, v7, v9);
  *(_BYTE *)(*(_QWORD *)(a1 + 144) + v9) = 0;
  if ( !*(_QWORD *)(a1 + 152) )
    goto LABEL_11;
  v10 = *(const char **)(a1 + 144);
LABEL_12:
  qmakepath(v20, 4096, v10, "ghidra_patterns", 0);
  v11 = strlen(v20);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(void **)(a1 + 144);
    v14 = v11 + 1;
    if ( *(_QWORD *)(a1 + 160) < v11 + 1 )
    {
      v18 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), v14, 1);
      *(_QWORD *)(a1 + 144) = v18;
      v13 = (void *)v18;
    }
    *(_QWORD *)(a1 + 152) = v14;
    memmove(v13, v20, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 144) + v12) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 152) = 0;
  }
LABEL_5:
  *(_BYTE *)(a1 + 172) = 1;
  return v21 - __readfsqword(0x28u);
}
