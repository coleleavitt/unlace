__int64 __fastcall sub_F4D000(const __m128i *a1, const __m128i *a2, const __m128i *a3, char a4)
{
  __int8 v8; // dl
  _BOOL4 v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 (*v13)(); // rcx
  __int64 v14; // rax
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned int *v17; // rsi
  void *v18; // rdi
  size_t v19; // r13
  const void *v20; // rsi
  __int8 v21; // r13
  int v22; // r13d
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rax
  int v25; // r13d
  int v26; // r12d
  __int64 result; // rax
  char v28; // r13
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __m128i si128; // [rsp+10h] [rbp-48h] BYREF

  v8 = a1->m128i_i8[2];
  v9 = (v8 & 8) != 0;
  if ( (v8 & 0x10) == 0 )
    a1->m128i_i8[2] = v8 & 0xF7;
  si128.m128i_i64[0] = a2[2].m128i_i64[0];
  v10 = sub_EFEE90(si128.m128i_i64, 1);
  v12 = v10;
  if ( v10 && a4 )
  {
    v13 = *(__int64 (**)())(v10 + 40);
    if ( (a1->m128i_i8[1] & 8) == 0 )
    {
      v14 = *(_QWORD *)(v10 + 16);
      v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v14 & 4) != 0 )
        v15 = (_QWORD *)*v15;
      v29 = v12;
      sub_F4CAA0(a1, (unsigned __int64)v15, (__int64)a3, v13, v12, v11);
      v12 = v29;
      v13 = *(__int64 (**)())(v29 + 40);
    }
    if ( ((unsigned __int8)v13 & 7) == 0 )
    {
      v16 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16 )
      {
        v17 = *(unsigned int **)(v16 + 16);
        v18 = (void *)a3[2].m128i_i64[0];
        v19 = *v17;
        v20 = v17 + 4;
        if ( a3[1].m128i_i64[1] - (__int64)v18 >= v19 )
        {
          if ( v19 )
          {
            v32 = v12;
            memcpy(v18, v20, v19);
            a3[2].m128i_i64[0] += v19;
            v12 = v32;
          }
        }
        else
        {
          v30 = v12;
          sub_22581D0(a3, v20, v19);
          v12 = v30;
        }
      }
    }
    v21 = a1->m128i_i8[2];
    a1->m128i_i8[2] = v21 & 0xBF;
    v22 = (v21 & 0x40) != 0;
    goto LABEL_14;
  }
  v31 = v10;
  si128.m128i_i64[0] = a2[2].m128i_i64[0];
  sub_EFF8A0(si128.m128i_i64, a3, a1, 0, v10);
  v12 = v31;
  v28 = (unsigned __int8)a1->m128i_i8[2] >> 6;
  a1->m128i_i8[2] &= ~0x40u;
  v22 = v28 & 1;
  if ( v31 )
LABEL_14:
    v12 = *(_QWORD *)(v12 + 56);
  v23 = a2[1].m128i_u32[1];
  si128 = _mm_load_si128(a1);
  si128.m128i_i8[1] &= ~8u;
  sub_F4B8B0((__int64)a3, a2 + 3, v23, &si128, v12, 0, 0);
  if ( !a1[1].m128i_i8[4] )
  {
    v24 = (_BYTE *)a3[2].m128i_i64[0];
    if ( (unsigned __int64)v24 >= a3[1].m128i_i64[1] )
    {
      sub_2257CD0(a3, 32);
    }
    else
    {
      a3[2].m128i_i64[0] = (__int64)(v24 + 1);
      *v24 = 32;
    }
  }
  v25 = v22 << 6;
  v26 = 8 * v9;
  result = v26 | v25 | a1->m128i_i8[2] & 0xB7u;
  a1->m128i_i8[2] = v26 | v25 | a1->m128i_i8[2] & 0xB7;
  return result;
}

