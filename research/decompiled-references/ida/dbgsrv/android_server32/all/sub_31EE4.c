/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31EE4
// Address: 0x00031EE4

//----- (00031EE4) --------------------------------------------------------
unsigned int *__fastcall sub_31EE4(int a1, int a2, const char *a3)
{
  unsigned int *v4; // r5
  int v5; // r0
  unsigned int *v6; // r3
  unsigned int *v7; // r4
  const char *v8; // r5
  int v10; // [sp+10h] [bp-1Ch]
  __int64 *v12; // [sp+18h] [bp-14h]
  char *v13; // [sp+1Ch] [bp-10h] BYREF
  int v14; // [sp+20h] [bp-Ch]
  int v15; // [sp+24h] [bp-8h]

  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !under_debugger )
      interr(20099);
    __debugbreak();
  }
  v4 = nullptr;
  v14 = 0;
  v13 = nullptr;
  v15 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  if ( !(v5 << 6) )
    return v4;
  v6 = *(unsigned int **)(a1 + 16);
  v12 = (__int64 *)(a1 + 144);
  v7 = v6;
  v10 = a2;
  while ( v7[1] != a2 )
  {
LABEL_11:
    v7 += 16;
    v4 = nullptr;
    if ( v7 == &v6[16 * v5] )
      goto LABEL_14;
  }
  v14 = 0;
  v8 = &byte_B3CBE;
  if ( *v12 >= 1 )
  {
    if ( *(_QWORD *)(a1 + 160) )
    {
      sub_32154(*(_DWORD *)(a1 + 132), (void **)&v13, v12, *v7);
      if ( v14 )
        v8 = v13;
    }
  }
  if ( strcmp(v8, a3) )
  {
    v6 = *(unsigned int **)(a1 + 16);
    v5 = *(_DWORD *)(a1 + 20);
    a2 = v10;
    goto LABEL_11;
  }
  v4 = v7;
LABEL_14:
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v15 = 0;
    v13 = nullptr;
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
