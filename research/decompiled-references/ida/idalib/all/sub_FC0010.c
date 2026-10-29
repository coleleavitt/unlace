__m128i *__fastcall sub_FC0010(
        __m128i *a1,
        __int64 a2,
        unsigned int *a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int32 a8)
{
  __m128i *result; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm0
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // r8
  __m128i v16; // xmm0
  unsigned int v17; // r11d
  unsigned int v18; // r11d
  __int64 v19; // rbx
  unsigned __int8 v20; // bp
  unsigned __int8 v21; // r15
  __int64 v22; // r12
  unsigned __int8 v23; // r11
  __int64 v24; // r13
  __int64 v25; // r12
  signed __int64 v26; // r13
  __int64 v27; // r14
  signed __int64 v28; // r15
  int v29; // r10d
  const __m128i *v30; // r11
  int v31; // r8d
  __int32 v32; // edx
  __m128i v33; // xmm2
  __int64 v34; // [rsp+20h] [rbp-68h]
  __int64 v35; // [rsp+20h] [rbp-68h]
  __m128i *v36; // [rsp+20h] [rbp-68h]
  unsigned __int64 v37; // [rsp+28h] [rbp-60h]
  unsigned __int64 v38; // [rsp+38h] [rbp-50h]
  _DWORD v39[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v40; // [rsp+48h] [rbp-40h]

  result = a1;
  v9 = *a3;
  if ( *(_DWORD *)a2 <= (unsigned int)v9 )
  {
    v11 = *(_DWORD *)(a2 + 8) & 0x7FFFFFFF;
    v12 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
    v13 = a3[3] & 0x7FFFFFFF;
    v14 = a3[2] & 0x7FFFFFFF;
    v15 = a3[1] & 0x7FFFFFFF;
    if ( *(_DWORD *)a2 == (_DWORD)v9
      && (v12 > (unsigned int)v15
       || v12 == (_DWORD)v15
       && (v11 > (unsigned int)v14 || v11 == (_DWORD)v14 && (*(_DWORD *)(a2 + 12) & 0x7FFFFFFFu) > (unsigned int)v13)) )
    {
      v16 = _mm_loadu_si128(a4);
      result[1].m128i_i8[0] = 1;
      *result = v16;
    }
    else if ( (unsigned int)v9 > *(_DWORD *)(a2 + 16)
           || (_DWORD)v9 == *(_DWORD *)(a2 + 16)
           && ((v17 = *(_DWORD *)(a2 + 20) & 0x7FFFFFFF, (unsigned int)v15 > v17)
            || (_DWORD)v15 == v17
            && ((v18 = *(_DWORD *)(a2 + 24) & 0x7FFFFFFF, (unsigned int)v14 > v18)
             || (unsigned int)v13 > (*(_DWORD *)(a2 + 28) & 0x7FFFFFFFu) && (_DWORD)v14 == v18)) )
    {
      v32 = a8;
      *result = _mm_loadu_si128((const __m128i *)&a7);
      result[1].m128i_i32[0] = v32;
    }
    else
    {
      v19 = *((_QWORD *)a3 + 1);
      v20 = *((_BYTE *)a3 + 7) >> 7;
      v21 = *((_BYTE *)a3 + 11) >> 7;
      v22 = *(_QWORD *)a3;
      if ( (v19 & 0x7FFFFFFF00000000LL) != 0 )
      {
        v23 = *((_BYTE *)a3 + 15) >> 7;
      }
      else
      {
        v23 = 0;
        if ( (v19 & 0x7FFFFFFF) == 0 )
        {
          v21 = 0;
          if ( (v22 & 0x7FFFFFFF00000000LL) == 0 )
            v20 = 0;
        }
      }
      v34 = v21;
      v24 = v22 & 0x7FFFFFFFFFFFFFFFLL;
      v25 = *(_QWORD *)(a2 + 64);
      v26 = ((unsigned __int64)v20 << 63) | v24;
      v27 = *(unsigned int *)(a2 + 80);
      v28 = ((unsigned __int64)v21 << 31) & 0x7FFFFFFFFFFFFFFFLL
          | v19 & 0x7FFFFFFF7FFFFFFFLL
          | ((unsigned __int64)v23 << 63);
      v37 = v28;
      if ( !(_DWORD)v27 )
        goto LABEL_40;
      if ( v26 < 0 )
        v15 = (484763065 * (_DWORD)v15) ^ (unsigned int)((0xBF58476D1CE4E5B9LL * ((v9 << 32) | v15)) >> 31);
      else
        v15 = (unsigned int)v9;
      if ( (v28 & 0x80000000LL) != 0 )
        v15 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((v15 << 32) | v14)) >> 31) ^ (484763065 * (_DWORD)v14);
      if ( v28 < 0 )
        LODWORD(v15) = ((0xBF58476D1CE4E5B9LL * (v13 | (v15 << 32))) >> 31) ^ (484763065 * v13);
      LODWORD(v14) = v27 - 1;
      LODWORD(v15) = (v27 - 1) & v15;
      v29 = 1;
      v38 = (unsigned __int64)v23 << 63;
      v35 = v34 << 31;
      while ( 1 )
      {
        v30 = (const __m128i *)(v25 + 32LL * (unsigned int)v15);
        if ( (_DWORD)v9 == v30->m128i_i32[0] )
        {
          v26 = ((unsigned __int64)v20 << 63) | v26 & 0x7FFFFFFFFFFFFFFFLL;
          if ( ((v30->m128i_i32[1] ^ HIDWORD(v26)) & 0x7FFFFFFF) == 0 )
          {
            v37 = v35 | v37 & 0xFFFFFFFF7FFFFFFFLL;
            if ( ((v30->m128i_i32[2] ^ (unsigned int)v37) & 0x7FFFFFFF) == 0 )
            {
              v37 = v38 | v37 & 0x7FFFFFFFFFFFFFFFLL;
              if ( ((v30->m128i_i32[3] ^ HIDWORD(v37)) & 0x7FFFFFFF) == 0 )
                break;
            }
          }
        }
        if ( v30->m128i_i32[0] == 0x7FFFFFFF
          && (v30->m128i_i32[1] & 0x7FFFFFFF) == 0
          && (v30->m128i_i32[2] & 0x7FFFFFFF) == 0
          && (v30->m128i_i32[3] & 0x7FFFFFFF) == 0 )
        {
          goto LABEL_40;
        }
        v31 = v29 + v15;
        ++v29;
        LODWORD(v15) = v14 & v31;
      }
      if ( v30 == (const __m128i *)(32 * v27 + v25) )
      {
LABEL_40:
        if ( *((char *)a3 + 7) < 0 )
        {
          v39[0] = *a3;
          v39[1] = 0;
          v40 = 0;
          v36 = result;
          sub_FC0010(
            (_DWORD)result,
            a2,
            (unsigned int)v39,
            (_DWORD)a4,
            v15,
            v14,
            (__int128)_mm_loadu_si128((const __m128i *)&a7),
            a8);
          return v36;
        }
        else
        {
          result[1].m128i_i8[0] = 0;
        }
      }
      else
      {
        v33 = _mm_loadu_si128(v30 + 1);
        result[1].m128i_i8[0] = 1;
        *result = v33;
      }
    }
  }
  else
  {
    v10 = _mm_loadu_si128(a4);
    result[1].m128i_i8[0] = 1;
    *result = v10;
  }
  return result;
}
