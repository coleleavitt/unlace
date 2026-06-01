/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806FD30
// Address: 0x0806FD30

//----- (0806FD30) --------------------------------------------------------
unsigned int __cdecl sub_806FD30(int a1, int a2, int a3)
{
  int *v3; // eax
  int *v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int result; // eax
  char *v8; // eax
  int v9; // [esp+0h] [ebp-78h]
  int v10; // [esp+0h] [ebp-78h]
  int v11; // [esp+0h] [ebp-78h]
  int v12[2]; // [esp+38h] [ebp-40h] BYREF
  void *v13; // [esp+40h] [ebp-38h] BYREF
  int v14; // [esp+44h] [ebp-34h]
  int v15; // [esp+48h] [ebp-30h]
  void *ptr; // [esp+50h] [ebp-28h] BYREF
  int v17; // [esp+54h] [ebp-24h]
  unsigned int v18; // [esp+5Ch] [ebp-1Ch]

  v18 = __readgsdword(0x14u);
  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( v18 == __readgsdword(0x14u) )
      sub_8068EE0();
LABEL_18:
    sub_80D7AB0();
  }
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  *(_QWORD *)v12 = *(_QWORD *)(a3 + 32);
  sub_806F830(&ptr, a1, *(_DWORD *)a3);
  v3 = &dword_80DDFD8;
  if ( v17 )
    v3 = (int *)ptr;
  sub_805ED10(&v13, "Size of %s", v3);
  if ( ptr )
  {
    v17 = 0;
    sub_80CF780(ptr);
  }
  v4 = &dword_80DDFD8;
  if ( v14 )
    v4 = (int *)v13;
  sub_806DE60(
    *(int **)(*(_DWORD *)(a1 + 32) + 360),
    (unsigned __int64 *)v12,
    1u,
    (int)v4,
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12),
    -1);
  v5 = v12[0];
  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 < v12[0] )
  {
    v8 = *(char **)a2;
    if ( *(_DWORD *)(a2 + 8) < v12[0] )
    {
      v11 = v12[0];
      v8 = (char *)sub_80CF920(a2, v8, v12[0], 1u);
      v5 = v11;
      *(_DWORD *)a2 = v8;
      v6 = *(_DWORD *)(a2 + 4);
    }
    v10 = v5;
    memset(&v8[v6], 0, v5 - v6);
    v5 = v10;
    *(_DWORD *)(a2 + 4) = v10;
  }
  else if ( v12[0] != v6 )
  {
    *(_DWORD *)(a2 + 4) = v12[0];
  }
  v9 = v5;
  sub_80CD730(
    *(_DWORD *)(*(_DWORD *)(a1 + 32) + 360),
    _mm_add_epi64(
      _mm_loadl_epi64((const __m128i *)(a3 + 8)),
      _mm_loadl_epi64((const __m128i *)(*(_DWORD *)(a1 + 32) + 364))).m128i_i64[0],
    0);
  sub_806A1B0(*(_DWORD *)(a1 + 32), *(void **)a2, v9, 0);
  if ( v13 )
  {
    v14 = 0;
    sub_80CF780(v13);
  }
  result = v18 - __readgsdword(0x14u);
  if ( result )
    goto LABEL_18;
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
