/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AD860
// Address: 0x080AD860

//----- (080AD860) --------------------------------------------------------
int __cdecl sub_80AD860(int a1, int a2, void *a3, _DWORD *a4)
{
  int v4; // eax
  int result; // eax
  __int64 v6; // rax
  __m128i v7; // xmm0
  char v8; // al
  __m128i v9; // xmm0
  void *v10; // edx
  void *v11; // eax
  void *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // [esp-10h] [ebp-70h]
  __m128i v16; // [esp+0h] [ebp-60h] BYREF
  int *v17; // [esp+10h] [ebp-50h]
  _DWORD *v18; // [esp+14h] [ebp-4Ch]
  void *v19[4]; // [esp+18h] [ebp-48h]
  int v20; // [esp+34h] [ebp-2Ch] BYREF
  void *ptr; // [esp+38h] [ebp-28h] BYREF
  void *v22; // [esp+3Ch] [ebp-24h]
  int v23; // [esp+40h] [ebp-20h]
  unsigned int v24; // [esp+44h] [ebp-1Ch]

  v16.m128i_i32[3] = (__int32)a3;
  v17 = (int *)a1;
  v18 = a4;
  v24 = __readgsdword(0x14u);
  v4 = *(_DWORD *)(a2 + 56);
  v19[1] = nullptr;
  v19[0] = (void *)(v4 & 0x800);
  if ( (v4 & 0x800) == 0 )
  {
    if ( v24 == __readgsdword(0x14u) )
      return sub_80A68F0(a1, a2, a3, a4);
LABEL_27:
    sub_80D7AB0();
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
LABEL_3:
    *v18 = 10;
    result = 1;
    goto LABEL_4;
  }
  *(__m128i *)v19 = _mm_loadl_epi64((const __m128i *)(a2 + 88));
  v16.m128i_i32[0] = _mm_cvtsi128_si32(*(__m128i *)v19);
  v16.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_epi64(*(__m128i *)v19, 0x20u));
  LODWORD(v6) = sub_80CD730(a1, *(__int64 *)v19, 0);
  if ( v6 != __PAIR64__(v16.m128i_u32[2], v16.m128i_u32[0]) )
  {
    if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
      sub_8058290();
    goto LABEL_20;
  }
  v7 = _mm_loadl_epi64((const __m128i *)(a2 + 72));
  v20 = _mm_cvtsi128_si32(v7);
  v16.m128i_i64[0] = v7.m128i_i64[0];
  v8 = sub_80AD760(v17, (unsigned int *)&v20, 1u, (int)v19[0], (unsigned int)v19[1], -1);
  v9 = _mm_loadl_epi64(&v16);
  if ( !v8 )
  {
    *(__m128i *)v19 = _mm_and_si128(v9, _mm_load_si128((const __m128i *)&xmmword_80DE190));
    if ( sub_80697F0() != 1 )
    {
      if ( v24 == __readgsdword(0x14u) )
        sub_8069CE0(0);
      goto LABEL_27;
    }
  }
  v10 = (void *)v20;
  ptr = nullptr;
  v11 = nullptr;
  v22 = nullptr;
  v23 = 0;
  if ( v20 )
  {
    v19[0] = (void *)v20;
    ptr = sub_80CF920((int)&ptr, nullptr, v20, 1u);
    memset((char *)ptr + (_DWORD)v22, 0, (char *)v19[0] - (char *)v22);
    v10 = v19[0];
    v11 = ptr;
    v22 = v19[0];
  }
  v19[0] = v10;
  v12 = (void *)sub_80CD690((int)v17, v11, (int)v10);
  if ( v19[0] != v12
    || (v13 = sub_80CD880((int)ptr, (int)v22),
        v14 = sub_80CD000((int)v13, (int)v22, 0),
        v15 = *(_DWORD *)(a2 + 8),
        v19[0] = v14,
        v17 = (int *)sub_80CD690((int)v14, (void *)v16.m128i_i32[3], v15),
        sub_80CD620(v19[0]),
        *(int **)(a2 + 8) != v17) )
  {
    sub_8058290();
    if ( ptr )
    {
      v22 = nullptr;
      sub_80CF780(ptr);
    }
LABEL_20:
    *(_BYTE *)(a2 + 96) = 1;
    goto LABEL_3;
  }
  if ( ptr )
  {
    v22 = nullptr;
    sub_80CF780(ptr);
  }
  result = 0;
LABEL_4:
  if ( v24 != __readgsdword(0x14u) )
    goto LABEL_27;
  return result;
}
// 80AD919: variable 'v6' is possibly undefined
// 80DE190: using guessed type __int128 xmmword_80DE190;
// 811E72C: using guessed type int dword_811E72C;
