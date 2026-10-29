/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_392E4
// Address: 0x000392E4

//----- (000392E4) --------------------------------------------------------
int __fastcall sub_392E4(_DWORD *a1)
{
  char *v2; // r5
  int v3; // r8
  size_t v4; // r10
  int v5; // r3
  void **v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r1
  void *v9; // r9
  size_t v10; // r11
  void *v11; // r10
  void **v12; // r3
  void *v13; // r0
  int v15; // r3
  void **v16; // r3
  void *ptr; // [sp+0h] [bp-14h] BYREF
  size_t v18; // [sp+4h] [bp-10h]
  void *v19; // [sp+8h] [bp-Ch]

  if ( a1[7] )
    v2 = (char *)a1[6];
  else
    v2 = (char *)&dword_8DB98;
  if ( sub_3928C(a1 + 20, v2) != -1 )
    goto LABEL_13;
  v3 = a1[21];
  ptr = nullptr;
  v18 = 0;
  v19 = nullptr;
  if ( v2 )
  {
    v4 = strlen(v2);
    ptr = sub_78018((int)&ptr, nullptr, v4 + 1, 1u);
    v18 = v4 + 1;
    memmove(ptr, v2, v4);
    *((_BYTE *)ptr + v4) = 0;
    v5 = a1[21];
  }
  else
  {
    v5 = v3;
  }
  v6 = (void **)a1[20];
  v7 = v5 + 1;
  v8 = a1[22];
  if ( v6 > &ptr || &ptr >= &v6[3 * v8] )
  {
    if ( v8 < v7 )
    {
      v6 = (void **)sub_78018((int)(a1 + 20), (void *)a1[20], v7, 0xCu);
      v5 = a1[21];
      a1[20] = v6;
    }
    v15 = 3 * v5;
    v6[v15] = ptr;
    v16 = &v6[v15];
    v16[1] = (void *)v18;
    v16[2] = v19;
    ++a1[21];
  }
  else
  {
    v9 = ptr;
    v10 = v18;
    v11 = v19;
    ptr = nullptr;
    v18 = 0;
    v19 = nullptr;
    if ( v8 < v7 )
    {
      v6 = (void **)sub_78018((int)(a1 + 20), v6, v7, 0xCu);
      v5 = a1[21];
      a1[20] = v6;
    }
    v6[3 * v5] = v9;
    v12 = &v6[3 * v5];
    v12[1] = (void *)v10;
    v12[2] = v11;
    v13 = ptr;
    ++a1[21];
    if ( v13 )
    {
      v18 = 0;
      sub_77F70(v13);
      if ( v3 != -1 )
        return 0;
      goto LABEL_13;
    }
  }
  if ( v3 == -1 )
  {
LABEL_13:
    sub_70C04(0, v2);
    return sub_70B98(52);
  }
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
