void __fastcall sub_1FE3C20(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ebp
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  _DWORD *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  void *v25; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+8h] [rbp-50h]
  char v27; // [rsp+Ch] [rbp-4Ch]
  __m128i v28; // [rsp+10h] [rbp-48h] BYREF
  __int64 v29; // [rsp+20h] [rbp-38h]

  v9 = a1 + 8;
  v10 = *(unsigned int *)(a1 + 16);
  v11 = *(unsigned int *)(a1 + 20);
  v12 = a8;
  if ( v10 + 1 > v11 )
  {
    a2 = a1 + 24;
    sub_2237220(a1 + 8, a1 + 24, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 16);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v10) = a7 & 0x7FFFFFFF;
  v13 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
  *(_DWORD *)(a1 + 16) = v13;
  switch ( a7 & 0x7FFFFFFF )
  {
    case 1LL:
      sub_1FE3950(a1, (__int64)a8, v13, v11, a5, a6);
      break;
    case 2LL:
      if ( (*(_BYTE *)(a9 + 28) & 0x7Fu) - 18 > 0x3F )
        goto LABEL_10;
      sub_1FE3A00(a1, *(_QWORD *)(a9 + 40), v13, v11, a5, a6);
      break;
    case 3LL:
      v20 = (unsigned int)v13;
      v21 = (unsigned int)v13 + 1LL;
      if ( v21 > *(unsigned int *)(a1 + 20) )
      {
        sub_2237220(v9, a1 + 24, v21, 4);
        v20 = *(unsigned int *)(a1 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v20) = 0;
      v22 = *(unsigned int *)(a1 + 20);
      v23 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
      *(_DWORD *)(a1 + 16) = v23;
      if ( v23 + 1 > v22 )
      {
        sub_2237220(v9, a1 + 24, v23 + 1, 4);
        v23 = *(unsigned int *)(a1 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v23) = 0;
      ++*(_DWORD *)(a1 + 16);
      break;
    case 4LL:
      v24 = HIDWORD(a7) & 0x7FFFFFFF;
      if ( (unsigned int)v24 > 0x40 )
      {
        sub_2205600(&v28, v24, a8, ((unsigned __int64)(unsigned int)v24 + 63) >> 6);
        v27 = HIBYTE(a7) >> 7;
        v26 = v28.m128i_u32[2];
        v25 = (void *)v28.m128i_i64[0];
      }
      else
      {
        v26 = HIDWORD(a7) & 0x7FFFFFFF;
        v25 = a8;
        v27 = HIBYTE(a7) >> 7;
      }
      sub_220C670(&v25, v9);
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      break;
    case 5LL:
      sub_1FE3950(a1, a9, v13, v11, a5, a6);
      v14 = *(unsigned int *)(a1 + 16);
      v15 = *a8;
      if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
      {
        sub_2237220(v9, a1 + 24, v14 + 1, 4);
        v14 = *(unsigned int *)(a1 + 16);
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v14) = v15;
      ++*(_DWORD *)(a1 + 16);
      if ( v15 == 7 || v15 == 12 )
        goto LABEL_10;
      sub_A4FF00(a8, v9);
      break;
    case 6LL:
    case 7LL:
      sub_F22A90(&v28, (__int64)a8);
      sub_1FE3B30((_BYTE *)a1, v28.m128i_i64[0]);
      break;
    case 8LL:
LABEL_10:
      *(_BYTE *)a1 = 1;
      break;
    case 9LL:
      v16 = v13 + 1;
      if ( v16 > *(unsigned int *)(a1 + 20) )
      {
        a2 = a1 + 24;
        sub_2237220(v9, a1 + 24, v16, 4);
      }
      v17 = *(unsigned int *)(a1 + 16);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v17) = HIDWORD(a7);
      v18 = &a8[6 * HIDWORD(a7)];
      ++*(_DWORD *)(a1 + 16);
      if ( v18 != a8 )
      {
        do
        {
          v19 = *((_QWORD *)v12 + 2);
          v12 += 6;
          v29 = v19;
          v28 = _mm_loadu_si128((const __m128i *)(v12 - 6));
          sub_1FE3C20(a1, a2, v17, v11, a5, a6, v28.m128i_i64[0], v28.m128i_i64[1], v19);
        }
        while ( v18 != v12 );
      }
      break;
    default:
      return;
  }
}
