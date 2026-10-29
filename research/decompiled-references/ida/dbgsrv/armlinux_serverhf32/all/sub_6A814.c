/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A814
// Address: 0x0006A814

//----- (0006A814) --------------------------------------------------------
int __fastcall sub_6A814(int a1, int a2, int a3)
{
  __suseconds_t v6; // r0
  int v7; // r1
  int v8; // r3
  unsigned __int8 *v9; // r2
  FILE *v10; // r0
  FILE *v11; // r6
  const char *v13; // r0
  char v14[1024]; // [sp+Ch] [bp-2404h] BYREF
  unsigned __int8 v15[4084]; // [sp+40Ch] [bp-2004h] BYREF
  char v16[4084]; // [sp+140Ch] [bp-1004h] BYREF

  v6 = sub_78DE0();
  sub_79044(v14, 0x400u, "%Y-%m-%d_%H-%M-%S", v8, v6, v7);
  if ( a3 >= 0 )
  {
    sub_7EA4C(v15, 4096, "interr-%d-%s.raw", a3, v14);
    v9 = *(unsigned __int8 **)(a1 + 72);
    if ( v9 )
      goto LABEL_3;
LABEL_6:
    sub_79524(v16, v15, 4096);
    v10 = sub_75CF8((int)v16);
    v11 = v10;
    if ( v10 )
      goto LABEL_4;
    goto LABEL_7;
  }
  sub_7EA4C(v15, 4096, "exc-%s.raw", v14);
  v9 = *(unsigned __int8 **)(a1 + 72);
  if ( !v9 )
    goto LABEL_6;
LABEL_3:
  sub_76A30(v16, 4096, v9, v15, 0);
  v10 = sub_75CF8((int)v16);
  v11 = v10;
  if ( v10 )
  {
LABEL_4:
    sub_7768C(v10, *(void **)a2, *(_DWORD *)(a2 + 4));
    return sub_77754(v11);
  }
LABEL_7:
  v13 = sub_79818(-1);
  return sub_6946C("WARNING: Failed to open file: \"%s\": %s\n", v16, v13);
}
// 6A850: variable 'v8' is possibly undefined
// 6A850: variable 'v7' is possibly undefined
