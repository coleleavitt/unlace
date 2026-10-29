unsigned __int64 __fastcall sub_6B4A70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rdi

  v4 = (__int64)(a1 + 274);
  v6 = a1[274];
  a1[284] += 56LL;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v7 + 56 && v6 )
    a1[274] = v7 + 56;
  else
    v7 = sub_6A76A0((__int64)(a1 + 274), 56, 3);
  *(_BYTE *)(v7 + 48) &= ~1u;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = a3;
  *(_OWORD *)(v7 + 24) = 0;
  sub_7671E0(v7);
  v8 = *(_QWORD *)(v7 + 40) == 0;
  *(_QWORD *)v7 = **(_QWORD **)(a2 + 32);
  if ( v8 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( (*(_BYTE *)(v14 + 48) & 1) == 0 )
    {
      sub_7671E0(v14);
      v14 = *(_QWORD *)(a2 + 32);
    }
    *(_QWORD *)(v7 + 40) = *(_QWORD *)(v14 + 40);
  }
  v9 = a1[274];
  a1[284] += 40LL;
  result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v9 )
    a1[274] = result + 40;
  else
    result = sub_6A76A0(v4, 40, 3);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 6;
  *(_QWORD *)(result + 16) = v11;
  *(_QWORD *)(result + 24) = v12;
  *(_QWORD *)(result + 32) = v7;
  if ( v12 )
  {
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)v11 + 4LL));
    *(_DWORD *)(result + 8) = *(_DWORD *)(*(_QWORD *)(v11 + 8 * v12 - 8) + 8LL);
    *(_QWORD *)result = _mm_shuffle_epi32(v13, 224).m128i_u64[0];
  }
  return result;
}

