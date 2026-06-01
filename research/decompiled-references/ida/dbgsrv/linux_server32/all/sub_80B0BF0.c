/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B0BF0
// Address: 0x080B0BF0

//----- (080B0BF0) --------------------------------------------------------
int __cdecl sub_80B0BF0(int a1, void **a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // esi
  unsigned int v6; // edx
  size_t v7; // ecx
  void *v8; // eax
  size_t v9; // [esp-40h] [ebp-40h]
  unsigned int v10; // [esp-3Ch] [ebp-3Ch]
  unsigned int v11; // [esp-3Ch] [ebp-3Ch]
  const void *v12; // [esp-38h] [ebp-38h]
  int v13; // [esp-30h] [ebp-30h] BYREF
  void *v14; // [esp-2Ch] [ebp-2Ch] BYREF
  int v15; // [esp-28h] [ebp-28h]
  int v16; // [esp-24h] [ebp-24h]
  unsigned int v17; // [esp-20h] [ebp-20h]

  v17 = __readgsdword(0x14u);
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  sub_80B0900(a3, &v14);
  sub_80B0AC0(&v13, a1, (int)&v14);
  LOBYTE(v3) = v13 != a1 + 4 && a2 != nullptr;
  v4 = v3;
  if ( (_BYTE)v3 && a2 != (void **)(v13 + 28) )
  {
    v6 = *(_DWORD *)(v13 + 32);
    if ( !v6 || (v7 = v6 - 1, v6 == 1) )
    {
      a2[1] = nullptr;
    }
    else
    {
      v12 = *(const void **)(v13 + 28);
      v8 = *a2;
      if ( (unsigned int)a2[2] < v6 )
      {
        v9 = v6 - 1;
        v11 = *(_DWORD *)(v13 + 32);
        v8 = sub_80CF920((int)a2, v8, v6, 1u);
        v7 = v9;
        v6 = v11;
        *a2 = v8;
      }
      a2[1] = (void *)v6;
      v10 = v6;
      memmove(v8, v12, v7);
      *((char *)*a2 + v10 - 1) = 0;
    }
  }
  if ( v14 )
  {
    v15 = 0;
    sub_80CF780(v14);
  }
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
// 80B0C5A: variable 'v3' is possibly undefined
