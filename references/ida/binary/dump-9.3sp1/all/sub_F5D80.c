__int64 __fastcall sub_F5D80(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  unsigned int v16; // [rsp+0h] [rbp-54h]
  unsigned __int64 v17; // [rsp+Ch] [rbp-48h]

  if ( *(_BYTE *)a2 != 14 )
    return 0;
  if ( !(unsigned __int8)sub_157240(a1[2], *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 8) + 16LL) )
  {
    v4 = a1[2];
    v5 = *(int *)(a2 + 4);
    v6 = a1[3];
    v7 = *(_QWORD *)(a1[4] + 24LL);
    v8 = sub_138140(*(_QWORD *)(v4 + 64), v5, 1);
    v11 = v8;
    if ( v8 != -1 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL);
      v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(v8)).m128i_u64[0];
      v12 = (_QWORD *)j__qalloc_or_throw(80, v5, v9, v10);
      v12[4] = 0xFFFFFFFF00000000LL;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      sub_330970(v12, v7);
      *(_DWORD *)v12 = 4;
      sub_11CA10(v12 + 4, *(_QWORD *)(a2 + 8));
      sub_11CDA0(v12 + 8);
      *((_BYTE *)v12 + 64) = 1;
      *(_QWORD *)((char *)v12 + 68) = v17;
      sub_A3160(v4, v12, *(_QWORD *)(v6 + 16));
      v15 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v12, v13, v14);
      v15[4] = 0xFFFFFFFF00000000LL;
      v15[5] = 0;
      v15[6] = 0xFFFFFFFF00000000LL;
      v15[7] = 0;
      v15[8] = 0xFFFFFFFF00000000LL;
      v15[9] = 0;
      sub_330970(v15, v7);
      *(_DWORD *)v15 = 4;
      sub_11CA10(v15 + 4, *(_QWORD *)(a2 + 8) + 16LL);
      sub_11CDA0(v15 + 8);
      *(_QWORD *)((char *)v15 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(v11 + v16)).m128i_u64[0];
      *((_BYTE *)v15 + 64) = 1;
      sub_A3160(v4, v15, *(_QWORD *)(v6 + 16));
      sub_11CDA0(a2);
      *(_BYTE *)a2 = 1;
      *(_DWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 4) = 2 * v16;
      *(_DWORD *)(v4 + 24) |= 0x80u;
    }
  }
  return 0;
}
