unsigned __int64 __fastcall sub_6C46B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-F0h]
  unsigned __int64 v17; // [rsp+10h] [rbp-E0h]
  __int64 v18; // [rsp+20h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-C8h] BYREF
  _OWORD v20[11]; // [rsp+38h] [rbp-B8h] BYREF

  v16 = a1 + 72;
  ptr[1] = (void *)0x2000000004LL;
  ptr[0] = v20;
  v18 = 0;
  v20[0] = _mm_shuffle_ps(
             (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
             (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3)),
             136);
  v4 = sub_25AC3A0(a1 + 72, ptr, &v18, &off_47D0C00);
  v5 = (v4 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v4 )
  {
    v17 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7;
    sub_25AC3A0(v16, ptr, &v18, &off_47D0C00);
    v7 = *(_QWORD *)(a1 + 2192);
    v8 = v17;
    *(_QWORD *)(a1 + 2272) += 48LL;
    v9 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v9 + 48 && v7 )
    {
      *(_QWORD *)(a1 + 2192) = v9 + 48;
      v10 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v15 = sub_6A76A0(a1 + 2192, 48, 4);
      v8 = v17;
      v10 = v15;
      v9 = v15;
    }
    if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) < 0x10 )
      v8 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    *(_BYTE *)(v10 + 18) &= 0xF8u;
    *(_QWORD *)v10 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = a2;
    *(_WORD *)(v10 + 16) = ((v11 & 0x1F) << 8) | 1;
    *(_QWORD *)(v10 + 40) = a3;
    v12 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v12 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 16);
    }
    v13 = v10 + 24;
    v5 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v12) = v9;
    v14 = v18;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v16, v13, v14, &off_47D0C00);
  }
  if ( ptr[0] != v20 )
    free(ptr[0]);
  return v5;
}

