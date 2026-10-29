__int64 (__fastcall *__fastcall sub_2040450(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6))(__int64, __int64, __int64)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm1
  _BYTE *v14; // rax
  __m128i *v15; // [rsp+8h] [rbp-300h] BYREF
  _OWORD v16[2]; // [rsp+10h] [rbp-2F8h] BYREF
  __m128i v17; // [rsp+30h] [rbp-2D8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-2C8h]
  __int64 v19; // [rsp+48h] [rbp-2C0h]
  __int64 v20; // [rsp+50h] [rbp-2B8h]
  __m128i *v21; // [rsp+58h] [rbp-2B0h]
  __int64 v22; // [rsp+70h] [rbp-298h]
  __int64 v23; // [rsp+90h] [rbp-278h]
  _QWORD v24[3]; // [rsp+A0h] [rbp-268h] BYREF
  int v25; // [rsp+B8h] [rbp-250h]
  __int64 v26; // [rsp+C0h] [rbp-248h]
  __int64 v27; // [rsp+C8h] [rbp-240h]
  int v28; // [rsp+D0h] [rbp-238h]
  __int64 v29; // [rsp+D8h] [rbp-230h]
  __int64 v30; // [rsp+E0h] [rbp-228h]
  int v31; // [rsp+E8h] [rbp-220h]
  __int64 v32; // [rsp+F0h] [rbp-218h]
  __int64 v33; // [rsp+F8h] [rbp-210h]
  int v34; // [rsp+100h] [rbp-208h]
  __int128 v35; // [rsp+108h] [rbp-200h]
  __int64 v36; // [rsp+118h] [rbp-1F0h]
  char v37; // [rsp+120h] [rbp-1E8h]
  __int64 v38; // [rsp+128h] [rbp-1E0h]
  __int64 v39; // [rsp+130h] [rbp-1D8h]
  int v40; // [rsp+138h] [rbp-1D0h]
  __int128 v41; // [rsp+140h] [rbp-1C8h]
  __int64 v42; // [rsp+150h] [rbp-1B8h]
  __m128i v43; // [rsp+160h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+170h] [rbp-198h]
  __int64 v45; // [rsp+178h] [rbp-190h]

  v6 = a3;
  v7 = a4;
  if ( !a4 )
    v7 = sub_202ED50((unsigned __int8 *)a1);
  if ( (_BYTE)v6 )
  {
    v8 = *(_BYTE *)a1;
  }
  else if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0
         || (v8 = *(_BYTE *)a1, (unsigned __int8)(*(_BYTE *)a1 - 13) <= 3u)
         || v8 > 0x15u && v8 != 24 )
  {
    v43.m128i_i64[0] = (__int64)off_2BE5D20;
    v43.m128i_i64[1] = 0;
    v44 = 0;
    v45 = v7;
    return (__int64 (__fastcall *)(__int64, __int64, __int64))sub_2038AA0(a2, a1, (__int64)&v43, a4, v6, a6);
  }
  sub_20326F0(&v43, v7, v8 == 24);
  v17.m128i_i64[1] = 0;
  v19 = v7;
  v21 = &v43;
  v17.m128i_i64[0] = (__int64)&off_2BE5CC8;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24[0] = v7;
  v24[1] = 0;
  v24[2] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( (_BYTE)v10 )
  {
    sub_2034FF0((__int64)v24, *(_QWORD *)(a1 + 8), a2);
    v14 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v14 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v14 + 1;
      *v14 = 32;
    }
    v7 = v19;
    if ( (_BYTE)v18 )
      v15 = sub_2032850(&v17);
  }
  else
  {
    v15 = &v43;
  }
  v15 = (__m128i *)v24;
  v12 = _mm_loadh_ps((const double *)&v15);
  v15 = (__m128i *)v7;
  v16[0] = v12;
  v16[1] = _mm_loadh_ps((const double *)&v15);
  sub_2038AA0(a2, a1, (__int64)v16, v9, v10, v11);
  sub_202ECB0((__int64)v24);
  sub_202F1D0(&v17);
  return sub_202EF80((__int64)&v43);
}
