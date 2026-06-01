/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_392C4
// Address: 0x000392C4

//----- (000392C4) --------------------------------------------------------
int __fastcall sub_392C4(_DWORD *a1)
{
  char *v2; // r5
  int v4; // r8
  size_t v5; // r10
  int v6; // r3
  void **v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  void *v10; // r9
  size_t v11; // r11
  void *v12; // r10
  void **v13; // r3
  void *v14; // r0
  int v15; // r3
  void **v16; // r3
  void *ptr; // [sp+0h] [bp-14h] BYREF
  size_t v18; // [sp+4h] [bp-10h]
  void *v19; // [sp+8h] [bp-Ch]

  if ( a1[7] )
    v2 = (char *)a1[6];
  else
    v2 = (char *)&dword_8DA5C;
  if ( sub_390F4(a1 + 20, v2) == -1 && sub_390F4(a1 + 17, v2) == -1 )
  {
    v4 = a1[18];
    ptr = nullptr;
    v18 = 0;
    v19 = nullptr;
    if ( v2 )
    {
      v5 = strlen(v2);
      ptr = sub_77EB0((int)&ptr, nullptr, v5 + 1, 1u);
      v18 = v5 + 1;
      memmove(ptr, v2, v5);
      *((_BYTE *)ptr + v5) = 0;
      v6 = a1[18];
    }
    else
    {
      v6 = v4;
    }
    v7 = (void **)a1[17];
    v8 = v6 + 1;
    v9 = a1[19];
    if ( v7 > &ptr || &ptr >= &v7[3 * v9] )
    {
      if ( v9 < v8 )
      {
        v7 = (void **)sub_77EB0((int)(a1 + 17), v7, v8, 0xCu);
        v6 = a1[18];
        a1[17] = v7;
      }
      v15 = 3 * v6;
      v7[v15] = ptr;
      v16 = &v7[v15];
      v16[1] = (void *)v18;
      v16[2] = v19;
      ++a1[18];
    }
    else
    {
      v10 = ptr;
      v11 = v18;
      v12 = v19;
      ptr = nullptr;
      v18 = 0;
      v19 = nullptr;
      if ( v9 < v8 )
      {
        v7 = (void **)sub_77EB0((int)(a1 + 17), v7, v8, 0xCu);
        v6 = a1[18];
        a1[17] = v7;
      }
      v7[3 * v6] = v10;
      v13 = &v7[3 * v6];
      v13[1] = (void *)v11;
      v13[2] = v12;
      v14 = ptr;
      ++a1[18];
      if ( v14 )
      {
        v18 = 0;
        sub_77E08(v14);
      }
    }
    if ( v4 != -1 )
      return 0;
  }
  sub_70A98(0, v2);
  return sub_70A2C(52);
}
// 8DA5C: using guessed type int dword_8DA5C;
