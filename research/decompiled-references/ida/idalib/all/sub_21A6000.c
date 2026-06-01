__int64 *__fastcall sub_21A6000(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  int v6; // r12d
  __int64 v7; // r14
  __m128i v8; // rax
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdx
  __int8 *v12; // rdx
  char *v13; // rcx
  unsigned __int64 v14; // rax
  const __m128i *v15; // rsi
  const __m128i *v16; // rsi
  __int8 v18; // bl
  int v19; // eax
  char v20; // cl
  int v21; // ebx
  char v22; // r9
  __m128 v23; // xmm0
  char *v24; // rsi
  __int64 v25; // rbx
  int v26; // eax
  int v27; // edi
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  char **v31; // [rsp+8h] [rbp-110h]
  unsigned __int32 v33; // [rsp+1Ch] [rbp-FCh]
  __int64 v34; // [rsp+20h] [rbp-F8h]
  char v35; // [rsp+30h] [rbp-E8h]
  char v36; // [rsp+38h] [rbp-E0h]
  __int32 v37; // [rsp+40h] [rbp-D8h]
  bool v38; // [rsp+47h] [rbp-D1h]
  __int64 v39; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-C8h] BYREF
  int v41; // [rsp+58h] [rbp-C0h]
  int v42; // [rsp+5Ch] [rbp-BCh]
  __int64 v43[4]; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v44; // [rsp+80h] [rbp-98h]
  __m128i v45; // [rsp+90h] [rbp-88h] BYREF
  __m128i v46; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v47; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v48[24]; // [rsp+C0h] [rbp-58h] BYREF
  int v49; // [rsp+D8h] [rbp-40h]

  v4 = a3;
  v5 = sub_21A2A40(a3);
  v33 = (__int64)(*(_QWORD *)(a2 + 312) - *(_QWORD *)(a2 + 304)) >> 6;
  v34 = a2 + 424;
  sub_21A47A0((const __m128i **)(a2 + 424), v5);
  if ( !v5 )
  {
LABEL_11:
    if ( *(_QWORD *)(v4 + 8) == *(_QWORD *)(v4 + 16) )
    {
      *a1 = 0;
    }
    else
    {
      sub_21A2C10(v45.m128i_i64, "import section ended prematurely");
      *a1 = v45.m128i_i64[0];
    }
    return a1;
  }
  v6 = 0;
  v7 = v4;
  v31 = (char **)(v4 + 8);
  while ( 2 )
  {
    v45 = 0u;
    v46 = 0u;
    v8.m128i_i64[0] = sub_21A2A80(v7);
    v45 = v8;
    v9 = sub_21A2A80(v7);
    v10 = *(char **)(v7 + 16);
    v46.m128i_i64[1] = v11;
    v12 = *(__int8 **)(v7 + 8);
    v46.m128i_i64[0] = v9;
    if ( v10 == v12 )
LABEL_51:
      sub_21A2960();
    v13 = v12 + 1;
    *(_QWORD *)(v7 + 8) = v12 + 1;
    v47.m128i_i8[0] = *v12;
    switch ( v47.m128i_i8[0] )
    {
      case 0:
        ++*(_DWORD *)(a2 + 680);
        v47.m128i_i32[2] = sub_21A2A40(v7);
        if ( v47.m128i_i32[2] < v33 )
          goto LABEL_8;
        v24 = "invalid function type";
        goto LABEL_33;
      case 1:
        v19 = sub_21A2A40(v7);
        v21 = v19;
        if ( (unsigned int)(v19 - 105) <= 0x16 )
        {
          v20 = v19 - 105;
          v26 = (1LL << ((unsigned __int8)v19 - 105)) & 0x7C00C1;
          v27 = 255;
          if ( v26 )
            v27 = v21;
          v37 = v27;
          v38 = ((1LL << v20) & 0x7C00C1) != 0;
          if ( !v26 )
            v21 = 255;
        }
        else
        {
          if ( (unsigned int)(v19 - 99) <= 1 )
          {
            v21 = 255;
            sub_21A2AC0(v31, *(char **)(v7 + 16));
            v38 = 0;
          }
          else
          {
            v38 = 0;
            v21 = 255;
          }
          v37 = 255;
        }
        v36 = sub_21A2A40(v7);
        sub_21A29A0(v31, *(char **)(v7 + 16));
        v22 = v36;
        if ( (v36 & 1) != 0 )
        {
          v29 = sub_21A29A0(v31, *(char **)(v7 + 16));
          v22 = v36;
          v40 = v29;
        }
        if ( (v22 & 8) == 0 )
          goto LABEL_28;
        v35 = v22;
        v28 = sub_21A2A40(v7);
        if ( v28 > 0x1F )
          goto LABEL_53;
        v22 = v35;
        v41 = 1 << v28;
LABEL_28:
        v23 = _mm_loadh_ps((const double *)&v40);
        v48[0] = v22;
        v47.m128i_i32[2] = v37;
        *(__m128 *)&v48[8] = v23;
        v49 = v41;
        ++*(_DWORD *)(a2 + 676);
        if ( (unsigned int)(v21 - 111) <= 1 || v37 == 105 || !v38 )
          goto LABEL_8;
        v24 = "invalid table element type";
        goto LABEL_33;
      case 2:
        v18 = sub_21A2A40(v7);
        sub_21A29A0(v31, *(char **)(v7 + 16));
        if ( (v18 & 1) != 0 )
          v39 = sub_21A29A0(v31, *(char **)(v7 + 16));
        if ( (v18 & 8) == 0 )
          goto LABEL_17;
        v30 = sub_21A2A40(v7);
        if ( v30 > 0x1F )
LABEL_53:
          sub_2221C70("log2(wasm page size) too large", 1);
        v42 = 1 << v30;
LABEL_17:
        v47.m128i_i8[8] = v18;
        *(__m128 *)v48 = _mm_loadh_ps((const double *)&v39);
        *(_DWORD *)&v48[16] = v42;
        if ( (v18 & 4) == 0 )
          goto LABEL_8;
        *(_BYTE *)(a2 + 614) = 1;
        v15 = *(const __m128i **)(a2 + 432);
        if ( v15 == *(const __m128i **)(a2 + 440) )
          goto LABEL_19;
        goto LABEL_9;
      case 3:
        ++*(_DWORD *)(a2 + 672);
        if ( v10 == v13 )
          goto LABEL_51;
        *(_QWORD *)(v7 + 8) = v12 + 2;
        v47.m128i_i8[8] = v12[1];
        v14 = sub_21A2AC0(v31, v10);
        if ( v14 > 1 )
          sub_2221C70("LEB is outside Varuint1 range", 1);
        v47.m128i_i8[9] = v14;
        goto LABEL_8;
      case 4:
        ++*(_DWORD *)(a2 + 684);
        if ( v10 == v13 )
          goto LABEL_51;
        *(_QWORD *)(v7 + 8) = v12 + 2;
        if ( !v12[1] )
        {
          v47.m128i_i32[2] = sub_21A2A40(v7);
          if ( v47.m128i_i32[2] >= v33 )
          {
            v24 = "invalid tag type";
            goto LABEL_33;
          }
LABEL_8:
          v15 = *(const __m128i **)(a2 + 432);
          if ( v15 == *(const __m128i **)(a2 + 440) )
          {
LABEL_19:
            ++v6;
            sub_21A5E00(v34, v15, &v45);
            if ( v5 == v6 )
            {
LABEL_10:
              v4 = v7;
              goto LABEL_11;
            }
          }
          else
          {
LABEL_9:
            v16 = v15 + 5;
            ++v6;
            v16[-5] = _mm_load_si128(&v45);
            v16[-4] = _mm_load_si128(&v46);
            v16[-3] = _mm_load_si128(&v47);
            v16[-2] = _mm_load_si128((const __m128i *)v48);
            v16[-1] = _mm_load_si128((const __m128i *)&v48[16]);
            *(_QWORD *)(a2 + 432) = v16;
            if ( v5 == v6 )
              goto LABEL_10;
          }
          continue;
        }
        v24 = "invalid attribute";
LABEL_33:
        sub_21A2C10(v43, v24);
        *a1 = v43[0];
        return a1;
      default:
        v43[0] = (__int64)"unexpected import kind";
        v44 = 259;
        v25 = operator new(0x38u);
        sub_2195A00(v25, (__int64)v43, 3);
        *a1 = v25;
        return a1;
    }
  }
}
