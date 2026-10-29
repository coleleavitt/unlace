unsigned __int64 __fastcall sub_6C7960(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // [rsp+0h] [rbp-E0h]
  __int64 v18; // [rsp+0h] [rbp-E0h]
  __int64 v19; // [rsp+10h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-C8h] BYREF
  _OWORD v21[11]; // [rsp+28h] [rbp-B8h] BYREF

  v4 = a3;
  v19 = 0;
  ptr[0] = v21;
  ptr[1] = (void *)0x2000000004LL;
  v21[0] = _mm_shuffle_ps(
             (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
             (__m128)_mm_unpacklo_epi64((__m128i)a3, (__m128i)HIDWORD(a3)),
             136);
  v5 = sub_25AC3A0(a1 + 576, ptr, &v19, off_47D0960);
  v6 = (v5 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v5 )
  {
    v8 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v8 == *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL) )
    {
      v10 = 48;
      v4 = 0;
    }
    else
    {
      v10 = 8LL * ((v4 & 0xFFFFFFFFFFFFFFF8LL) > 0xF) + 48;
    }
    v11 = *(_QWORD *)(a1 + 2192);
    *(_QWORD *)(a1 + 2272) += v10;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 2200) >= v10 + v12 && v11 )
    {
      *(_QWORD *)(a1 + 2192) = v10 + v12;
      v13 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v18 = v9;
      v12 = sub_6A76A0(a1 + 2192, v10, 4);
      v9 = v18;
      v13 = v12;
    }
    v17 = v12;
    sub_B0CB90(v13, a2, v4, v9);
    v14 = *(unsigned int *)(a1 + 16);
    v15 = v17;
    if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v14 + 1) )
    {
      sub_25D6060(a1 + 8, a1 + 24, v14 + 1, 8);
      v14 = *(unsigned int *)(a1 + 16);
      v15 = v17;
    }
    v16 = v13 + 24;
    v6 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v14) = v15;
    ++*(_DWORD *)(a1 + 16);
    sub_25AC200(a1 + 576, v16, v19, off_47D0960);
  }
  if ( ptr[0] != v21 )
    free(ptr[0]);
  return v6;
}

