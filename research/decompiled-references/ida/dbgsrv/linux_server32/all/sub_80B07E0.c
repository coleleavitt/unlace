/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B07E0
// Address: 0x080B07E0

//----- (080B07E0) --------------------------------------------------------
void **__usercall sub_80B07E0@<eax>(int a1@<eax>, int a2@<edx>)
{
  size_t v4; // eax
  const void *v5; // edx
  unsigned int v6; // ebp
  int v7; // edx
  int v8; // ecx
  void *v9; // eax
  unsigned __int8 *v10; // ebp
  void **result; // eax
  int v12; // edi
  int v13; // eax
  size_t v14; // ebp
  void *v15; // eax
  size_t v16; // ecx
  void *src; // [esp+0h] [ebp-24h]
  void *srca; // [esp+0h] [ebp-24h]
  int v19; // [esp+4h] [ebp-20h]

  src = (void *)(a1 + 1034);
  v4 = strlen((const char *)(a1 + 1034));
  v5 = src;
  if ( !v4 )
    goto LABEL_2;
  v14 = v4;
  v15 = *(void **)a2;
  v16 = v14 + 1;
  if ( *(_DWORD *)(a2 + 8) < v14 + 1 )
  {
    v15 = sub_80CF920(a2, v15, v14 + 1, 1u);
    v5 = src;
    v16 = v14 + 1;
    *(_DWORD *)a2 = v15;
  }
  *(_DWORD *)(a2 + 4) = v16;
  memmove(v15, v5, v14);
  *(_BYTE *)(*(_DWORD *)a2 + v14) = 0;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = v7 - 1;
  v6 = v7 + 1;
  if ( !v7 )
  {
LABEL_2:
    v6 = 2;
    v7 = 1;
    v8 = 0;
  }
  v9 = *(void **)a2;
  if ( *(_DWORD *)(a2 + 8) < v6 )
  {
    v19 = v8;
    srca = (void *)v7;
    v9 = sub_80CF920(a2, v9, v6, 1u);
    v8 = v19;
    v7 = (int)srca;
    *(_DWORD *)a2 = v9;
  }
  *(_DWORD *)(a2 + 4) = v6;
  v10 = (unsigned __int8 *)(a1 + 10);
  *((_BYTE *)v9 + v7) = 0;
  *(_BYTE *)(*(_DWORD *)a2 + v8) = 124;
  result = (void **)*(unsigned __int16 *)(a1 + 8);
  if ( (_WORD)result )
  {
    v12 = (int)result + a1 + 10;
    do
    {
      v13 = *v10++;
      result = sub_8070240((void **)a2, "%02X", v13);
    }
    while ( v10 != (unsigned __int8 *)v12 );
  }
  return result;
}
