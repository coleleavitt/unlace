unsigned __int64 __fastcall sub_6C80F0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v18; // [rsp+0h] [rbp-E8h]
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _OWORD v21[11]; // [rsp+30h] [rbp-B8h] BYREF

  v19 = 0;
  ptr[0] = v21;
  ptr[1] = (void *)0x2000000004LL;
  v21[0] = _mm_shuffle_ps(
             (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3)),
             (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
             136);
  v4 = sub_25AC3A0(a1 + 856, ptr, &v19, &off_47D0920);
  v5 = (v4 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a1 + 2192);
    v8 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | a3 & 7;
    *(_QWORD *)(a1 + 2272) += 48LL;
    v10 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v10 + 48 && v7 )
    {
      *(_QWORD *)(a1 + 2192) = v10 + 48;
      v11 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v17 = v9;
      v16 = sub_6A76A0(a1 + 2192, 48, 4);
      v8 = a3 & 0xFFFFFFFFFFFFFFF0LL;
      v9 = v17;
      v11 = v16;
      v10 = v16;
    }
    v12 = *(_BYTE *)(*(_QWORD *)v8 + 17LL);
    *(_QWORD *)v11 = v11;
    if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) < 0x10 )
      v9 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 18) &= 0xF8u;
    *(_QWORD *)(v11 + 8) = v9;
    *(_QWORD *)(v11 + 32) = a3;
    *(_WORD *)(v11 + 16) = ((v12 & 0x1F) << 8) | 9;
    *(_QWORD *)(v11 + 40) = a2;
    v13 = *(unsigned int *)(a1 + 16);
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v13 + 1) )
    {
      v18 = v10;
      sub_25D6060(a1 + 8, a1 + 24, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 16);
      v10 = v18;
    }
    v14 = v11 + 24;
    v5 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v10;
    v15 = v19;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 856, v14, v15, &off_47D0920);
  }
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return v5;
}

