/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_167B0
// Address: 0x000167B0

//----- (000167B0) --------------------------------------------------------
int __fastcall sub_167B0(_DWORD *a1, int a2, unsigned __int8 *a3, int a4)
{
  const char *v6; // r6
  void *v7; // r0
  size_t v8; // r9
  int v9; // r0
  int v10; // r10
  size_t v11; // r8
  void *v12; // r1
  unsigned __int8 *v13[2]; // [sp+4h] [bp-Ch] BYREF

  if ( a2 != 1 )
    return 0;
  v13[0] = a3;
  v13[1] = &a3[a4];
  v6 = (const char *)sub_76260(v13, (unsigned int)&a3[a4], 0);
  v7 = (void *)a1[262];
  if ( v7 )
  {
    a1[263] = 0;
    sub_77E08(v7);
    a1[262] = 0;
    a1[264] = 0;
  }
  if ( v6 )
  {
    v8 = strlen(v6);
    v9 = a1[263];
    v10 = v9 - 1;
    v11 = v8 + v9 - 1;
    if ( !v9 )
    {
      v10 = 0;
      v11 = v8;
    }
    v12 = (void *)a1[262];
    if ( v11 + 1 > a1[264] )
    {
      v12 = sub_77EB0((int)(a1 + 262), v12, v11 + 1, 1u);
      a1[262] = v12;
    }
    a1[263] = v11 + 1;
    *((_BYTE *)v12 + v11) = 0;
    memmove((void *)(a1[262] + v10), v6, v8);
  }
  return 1;
}
