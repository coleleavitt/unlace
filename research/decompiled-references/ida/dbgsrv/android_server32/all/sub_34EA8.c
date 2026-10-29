/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34EA8
// Address: 0x00034EA8

//----- (00034EA8) --------------------------------------------------------
char *__fastcall sub_34EA8(int a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r5
  unsigned int v5; // r0
  char *v6; // r0
  char *v7; // r7
  char *v8; // r5
  void *v10[17]; // [sp+8h] [bp-48h] BYREF

  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !under_debugger )
      interr(20098);
LABEL_21:
    __debugbreak();
  }
  v3 = 12;
  if ( a2 != 1 )
    v3 = 4;
  v4 = *(_DWORD *)(a1 + v3);
  if ( a2 == 1 )
    ++*(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 == v5 )
  {
    if ( *(_DWORD *)(a1 + 8) >= v4 + 1 )
    {
      v6 = *(char **)a1;
    }
    else
    {
      v6 = (char *)qvector_reserve(a1, *(void **)a1, v4 + 1, 0x44u);
      *(_DWORD *)a1 = v6;
      v4 = *(_DWORD *)(a1 + 4);
    }
    v8 = &v6[68 * v4];
    memset(v8, 0, 0x43u);
    ++*(_DWORD *)(a1 + 4);
    return v8;
  }
  if ( v4 > v5 )
  {
    if ( !under_debugger )
      interr(20133);
    goto LABEL_21;
  }
  v7 = *(char **)a1;
  memset(v10, 0, 0x43u);
  v8 = &v7[68 * v4];
  sub_34FE0((void **)a1, (int)v8, (int)v10);
  if ( v10[3] )
  {
    v10[4] = nullptr;
    qfree(v10[3]);
    v10[5] = nullptr;
    v10[3] = nullptr;
  }
  if ( v10[0] )
  {
    v10[1] = nullptr;
    qfree(v10[0]);
    v10[2] = nullptr;
    v10[0] = nullptr;
  }
  return v8;
}
// E0550: using guessed type char under_debugger;
