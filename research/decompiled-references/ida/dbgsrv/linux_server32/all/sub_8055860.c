/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055860
// Address: 0x08055860

//----- (08055860) --------------------------------------------------------
int __cdecl sub_8055860(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  const char *v5; // edi
  void *v6; // eax
  size_t v7; // eax
  int v8; // ebp
  size_t v9; // edx
  void *v10; // eax
  size_t v11; // ecx
  size_t n; // [esp+0h] [ebp-38h]
  size_t v13; // [esp+4h] [ebp-34h]
  size_t v14; // [esp+8h] [ebp-30h]
  unsigned int v15[3]; // [esp+Ch] [ebp-2Ch] BYREF
  unsigned int v16; // [esp+18h] [ebp-20h]

  v16 = __readgsdword(0x14u);
  result = 0;
  if ( a2 == 1 )
  {
    v15[0] = a3;
    v15[1] = a4 + a3;
    v5 = (const char *)sub_80CE050(v15, a4 + a3, 0);
    v6 = (void *)a1[176];
    if ( v6 )
    {
      a1[177] = 0;
      sub_80CF780(v6);
      a1[176] = 0;
      a1[178] = 0;
    }
    if ( v5 )
    {
      v7 = strlen(v5);
      v8 = a1[177];
      n = v7;
      v9 = v7;
      if ( v8 )
      {
        --v8;
        v9 = v7 + v8;
      }
      v10 = (void *)a1[176];
      v11 = v9 + 1;
      if ( a1[178] < v9 + 1 )
      {
        v14 = v9;
        v13 = v9 + 1;
        v10 = sub_80CF920((int)(a1 + 176), v10, v9 + 1, 1u);
        v9 = v14;
        v11 = v13;
        a1[176] = v10;
      }
      a1[177] = v11;
      *((_BYTE *)v10 + v9) = 0;
      memmove((void *)(a1[176] + v8), v5, n);
    }
    result = 1;
  }
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
