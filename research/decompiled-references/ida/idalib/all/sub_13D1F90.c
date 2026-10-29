__int64 __fastcall sub_13D1F90(__int64 a1, __int64 a2, unsigned __int8 *a3, _BYTE *a4, __m128i a5)
{
  char v8; // dl
  __int64 v9; // rax
  __int8 *v10; // rbp
  unsigned __int64 v11; // rsi
  __m128i si128; // xmm1
  char v13; // r13
  __int64 v14; // rax
  __m128i *i; // rbx
  __int8 v16; // al
  int v18; // eax
  char v19; // al
  unsigned __int64 v20; // rax
  __int8 *v21; // rbp
  __int64 result; // rax
  __int8 *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  __int8 *v27; // rcx
  __int64 v28; // rsi
  __int8 v29; // al
  __int8 *v30; // rbx
  __int64 v31; // rdi
  __int8 *v32; // rdx
  __int64 v33; // rbp
  __int64 v35; // r15
  char v36; // al
  __int64 v37; // r13
  __int64 v38; // rbp
  unsigned int v39; // eax
  __int8 *v40; // rdx
  __int8 *v41; // rdx
  int v42; // eax
  _BYTE v44[136]; // [rsp+10h] [rbp-88h] BYREF

  v8 = *a3;
  if ( v8 == 92 || (v9 = 1, v8 == 63) )
  {
    v20 = sub_13D1690(a1, a3, 0);
    v8 = v20;
    v9 = HIDWORD(v20);
  }
  v10 = (__int8 *)&a3[v9];
  v11 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    if ( v8 == 47 )
      v8 = *v10++;
    goto LABEL_5;
  }
  if ( v10 != (__int8 *)(v11 + 1) )
  {
LABEL_5:
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA530);
    v13 = 0;
    while ( v11 > (unsigned __int64)(v10 + 24) )
    {
      v14 = *(_QWORD *)(a1 + 8);
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 776) == *(_DWORD *)(a1 + 128) )
          break;
      }
      if ( v8 == 47 )
        goto LABEL_85;
      if ( ((unsigned __int8)v10 & 0xF) != 0 )
      {
        if ( v8 < 0 )
        {
          v35 = (__int64)(v10 - 1);
          goto LABEL_42;
        }
        while ( 1 )
        {
          i = (__m128i *)(v10 + 1);
          if ( *v10 == 47 )
            break;
          if ( ((unsigned __int8)i & 0xF) == 0 )
            goto LABEL_25;
          if ( *v10 < 0 )
          {
            v35 = (__int64)v10++;
            goto LABEL_42;
          }
          ++v10;
        }
      }
      else
      {
        for ( i = (__m128i *)v10; ; ++i )
        {
LABEL_25:
          if ( (unsigned __int64)&i[1] >= v11 )
            goto LABEL_31;
          a5 = _mm_load_si128(i);
          if ( _mm_movemask_epi8(a5) )
          {
            v35 = (__int64)&i[-1].m128i_i64[1] + 7;
            v10 = (__int8 *)i;
            goto LABEL_42;
          }
          a5 = _mm_cmpeq_epi8(a5, si128);
          if ( _mm_movemask_epi8(a5) )
            break;
        }
        __asm { tzcnt   eax, eax }
        i = (__m128i *)((char *)i + _EAX + 1);
      }
LABEL_17:
      v16 = i[-1].m128i_i8[14];
      if ( v16 == 42 )
        goto LABEL_104;
      if ( v16 != 10 && v16 != 13 )
        goto LABEL_20;
      v23 = &i[-1].m128i_i8[14];
      v24 = 0;
      v25 = 0;
LABEL_51:
      v26 = *(v23 - 1);
      if ( v26 == 13 )
        goto LABEL_69;
LABEL_52:
      v27 = v23 - 1;
      if ( v26 == 10 )
        goto LABEL_69;
      while ( 1 )
      {
        if ( (byte_2411740[2 * v26] & 5) != 0 || !v26 )
        {
          while ( 1 )
          {
            v28 = (unsigned __int8)*(v27 - 1);
            v33 = (__int64)(v27 - 1);
            v26 = *(v27 - 1);
            if ( (byte_2411740[2 * v28] & 5) == 0 )
            {
              if ( (_BYTE)v28 )
                break;
            }
            --v27;
          }
          v24 = (__int64)v27;
        }
        else
        {
          v33 = (__int64)v27;
        }
        v23 = (__int8 *)(v33 - 1);
        if ( v26 != 92 )
        {
          if ( v26 != 47 || *(_BYTE *)(v33 - 1) != 63 || *(_BYTE *)(v33 - 2) != 63 )
            goto LABEL_20;
          v25 = v33 - 2;
          v23 = (__int8 *)(v33 - 3);
          v33 -= 2;
        }
        v29 = *v23;
        if ( *v23 == 42 )
          break;
        if ( v29 == 10 )
          goto LABEL_51;
        if ( v29 != 13 )
          goto LABEL_20;
        v26 = *(v23 - 1);
        if ( v26 != 13 )
          goto LABEL_52;
LABEL_69:
        if ( v26 == *v23 )
          goto LABEL_20;
        v27 = v23 - 2;
        v26 = *(v23 - 2);
      }
      v36 = *(_BYTE *)(a1 + 26);
      if ( !v25 )
        goto LABEL_99;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
      {
        if ( !v36 )
        {
          sub_13D1530((__int64)v44, a1, v25, 1305);
          sub_AEA040((__int64)v44);
          v36 = *(_BYTE *)(a1 + 26);
LABEL_99:
          if ( !v36 )
          {
            sub_13D1530((__int64)v44, a1, v33, 1204);
            sub_AEA040((__int64)v44);
          }
        }
        if ( v24 )
        {
          if ( *(_BYTE *)(a1 + 26) )
          {
LABEL_94:
            if ( *(_BYTE *)(a1 + 146) )
            {
              v40 = &i->m128i_i8[-*(_QWORD *)(a1 + 152)];
              *(_DWORD *)(a2 + 4) = (_DWORD)v40;
              *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v40);
              *(_WORD *)(a2 + 16) = 4;
              *(_QWORD *)(a1 + 152) = i;
              return 1;
            }
            else
            {
              if ( (byte_2411740[2 * i->m128i_u8[0]] & 5) != 0 )
              {
                sub_13D1DA0(a1, a2, &i->m128i_u8[1], a4);
              }
              else
              {
                *(_QWORD *)(a1 + 152) = i;
                *(_WORD *)(a2 + 18) |= 2u;
              }
              return 0;
            }
          }
          sub_13D1530((__int64)v44, a1, v24, 1021);
          sub_AEA040((__int64)v44);
        }
LABEL_104:
        v37 = *(_QWORD *)(a1 + 8);
        if ( v37 )
        {
          if ( !*(_BYTE *)(a1 + 26) )
          {
            v38 = (unsigned int)sub_13D1500(a1, (__int64)i, 1);
            v39 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), 1);
            result = sub_1463DC0(v37, a2, (v38 << 32) | v39, *(double *)a5.m128i_i64, *(double *)si128.m128i_i64);
            if ( (_BYTE)result )
            {
              *(_QWORD *)(a1 + 152) = i;
              return result;
            }
          }
        }
        goto LABEL_94;
      }
      if ( !v36 )
      {
        sub_13D1530((__int64)v44, a1, v25, 1307);
        sub_AEA040((__int64)v44);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA530);
      }
LABEL_20:
      v8 = i->m128i_i8[0];
      if ( i->m128i_i8[0] != 42 || i->m128i_i8[1] == 47 || *(_BYTE *)(a1 + 26) )
      {
        v11 = *(_QWORD *)(a1 + 120);
      }
      else
      {
        sub_13D1530((__int64)v44, a1, (__int64)&i[-1].m128i_i64[1] + 7, 1368);
        sub_AEA040((__int64)v44);
        v8 = i->m128i_i8[0];
        v11 = *(_QWORD *)(a1 + 120);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA530);
      }
LABEL_22:
      v10 = &i->m128i_i8[1];
    }
    while ( 1 )
    {
      if ( v8 == 0 || v8 == 47 )
        goto LABEL_73;
      if ( v8 >= 0 )
        break;
      v11 = *(_QWORD *)(a1 + 120);
      v35 = (__int64)(v10 - 1);
LABEL_42:
      v18 = sub_22188B0(v35, v11, *(double *)a5.m128i_i64, *(double *)si128.m128i_i64);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA530);
      if ( v18 )
      {
LABEL_30:
        v13 = 0;
        i = (__m128i *)&v10[v18 - 1];
      }
      else
      {
        i = (__m128i *)v10;
        if ( !v13 )
          goto LABEL_44;
      }
LABEL_31:
      v8 = i->m128i_i8[0];
      v10 = &i->m128i_i8[1];
    }
    while ( 1 )
    {
      v19 = *v10;
      v8 = *v10;
      if ( *v10 == 47 || !v19 )
        break;
      if ( v19 < 0 )
      {
        v18 = sub_22188B0(v10, *(_QWORD *)(a1 + 120), *(double *)a5.m128i_i64, *(double *)si128.m128i_i64);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA530);
        if ( v18 )
        {
          ++v10;
          goto LABEL_30;
        }
        v35 = (__int64)v10++;
LABEL_44:
        v13 = *(_BYTE *)(a1 + 26);
        i = (__m128i *)v10;
        if ( !v13 )
        {
          v13 = 1;
          sub_13D1530((__int64)v44, a1, v35, 1358);
          sub_AEA040((__int64)v44);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AA530);
        }
        goto LABEL_31;
      }
      ++v10;
    }
    v13 = 0;
    ++v10;
LABEL_73:
    if ( v8 != 47 )
    {
      v11 = *(_QWORD *)(a1 + 120);
      if ( !v8 )
      {
        v30 = v10 - 1;
        if ( v10 == (__int8 *)(v11 + 1) )
        {
          if ( !*(_BYTE *)(a1 + 26) )
          {
            sub_13D1530((__int64)v44, a1, *(_QWORD *)(a1 + 152), 1200);
            sub_AEA040((__int64)v44);
          }
          if ( *(_BYTE *)(a1 + 146) > 1u )
          {
            v41 = &v30[-*(_QWORD *)(a1 + 152)];
            *(_DWORD *)(a2 + 4) = (_DWORD)v41;
            v42 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v41);
            *(_WORD *)(a2 + 16) = 0;
            *(_DWORD *)a2 = v42;
            *(_QWORD *)(a1 + 152) = v30;
            return 1;
          }
          else
          {
            *(_QWORD *)(a1 + 152) = v30;
            return 0;
          }
        }
        v31 = *(_QWORD *)(a1 + 8);
        if ( v31
          && *(_QWORD *)(v31 + 760)
          && (_DWORD)v30 - *(_DWORD *)(a1 + 112) + *(_DWORD *)(a1 + 128) == *(_DWORD *)(v31 + 772) )
        {
          sub_145C700(*(double *)a5.m128i_i64, *(double *)si128.m128i_i64);
          *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 120);
          return 0;
        }
      }
      v8 = *v10;
      i = (__m128i *)v10;
      goto LABEL_22;
    }
LABEL_85:
    i = (__m128i *)v10;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 26) )
  {
    sub_13D1530((__int64)v44, a1, *(_QWORD *)(a1 + 152), 1200);
    sub_AEA040((__int64)v44);
  }
  v21 = v10 - 1;
  if ( *(_BYTE *)(a1 + 146) > 1u )
  {
    v32 = &v21[-*(_QWORD *)(a1 + 152)];
    *(_DWORD *)(a2 + 4) = (_DWORD)v32;
    *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v32);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a1 + 152) = v21;
    return 1;
  }
  else
  {
    *(_QWORD *)(a1 + 152) = v21;
    return 0;
  }
}
