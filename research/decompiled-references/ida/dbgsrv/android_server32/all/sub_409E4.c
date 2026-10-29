/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409E4
// Address: 0x000409E4

//----- (000409E4) --------------------------------------------------------
int __fastcall sub_409E4(int a1, const char *a2)
{
  _DWORD *v2; // r2
  int v3; // r7
  int v4; // r4
  _DWORD *v5; // r5
  const char *v6; // r0
  int v7; // r0
  _DWORD *v8; // r4
  size_t v9; // r0
  size_t v10; // r7
  void *v11; // r1
  unsigned int v12; // r6
  int v13; // r3
  _DWORD *v14; // r0

  v2 = (_DWORD *)a1;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = 4 * v3 - 4;
    while ( --v3 >= 0 )
    {
      v5 = *(_DWORD **)(*v2 + v4);
      v6 = &byte_B3CBE;
      if ( v5[1] )
        v6 = (const char *)*v5;
      v7 = strcmp(v6, a2);
      v4 -= 4;
      v2 = (_DWORD *)a1;
      if ( !v7 )
      {
        v8 = v5 + 17;
        if ( v5[17] )
          return -1;
        sub_40AE0(v5);
        goto LABEL_19;
      }
    }
  }
  v5 = operator new(0x48u);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  memset(v5 + 8, 0, 0x24u);
  if ( a2 && (v9 = strlen(a2)) != 0 )
  {
    v10 = v9;
    v11 = (void *)*v5;
    v12 = v9 + 1;
    if ( v5[2] < v9 + 1 )
    {
      v11 = qvector_reserve((int)v5, v11, v12, 1u);
      *v5 = v11;
    }
    v5[1] = v12;
    memmove(v11, a2, v10);
    *(_BYTE *)(*v5 + v10) = 0;
  }
  else
  {
    v5[1] = 0;
  }
  v13 = a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
  {
    v14 = *(_DWORD **)a1;
  }
  else
  {
    v14 = qvector_reserve(a1, *(void **)a1, v3 + 1, 4u);
    v13 = a1;
    *(_DWORD *)a1 = v14;
  }
  v14[*(_DWORD *)(a1 + 4)] = v5;
  ++*(_DWORD *)(v13 + 4);
  v8 = v5 + 17;
LABEL_19:
  *v8 = -1;
  v5[3] = 0;
  return v3;
}
// B3CBE: using guessed type char byte_B3CBE;
