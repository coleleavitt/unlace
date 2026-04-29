__int64 __fastcall sub_F2340(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned int v6; // eax
  unsigned int v7; // ebp
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  unsigned int v10; // [rsp+0h] [rbp-54h]
  unsigned __int64 v11; // [rsp+Ch] [rbp-48h]

  if ( *(_BYTE *)a2 != 14 )
    return 0;
  if ( !(unsigned __int8)sub_153800(a1[2], *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + 16LL) )
  {
    v3 = a1[2];
    v4 = a1[3];
    v5 = *(_QWORD *)(a1[4] + 24LL);
    v6 = sub_134700(*(_QWORD *)(v3 + 64), *(int *)(a2 + 4), 1);
    v7 = v6;
    if ( v6 != -1 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL);
      v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v6)).m128i_u64[0];
      v8 = (_QWORD *)j__qalloc_or_throw(80);
      v8[4] = 0xFFFFFFFF00000000LL;
      v8[5] = 0;
      v8[6] = 0xFFFFFFFF00000000LL;
      v8[7] = 0;
      v8[8] = 0xFFFFFFFF00000000LL;
      v8[9] = 0;
      sub_32C520(v8, v5);
      *(_DWORD *)v8 = 4;
      sub_118FD0(v8 + 4, *(_QWORD *)(a2 + 8));
      sub_119360(v8 + 8);
      *((_BYTE *)v8 + 64) = 1;
      *(_QWORD *)((char *)v8 + 68) = v11;
      sub_9F720(v3, v8, *(_QWORD *)(v4 + 16));
      v9 = (_QWORD *)j__qalloc_or_throw(80);
      v9[4] = 0xFFFFFFFF00000000LL;
      v9[5] = 0;
      v9[6] = 0xFFFFFFFF00000000LL;
      v9[7] = 0;
      v9[8] = 0xFFFFFFFF00000000LL;
      v9[9] = 0;
      sub_32C520(v9, v5);
      *(_DWORD *)v9 = 4;
      sub_118FD0(v9 + 4, *(_QWORD *)(a2 + 8) + 16LL);
      sub_119360(v9 + 8);
      *(_QWORD *)((char *)v9 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v7 + v10)).m128i_u64[0];
      *((_BYTE *)v9 + 64) = 1;
      sub_9F720(v3, v9, *(_QWORD *)(v4 + 16));
      sub_119360(a2);
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = v7;
      *(_DWORD *)(a2 + 4) = 2 * v10;
      *(_DWORD *)(v3 + 24) |= 0x80u;
    }
  }
  return 0;
}
