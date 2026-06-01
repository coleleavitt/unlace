__int64 __fastcall sub_3C5000(__int64 *a1, unsigned int a2, unsigned int a3, __int64 a4, const __m128i *a5, char a6)
{
  unsigned int v8; // ebx
  __int64 v12; // r14
  unsigned int v14; // r9d
  int v15; // r8d
  int *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rsi
  __int16 v21; // ax
  char v22; // [rsp+3h] [rbp-75h]
  int v23; // [rsp+18h] [rbp-60h] BYREF
  int v24; // [rsp+1Ch] [rbp-5Ch] BYREF
  __m128i v25; // [rsp+20h] [rbp-58h] BYREF
  __int16 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v8 = a3;
    if ( (a4 & 0xF0000600) != 0x60000400
      && (a4 & 0x70000600) != 0x50000400
      && !(unsigned __int8)is_off(a4, a3)
      && !(unsigned __int8)is_enum(a4, v8)
      && !(unsigned __int8)is_stroff(a4, v8)
      && !(unsigned __int8)is_custfmt(a4, v8) )
    {
      goto LABEL_9;
    }
    if ( a5 && (!(unsigned __int8)is_stroff(a4, v8) || a5->m128i_i32[0]) )
    {
      if ( !a6 )
      {
        sub_396090(0x10u, a2, v8, a5);
        v22 = 1;
LABEL_10:
        v12 = a4 & 0x600;
        if ( v12 == 1024 )
        {
          v17 = (unsigned int)a4 & 0xF0000000;
          if ( v17 == 1610612736 )
          {
            sub_3C4F30(*a1, a2, a5->m128i_i32[0], 1);
            goto LABEL_13;
          }
          if ( v17 == 1342177280 )
          {
            v18 = *a1;
            v23 = a5->m128i_i32[0] + 1;
            v19 = sub_614FB0(v18, 29);
            v20 = *a1;
            v24 = a2 + v19;
            sub_79B440(&v24, v20, 16, &v23, 4, 65);
            goto LABEL_13;
          }
        }
        if ( (unsigned __int8)is_off(a4, v8) )
        {
          sub_4CABE0(a1, a2, v8, a5);
        }
        else
        {
          if ( (unsigned __int8)is_enum(a4, v8) )
          {
            sub_400960(a1, a2, v8, a5->m128i_u32[0], a5->m128i_u8[4], 1);
            if ( !v22 )
              return 1;
            goto LABEL_25;
          }
          if ( (unsigned __int8)is_stroff(a4, v8) )
          {
            v14 = a5[8].m128i_u32[1];
            v15 = a5->m128i_i32[0];
            v16 = &a5->m128i_i32[1];
            if ( v8 )
              sub_3C3560(a1, a2, 0x10u, v16, v15, v14);
            else
              sub_3C3560(a1, a2, 0xFu, v16, v15, v14);
          }
          else if ( v12 == 1024 && (a4 & 0xF0000000) == 0xD0000000LL || (unsigned __int8)is_custfmt(a4, v8) )
          {
            if ( (v8 & 0xF) == 0xF || (int)sub_3E33B0(a1, &v25, a2) <= 0 )
            {
              v21 = a5[1].m128i_i16[0];
              v25 = _mm_loadu_si128(a5);
              v26 = v21;
            }
            else
            {
              if ( v12 == 1024 && (a4 & 0xF0000000) == 0xD0000000LL )
                v25.m128i_i16[0] = a5->m128i_i16[0];
              if ( (unsigned __int8)is_custfmt(a4, v8 & 0xF) && (v8 & 8) == 0 )
                v25.m128i_i16[(v8 & 0xF) + 1] = a5->m128i_i16[(v8 & 0xF) + 1];
            }
            sub_3E3740(a1, a2, &v25);
            v8 &= 0xFu;
          }
        }
LABEL_13:
        if ( !v22 )
          return 1;
LABEL_25:
        sub_396090(0x11u, a2, v8);
        return 1;
      }
LABEL_9:
      v22 = 0;
      goto LABEL_10;
    }
  }
  return 0;
}

