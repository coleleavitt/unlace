/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_968F0
// Address: 0x000968F0

//----- (000968F0) --------------------------------------------------------
int __cdecl sub_968F0(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  int v5; // edi
  size_t v6; // esi
  void *v7; // eax
  int v8; // esi
  size_t v9; // ecx
  const void *v10; // edx
  unsigned int v11; // edi
  void *v12; // edi
  unsigned int v13; // esi
  _BYTE *v14; // eax
  size_t v15; // esi
  _BYTE *v16; // eax
  int v18; // [esp+8h] [ebp-34h]
  void *v19; // [esp+8h] [ebp-34h]
  size_t v20; // [esp+Ch] [ebp-30h]
  size_t v21; // [esp+10h] [ebp-2Ch] BYREF
  void *v22; // [esp+14h] [ebp-28h] BYREF
  const void *v23; // [esp+18h] [ebp-24h] BYREF
  unsigned int v24; // [esp+1Ch] [ebp-20h]
  _BYTE src[5]; // [esp+23h] [ebp-19h] BYREF
  _DWORD v26[5]; // [esp+28h] [ebp-14h] BYREF

  v26[0] = __readgsdword(0x14u);
  if ( !*(_DWORD *)(a1 + 20) )
    return 1;
  v23 = (const void *)a3;
  v24 = a4;
  v18 = unpack_dd((unsigned int *)&v23, a4);
  v4 = unpack_dd((unsigned int *)&v23, v24);
  v5 = v4;
  v6 = v4;
  if ( v4 )
  {
    v7 = qalloc(v4);
    if ( !v7 )
      return 2;
  }
  else
  {
    v7 = nullptr;
  }
  v9 = v6;
  v10 = v23;
  v11 = (unsigned int)v23 + v5;
  v8 = 1;
  if ( v11 >= (unsigned int)v23 && v11 <= v24 )
  {
    v23 = (const void *)v11;
    v20 = v9;
    v12 = v7;
    memcpy(v7, v10, v9);
    if ( v12 )
    {
      v22 = nullptr;
      v21 = 0;
      v13 = (*(int (__cdecl **)(int, int, void *, size_t, void **, size_t *))(a1 + 20))(a1, v18, v12, v20, &v22, &v21);
      qfree(v12);
      v14 = pack_dd(src, (unsigned int)v26, v13);
      sub_3A950(a2, src, v14 - src);
      v19 = v22;
      v15 = v21;
      v16 = pack_dd(src, (unsigned int)v26, v21);
      sub_3A950(a2, src, v16 - src);
      sub_3A950(a2, v19, v15);
      qfree(v22);
      return 0;
    }
  }
  return v8;
}
