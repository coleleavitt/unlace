__int64 __fastcall sub_21997A0(__int64 a1, __int64 a2, unsigned int *a3, __int32 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v12; // rdx
  unsigned __int32 v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-130h] BYREF
  unsigned __int64 v30; // [rsp+10h] [rbp-128h] BYREF
  char v31; // [rsp+18h] [rbp-120h]
  __m128i v32[2]; // [rsp+20h] [rbp-118h] BYREF
  __int16 v33; // [rsp+40h] [rbp-F8h]
  __m128i v34[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v35; // [rsp+70h] [rbp-C8h]
  __m128i v36[3]; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v37[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v38; // [rsp+D0h] [rbp-68h]
  __m128i v39[2]; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v40; // [rsp+100h] [rbp-38h]

  if ( (unsigned __int64)a3 >= sub_215DEC0(a2) )
  {
    v9 = sub_215DEC0(a2);
    v8 = (__int64)(a3 + 2);
    if ( (unsigned __int64)(a3 + 2) <= v7 + v9 )
    {
      v12 = *(unsigned int *)(a2 + 8);
      v13 = _byteswap_ulong(*a3);
      v14 = *(_QWORD *)a3;
      if ( (unsigned int)v12 <= 0x14 )
      {
        v15 = 1398784;
        if ( _bittest64(&v15, v12) )
          v14 = ((unsigned __int64)((HIDWORD(v14) << 8) & 0xFF0000
                                  | HIBYTE(HIDWORD(v14))
                                  | (HIDWORD(v14) << 24)
                                  | (HIDWORD(v14) >> 8) & 0xFF00) << 32)
              | v13;
      }
      v30 = v14;
      v31 &= ~1u;
      v16 = HIDWORD(v14);
      v17 = sub_215DEC0(a2);
      if ( v16 > v20 + v17 - (__int64)a3 )
      {
        v22 = " extends past end of file";
      }
      else
      {
        if ( HIDWORD(v30) > 7 )
        {
          v21 = v30;
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = a3;
          *(_QWORD *)(a1 + 8) = v21;
          goto LABEL_4;
        }
        v22 = " with size less than 8 bytes";
      }
      v37[0].m128i_i64[0] = (__int64)v22;
      v33 = 265;
      v38 = 259;
      v34[0].m128i_i64[0] = (__int64)"load command ";
      v35 = 259;
      v32[0].m128i_i32[0] = a4;
      sub_A41580(v36, v34, v32, 259, v18, v19);
      sub_A41580(v39, v36, v37, v23, v24, v25);
      sub_21967F0(&v29, v39[0].m128i_i64, v26, v27);
      v28 = v29;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v28;
      goto LABEL_4;
    }
  }
  v40 = 259;
  v39[0].m128i_i64[0] = (__int64)"Structure read out-of-range";
  sub_21967F0(v37[0].m128i_i64, v39[0].m128i_i64, v7, v8);
  v10 = v37[0].m128i_i64[0];
  v31 |= 1u;
  *(_BYTE *)(a1 + 16) |= 1u;
  v30 = 0;
  *(_QWORD *)a1 = v10;
LABEL_4:
  sub_2199780((__int64 *)&v30);
  return a1;
}
