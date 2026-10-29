__int64 __fastcall sub_100D3E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  void *v6; // r15
  __m128i *v7; // r14
  __m128i *v8; // rbx
  void *v9; // rdi
  int v10; // ebx
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(unsigned int *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 84) <= *(_DWORD *)(a1 + 80) )
  {
    v6 = (void *)(a1 + 88);
    v7 = (__m128i *)sub_2237400(a1 + 72, a1 + 88, 0, 144, v11);
    v8 = &v7[9 * *(unsigned int *)(a1 + 80)];
    v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
    sub_100CAC0(v8, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    v8[2].m128i_i64[0] = (__int64)v8[3].m128i_i64;
    sub_100CAC0((__m128i *)v8[2].m128i_i64, *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
    v8[4].m128i_i64[0] = (__int64)v8[5].m128i_i64;
    sub_100CAC0((__m128i *)v8[4].m128i_i64, *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
    v8[6].m128i_i64[0] = (__int64)v8[7].m128i_i64;
    sub_100CAC0((__m128i *)v8[6].m128i_i64, *(_BYTE **)(a2 + 96), *(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 104));
    v8[8].m128i_i64[0] = *(_QWORD *)(a2 + 128);
    v8[8].m128i_i32[2] = *(_DWORD *)(a2 + 136);
    sub_100D1B0(a1 + 72, v7);
    v9 = *(void **)(a1 + 72);
    v10 = v11[0];
    if ( v6 != v9 )
      free(v9);
    *(_QWORD *)(a1 + 72) = v7;
    *(_DWORD *)(a1 + 84) = v10;
    ++*(_DWORD *)(a1 + 80);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 72) + 144 * v3;
    *(_QWORD *)v4 = v4 + 16;
    sub_100CAC0((_QWORD *)v4, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
    *(_QWORD *)(v4 + 32) = v4 + 48;
    sub_100CAC0((_QWORD *)(v4 + 32), *(_BYTE **)(a2 + 32), *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 40));
    *(_QWORD *)(v4 + 64) = v4 + 80;
    sub_100CAC0((_QWORD *)(v4 + 64), *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
    *(_QWORD *)(v4 + 96) = v4 + 112;
    sub_100CAC0((_QWORD *)(v4 + 96), *(_BYTE **)(a2 + 96), *(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 104));
    *(_QWORD *)(v4 + 128) = *(_QWORD *)(a2 + 128);
    *(_DWORD *)(v4 + 136) = *(_DWORD *)(a2 + 136);
    ++*(_DWORD *)(a1 + 80);
  }
  return v3;
}
