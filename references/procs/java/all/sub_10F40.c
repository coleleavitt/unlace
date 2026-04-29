__int64 __fastcall sub_10F40(_QWORD *a1, const __m128i *a2, unsigned __int8 a3)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  char *v6; // rax
  unsigned int v7; // r13d
  char v8; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // al
  unsigned __int16 v14; // si
  unsigned __int8 v15; // cl
  __int64 module_data; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // [rsp+Ch] [rbp-21Ch]
  _BYTE v20[4]; // [rsp+14h] [rbp-214h] BYREF
  unsigned __int16 v21; // [rsp+18h] [rbp-210h]
  __m128i v22; // [rsp+20h] [rbp-208h] BYREF
  __m128i v23; // [rsp+30h] [rbp-1F8h]
  __int64 v24; // [rsp+40h] [rbp-1E8h]
  __int128 v25; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1C8h]
  __int64 v27; // [rsp+70h] [rbp-1B8h]
  __int128 v28; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-198h]
  __int64 v30; // [rsp+98h] [rbp-190h]
  __int64 v31; // [rsp+A0h] [rbp-188h]
  char v32; // [rsp+A8h] [rbp-180h] BYREF
  _QWORD v33[8]; // [rsp+1E8h] [rbp-40h] BYREF

  v3 = _mm_loadu_si128(a2);
  v4 = a2[2].m128i_i64[0];
  v33[0] = __readfsqword(0x28u);
  v29 = -1;
  v22 = v3;
  v30 = 0;
  v31 = 0;
  v23 = _mm_loadu_si128(a2 + 1);
  v24 = v4;
  v6 = &v32;
  v28 = -1;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( v6 != (char *)v33 );
  decode_insn(&v28, a1[2], v33, 0.0);
  switch ( v23.m128i_i8[10] )
  {
    case 1:
      v14 = v23.m128i_u16[4];
      return (unsigned int)sub_10630(a1, v14, 1u, 0xBu) ^ 1;
    case 3:
      v13 = 2;
      goto LABEL_22;
    case 4:
      v13 = 3;
      goto LABEL_22;
    case 5:
      v13 = 7;
      goto LABEL_22;
    case 6:
      v13 = 4;
LABEL_22:
      v22.m128i_i8[5] = v13;
      return sub_10360(a1, (__int64)&v22, 0xCu, 0);
    case 7:
      v15 = 32;
      if ( (unsigned int)v23.m128i_u16[1] - 10 <= 2 )
      {
        v15 = 34;
        if ( HIDWORD(v30) == 0xFFFF )
          v15 = 7;
      }
      return (unsigned int)sub_10630(a1, v22.m128i_u16[4], v23.m128i_u16[1], v15) ^ 1;
    case 8:
      v14 = v22.m128i_u16[4];
      return (unsigned int)sub_10630(a1, v14, 1u, 0xBu) ^ 1;
    case 9:
      v19 = 3;
      goto LABEL_5;
    case 0xA:
    case 0xB:
      v19 = 5;
LABEL_5:
      if ( !a3
        || (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0
        || !(unsigned __int8)sub_10630(a1, v23.m128i_u16[0], v19, 0x20u) )
      {
        v7 = 34;
        v8 = 34;
        if ( v22.m128i_i16[5] == *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33023) )
        {
          v7 = 7;
          v8 = 7;
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, v7);
        if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0
          || v8 == 34 && a3 != 1 )
        {
          if ( (unsigned __int8)sub_10630(a1, v22.m128i_u16[4], 0xBu, 0) || !sub_FD50(a1, 1) )
            return 0;
          sub_F970(a1, 46);
        }
        if ( !(unsigned __int8)sub_10630(a1, v23.m128i_u16[1], 0xDu, 0) )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 72LL))(a1, v7);
          if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
          {
            if ( v19 != 5 )
              return 1;
            v18 = 6;
            return (unsigned int)sub_10630(a1, v23.m128i_u16[0], v18, 0x20u) ^ 1;
          }
          v18 = 9;
          if ( v19 == 5 )
            return (unsigned int)sub_10630(a1, v23.m128i_u16[0], v18, 0x20u) ^ 1;
          if ( sub_FD50(a1, 1) )
          {
            sub_F970(a1, 32);
            v18 = 3;
            return (unsigned int)sub_10630(a1, v23.m128i_u16[0], v18, 0x20u) ^ 1;
          }
        }
        return 0;
      }
      return 0;
    case 0xC:
      goto LABEL_19;
    case 0xF:
      module_data = get_module_data((unsigned int)dword_2D4F4);
      if ( netnode_supval(*(_QWORD *)(module_data + 33336), v22.m128i_u16[5], v20, 12, 83) != 12 )
        return 0;
      v27 = 0;
      v25 = 0;
      v26 = 0;
      v17 = get_module_data((unsigned int)dword_2D4F4);
      sub_6FF0(v17, (__int64)&v25, (__int64)v20);
      LOBYTE(v27) = 0;
      DWORD2(v26) = v22.m128i_u16[5] | (v20[0] << 16);
      sub_10F40(a1, &v25, a3);
      return 1;
    case 0x10:
      return (unsigned int)sub_10630(a1, v22.m128i_u16[4], 0xCu, 0x20u) ^ 1;
    case 0x12:
      v10 = get_module_data((unsigned int)dword_2D4F4);
      if ( netnode_supval(*(_QWORD *)(v10 + 33336), v23.m128i_u16[4], v20, 12, 83) != 12 )
        return 0;
      v11 = get_module_data((unsigned int)dword_2D4F4);
      if ( netnode_supval(*(_QWORD *)(v11 + 33336), v21, &v25, 12, 83) != 12 )
        return 0;
      v24 = 0;
      v22 = 0;
      v23 = 0;
      v12 = get_module_data((unsigned int)dword_2D4F4);
      sub_6FF0(v12, (__int64)&v22, (__int64)&v25);
      LOBYTE(v24) = 0;
      v23.m128i_i32[2] = v21 | ((unsigned __int8)v25 << 16);
LABEL_19:
      if ( (unsigned __int8)sub_10630(a1, v22.m128i_u16[5], 0xCu, 0) )
        return 0;
      return (unsigned int)sub_10630(a1, v22.m128i_u16[4], 0xCu, 0) ^ 1;
    default:
      sub_6E90((__int64)"OC: bad constant type %u", v23.m128i_u8[10]);
      return 1;
  }
}
