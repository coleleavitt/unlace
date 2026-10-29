__int64 *__fastcall sub_21A8E70(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebp
  char *v10; // rsi
  char *v11; // rdx
  __int64 v12; // r9
  char *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  const char *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const __m128i *v22; // rax
  __int8 *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v28; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v29; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v30; // [rsp+40h] [rbp-98h] BYREF
  __m128i v31; // [rsp+50h] [rbp-88h] BYREF
  __m128i v32; // [rsp+60h] [rbp-78h] BYREF
  __m128i v33; // [rsp+70h] [rbp-68h] BYREF
  __m128i v34; // [rsp+80h] [rbp-58h] BYREF
  __int64 v35; // [rsp+90h] [rbp-48h]

  *(_DWORD *)(a2 + 692) = -858993459 * ((__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 4);
  v6 = sub_21A2A40(a3);
  v7 = v6;
  if ( *(_BYTE *)(a2 + 528) )
  {
    v8 = *(_QWORD *)(a2 + 520);
    if ( v6 != v8 )
    {
      v29.m128i_i64[0] = (__int64)"number of data segments does not match DataCount section";
      v31.m128i_i16[0] = 259;
      v26 = operator new(0x38u);
      sub_2195950(v26, (__int64)&v29);
      *a1 = v26;
      return a1;
    }
  }
  else
  {
    v8 = v6;
  }
  v9 = v6 - 1;
  sub_21A4C90((const __m128i **)(a2 + 496), v8);
  if ( v7 )
  {
    v10 = *(char **)(a3 + 16);
    v11 = *(char **)(a3 + 8);
    while ( 1 )
    {
      v31.m128i_i64[1] = 0;
      v32 = 0u;
      v33 = 0u;
      v34.m128i_i64[0] = 0;
      if ( v11 == v10 )
      {
LABEL_24:
        v18 = "malformed uleb128, extends past end";
LABEL_25:
        sub_2221C70(v18, 1);
      }
      v12 = (unsigned __int8)*v11;
      v13 = v11;
      v14 = 0;
      LODWORD(v15) = 0;
      v16 = *v11 & 0x7F;
      while ( 1 )
      {
        v17 = v16 << v15;
        ++v13;
        v15 = (unsigned int)(v15 + 7);
        v14 += v17;
        if ( (v12 & 0x80u) == 0LL )
          break;
        if ( v13 == v10 )
          goto LABEL_24;
        v12 = (unsigned __int8)*v13;
        v16 = *v13 & 0x7F;
        if ( (unsigned int)v15 > 0x3E )
        {
          if ( (_DWORD)v15 == 63 )
          {
            if ( v16 != (v12 & 1) )
            {
LABEL_12:
              v18 = "uleb128 too big for uint64";
              goto LABEL_25;
            }
          }
          else if ( (*v13 & 0x7F) != 0 )
          {
            goto LABEL_12;
          }
        }
      }
      *(_QWORD *)(a3 + 8) = &v11[(_DWORD)v13 - (_DWORD)v11];
      if ( v14 > 0xFFFFFFFF )
LABEL_40:
        sub_2221C70("LEB is outside Varuint32 range", 1);
      v29.m128i_i32[2] = v14;
      if ( (v14 & 2) != 0 )
      {
        v25 = sub_21A29A0((char **)(a3 + 8), v10);
        if ( v25 > 0xFFFFFFFF )
          goto LABEL_40;
        v29.m128i_i32[3] = v25;
        if ( (v29.m128i_i8[8] & 1) != 0 )
        {
LABEL_16:
          v30.m128i_i8[0] = 0;
          v30.m128i_i8[8] = 65;
          v31.m128i_i32[0] = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v29.m128i_i32[3] = 0;
        if ( (v14 & 1) != 0 )
          goto LABEL_16;
      }
      sub_21A3AE0(&v28, (__int64)&v30, a3, v15, v17, v12);
      v24 = v28;
      if ( v28 )
        goto LABEL_23;
LABEL_17:
      v19 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
      if ( v19 > 0xFFFFFFFF )
        goto LABEL_40;
      v10 = *(char **)(a3 + 16);
      v20 = *(_QWORD *)(a3 + 8);
      if ( (unsigned __int64)&v10[-v20] < v19 )
      {
        sub_21A2C10(&v28, "invalid segment size");
        *a1 = v28;
        return a1;
      }
      v21 = v20 - *(_QWORD *)a3;
      v32.m128i_i64[1] = *(_QWORD *)(a3 + 8);
      v11 = (char *)(v19 + v20);
      v33.m128i_i64[0] = v19;
      v22 = *(const __m128i **)(a2 + 504);
      v34.m128i_i64[1] = 0;
      LODWORD(v35) = -1;
      v29.m128i_i32[0] = v21;
      *(_QWORD *)(a3 + 8) = v11;
      if ( v22 == *(const __m128i **)(a2 + 512) )
      {
        --v9;
        sub_21A8C30(a2 + 496, v22, &v29);
        v11 = *(char **)(a3 + 8);
        v10 = *(char **)(a3 + 16);
        if ( v9 == -1 )
          goto LABEL_21;
      }
      else
      {
        v23 = &v22[6].m128i_i8[8];
        --v9;
        *(__m128i *)(v23 - 104) = _mm_load_si128(&v29);
        *(__m128i *)(v23 - 88) = _mm_load_si128(&v30);
        *(__m128i *)(v23 - 72) = _mm_load_si128(&v31);
        *(__m128i *)(v23 - 56) = _mm_load_si128(&v32);
        *(__m128i *)(v23 - 40) = _mm_load_si128(&v33);
        *(__m128i *)(v23 - 24) = _mm_load_si128(&v34);
        *((_QWORD *)v23 - 1) = v35;
        *(_QWORD *)(a2 + 504) = v23;
        if ( v9 == -1 )
          goto LABEL_21;
      }
    }
  }
  v11 = *(char **)(a3 + 8);
  v10 = *(char **)(a3 + 16);
LABEL_21:
  if ( v10 == v11 )
  {
    *a1 = 0;
  }
  else
  {
    sub_21A2C10(v29.m128i_i64, "data section ended prematurely");
    v24 = v29.m128i_i64[0];
LABEL_23:
    *a1 = v24;
  }
  return a1;
}
