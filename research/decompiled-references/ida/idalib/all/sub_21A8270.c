_QWORD *__fastcall sub_21A8270(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  const __m128i *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // r13d
  int v9; // ebp
  __m128i v10; // rax
  char *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // rdi
  __m128i *v17; // rcx
  const __m128i *v18; // rsi
  __int8 *v19; // rsi
  const __m128i *v20; // rsi
  __int64 v21; // rcx
  const __m128i *v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdx
  const __m128i *v30; // rax
  __int8 v31; // al
  char *v32; // rsi
  const __m128i *v33; // r9
  __int64 v34; // rbp
  signed __int64 v35; // r12
  __int64 v36; // rax
  __m128i *v37; // rdi
  const __m128i *v38; // rdx
  __int64 i; // rcx
  __m128i v40; // xmm2
  __int64 v41; // rax
  const __m128i *v43; // [rsp+18h] [rbp-150h]
  __int64 v44; // [rsp+18h] [rbp-150h]
  unsigned __int64 v45; // [rsp+28h] [rbp-140h] BYREF
  __int64 v46; // [rsp+30h] [rbp-138h] BYREF
  __int64 v47; // [rsp+38h] [rbp-130h] BYREF
  __m128i v48; // [rsp+40h] [rbp-128h] BYREF
  __int64 v49; // [rsp+50h] [rbp-118h]
  __m128i v50; // [rsp+60h] [rbp-108h] BYREF
  __m128i v51; // [rsp+70h] [rbp-F8h]
  __m128i v52; // [rsp+80h] [rbp-E8h]
  __m128i v53; // [rsp+90h] [rbp-D8h]
  __int64 v54; // [rsp+A0h] [rbp-C8h]
  __m128i v55; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v56; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v57; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v58; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v59; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v60; // [rsp+100h] [rbp-68h] BYREF
  __m128i v61; // [rsp+110h] [rbp-58h] BYREF
  __int64 v62; // [rsp+120h] [rbp-48h]

  v5 = sub_21A2A40(a3);
  v6 = *(const __m128i **)(a2 + 448);
  v7 = v5;
  v8 = v5;
  if ( v5 > 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a2 + 464) - (_QWORD)v6) >> 3) )
  {
    v33 = *(const __m128i **)(a2 + 456);
    v34 = 24LL * v5;
    v35 = (char *)v33 - (char *)v6;
    if ( v5 )
    {
      v43 = *(const __m128i **)(a2 + 456);
      v36 = operator new(24LL * v5);
      v33 = v43;
      v37 = *(__m128i **)(a2 + 448);
    }
    else
    {
      v37 = (__m128i *)v6;
      v36 = 0;
    }
    v38 = v6;
    for ( i = v36; v33 != v38; *(_QWORD *)(i - 8) = v38[-1].m128i_i64[1] )
    {
      v40 = _mm_loadu_si128(v38);
      v38 = (const __m128i *)((char *)v38 + 24);
      i += 24;
      *(__m128i *)(i - 24) = v40;
    }
    if ( v37 )
    {
      v44 = v36;
      operator delete(v37);
      v36 = v44;
    }
    *(_QWORD *)(a2 + 448) = v36;
    *(_QWORD *)(a2 + 456) = v36 + v35;
    *(_QWORD *)(a2 + 464) = v34 + v36;
  }
  sub_21A4580((const __m128i **)(a2 + 560), v7);
  if ( !v8 )
  {
LABEL_18:
    if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
    {
      *a1 = 0;
    }
    else
    {
      sub_21A2C10(v55.m128i_i64, "export section ended prematurely");
      *a1 = v55.m128i_i64[0];
    }
    return a1;
  }
  v9 = 0;
  while ( 2 )
  {
    v48 = 0u;
    v10.m128i_i64[0] = sub_21A2A80(a3);
    v11 = *(char **)(a3 + 16);
    v48 = v10;
    v12 = *(char **)(a3 + 8);
    if ( v12 == v11 )
      sub_21A2960();
    *(_QWORD *)(a3 + 8) = v12 + 1;
    LOBYTE(v49) = *v12;
    v13 = sub_21A29A0((char **)(a3 + 8), v11);
    if ( v13 > 0xFFFFFFFF )
      sub_2221C70("LEB is outside Varuint32 range", 1);
    v14 = _mm_load_si128(&v48);
    HIDWORD(v49) = v13;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v57.m128i_i8[8] = 0;
    v59.m128i_i8[0] = 0;
    v60.m128i_i8[8] = 0;
    v55 = v14;
    v56.m128i_i32[1] = 0;
    switch ( (char)v49 )
    {
      case 0:
        v15 = *(_QWORD *)(a2 + 536);
        v16 = *(unsigned int *)(a2 + 680);
        if ( v16 + ((*(_QWORD *)(a2 + 544) - v15) >> 7) <= v13 )
        {
          v32 = "invalid function export";
          goto LABEL_33;
        }
        v56.m128i_i8[0] = 0;
        v61.m128i_i32[0] = v13;
        if ( (unsigned int)v16 <= (unsigned int)v13 )
        {
          v17 = (__m128i *)(((unsigned __int64)(unsigned int)(v13 - v16) << 7) + v15);
          if ( v17[5].m128i_i8[0] )
          {
            v17[4] = _mm_load_si128(&v48);
          }
          else
          {
            v41 = v48.m128i_i64[0];
            v17[5].m128i_i8[0] = 1;
            v17[4] = (__m128i)__PAIR128__(v48.m128i_u64[1], v41);
          }
          v45 = *(_QWORD *)(a2 + 304) + ((unsigned __int64)v17->m128i_u32[1] << 6);
        }
        goto LABEL_12;
      case 1:
        v56.m128i_i8[0] = 5;
        v18 = *(const __m128i **)(a2 + 456);
        v61.m128i_i32[0] = v13;
        if ( v18 == *(const __m128i **)(a2 + 464) )
          goto LABEL_22;
        goto LABEL_13;
      case 2:
        goto LABEL_12;
      case 3:
        v27 = *(_QWORD *)(a2 + 376);
        v28 = *(_DWORD *)(a2 + 672);
        if ( (unsigned __int64)v28 - 0x71C71C71C71C71C7LL * ((*(_QWORD *)(a2 + 384) - v27) >> 3) <= v13 )
        {
          v32 = "invalid global export";
          goto LABEL_33;
        }
        v56.m128i_i8[0] = 1;
        v29 = 0;
        if ( v28 <= (unsigned int)v13 )
        {
          v30 = (const __m128i *)(v27 + 72LL * ((unsigned int)v13 - v28));
          v50 = _mm_loadu_si128(v30);
          v51 = _mm_loadu_si128(v30 + 1);
          v52 = _mm_loadu_si128(v30 + 2);
          v53 = _mm_loadu_si128(v30 + 3);
          v54 = v30[4].m128i_i64[0];
          if ( !v30->m128i_i8[8] )
          {
            v31 = v30[1].m128i_i8[0];
            if ( v31 == 65 )
            {
              v29 = v51.m128i_i32[2];
            }
            else if ( v31 == 66 )
            {
              v29 = v51.m128i_i64[1];
            }
          }
        }
        v61.m128i_i32[0] = 0;
        v61.m128i_i64[1] = v29;
        v62 = 0;
        goto LABEL_12;
      case 4:
        if ( (unsigned __int64)*(unsigned int *)(a2 + 684)
           - 0x5555555555555555LL * ((__int64)(*(_QWORD *)(a2 + 408) - *(_QWORD *)(a2 + 400)) >> 3) > v13 )
        {
          v56.m128i_i8[0] = 4;
          v61.m128i_i32[0] = v13;
LABEL_12:
          v18 = *(const __m128i **)(a2 + 456);
          if ( v18 == *(const __m128i **)(a2 + 464) )
          {
LABEL_22:
            sub_21A80E0(a2 + 448, v18, &v48);
          }
          else
          {
LABEL_13:
            v19 = &v18[1].m128i_i8[8];
            *(__m128i *)(v19 - 24) = _mm_load_si128(&v48);
            *((_QWORD *)v19 - 1) = v49;
            *(_QWORD *)(a2 + 456) = v19;
          }
          if ( (_BYTE)v49 != 2 )
          {
            v20 = *(const __m128i **)(a2 + 568);
            if ( v20 == *(const __m128i **)(a2 + 576) )
            {
              sub_21A5310(a2 + 560, v20, &v55, &v46, &v47, &v45);
            }
            else
            {
              v21 = v46;
              v22 = v20 + 9;
              v23 = v47;
              v24 = v45;
              v22[-9] = _mm_load_si128(&v55);
              v22[-8] = _mm_load_si128(&v56);
              v22[-7] = _mm_load_si128(&v57);
              v22[-6] = _mm_load_si128(&v58);
              v22[-5] = _mm_load_si128(&v59);
              v22[-4] = _mm_load_si128(&v60);
              v22[-3] = _mm_load_si128(&v61);
              v25 = v62;
              v22[-2].m128i_i64[1] = v21;
              v22[-2].m128i_i64[0] = v25;
              v22[-1].m128i_i64[0] = v23;
              v22[-1].m128i_i64[1] = v24;
              *(_QWORD *)(a2 + 568) = v22;
            }
          }
          if ( v8 == ++v9 )
            goto LABEL_18;
          continue;
        }
        v32 = "invalid tag export";
LABEL_33:
        sub_21A2C10(v50.m128i_i64, v32);
        *a1 = v50.m128i_i64[0];
        return a1;
      default:
        v32 = "unexpected export kind";
        goto LABEL_33;
    }
  }
}
