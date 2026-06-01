__int64 __fastcall sub_8404F0(__int64 *a1, unsigned __int32 a2, int *a3, __int8 a4, char a5, char a6)
{
  __int64 **v6; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rbp
  __int64 v9; // rax
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  void *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i *v16; // r14
  char *v17; // r12
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rax
  void *v21; // r15
  __m128i v22; // xmm0
  __int64 result; // rax
  char *v24; // rbp
  void *v25; // r12
  char *v26; // rsi
  char *ptr; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+10h] [rbp-88h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  __int64 v30; // [rsp+20h] [rbp-78h]
  __m128i v35; // [rsp+40h] [rbp-58h] BYREF
  __m128i v36; // [rsp+50h] [rbp-48h]

  v6 = (__int64 **)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  v8 = *(__int64 **)*a1;
  v30 = *(_QWORD *)(*(_QWORD *)(a1[1] + 56) + 496LL);
  ptr = nullptr;
  if ( v7 != v8 )
  {
    v9 = sub_186B270((char *)v7 - (char *)v8);
    v7 = v6[1];
    v8 = *v6;
    ptr = (char *)v9;
  }
  v10 = ptr;
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v12 = *v8;
      v13 = qword_1C7F2C0;
      *((_DWORD *)v10 + 2) = 0;
      v10[12] &= 0xFCu;
      v10[28] &= 0xFCu;
      *(_QWORD *)v10 = v12;
      *((_QWORD *)v10 + 2) = 0;
      *((_DWORD *)v10 + 6) = 1;
      *((_QWORD *)v10 + 4) = 0;
      if ( (*((_BYTE *)v8 + 12) & 1) != 0 )
      {
        sub_182C690(v13, v10 + 8, v8 + 1);
        if ( (*((_BYTE *)v8 + 28) & 1) != 0 )
          goto LABEL_9;
LABEL_6:
        v11 = *((_DWORD *)v8 + 6);
        v8 += 5;
        v10[28] &= ~1u;
        v10 += 40;
        *((_DWORD *)v10 - 4) = v11;
        if ( v7 == v8 )
          break;
      }
      else
      {
        *((_DWORD *)v10 + 2) = *((_DWORD *)v8 + 2);
        if ( (*((_BYTE *)v8 + 28) & 1) == 0 )
          goto LABEL_6;
LABEL_9:
        sub_182C690(v13, v10 + 24, v8 + 3);
        v8 += 5;
        v10 += 40;
        if ( v7 == v8 )
          break;
      }
    }
  }
  v14 = a1[1];
  v36 = 0u;
  v29 = v14;
  v35 = 0;
  v15 = operator new(0x28u);
  *(_QWORD *)(v15 + 16) = 0;
  v16 = (__m128i *)v15;
  *(_OWORD *)v15 = 0;
  if ( v10 == ptr )
    v28 = 0;
  else
    v28 = sub_186B270(v10 - ptr);
  v17 = ptr;
  v16[1].m128i_i64[0] = v28 + v10 - ptr;
  v18 = v28;
  *v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
  if ( ptr != v10 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)v17;
      *(_BYTE *)(v18 + 12) &= 0xFCu;
      *(_BYTE *)(v18 + 28) &= 0xFCu;
      v21 = qword_1C7F2C0;
      *(_QWORD *)v18 = v20;
      *(_DWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_DWORD *)(v18 + 24) = 1;
      *(_QWORD *)(v18 + 32) = 0;
      if ( (v17[12] & 1) != 0 )
      {
        sub_182C690(v21, v18 + 8, v17 + 8);
        if ( (v17[28] & 1) != 0 )
          goto LABEL_18;
LABEL_15:
        v19 = *((_DWORD *)v17 + 6);
        v17 += 40;
        *(_BYTE *)(v18 + 28) &= ~1u;
        v18 += 40;
        *(_DWORD *)(v18 - 16) = v19;
        if ( v10 == v17 )
          break;
      }
      else
      {
        *(_DWORD *)(v18 + 8) = *((_DWORD *)v17 + 2);
        if ( (v17[28] & 1) == 0 )
          goto LABEL_15;
LABEL_18:
        sub_182C690(v21, v18 + 24, v17 + 24);
        v17 += 40;
        v18 += 40;
        if ( v10 == v17 )
          break;
      }
    }
  }
  v16->m128i_i64[1] = v18;
  v35.m128i_i64[0] = (__int64)v16;
  v16[1].m128i_i8[12] = a4;
  v16[1].m128i_i8[13] = a5;
  v22 = _mm_loadl_epi64((const __m128i *)&off_1C552B8);
  v16[1].m128i_i8[14] = a6;
  v16[2].m128i_i64[0] = v30;
  v16[1].m128i_i32[2] = a2;
  v36 = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)sub_83AE40);
  sub_83F780(v29, a3, a2, a5, a6, &v35);
  result = v36.m128i_i64[0];
  if ( v36.m128i_i64[0] )
    result = ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v36.m128i_i64[0])(&v35, &v35, 3);
  if ( ptr != v10 )
  {
    v24 = ptr;
    do
    {
      v25 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v24 + 8);
      v26 = v24 + 24;
      v24 += 40;
      result = sub_182CBA0(v25, v26);
    }
    while ( v24 != v10 );
  }
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

