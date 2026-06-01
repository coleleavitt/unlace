/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_usage
// Address: 0x0009F3C0

//----- (0009F3C0) --------------------------------------------------------
void __cdecl __noreturn cliopts_t_usage(int a1, unsigned __int8 a2)
{
  int v2; // eax
  int v3; // ecx
  const char *v4; // edx
  int v5; // eax
  bool v6; // zf
  const char *v7; // edx
  size_t v8; // esi
  int v9; // eax
  const char *v10; // edi
  const char *v11; // edx
  int v12; // eax
  char *v13; // edx
  size_t v14; // esi
  int v15; // eax
  const char *v16; // edi
  unsigned int v17; // edx
  const char *v18; // edi
  size_t v19; // edx
  int v20; // eax
  const char *v21; // esi
  size_t v22; // esi
  int v23; // eax
  const char *v24; // edi
  const char *v25; // edx
  int (**v26)(const char *, ...); // esi
  char *v27; // eax
  _BYTE *v28; // eax
  char *v29; // ecx
  int v30; // [esp+0h] [ebp-3Ch] BYREF
  const char *v31; // [esp+4h] [ebp-38h]
  unsigned int v32; // [esp+8h] [ebp-34h]
  const char *v33; // [esp+10h] [ebp-2Ch]
  const char *v34; // [esp+14h] [ebp-28h]
  int v35; // [esp+18h] [ebp-24h]
  size_t v36; // [esp+1Ch] [ebp-20h]
  const char *v37; // [esp+20h] [ebp-1Ch]
  unsigned int v38; // [esp+24h] [ebp-18h]
  int v39; // [esp+28h] [ebp-14h]

  v30 = 0;
  v31 = nullptr;
  v32 = 0;
  v38 = *(_DWORD *)(a1 + 4);
  if ( v38 )
  {
    v2 = 0;
    v3 = 16;
    v37 = "        ";
    do
    {
      v39 = v2;
      v4 = *(const char **)a1;
      v5 = *(char *)(*(_DWORD *)a1 + v3 - 16);
      v35 = v3;
      v34 = v4;
      if ( v5 )
      {
        v6 = *(_DWORD *)&v4[v3] == 0;
        v7 = " ...";
        if ( v6 )
          v7 = "    ";
        sub_31370((int)&v30, "  -%c%s", v5, v7);
      }
      else
      {
        v8 = __strlen_chk(v37, 9);
        v9 = v30;
        v10 = v31 - 1;
        if ( !v31 )
          v10 = nullptr;
        v11 = &v10[v8 + 1];
        if ( v32 < (unsigned int)v11 )
        {
          v33 = &v10[v8 + 1];
          v9 = (int)qvector_reserve((int)&v30, (void *)v30, (unsigned int)v33, 1u);
          v30 = v9;
          v11 = v33;
        }
        v31 = v11;
        v10[v8 + v9] = 0;
        memmove((void *)&v10[v30], v37, v8);
      }
      v12 = *(_DWORD *)&v34[v35 - 12];
      if ( v12 )
      {
        v13 = " ...";
        if ( !*(_DWORD *)&v34[v35] )
          v13 = &byte_DCEE2;
        sub_31370((int)&v30, "  (--%s%s)", v12, v13);
      }
      v33 = " ";
      v14 = __strlen_chk(" ", 2);
      v15 = v30;
      v16 = v31 - 1;
      if ( !v31 )
        v16 = nullptr;
      v17 = (unsigned int)&v16[v14 + 1];
      if ( v32 < v17 )
      {
        v36 = (size_t)&v16[v14 + 1];
        v15 = (int)qvector_reserve((int)&v30, (void *)v30, v36, 1u);
        v30 = v15;
        v17 = v36;
      }
      v31 = (const char *)v17;
      v16[v14 + v15] = 0;
      memmove((void *)&v16[v30], v33, v14);
      v18 = *(const char **)&v34[v35 - 8];
      if ( v18 )
      {
        v19 = strlen(*(const char **)&v34[v35 - 8]);
        v20 = v30;
        v21 = v31 - 1;
        if ( !v31 )
          v21 = nullptr;
        v34 = &v21[v19 + 1];
        v33 = v18;
        if ( v32 < (unsigned int)v34 )
        {
          v36 = v19;
          v20 = (int)qvector_reserve((int)&v30, (void *)v30, (unsigned int)&v21[v19 + 1], 1u);
          v30 = v20;
          v19 = v36;
        }
        v31 = v34;
        v21[v19 + v20] = 0;
        memmove((void *)&v21[v30], v33, v19);
      }
      v34 = "\n";
      v22 = __strlen_chk("\n", 2);
      v23 = v30;
      v24 = v31 - 1;
      if ( !v31 )
        v24 = nullptr;
      v25 = &v24[v22 + 1];
      if ( v32 < (unsigned int)v25 )
      {
        v33 = &v24[v22 + 1];
        v23 = (int)qvector_reserve((int)&v30, (void *)v30, (unsigned int)v33, 1u);
        v30 = v23;
        v25 = v33;
      }
      v31 = v25;
      v24[v22 + v23] = 0;
      memmove((void *)&v24[v30], v34, v22);
      v2 = v39 + 1;
      v3 = v35 + 20;
    }
    while ( v39 + 1 < v38 );
  }
  v26 = *(int (***)(const char *, ...))(a1 + 36);
  if ( !v26 )
    v26 = &printf;
  if ( *(_DWORD *)(a1 + 16) )
    v27 = *(char **)(a1 + 12);
  else
    v27 = byte_EF875;
  v28 = qbasename(v27);
  if ( v31 )
    v29 = (char *)v30;
  else
    v29 = byte_EF875;
  ((void (__cdecl *)(const char *, _BYTE *, char *))v26)("Usage: %s [options]\n%s", v28, v29);
  if ( *(_DWORD *)(a1 + 28) >= 2u )
    ((void (__cdecl *)(const char *, _DWORD))v26)("\n%s\n", *(_DWORD *)(a1 + 24));
  qexit(a2);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// DCEE2: using guessed type char byte_DCEE2;
