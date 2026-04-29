__int64 __fastcall sub_3F9C80(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // ebp
  __int64 v6; // rsi
  __int64 v7; // rsi
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // rax
  __int16 v11; // ax
  int v12; // eax
  int v13; // r15d
  int i; // r14d
  int v15; // eax
  __int64 v16; // [rsp+0h] [rbp-338h] BYREF
  int v17; // [rsp+8h] [rbp-330h]
  __m128i v18; // [rsp+10h] [rbp-328h] BYREF
  __int128 v19; // [rsp+20h] [rbp-318h] BYREF
  __int64 v20; // [rsp+30h] [rbp-308h]
  __int64 v21; // [rsp+38h] [rbp-300h]
  __int64 v22; // [rsp+40h] [rbp-2F8h]
  char v23; // [rsp+48h] [rbp-2F0h] BYREF
  __int16 v24; // [rsp+4Eh] [rbp-2EAh]
  __int16 v25; // [rsp+76h] [rbp-2C2h]
  unsigned __int16 v26; // [rsp+9Eh] [rbp-29Ah]
  _BYTE v27[8]; // [rsp+188h] [rbp-1B0h] BYREF
  __int128 v28; // [rsp+190h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+1A0h] [rbp-198h]
  __int64 v30; // [rsp+1A8h] [rbp-190h]
  __int64 v31; // [rsp+1B0h] [rbp-188h]
  char v32; // [rsp+1B8h] [rbp-180h] BYREF
  __int64 v33; // [rsp+1C0h] [rbp-178h]
  __int16 v34; // [rsp+1E6h] [rbp-152h]
  _QWORD v35[8]; // [rsp+2F8h] [rbp-40h] BYREF

  v35[0] = __readfsqword(0x28u);
  v1 = sub_1D2F40(a1, a1 + 24);
  if ( !(_BYTE)v1 )
    return 0;
  v20 = -1;
  v6 = *(unsigned __int16 *)(a1 + 50);
  v4 = v1;
  v19 = -1;
  v7 = *(_QWORD *)(a1 + 40) + v6;
  v8 = &v23;
  v21 = 0;
  v22 = 0;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 40;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *((_QWORD *)v8 - 2) = 0;
  }
  while ( v27 != v8 );
  if ( !(unsigned int)decode_insn(&v19, v7, v27, v2, v3, 0, 0.0) )
    return 0;
  if ( (v21 & 0x220000FFFFLL) != 0x2000000158LL )
    return 0;
  v29 = -1;
  v10 = &v32;
  v30 = 0;
  v31 = 0;
  v28 = -1;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 40;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *((_QWORD *)v10 - 2) = 0;
  }
  while ( v10 != (char *)v35 );
  if ( (unsigned int)decode_insn(&v28, v20 + WORD1(v21), v35, 0, 0, v9, 0.0)
    && (v30 & 0x20000FFFFLL) == 0x84
    && (v11 = *(_WORD *)(a1 + 70), v11 == v24)
    && v11 == v25
    && v11 == v34
    && (v33 & (v33 - 1)) == 0
    && (v12 = log2ceil(v33), v13 = v26, 4 * v12 == v26) )
  {
    for ( i = 0; i != 4; ++i )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL);
      v16 = 0x100000001LL;
      v18.m128i_i64[0] = 0x100000001LL;
      v18.m128i_i32[2] = i + v15;
      v17 = i + v13 + v15;
      sub_1D2850(a1, 4, (unsigned __int8 *)&v16, nullptr, (unsigned __int8 *)&v18);
      sub_119360((__int64)&v18);
      sub_119360((__int64)&v16);
    }
    v18.m128i_i16[4] = 344;
    v18.m128i_i64[0] = v20;
    sub_3F9BB0((__int64 *)(a1 + 840), &v18);
    v18.m128i_i16[4] = 132;
    v18.m128i_i64[0] = v29;
    sub_3F9BB0((__int64 *)(a1 + 840), &v18);
  }
  else
  {
    return 0;
  }
  return v4;
}
