__int64 __fastcall sub_217BF40(__int64 a1, _QWORD *a2, unsigned __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // [rsp+0h] [rbp-208h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-200h] BYREF
  __int64 v29[2]; // [rsp+10h] [rbp-1F8h] BYREF
  char v30; // [rsp+20h] [rbp-1E8h]
  __m128i v31; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-1C8h]
  __int16 v33; // [rsp+50h] [rbp-1B8h]
  __m128i v34[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int16 v35; // [rsp+80h] [rbp-188h]
  __m128i v36[3]; // [rsp+90h] [rbp-178h] BYREF
  __m128i v37[2]; // [rsp+C0h] [rbp-148h] BYREF
  __int16 v38; // [rsp+E0h] [rbp-128h]
  __m128i v39[3]; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v40; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+130h] [rbp-D8h]
  __int16 v42; // [rsp+140h] [rbp-C8h]
  __m128i v43[3]; // [rsp+150h] [rbp-B8h] BYREF
  __m128i v44[2]; // [rsp+180h] [rbp-88h] BYREF
  __int16 v45; // [rsp+1A0h] [rbp-68h]
  __m128i v46[5]; // [rsp+1B0h] [rbp-58h] BYREF

  sub_217B850((__int64)v29, a2, a3);
  if ( (v30 & 1) != 0 )
  {
    v7 = v29[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    v29[0] = 0;
    *(_QWORD *)a1 = v7;
  }
  else
  {
    v9 = a4;
    v10 = 24LL * a4;
    if ( v29[1] <= v9 )
    {
      v12 = a3[4];
      v44[0].m128i_i64[0] = (__int64)")";
      v45 = 259;
      v27 = v10;
      v28 = sub_2162D00(v12);
      v40.m128i_i64[0] = (__int64)&v28;
      v37[0].m128i_i64[0] = (__int64)": it goes past the end of the section (0x";
      v42 = 271;
      v31.m128i_i64[0] = (__int64)&v27;
      v33 = 271;
      v35 = 259;
      v38 = 259;
      v34[0].m128i_i64[0] = (__int64)"can't read an entry at 0x";
      v41 = 0;
      v32 = 0;
      sub_A41580(v36, v34, &v31, 259, v13, v14);
      sub_A41580(v39, v36, v37, v15, v16, v17);
      sub_A41580(v43, v39, &v40, v18, v19, v20);
      sub_A41580(v46, v43, v44, v21, v22, v23);
      v26 = sub_2195B10(v46, v43, v24, v25);
      v11 = operator new(0x40u);
      sub_2220590(v11, v46, 3, v26);
      *(_BYTE *)(a1 + 8) |= 1u;
    }
    else
    {
      v11 = v29[0] + v10;
      *(_BYTE *)(a1 + 8) &= ~1u;
    }
    *(_QWORD *)a1 = v11;
  }
  sub_216FAA0(v29);
  return a1;
}
