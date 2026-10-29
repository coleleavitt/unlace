__int64 __fastcall sub_3CA2F0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, const __m128i *a5, char a6)
{
  unsigned int v7; // ebx
  __int64 v11; // r14
  __int64 v13; // r9
  int v14; // r8d
  unsigned __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int16 v19; // ax
  char v20; // [rsp+3h] [rbp-75h]
  int v21; // [rsp+14h] [rbp-64h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-60h] BYREF
  __m128i v23; // [rsp+20h] [rbp-58h] BYREF
  __int16 v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    v7 = a3;
    if ( (a4 & 0xF0000600) != 0x60000400
      && (a4 & 0x70000600) != 0x50000400
      && !(unsigned __int8)is_off(a4, a3)
      && !(unsigned __int8)is_enum(a4, v7)
      && !(unsigned __int8)is_stroff(a4, v7)
      && !(unsigned __int8)is_custfmt(a4, v7) )
    {
      goto LABEL_9;
    }
    if ( a5 && (!(unsigned __int8)is_stroff(a4, v7) || a5->m128i_i32[0]) )
    {
      if ( !a6 )
      {
        sub_39ADA0(0x10u, a2, v7, a5);
        v20 = 1;
LABEL_10:
        v11 = a4 & 0x600;
        if ( v11 == 1024 )
        {
          v16 = (unsigned int)a4 & 0xF0000000;
          if ( v16 == 1610612736 )
          {
            sub_3CA220(*a1, a2, a5->m128i_i64[0], 1);
            goto LABEL_13;
          }
          if ( v16 == 1342177280 )
          {
            v21 = a5->m128i_i32[0] + 1;
            v17 = sub_3B9DC0(a1, a2);
            v18 = *a1;
            v22 = v17;
            sub_7BE7C0(&v22, v18, 16, &v21, 4, 65);
            goto LABEL_13;
          }
        }
        if ( (unsigned __int8)is_off(a4, v7) )
        {
          sub_4E22A0(a1, a2, v7, a5);
        }
        else
        {
          if ( (unsigned __int8)is_enum(a4, v7) )
          {
            sub_413C60(a1, a2, v7, a5->m128i_i64[0], a5->m128i_u8[8], 1);
            if ( !v20 )
              return 1;
            goto LABEL_25;
          }
          if ( (unsigned __int8)is_stroff(a4, v7) )
          {
            v13 = a5[16].m128i_i64[1];
            v14 = a5->m128i_i32[0];
            v15 = &a5->m128i_u64[1];
            if ( v7 )
              sub_3C8820(a1, a2, 16, v15, v14, v13);
            else
              sub_3C8820(a1, a2, 15, v15, v14, v13);
          }
          else if ( v11 == 1024 && (a4 & 0xF0000000) == 0xD0000000LL || (unsigned __int8)is_custfmt(a4, v7) )
          {
            if ( (v7 & 0xF) == 0xF || (int)sub_3E9640(a1, &v23, a2) <= 0 )
            {
              v19 = a5[1].m128i_i16[0];
              v23 = _mm_loadu_si128(a5);
              v24 = v19;
            }
            else
            {
              if ( v11 == 1024 && (a4 & 0xF0000000) == 0xD0000000LL )
                v23.m128i_i16[0] = a5->m128i_i16[0];
              if ( (unsigned __int8)is_custfmt(a4, v7 & 0xF) && (v7 & 8) == 0 )
                v23.m128i_i16[(v7 & 0xF) + 1] = a5->m128i_i16[(v7 & 0xF) + 1];
            }
            sub_3E99E0(a1, a2, &v23);
            v7 &= 0xFu;
          }
        }
LABEL_13:
        if ( !v20 )
          return 1;
LABEL_25:
        sub_39ADA0(0x11u, a2, v7);
        return 1;
      }
LABEL_9:
      v20 = 0;
      goto LABEL_10;
    }
  }
  return 0;
}
