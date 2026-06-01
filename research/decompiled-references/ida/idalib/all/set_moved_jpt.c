__int64 __fastcall set_moved_jpt(
        _BYTE *a1,
        __int64 a2,
        const __m128i *a3,
        _QWORD *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned __int8 v6; // r10
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // r9d
  bool v14; // al
  unsigned __int8 v15; // dl
  __int64 v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rax
  __m128i *v18; // rsi
  __int8 v19; // al
  bool v20; // di
  bool v21; // al
  char v22; // al
  unsigned __int8 v24; // [rsp+Dh] [rbp-3Bh]
  unsigned __int8 v25; // [rsp+Eh] [rbp-3Ah]
  unsigned __int8 v26; // [rsp+Fh] [rbp-39h]

  v6 = a6;
  v11 = a5;
  if ( (_BYTE)a5 == 10 )
    v11 = *(unsigned __int8 *)(a2 + 5);
  if ( a1[8] && *(_BYTE *)(a2 + 1) == 1 && (_BYTE)v11 == 2 )
    v11 = 7;
  if ( a6 == 10 )
    v6 = a3->m128i_u8[5];
  if ( a4[1] )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v16 = 40 * v12;
      v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
      v18 = (__m128i *)(40 * v12 + *a4);
      if ( v17 == sub_449EC0 )
      {
        v19 = v18->m128i_i8[1];
        if ( v19 == *(_BYTE *)(a2 + 1) )
        {
          if ( v19 == 99 )
            goto LABEL_24;
          if ( v19 == 100 )
          {
            if ( v18->m128i_i64[1] == *(_QWORD *)(a2 + 8) )
              goto LABEL_24;
          }
          else if ( v19 == 1 && v18->m128i_i16[3] == *(_WORD *)(a2 + 6) )
          {
            goto LABEL_24;
          }
        }
      }
      else
      {
        v26 = v6;
        v25 = v11;
        v24 = v13;
        v22 = ((__int64 (__fastcall *)(_BYTE *, __m128i *, __int64, __int64, __int64 (__fastcall *)(__int64, __int64, __int64)))v17)(
                a1,
                v18,
                a2,
                v11,
                sub_449EC0);
        v13 = v24;
        v11 = v25;
        v6 = v26;
        if ( v22 )
        {
          v18 = (__m128i *)(v16 + *a4);
LABEL_24:
          v15 = v18->m128i_u8[5];
          v20 = v15 <= 0xF9u;
          v21 = v15 <= 0xF9u || (unsigned __int8)v11 < v15;
          if ( (unsigned __int8)v11 <= 0xF9u )
            v21 = (unsigned __int8)v11 < v15 && v15 <= 0xF9u;
          if ( v21 )
          {
            v18->m128i_i8[1] = 0;
          }
          else
          {
            *v18 = _mm_loadu_si128(a3);
            v18[1] = _mm_loadu_si128(a3 + 1);
            v18[2].m128i_i32[0] = a3[2].m128i_i32[0];
            v14 = v20 || v6 < v15;
            if ( v6 <= 0xF9u )
              v14 = v20 && v6 < v15;
            if ( v14 )
              v15 = v6;
            *(_BYTE *)(*a4 + v16 + 5) = v15;
          }
          v13 = 1;
        }
      }
      if ( (unsigned __int64)++v12 >= a4[1] )
        return v13;
    }
  }
  return 0;
}
