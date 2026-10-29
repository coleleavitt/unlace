__int64 __fastcall sub_3D2A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  int v5; // edx
  __int64 result; // rax
  unsigned __int8 v7; // al
  char v8; // dl
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+18h] [rbp-70h]
  __int128 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+58h] [rbp-30h]
  __int16 v20; // [rsp+5Ch] [rbp-2Ch]
  char v21; // [rsp+5Eh] [rbp-2Ah]
  unsigned __int64 v22; // [rsp+68h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 24);
  v22 = __readfsqword(0x28u);
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  if ( v3 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    qfree(v3);
  }
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v4);
  }
  sub_344F0(a2, (__int64)&v12);
  v5 = sub_39820(*(_QWORD *)(a1 + 8), a2 + 48);
  result = 0;
  if ( v5 != -1 )
  {
    v7 = *(_BYTE *)(a2 + 52);
    v8 = v7 >> 4;
    if ( v7 > 0x2Fu )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 522LL) == 40 && v8 == 14 )
      {
        v8 = 2;
      }
      else if ( (unsigned __int8)v8 <= 9u )
      {
        v8 = -2;
      }
    }
    *(_BYTE *)(a2 + 92) = v8;
    v9 = _mm_loadl_epi64((const __m128i *)(a2 + 64));
    *(_BYTE *)(a2 + 93) = v7 & 0xF;
    v10 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 88) = 0;
    v11 = (__m128i)(unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL) + v10);
    result = 1;
    *(__m128i *)(a2 + 72) = _mm_unpacklo_epi64(v9, v11);
  }
  return result;
}

