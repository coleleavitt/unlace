unsigned __int64 __fastcall sub_6C5C30(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  unsigned __int64 result; // rax
  int v8; // r11d
  _QWORD *v9; // rsi
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r11d
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-F0h]
  int v23; // [rsp+10h] [rbp-E0h]
  int v24; // [rsp+10h] [rbp-E0h]
  unsigned __int64 v25; // [rsp+10h] [rbp-E0h]
  int v26; // [rsp+10h] [rbp-E0h]
  __int64 v27; // [rsp+20h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-C8h] BYREF
  _OWORD v29[11]; // [rsp+38h] [rbp-B8h] BYREF

  v4 = a1 + 176;
  ptr[0] = v29;
  ptr[1] = (void *)0x2000000004LL;
  v27 = 0;
  v29[0] = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(HIDWORD(a2))),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v6 = sub_25AC3A0(a1 + 176, ptr, &v27, &off_47D0B00);
  result = (v6 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v6 )
    goto LABEL_2;
  v8 = a2 & 7;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
    || (a2 & 7) != 0
    || (a2 & 8) != 0 )
  {
    v9 = (_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8 | v8 & 8 )
    {
      v25 = *(__int64 *)((char *)&qword_18
                       + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL | v8 & 0xFFFFFFF0))
          | v8 & 7
          | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7;
      v10 = sub_6C5C30(a1, *v9 & 0xFFFFFFFFFFFFFFF0LL, a3, a4);
      v11 = v25;
      if ( v25 > 7 )
      {
        v17 = v25 | v10 & 7;
        v18 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v10 & 8) != 0 )
        {
          v17 |= *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
          v18 = (_QWORD *)*v18;
        }
        v12 = sub_6C3980((_QWORD *)a1, (unsigned __int64)v18, v17);
        goto LABEL_9;
      }
    }
    else
    {
      v23 = v8 & 7 | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7;
      LODWORD(v10) = sub_6C5C30(a1, v9, a3, a4);
      v11 = v23;
    }
    v12 = v10 & 0xFFFFFFF8 | v11 | v10 & 7;
LABEL_9:
    v24 = v12;
    sub_25AC3A0(v4, ptr, &v27, &off_47D0B00);
    v8 = v24;
  }
  v13 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v14 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v14 + 48 && v13 )
  {
    *(_QWORD *)(a1 + 2192) = v14 + 48;
    v15 = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v26 = v8;
    v19 = sub_6A76A0(a1 + 2192, 48, 4);
    v8 = v26;
    v15 = v19;
    v14 = v19;
  }
  sub_B05CB0(v15, 5, a2, v8, a3, a4, 0);
  sub_25AC200(v4, v15 + 24, v27, &off_47D0B00);
  v16 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v16 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v16 + 1, 8);
    v16 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v16) = v14;
  ++*(_DWORD *)(a1 + 16);
  result = v15 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_2:
  if ( ptr[0] != v29 )
  {
    v21 = result;
    free(ptr[0]);
    return v21;
  }
  return result;
}

