void __fastcall sub_EA8690(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9)
{
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  char *v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  char *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  void *v24; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+8h] [rbp-50h]
  char v26; // [rsp+Ch] [rbp-4Ch]
  __m128i v27; // [rsp+10h] [rbp-48h] BYREF
  __int64 v28; // [rsp+20h] [rbp-38h]

  v9 = a1 + 176;
  v10 = *(unsigned int *)(a1 + 184);
  v11 = *(unsigned int *)(a1 + 188);
  v12 = a8;
  if ( v10 + 1 > v11 )
  {
    a2 = a1 + 192;
    sub_2237220(a1 + 176, a1 + 192, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v10) = a7 & 0x7FFFFFFF;
  v13 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v13;
  switch ( a7 & 0x7FFFFFFF )
  {
    case 1LL:
      sub_EA8520(a1, (__int64)a8, v13, v11, a5, a6);
      break;
    case 2LL:
      sub_EA58C0(a1, a9);
      break;
    case 3LL:
      v14 = v13 + 1;
      if ( v14 > *(unsigned int *)(a1 + 188) )
        sub_2237220(v9, a1 + 192, v14, 4);
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4LL * *(unsigned int *)(a1 + 184)) = 0;
      v15 = *(unsigned int *)(a1 + 188);
      v16 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
      *(_DWORD *)(a1 + 184) = v16;
      if ( v16 + 1 > v15 )
      {
        sub_2237220(v9, a1 + 192, v16 + 1, 4);
        v16 = *(unsigned int *)(a1 + 184);
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v16) = 0;
      ++*(_DWORD *)(a1 + 184);
      break;
    case 4LL:
      v23 = HIDWORD(a7) & 0x7FFFFFFF;
      if ( (unsigned int)v23 > 0x40 )
      {
        sub_2205600(&v27, v23, a8, ((unsigned __int64)(unsigned int)v23 + 63) >> 6);
        v26 = HIBYTE(a7) >> 7;
        v25 = v27.m128i_u32[2];
        v24 = (void *)v27.m128i_i64[0];
      }
      else
      {
        v25 = HIDWORD(a7) & 0x7FFFFFFF;
        v24 = a8;
        v26 = HIBYTE(a7) >> 7;
      }
      sub_220C670(&v24, v9);
      if ( v25 > 0x40 && v24 )
        operator delete[](v24);
      break;
    case 5LL:
      sub_EA8520(a1, a9, v13, v11, a5, a6);
      sub_EA5E90(a1, (unsigned int *)a8);
      break;
    case 6LL:
    case 7LL:
      sub_F22A90(&v27, a8);
      sub_EA83A0(a1, v27.m128i_i64[0]);
      break;
    case 8LL:
      sub_F1A4D0(a8, v9);
      break;
    case 9LL:
      v17 = (unsigned int)v13;
      v18 = *(unsigned int *)(a1 + 188);
      v19 = (unsigned int)v13 + 1LL;
      if ( v19 > v18 )
      {
        a2 = a1 + 192;
        sub_2237220(v9, a1 + 192, v19, 4);
        v17 = *(unsigned int *)(a1 + 184);
      }
      v20 = *(_QWORD *)(a1 + 176);
      *(_DWORD *)(v20 + 4 * v17) = HIDWORD(a7);
      v21 = &a8[24 * HIDWORD(a7)];
      ++*(_DWORD *)(a1 + 184);
      if ( v21 != a8 )
      {
        do
        {
          v22 = *((_QWORD *)v12 + 2);
          v12 += 24;
          v28 = v22;
          v27 = _mm_loadu_si128((const __m128i *)(v12 - 24));
          sub_EA8690(a1, a2, v20, v18, a5, a6, v27.m128i_i64[0], v27.m128i_i64[1], v22);
        }
        while ( v21 != v12 );
      }
      break;
    default:
      return;
  }
}
