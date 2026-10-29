/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B0D30
// Address: 0x080B0D30

//----- (080B0D30) --------------------------------------------------------
int __cdecl sub_80B0D30(int a1, void **a2, _DWORD *a3, int a4)
{
  int result; // eax
  unsigned int v5; // edx
  int *v6; // eax
  size_t v7; // eax
  int *v8; // edx
  unsigned int v9; // ebx
  char *v10; // eax
  int *v11; // [esp-40h] [ebp-40h]
  unsigned int v12; // [esp-3Ch] [ebp-3Ch]
  const void *v13; // [esp-38h] [ebp-38h]
  size_t v14; // [esp-38h] [ebp-38h]
  size_t v15; // [esp-34h] [ebp-34h]
  int *v16; // [esp-34h] [ebp-34h]
  unsigned int v17; // [esp-34h] [ebp-34h]
  unsigned __int8 v18; // [esp-34h] [ebp-34h]
  char *v19; // [esp-2Ch] [ebp-2Ch] BYREF
  unsigned int v20; // [esp-28h] [ebp-28h]
  unsigned int v21; // [esp-24h] [ebp-24h]
  unsigned int v22; // [esp-20h] [ebp-20h]

  v22 = __readgsdword(0x14u);
  result = sub_80B0BF0(a1, a2, a3);
  if ( !(_BYTE)result )
  {
    v19 = nullptr;
    v20 = 0;
    v21 = 0;
    if ( !a4
      || (v5 = *(_DWORD *)(a4 + 4)) == 0
      || (v15 = v5 - 1, v5 == 1)
      || (v13 = *(const void **)a4,
          v12 = *(_DWORD *)(a4 + 4),
          v19 = (char *)sub_80CF920((int)&v19, nullptr, v5, 1u),
          v20 = v12,
          memmove(v19, v13, v15),
          v19[v12 - 1] = 0,
          v20 <= 1) )
    {
      v6 = sub_80A4AE0();
      if ( v6 && (v16 = v6, v7 = strlen((const char *)v6), v8 = v16, (v14 = v7) != 0) )
      {
        v17 = v7 + 1;
        v9 = v7 + 1;
        v10 = v19;
        if ( v21 < v9 )
        {
          v11 = v8;
          v10 = (char *)sub_80CF920((int)&v19, v19, v9, 1u);
          v8 = v11;
          v19 = v10;
        }
        v20 = v17;
        memmove(v10, v8, v14);
        v19[v14] = 0;
      }
      else
      {
        v20 = 0;
      }
    }
    result = sub_80B06F0((int)a2, (int)a3, (int)&v19);
    LOBYTE(result) = result == 0;
    if ( v19 )
    {
      v18 = result;
      v20 = 0;
      sub_80CF780(v19);
      result = v18;
    }
  }
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
