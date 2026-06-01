/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC940
// Address: 0x080BC940

//----- (080BC940) --------------------------------------------------------
int __cdecl sub_80BC940(int a1, char **a2, void *a3, unsigned int a4)
{
  int v4; // ecx
  int v5; // eax
  size_t v6; // edi
  void *v7; // ebp
  void *v8; // eax
  unsigned int v9; // esi
  size_t v10; // eax
  size_t v11; // esi
  size_t v12; // eax
  int result; // eax
  int v14; // [esp+4h] [ebp-40h]
  void *v15; // [esp+4h] [ebp-40h]
  void *ptr; // [esp+8h] [ebp-3Ch] BYREF
  size_t n; // [esp+Ch] [ebp-38h]
  void *src; // [esp+10h] [ebp-34h] BYREF
  unsigned int v19; // [esp+14h] [ebp-30h]
  _BYTE v20[5]; // [esp+1Fh] [ebp-25h] BYREF
  _DWORD v21[8]; // [esp+24h] [ebp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 20);
  v21[0] = __readgsdword(0x14u);
  if ( !v4 )
    goto LABEL_13;
  src = a3;
  v19 = a4;
  v14 = sub_80CDEC0((unsigned int *)&src, a4);
  v5 = sub_80CDEC0((unsigned int *)&src, v19);
  v6 = v5;
  if ( !v5 )
    goto LABEL_13;
  v7 = sub_80CF710(v5);
  if ( !v7 )
  {
    result = 2;
    goto LABEL_14;
  }
  v8 = src;
  if ( v19 < (unsigned int)src + v6 || (char *)src + v6 < src )
  {
LABEL_13:
    result = 1;
    goto LABEL_14;
  }
  src = (char *)src + v6;
  memcpy(v7, v8, v6);
  ptr = nullptr;
  n = 0;
  v9 = (*(int (__cdecl **)(int, int, void *, size_t, void **))(a1 + 20))(a1, v14, v7, v6, &ptr);
  sub_80CF780(v7);
  v10 = sub_80CDC90(v20, (unsigned int)v21, v9) - v20;
  if ( v10 )
    sub_80BC3D0(v10, a2, v20);
  v11 = n;
  v15 = ptr;
  v12 = sub_80CDC90(v20, (unsigned int)v21, n) - v20;
  if ( v12 )
    sub_80BC3D0(v12, a2, v20);
  if ( v11 )
    sub_80BC3D0(v11, a2, v15);
  sub_80CF780(ptr);
  result = 0;
LABEL_14:
  if ( v21[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
