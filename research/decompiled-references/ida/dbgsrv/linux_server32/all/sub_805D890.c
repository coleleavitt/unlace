/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805D890
// Address: 0x0805D890

//----- (0805D890) --------------------------------------------------------
unsigned int __cdecl sub_805D890(int a1, char *a2, char a3, char *s, const char *a5, int a6, const char *a7)
{
  size_t v7; // edi
  void *v8; // eax
  size_t v9; // edi
  void *v10; // eax
  size_t v11; // edi
  void *v12; // eax
  char *v13; // edx
  const char *v14; // edi
  void *v15; // ebx
  __int64 v16; // xmm0_8
  void **v17; // eax
  void *v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  void **v21; // eax
  void *v22; // edx
  unsigned int result; // eax
  void **v24; // eax
  int v25; // edx
  char *src; // [esp+4h] [ebp-1058h]
  size_t n; // [esp+Ch] [ebp-1050h]
  int v28; // [esp+14h] [ebp-1048h]
  int v29; // [esp+30h] [ebp-102Ch] BYREF
  void *ptr; // [esp+34h] [ebp-1028h] BYREF
  __int64 v31; // [esp+38h] [ebp-1024h]
  char v32[4096]; // [esp+40h] [ebp-101Ch] BYREF
  unsigned int v33; // [esp+1040h] [ebp-1Ch]

  v33 = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 1028) = 0;
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1036) = 0;
  *(_DWORD *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1044) = 0;
  *(_DWORD *)(a1 + 1048) = 0;
  *(_DWORD *)a1 = &off_811B7E0;
  if ( s )
  {
    v7 = strlen(s);
    v8 = sub_80CF920(a1 + 1040, nullptr, v7 + 1, 1u);
    *(_DWORD *)(a1 + 1040) = v8;
    *(_DWORD *)(a1 + 1044) = v7 + 1;
    memmove(v8, s, v7);
    *(_BYTE *)(*(_DWORD *)(a1 + 1040) + v7) = 0;
  }
  *(_DWORD *)(a1 + 1052) = 0;
  *(_DWORD *)(a1 + 1056) = 0;
  *(_DWORD *)(a1 + 1060) = 0;
  if ( a5 )
  {
    v9 = strlen(a5);
    v10 = sub_80CF920(a1 + 1052, nullptr, v9 + 1, 1u);
    *(_DWORD *)(a1 + 1052) = v10;
    *(_DWORD *)(a1 + 1056) = v9 + 1;
    memmove(v10, a5, v9);
    *(_BYTE *)(*(_DWORD *)(a1 + 1052) + v9) = 0;
  }
  *(_DWORD *)(a1 + 1064) = 0;
  *(_DWORD *)(a1 + 1068) = 0;
  *(_DWORD *)(a1 + 1072) = 0;
  if ( a7 )
  {
    v11 = strlen(a7);
    v12 = sub_80CF920(a1 + 1064, nullptr, v11 + 1, 1u);
    *(_DWORD *)(a1 + 1064) = v12;
    *(_DWORD *)(a1 + 1068) = v11 + 1;
    memmove(v12, a7, v11);
    *(_BYTE *)(*(_DWORD *)(a1 + 1064) + v11) = 0;
  }
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 1076) = a6;
  v13 = (char *)&qword_811CFF4 - 271814;
  if ( !a3 )
    v13 = (char *)&qword_811CFF4 - 281975;
  src = v13;
  sub_80D0740((unsigned int)v32, a2, 4096);
  v14 = sub_80D0690(v32, src, (const char **)&v29);
  v28 = a1 + 1028;
  while ( v14 )
  {
    ptr = nullptr;
    v31 = 0;
    n = strlen(v14);
    ptr = sub_80CF920((int)&ptr, nullptr, n + 1, 1u);
    LODWORD(v31) = n + 1;
    memmove(ptr, v14, n);
    *((_BYTE *)ptr + n) = 0;
    v25 = *(_DWORD *)(a1 + 1032);
    v24 = *(void ***)(a1 + 1028);
    v19 = *(_DWORD *)(a1 + 1036);
    v20 = v25 + 1;
    if ( &ptr < v24 || &ptr >= &v24[3 * v19] )
    {
      if ( v19 < v20 )
      {
        v24 = (void **)sub_80CF920(v28, v24, v25 + 1, 0xCu);
        v25 = *(_DWORD *)(a1 + 1032);
        *(_DWORD *)(a1 + 1028) = v24;
      }
      v21 = &v24[3 * v25];
      v22 = ptr;
      *(_QWORD *)(v21 + 1) = v31;
      *v21 = v22;
      ++*(_DWORD *)(a1 + 1032);
    }
    else
    {
      v15 = ptr;
      v16 = v31;
      ptr = nullptr;
      v31 = 0;
      if ( v19 < v20 )
      {
        v24 = (void **)sub_80CF920(v28, v24, v25 + 1, 0xCu);
        v25 = *(_DWORD *)(a1 + 1032);
        *(_DWORD *)(a1 + 1028) = v24;
      }
      v17 = &v24[3 * v25];
      *v17 = v15;
      *(_QWORD *)(v17 + 1) = v16;
      v18 = ptr;
      ++*(_DWORD *)(a1 + 1032);
      if ( v18 )
      {
        LODWORD(v31) = 0;
        sub_80CF780(v18);
      }
    }
    v14 = sub_80D0690(nullptr, src, (const char **)&v29);
  }
  result = v33 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811B7E0: using guessed type int (__cdecl *off_811B7E0)(int, int);
// 811CFF4: using guessed type __int64 qword_811CFF4;
