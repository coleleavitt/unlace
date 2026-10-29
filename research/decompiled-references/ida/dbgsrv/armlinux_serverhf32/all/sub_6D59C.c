/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D59C
// Address: 0x0006D59C

//----- (0006D59C) --------------------------------------------------------
void __fastcall __noreturn sub_6D59C(int a1, int a2)
{
  int v2; // r4
  int v4; // r6
  const char *v5; // r3
  int v6; // r7
  unsigned int v7; // r10
  unsigned int v8; // r9
  char *v9; // r1
  const void *v10; // r7
  size_t v11; // r0
  unsigned int v12; // r5
  size_t v13; // r10
  size_t v14; // r11
  char *v15; // r1
  int v16; // r5
  unsigned int v17; // r9
  unsigned int v18; // r7
  char *v19; // r1
  int v20; // r5
  const char *v21; // r2
  unsigned int v22; // r9
  int v23; // r10
  unsigned int v24; // r7
  _BYTE *v25; // r1
  int (**v26)(const char *, ...); // r4
  int *v27; // r0
  const char *v28; // r0
  const char *v29; // r2
  int v30; // [sp+0h] [bp-2Ch]
  char *v32; // [sp+18h] [bp-14h] BYREF
  unsigned int v33; // [sp+1Ch] [bp-10h]
  unsigned int v34; // [sp+20h] [bp-Ch]

  v2 = 0;
  v30 = *(_DWORD *)(a1 + 4);
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  if ( !v30 )
  {
LABEL_28:
    v26 = *(int (***)(const char *, ...))(a1 + 36);
    if ( !v26 )
      v26 = &printf;
    if ( *(_DWORD *)(a1 + 16) )
      v27 = *(int **)(a1 + 12);
    else
      v27 = &dword_8DA5C;
    v28 = sub_76B04(v27);
    v29 = v32;
    if ( !v33 )
      v29 = (const char *)&dword_8DA5C;
    ((void (*)(const char *, ...))v26)("Usage: %s [options]\n%s", v28, v29);
    if ( *(_DWORD *)(a1 + 28) > 1u )
      ((void (*)(const char *, ...))v26)("\n%s\n", *(const char **)(a1 + 24));
    sub_78B44(a2);
  }
  v4 = 0;
  while ( 1 )
  {
    v20 = *(_DWORD *)a1 + v2;
    if ( !*(_BYTE *)v20 )
      break;
    sub_340C8((int)&v32, "  -%c%s");
LABEL_22:
    v21 = *(const char **)(v20 + 4);
    if ( v21 )
    {
      if ( *(_DWORD *)(v20 + 16) )
        v5 = " ...";
      else
        v5 = &byte_8DEAC;
      sub_340C8((int)&v32, "  (--%s%s)", v21, v5);
    }
    v6 = v33;
    v7 = v33 - 1;
    v8 = v33 + 1;
    if ( !v33 )
    {
      v8 = 2;
      v6 = 1;
      v7 = 0;
    }
    v9 = v32;
    if ( v34 < v8 )
    {
      v9 = (char *)sub_77EB0((int)&v32, v32, v8, 1u);
      v32 = v9;
    }
    v33 = v8;
    v9[v6] = 0;
    v32[v7] = 32;
    v10 = *(const void **)(v20 + 8);
    if ( v10 )
    {
      v11 = strlen(*(const char **)(v20 + 8));
      v12 = v33;
      v13 = v11;
      v14 = v11;
      if ( v33 )
      {
        v12 = v33 - 1;
        v14 = v11 + v33 - 1;
      }
      v15 = v32;
      if ( v14 + 1 > v34 )
      {
        v15 = (char *)sub_77EB0((int)&v32, v32, v14 + 1, 1u);
        v32 = v15;
      }
      v33 = v14 + 1;
      v15[v14] = 0;
      memmove(&v32[v12], v10, v13);
    }
    v16 = v33;
    v17 = v33 - 1;
    v18 = v33 + 1;
    if ( !v33 )
    {
      v18 = 2;
      v16 = 1;
      v17 = 0;
    }
    v19 = v32;
    if ( v34 < v18 )
    {
      v19 = (char *)sub_77EB0((int)&v32, v32, v18, 1u);
      v32 = v19;
    }
    v33 = v18;
    v19[v16] = 0;
    ++v4;
    v2 += 20;
    v32[v17] = 10;
    if ( v4 == v30 )
      goto LABEL_28;
  }
  if ( v33 )
  {
    v22 = v33 - 1;
    v23 = v33 + 7;
    v24 = v33 + 8;
    v25 = v32;
    if ( v34 >= v33 + 8 )
    {
LABEL_27:
      v33 = v24;
      v25[v23] = 0;
      qmemcpy(&v32[v22], "        ", 8);
      goto LABEL_22;
    }
  }
  else
  {
    v22 = 0;
    v24 = 9;
    v23 = 8;
    v25 = v32;
    if ( v34 >= 9 )
      goto LABEL_27;
  }
  v25 = sub_77EB0((int)&v32, v25, v24, 1u);
  v32 = v25;
  goto LABEL_27;
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
