/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3780C
// Address: 0x0003780C

//----- (0003780C) --------------------------------------------------------
int __fastcall sub_3780C(int a1, int a2)
{
  int v3; // r1
  int *v4; // r0
  char *v5; // r5
  size_t v6; // r0
  size_t v7; // r7
  size_t v8; // r8
  void *v9; // r0
  char *s; // [sp+0h] [bp-10h] BYREF
  int v12; // [sp+4h] [bp-Ch]
  int v13; // [sp+8h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 12);
  s = nullptr;
  v12 = 0;
  v13 = 0;
  if ( v3 )
    v4 = *(int **)(a1 + 8);
  else
    v4 = &dword_8DB98;
  sub_3C93C((int)v4, (void **)&s, 0, 0);
  if ( v12 )
  {
    v5 = s;
    if ( s )
      goto LABEL_5;
LABEL_11:
    *(_DWORD *)(a2 + 8) = v5;
    *(_DWORD *)(a2 + 12) = v5;
    *(_DWORD *)(a2 + 16) = v5;
    *(_BYTE *)a2 = 7;
    goto LABEL_7;
  }
  v5 = (char *)&dword_8DB98;
  if ( !&dword_8DB98 )
    goto LABEL_11;
LABEL_5:
  v6 = strlen(v5);
  v7 = v6;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v6 )
  {
    v8 = v6 + 1;
    v9 = sub_78018(a2 + 8, nullptr, v6 + 1, 1u);
    *(_DWORD *)(a2 + 8) = v9;
    *(_DWORD *)(a2 + 12) = v8;
    memmove(v9, v5, v7);
    *(_BYTE *)(*(_DWORD *)(a2 + 8) + v7) = 0;
  }
LABEL_7:
  if ( s )
  {
    v12 = 0;
    sub_77F70(s);
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
