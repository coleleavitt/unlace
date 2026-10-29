void __fastcall sub_20BCC00(__m128i *a1, __int64 a2, __m128i *a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int8 v8; // al
  __int64 v9; // rax
  _QWORD *v10; // r14
  const __m128i *v11; // r13
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rbp
  _QWORD *v16; // r11
  _QWORD *v17; // rsi
  _QWORD *v18; // r11
  __int64 v19; // rdi

  v3 = a1[-1].m128i_u8[0];
  if ( (v3 & 2) != 0 )
    v4 = a1[-2].m128i_i64[0];
  else
    v4 = (__int64)&a1[-1].m128i_i64[-((v3 >> 2) & 0xF)];
  v5 = (a2 - v4) >> 3;
  if ( (a1->m128i_i16[0] & 0x7F00) != 0 )
  {
    sub_20B2F30(a1, v5, a3);
    return;
  }
  sub_20B0070(a1);
  v8 = a1[-1].m128i_u8[0];
  if ( (v8 & 2) != 0 )
    v9 = a1[-2].m128i_i64[0];
  else
    v9 = (__int64)&a1[-1].m128i_i64[-((v8 >> 2) & 0xF)];
  v10 = *(_QWORD **)(v9 + 8LL * (unsigned int)v5);
  sub_20B2F30(a1, v5, a3);
  if ( a1 == a3 || !a3 && v10 && *(_BYTE *)v10 == 1 )
  {
    if ( (BYTE1(a1->m128i_i64[0]) & 0x7F) == 2 || a1[-1].m128i_i32[2] )
    {
      a1[-1].m128i_i32[2] = 0;
      sub_20ABEC0((__int64)a1);
      sub_20AC2A0((unsigned __int8 *)a1);
      return;
    }
LABEL_12:
    sub_20AC2A0((unsigned __int8 *)a1);
    return;
  }
  v11 = sub_20BA360((__int64)a1);
  if ( a1 == v11 )
  {
    if ( (BYTE1(a1->m128i_i64[0]) & 0x7F) == 2 || a1[-1].m128i_i32[2] )
      sub_20ABF40((__int64)v11, v10, a3);
  }
  else
  {
    if ( (BYTE1(a1->m128i_i64[0]) & 0x7F) != 2 && !a1[-1].m128i_i32[2] )
      goto LABEL_12;
    v12 = a1[-1].m128i_u8[0];
    if ( (v12 & 2) != 0 )
      v13 = a1[-2].m128i_i32[2];
    else
      v13 = ((unsigned __int16)a1[-1].m128i_i16[0] >> 6) & 0xF;
    if ( v13 )
    {
      v14 = 0;
      v15 = 8LL * (unsigned int)(v13 - 1);
      while ( 1 )
      {
        if ( (v12 & 2) != 0 )
        {
          v16 = (_QWORD *)(v14 + a1[-2].m128i_i64[0]);
          v17 = (_QWORD *)*v16;
          if ( *v16 )
            goto LABEL_19;
        }
        else
        {
          v16 = (__int64 *)((char *)a1->m128i_i64 + -16 - 8LL * (((unsigned __int8)v12 >> 2) & 0xF) + v14);
          v17 = (_QWORD *)*v16;
          if ( *v16 )
          {
LABEL_19:
            sub_20A0850((__int64)v16, v17);
            *v18 = 0;
            if ( v14 == v15 )
              break;
            v12 = a1[-1].m128i_u8[0];
            goto LABEL_21;
          }
        }
        if ( v14 == v15 )
          break;
LABEL_21:
        v14 += 8;
      }
    }
    v19 = a1->m128i_i64[1];
    if ( (v19 & 4) != 0 )
      sub_20BD280(v19 & 0xFFFFFFFFFFFFFFF8LL, v11, v12);
    sub_20B3390((__int64)a1);
  }
}
