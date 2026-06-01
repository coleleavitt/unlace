/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cliopts_t_usage
// Address: 0x00072FC0

//----- (00072FC0) --------------------------------------------------------
void __fastcall __noreturn cliopts_t_usage(int *a1, int a2)
{
  int v2; // r1
  int v3; // r3
  int v4; // r4
  int v5; // r5
  const char *v6; // r3
  size_t v7; // r6
  int v8; // r2
  size_t v9; // r3
  unsigned int v10; // r7
  void *v11; // r1
  const char *v12; // r2
  const char *v13; // r3
  size_t v14; // r6
  int v15; // r4
  void *v16; // r1
  const void *v17; // r6
  size_t v18; // r2
  int v19; // r5
  size_t v20; // r7
  unsigned int v21; // r4
  void *v22; // r1
  size_t v23; // r6
  int v24; // r5
  void *v25; // r1
  int (**v26)(const char *, ...); // r4
  char *v27; // r0
  const char *v28; // r1
  const char *v29; // r2
  unsigned int v31; // [sp+4h] [bp-28h]
  int v33; // [sp+Ch] [bp-20h]
  size_t v34; // [sp+10h] [bp-1Ch]
  size_t v35; // [sp+10h] [bp-1Ch]
  int v36; // [sp+18h] [bp-14h]
  int v37; // [sp+1Ch] [bp-10h]
  void *ptr; // [sp+20h] [bp-Ch] BYREF
  int v39; // [sp+24h] [bp-8h]
  unsigned int v40; // [sp+28h] [bp-4h]

  v2 = 0;
  v39 = 0;
  ptr = nullptr;
  v40 = 0;
  v31 = a1[1];
  if ( v31 )
  {
    v3 = 16;
    do
    {
      v4 = *a1;
      v5 = *a1 + v3;
      v33 = v2;
      v37 = v3;
      if ( *(_BYTE *)(v5 - 16) )
      {
        if ( *(_DWORD *)(v4 + v3) )
          v6 = " ...";
        else
          v6 = "    ";
        sub_28C8C((int)&ptr, "  -%c%s", *(unsigned __int8 *)(v5 - 16), v6);
      }
      else
      {
        v7 = _strlen_chk("        ", 9);
        v8 = v39 - 1;
        if ( !v39 )
          v8 = 0;
        v9 = v8 + v7;
        v10 = v8 + v7 + 1;
        v11 = ptr;
        if ( v40 < v10 )
        {
          v34 = v8 + v7;
          v36 = v8;
          v11 = qvector_reserve((int)&ptr, ptr, v8 + v7 + 1, 1u);
          ptr = v11;
          v8 = v36;
          v9 = v34;
        }
        v39 = v10;
        *((_BYTE *)v11 + v9) = 0;
        memmove((char *)ptr + v8, "        ", v7);
      }
      v12 = *(const char **)(v5 - 12);
      if ( v12 )
      {
        if ( *(_DWORD *)(v4 + v37) )
          v13 = " ...";
        else
          v13 = &byte_A0742;
        sub_28C8C((int)&ptr, "  (--%s%s)", v12, v13);
      }
      v14 = _strlen_chk(" ", 2);
      v15 = v39 - 1;
      if ( !v39 )
        v15 = 0;
      v16 = ptr;
      if ( v40 < v15 + v14 + 1 )
      {
        v16 = qvector_reserve((int)&ptr, ptr, v15 + v14 + 1, 1u);
        ptr = v16;
      }
      v39 = v15 + v14 + 1;
      *((_BYTE *)v16 + v15 + v14) = 0;
      memmove((char *)ptr + v15, " ", v14);
      v17 = *(const void **)(v5 - 8);
      if ( v17 )
      {
        v18 = strlen(*(const char **)(v5 - 8));
        v19 = v39 - 1;
        if ( !v39 )
          v19 = 0;
        v20 = v19 + v18;
        v21 = v19 + v18 + 1;
        v22 = ptr;
        if ( v40 < v21 )
        {
          v35 = v18;
          v22 = qvector_reserve((int)&ptr, ptr, v19 + v18 + 1, 1u);
          ptr = v22;
          v18 = v35;
        }
        v39 = v21;
        *((_BYTE *)v22 + v20) = 0;
        memmove((char *)ptr + v19, v17, v18);
      }
      v23 = _strlen_chk("\n", 2);
      v24 = v39 - 1;
      if ( !v39 )
        v24 = 0;
      v25 = ptr;
      if ( v40 < v24 + v23 + 1 )
      {
        v25 = qvector_reserve((int)&ptr, ptr, v24 + v23 + 1, 1u);
        ptr = v25;
      }
      v39 = v24 + v23 + 1;
      *((_BYTE *)v25 + v24 + v23) = 0;
      memmove((char *)ptr + v24, "\n", v23);
      v3 = v37 + 20;
      v2 = v33 + 1;
    }
    while ( v33 + 1 < v31 );
  }
  v26 = (int (**)(const char *, ...))a1[9];
  if ( !v26 )
    v26 = &printf;
  if ( a1[4] )
    v27 = (char *)a1[3];
  else
    v27 = &byte_B3CBE;
  v28 = qbasename(v27);
  if ( v39 )
    v29 = (const char *)ptr;
  else
    v29 = &byte_B3CBE;
  ((void (*)(const char *, ...))v26)("Usage: %s [options]\n%s", v28, v29);
  if ( (unsigned int)a1[7] >= 2 )
    ((void (*)(const char *, ...))v26)("\n%s\n", (const char *)a1[6]);
  qexit(a2);
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
