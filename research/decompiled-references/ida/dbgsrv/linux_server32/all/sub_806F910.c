/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806F910
// Address: 0x0806F910

//----- (0806F910) --------------------------------------------------------
unsigned int __cdecl sub_806F910(int a1, int a2, int a3)
{
  int *v3; // eax
  int *v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int result; // eax
  char *v8; // eax
  __int64 v9; // [esp-8h] [ebp-80h]
  int v10; // [esp+0h] [ebp-78h]
  int v11; // [esp+0h] [ebp-78h]
  int v12; // [esp+0h] [ebp-78h]
  int v13[2]; // [esp+38h] [ebp-40h] BYREF
  void *ptr; // [esp+40h] [ebp-38h] BYREF
  int v15; // [esp+44h] [ebp-34h]
  int v16; // [esp+48h] [ebp-30h]
  void *v17; // [esp+50h] [ebp-28h] BYREF
  int v18; // [esp+54h] [ebp-24h]
  int v19; // [esp+58h] [ebp-20h]
  unsigned int v20; // [esp+5Ch] [ebp-1Ch]

  v20 = __readgsdword(0x14u);
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  *(_QWORD *)v13 = *(_QWORD *)(a3 + 32);
  ptr = sub_80CF920((int)&ptr, nullptr, 2u, 1u);
  v15 = 2;
  *(_BYTE *)ptr = 63;
  *((_BYTE *)ptr + 1) = 0;
  if ( a3 && (*(_DWORD *)(a1 + 140) != 0) + *(_DWORD *)(a1 + 144) > 0 && *(_QWORD *)(a1 + 156) )
  {
    HIDWORD(v9) = *(_DWORD *)a3;
    LODWORD(v9) = a1 + 140;
    sub_806E910(*(_DWORD *)(a1 + 132), (__m128i **)&ptr, v9);
  }
  v17 = nullptr;
  v3 = &dword_80DDFD8;
  v18 = 0;
  v19 = 0;
  if ( v15 )
    v3 = (int *)ptr;
  sub_805ED10(&v17, "Size of %s", v3);
  v4 = &dword_80DDFD8;
  if ( v18 )
    v4 = (int *)v17;
  sub_806DE60(
    *(int **)(*(_DWORD *)(a1 + 132) + 360),
    (unsigned __int64 *)v13,
    1u,
    (int)v4,
    *(_DWORD *)(a3 + 24),
    *(_DWORD *)(a3 + 28),
    -1);
  v5 = v13[0];
  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 < v13[0] )
  {
    v8 = *(char **)a2;
    if ( *(_DWORD *)(a2 + 8) < v13[0] )
    {
      v12 = v13[0];
      v8 = (char *)sub_80CF920(a2, v8, v13[0], 1u);
      v5 = v12;
      *(_DWORD *)a2 = v8;
      v6 = *(_DWORD *)(a2 + 4);
    }
    v11 = v5;
    memset(&v8[v6], 0, v5 - v6);
    v5 = v11;
    *(_DWORD *)(a2 + 4) = v11;
  }
  else if ( v13[0] != v6 )
  {
    *(_DWORD *)(a2 + 4) = v13[0];
  }
  v10 = v5;
  sub_80CD730(
    *(_DWORD *)(*(_DWORD *)(a1 + 132) + 360),
    _mm_add_epi64(
      _mm_loadl_epi64((const __m128i *)(a3 + 24)),
      _mm_loadl_epi64((const __m128i *)(*(_DWORD *)(a1 + 132) + 364))).m128i_i64[0],
    0);
  sub_806A1B0(*(_DWORD *)(a1 + 132), *(void **)a2, v10, 0);
  if ( v17 )
  {
    v18 = 0;
    sub_80CF780(v17);
  }
  if ( ptr )
  {
    v15 = 0;
    sub_80CF780(ptr);
  }
  result = v20 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
