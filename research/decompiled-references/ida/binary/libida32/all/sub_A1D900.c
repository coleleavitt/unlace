__int64 __fastcall sub_A1D900(__int64 a1, _QWORD *a2, __int16 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // r12
  __int64 result; // rax
  unsigned __int16 v10; // r11
  __int64 v11; // rax
  unsigned __int8 *v12; // r9
  int v13; // ecx
  unsigned int v14; // r8d
  __int16 v15; // r11
  unsigned __int8 v16; // si
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rsi
  unsigned __int8 v21; // r9
  char v22; // cl
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v30[2]; // [rsp+0h] [rbp-118h] BYREF
  __int16 v31; // [rsp+20h] [rbp-F8h]
  __m128i v32; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v33; // [rsp+50h] [rbp-C8h]
  __m128i v34[3]; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v35[2]; // [rsp+90h] [rbp-88h] BYREF
  __int16 v36; // [rsp+B0h] [rbp-68h]
  __m128i v37; // [rsp+C0h] [rbp-58h] BYREF

  v6 = (unsigned __int8 *)a2[1];
  v7 = (unsigned __int8 *)*a2;
  if ( (unsigned __int64)&v6[-*a2] > 0x20 )
  {
    v33 = 261;
    v35[0].m128i_i64[0] = (__int64)"' does not fit";
    v36 = 259;
    v32.m128i_i64[0] = a5;
    v32.m128i_i64[1] = a6;
    v30[0].m128i_i64[0] = (__int64)"nullability info for '";
    v31 = 259;
    sub_A1D840(v34, v30, &v32, 259, a5, a6);
    sub_A1D840(&v37, v34, v35, v23, v24, v25);
    return sub_A1D5F0(a1, (__int64)v34, v26, v27, v28, v29, v37.m128i_i8[0]);
  }
  result = HIBYTE(a3);
  if ( v7 != v6 )
  {
    v10 = *(_WORD *)(a4 + 72);
    v11 = *(_QWORD *)(a4 + 80);
    v12 = (unsigned __int8 *)*a2;
    v13 = 2;
    v14 = 1;
    v15 = v10 >> 1;
    while ( 1 )
    {
      ++v14;
      v16 = *v12;
      if ( v14 > (unsigned __int8)v15 )
      {
        LOBYTE(v15) = v14;
        *(_WORD *)(a4 + 72) = (2 * (unsigned __int8)v14) | *(_WORD *)(a4 + 72) & 0xFE01;
      }
      v17 = v11 & ~(3LL << v13);
      v18 = v16 << v13;
      v13 += 2;
      v11 = v17 | v18;
      if ( v6 == v12 + 1 )
        break;
      ++v12;
    }
    v19 = *(_BYTE *)(a4 + 72);
    *(_QWORD *)(a4 + 80) = v11;
    v20 = 0;
    v21 = (_BYTE)v12 - (_BYTE)v7 + 2;
    v22 = v19 | 1;
    *(_BYTE *)(a4 + 72) = v22;
    if ( !HIBYTE(a3) )
      goto LABEL_9;
    goto LABEL_13;
  }
  if ( HIBYTE(a3) )
  {
    v11 = *(_QWORD *)(a4 + 80);
    v22 = *(_BYTE *)(a4 + 72);
    v21 = 1;
LABEL_13:
    v20 = (unsigned __int8)a3;
LABEL_9:
    *(_BYTE *)(a4 + 72) = v22 | 1;
    *(_QWORD *)(a4 + 80) = v20 | v11 & 0xFFFFFFFFFFFFFFFCLL;
    result = *(_WORD *)(a4 + 72) & 0xFE01;
    *(_WORD *)(a4 + 72) = result | (2 * v21);
  }
  return result;
}

