unsigned __int64 __fastcall sub_6C3980(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+0h] [rbp-F0h]
  unsigned __int64 v18; // [rsp+8h] [rbp-E8h]
  __int64 v19; // [rsp+10h] [rbp-E0h]
  __int64 v20; // [rsp+20h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-C8h] BYREF
  _OWORD v22[11]; // [rsp+38h] [rbp-B8h] BYREF

  v4 = a1 + 3;
  v5 = a3 & 7;
  v17 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  ptr[1] = (void *)0x2000000004LL;
  ptr[0] = v22;
  v20 = 0;
  v22[0] = _mm_shuffle_ps(
             (__m128)_mm_unpacklo_epi64((__m128i)a2, (__m128i)HIDWORD(a2)),
             (__m128)_mm_unpacklo_epi64((__m128i)(a3 & 0xFFFFFFFFFFFFFFF8LL), (__m128i)HIDWORD(a3)),
             136);
  v6 = sub_25AC3A0(a1 + 3, ptr, &v20, &off_47D0C80);
  if ( v6 )
  {
    v7 = (v6 - 16) & 0xFFFFFFFFFFFFFFF0LL | 8 | v5;
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 8);
    if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == v9 )
    {
      v13 = 0;
      v12 = 0;
    }
    else
    {
      v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(_QWORD *)(a2 + 8) & 7LL;
      if ( (v9 & 8) != 0 )
      {
        v11 |= *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
        v10 = (_QWORD *)*v10;
      }
      v19 = sub_6C3980(a1, v10, v17 | v11);
      sub_25AC3A0(v4, ptr, &v20, &off_47D0C80);
      v12 = v19;
      v13 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v14 = a1[274];
    a1[284] += 32LL;
    v15 = (v14 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a1[275] >= v15 + 32 && v14 )
    {
      a1[274] = v15 + 32;
    }
    else
    {
      v18 = v12;
      v15 = sub_6A76A0((__int64)(a1 + 274), 32, 4);
      v12 = v18;
    }
    *(_QWORD *)v15 = a2;
    *(_QWORD *)(v15 + 16) = 0;
    v16 = v20;
    *(_QWORD *)(v15 + 24) = v17;
    if ( v13 <= 0xF )
      v12 = v15 & 0xFFFFFFFFFFFFFFF0LL | 8;
    v7 = v15 & 0xFFFFFFFFFFFFFFF0LL | 8 | v5;
    *(_QWORD *)(v15 + 8) = v12;
    sub_25AC200(v4, v15 + 16, v16, &off_47D0C80);
  }
  if ( ptr[0] != v22 )
    free(ptr[0]);
  return v7;
}

