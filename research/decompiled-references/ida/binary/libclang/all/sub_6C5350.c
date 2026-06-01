unsigned __int64 __fastcall sub_6C5350(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  char v14; // al
  __int16 v15; // dx
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v22; // [rsp+8h] [rbp-F0h]
  __int64 v23; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v24; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v25; // [rsp+18h] [rbp-E0h]
  __int64 v26; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v28[11]; // [rsp+40h] [rbp-B8h] BYREF

  v21 = a1 + 136;
  ptr[1] = (void *)0x2000000004LL;
  ptr[0] = v28;
  v26 = 0;
  v28[0] = _mm_shuffle_ps(
             (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
             (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3)),
             136);
  v4 = sub_25AC3A0(a1 + 136, ptr, &v26, &off_47D0B60);
  v5 = (v4 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a3 + 8);
    v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
      && (a3 & 0xFFFFFFFFFFFFFFF0LL) == v7 )
    {
      v10 = 0;
      v9 = 0;
    }
    else
    {
      v23 = sub_6C5350(
              a1,
              *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7,
              *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL));
      sub_25AC3A0(v21, ptr, &v26, &off_47D0B60);
      v9 = v23;
      v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v10 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += 48LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v12 + 48 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v12 + 48;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v25 = v10;
      v24 = v8;
      v22 = v9;
      v20 = sub_6A76A0(a1 + 2192, 48, 4);
      v10 = v25;
      v8 = v24;
      v9 = v22;
      v13 = v20;
      v12 = v20;
    }
    v14 = *(_BYTE *)(*(_QWORD *)v8 + 17LL);
    v15 = *(_BYTE *)(a3 + 17) & 0x17;
    *(_QWORD *)v13 = v13;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = a2;
    v16 = v15 | v14 & 0x1F;
    *(_QWORD *)(v13 + 40) = a3;
    if ( v10 < 0x10 )
      v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    *(_BYTE *)(v13 + 18) &= 0xF8u;
    *(_QWORD *)(v13 + 8) = v9;
    *(_WORD *)(v13 + 16) = (v16 << 8) | 0x20;
    v17 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v17 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v17 + 1, 8);
      v17 = *(unsigned int *)(a1 + 16);
    }
    v18 = v13 + 24;
    v5 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v17) = v12;
    v19 = v26;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(v21, v18, v19, &off_47D0B60);
  }
  if ( ptr[0] != v28 )
    free(ptr[0]);
  return v5;
}

