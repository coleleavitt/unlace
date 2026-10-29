unsigned __int64 __fastcall sub_6C82E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int8 *a4)
{
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rbx
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+8h] [rbp-E0h]
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  __m128 v21; // [rsp+30h] [rbp-B8h] BYREF
  int v22; // [rsp+40h] [rbp-A8h]
  int v23; // [rsp+44h] [rbp-A4h]
  _BOOL4 v24; // [rsp+48h] [rbp-A0h]

  v6 = *a4;
  v19 = 0;
  v22 = v6;
  LOBYTE(v6) = a4[1];
  ptr[0] = &v21;
  v21 = _mm_shuffle_ps(
          (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
          (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3)),
          136);
  v24 = (v6 & 2) != 0;
  v23 = v6 & 1;
  ptr[1] = (void *)0x2000000007LL;
  v7 = sub_25AC3A0(a1 + 872, ptr, &v19, &off_47D0900);
  v8 = (v7 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v7 )
  {
    v10 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 64LL;
    v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v11 + 64 && v10 )
    {
      *(_QWORD *)(a1 + 2192) = v11 + 64;
      v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v12 = sub_6A76A0(a1 + 2192, 64, 4);
      v11 = v12;
    }
    v13 = 0;
    if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      v13 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
    *(_BYTE *)(v12 + 18) &= 0xF8u;
    *(_QWORD *)v12 = v12;
    *(_QWORD *)(v12 + 8) = v12 & 0xFFFFFFFFFFFFFFF0LL;
    *(_WORD *)(v12 + 16) = (v13 << 8) | 0x1B;
    *(_QWORD *)(v12 + 24) = 0;
    v14 = *(_WORD *)a4;
    *(_QWORD *)(v12 + 32) = a2;
    *(_QWORD *)(v12 + 40) = a3;
    *(_WORD *)(v12 + 48) = v14;
    v15 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v15 + 1) )
    {
      v18 = v11;
      sub_25D6060(a1 + 8, a1 + 24, v15 + 1, 8);
      v15 = *(unsigned int *)(a1 + 16);
      v11 = v18;
    }
    v16 = v12 + 24;
    v8 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v15) = v11;
    v17 = v19;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 872, v16, v17, &off_47D0900);
  }
  if ( ptr[0] != &v21 )
    free(ptr[0]);
  return v8;
}

