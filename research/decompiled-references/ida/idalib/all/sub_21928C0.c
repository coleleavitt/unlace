__int64 __fastcall sub_21928C0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // r12
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // [rsp+0h] [rbp-208h] BYREF
  __int64 v27; // [rsp+8h] [rbp-200h] BYREF
  __int64 v28[2]; // [rsp+10h] [rbp-1F8h] BYREF
  char v29; // [rsp+20h] [rbp-1E8h]
  __m128i v30; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-1C8h]
  __int16 v32; // [rsp+50h] [rbp-1B8h]
  __m128i v33[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int16 v34; // [rsp+80h] [rbp-188h]
  __m128i v35[3]; // [rsp+90h] [rbp-178h] BYREF
  __m128i v36[2]; // [rsp+C0h] [rbp-148h] BYREF
  __int16 v37; // [rsp+E0h] [rbp-128h]
  __m128i v38[3]; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v39; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+130h] [rbp-D8h]
  __int16 v41; // [rsp+140h] [rbp-C8h]
  __m128i v42[3]; // [rsp+150h] [rbp-B8h] BYREF
  __m128i v43[2]; // [rsp+180h] [rbp-88h] BYREF
  __int16 v44; // [rsp+1A0h] [rbp-68h]
  __m128i v45[5]; // [rsp+1B0h] [rbp-58h] BYREF

  v7 = (unsigned int)a4;
  sub_2179650((__int64)v28, a2, a3, a4, a5, a6);
  if ( (v29 & 1) != 0 )
  {
    v9 = v28[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    v28[0] = 0;
    *(_QWORD *)a1 = v9;
  }
  else if ( v28[1] <= v7 )
  {
    v26 = 16 * v7;
    v44 = 259;
    v12 = a3[4];
    v43[0].m128i_i64[0] = (__int64)")";
    v27 = v12;
    v39.m128i_i64[0] = (__int64)&v27;
    v41 = 271;
    v37 = 259;
    v30.m128i_i64[0] = (__int64)&v26;
    v32 = 271;
    v36[0].m128i_i64[0] = (__int64)": it goes past the end of the section (0x";
    v34 = 259;
    v33[0].m128i_i64[0] = (__int64)"can't read an entry at 0x";
    v40 = 0;
    v31 = 0;
    sub_A41580(v35, v33, &v30, (__int64)": it goes past the end of the section (0x", 259, v8);
    sub_A41580(v38, v35, v36, v13, v14, v15);
    sub_A41580(v42, v38, &v39, v16, v17, v18);
    sub_A41580(v45, v42, v43, v19, v20, v21);
    v24 = sub_2195B10(v45, v42, v22, v23);
    v25 = operator new(0x40u);
    sub_2220590(v25, v45, 3, v24);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v25;
  }
  else
  {
    v11 = v28[0] + 16 * v7;
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v11;
  }
  sub_21928A0(v28);
  return a1;
}
