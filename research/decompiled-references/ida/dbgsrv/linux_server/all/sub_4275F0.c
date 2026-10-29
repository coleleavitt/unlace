/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4275F0
// Address: 0x00000000004275F0

//----- (00000000004275F0) ----------------------------------------------------
__int64 __fastcall sub_4275F0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  __int64 result; // rax
  unsigned __int8 v10; // al
  char v11; // dl
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  __int128 v16; // [rsp+8h] [rbp-80h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  __int128 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+38h] [rbp-50h]
  __int128 v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+58h] [rbp-30h]
  __int16 v23; // [rsp+5Ch] [rbp-2Ch]
  char v24; // [rsp+5Eh] [rbp-2Ah]
  unsigned __int64 v25; // [rsp+68h] [rbp-20h]

  v3 = *(void **)(a2 + 24);
  v25 = __readfsqword(0x28u);
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    j__free(v3);
  }
  v4 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    j__free(v4);
  }
  sub_424260(a2, (__int64)&v15);
  v8 = sub_424E00(*(_QWORD *)(a1 + 8), (_BYTE *)(a2 + 48), v5, v6, v7);
  result = 0;
  if ( v8 != -1 )
  {
    v10 = *(_BYTE *)(a2 + 52);
    v11 = v10 >> 4;
    if ( v10 > 0x2Fu )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 522LL) == 40 && v11 == 14 )
      {
        v11 = 2;
      }
      else if ( (unsigned __int8)v11 <= 9u )
      {
        v11 = -2;
      }
    }
    *(_BYTE *)(a2 + 92) = v11;
    v12 = _mm_loadl_epi64((const __m128i *)(a2 + 64));
    *(_BYTE *)(a2 + 93) = v10 & 0xF;
    v13 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 88) = 0;
    v14 = (__m128i)(unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL) + v13);
    result = 1;
    *(__m128i *)(a2 + 72) = _mm_unpacklo_epi64(v12, v14);
  }
  return result;
}
// 427693: variable 'v5' is possibly undefined
// 427693: variable 'v6' is possibly undefined
// 427693: variable 'v7' is possibly undefined
