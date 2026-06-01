unsigned __int64 __fastcall sub_189C400(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, __m128 a5)
{
  char v7; // bl
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // r8
  const __m128i *v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdx
  __m128i *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-F8h]
  __int64 v29; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v30[2]; // [rsp+20h] [rbp-D8h] BYREF
  _WORD v31[2]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-C4h]
  __int64 v33; // [rsp+38h] [rbp-C0h]
  __int64 v34; // [rsp+40h] [rbp-B8h]

  v7 = a2;
  v8 = sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
    return a2;
  v11 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v12 & 8) != 0 )
  {
    v12 &= 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_WORD *)(v12 + 24) & 0x1C0) != 0 )
      return a2;
  }
  if ( !sub_F6ACC0(*v11, a2, v9, v12, v10) )
    return a2;
  v13 = a2 & 7;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
  {
    v23 = sub_F68130(*v11);
    v13 = a2 & 7;
    v23 <<= 6;
    v14 = v23;
    if ( !v23 )
      return a2;
  }
  else
  {
    if ( (a2 & 1) == 0 && (byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
    {
      v17 = *(_QWORD *)(*a1 + 512);
      if ( v17 )
      {
        v32 = a3;
        v18 = (const __m128i *)v31;
        v31[0] = 2;
        v34 = a2;
        v33 = 3012;
        v19 = *(unsigned int *)(v17 + 16);
        v20 = *(_QWORD *)(v17 + 8);
        v21 = v19 + 1;
        v22 = (__m128i *)(v20 + 80 * v19);
        if ( v21 > *(unsigned int *)(v17 + 20) )
        {
          v25 = v17 + 8;
          v26 = v17 + 24;
          v28 = v17;
          if ( v20 > (unsigned __int64)v31 || v22 <= (__m128i *)v31 )
          {
            sub_2237220(v25, v26, v21, 80);
            v17 = v28;
            v13 = v7 & 7;
            v22 = (__m128i *)(*(_QWORD *)(v28 + 8) + 80LL * *(unsigned int *)(v28 + 16));
          }
          else
          {
            sub_2237220(v25, v26, v21, 80);
            v17 = v28;
            v13 = v7 & 7;
            v27 = *(_QWORD *)(v28 + 8);
            v18 = (const __m128i *)((char *)v31 + v27 - v20);
            v22 = (__m128i *)(80LL * *(unsigned int *)(v28 + 16) + v27);
          }
        }
        *v22 = _mm_loadu_si128(v18);
        v22[1] = _mm_loadu_si128(v18 + 1);
        v22[2] = _mm_loadu_si128(v18 + 2);
        v22[3] = _mm_loadu_si128(v18 + 3);
        v22[4] = _mm_loadu_si128(v18 + 4);
        ++*(_DWORD *)(v17 + 16);
      }
      else
      {
        sub_168B9F0((__int64)v31, a1, a3, 0xBC4u, 0);
        v24 = *a4;
        v30[1] = (__int64)(a4 + 1);
        v30[0] = v24;
        HIDWORD(v29) = sub_F6CE20(v30);
        LODWORD(v29) = sub_F6CCB0(v30, a5);
        sub_1587DB0((__int64)v31, &v29);
        sub_15F7200(v31);
        v13 = a2 & 7;
      }
    }
    v14 = 64;
  }
  v15 = v13 | v14;
  if ( (v7 & 8) != 0 )
  {
    v15 |= v11[3];
    v11 = (__int64 *)*v11;
  }
  return sub_A70C40(v8, (__int64)v11, v15);
}
