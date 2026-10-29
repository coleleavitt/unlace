_BYTE *__fastcall sub_20414F0(unsigned __int8 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v7; // rbx
  __int64 (__fastcall **v8)(); // r12
  __m128i *v9; // rax
  int v10; // edx
  __m128 v12; // xmm0
  _BYTE *v13; // rax
  __m128i *v14; // [rsp+8h] [rbp-120h] BYREF
  _OWORD v15[2]; // [rsp+10h] [rbp-118h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-F0h]
  __m128i *v18; // [rsp+40h] [rbp-E8h]
  __int64 (__fastcall **v19)(); // [rsp+48h] [rbp-E0h]
  __int64 v20; // [rsp+50h] [rbp-D8h]
  __int64 v21; // [rsp+58h] [rbp-D0h]
  int v22; // [rsp+60h] [rbp-C8h]
  __int64 v23; // [rsp+68h] [rbp-C0h]
  __int64 v24; // [rsp+70h] [rbp-B8h]
  int v25; // [rsp+78h] [rbp-B0h]
  __int64 v26; // [rsp+80h] [rbp-A8h]
  __int64 v27; // [rsp+88h] [rbp-A0h]
  int v28; // [rsp+90h] [rbp-98h]
  __int128 v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+A8h] [rbp-80h]
  char v31; // [rsp+B0h] [rbp-78h]
  __int64 v32; // [rsp+B8h] [rbp-70h]
  __int64 v33; // [rsp+C0h] [rbp-68h]
  int v34; // [rsp+C8h] [rbp-60h]
  __int128 v35; // [rsp+D0h] [rbp-58h]
  __int64 v36; // [rsp+E0h] [rbp-48h]

  v7 = (const __m128i *)a4;
  v8 = *(__int64 (__fastcall ***)())(a4 + 24);
  if ( !a3 )
  {
    if ( *(_BYTE *)(a4 + 16) )
      v9 = sub_2032850((const __m128i *)a4);
    else
      v9 = *(__m128i **)(a4 + 40);
    if ( (a1[7] & 0x10) != 0
      || (v10 = *a1, a4 = (unsigned int)(v10 - 13), (unsigned __int8)(v10 - 13) <= 3u)
      || (unsigned __int8)v10 > 0x15u && (_BYTE)v10 != 24 )
    {
      v18 = v9;
      v19 = v8;
      v16 = off_2BE5D20;
      v17 = 0;
      return sub_2038AA0(a2, (__int64)a1, (__int64)&v16, (__int64)off_2BE5D20, a5, a6);
    }
    v8 = (__int64 (__fastcall **)())v7[1].m128i_i64[1];
  }
  v16 = v8;
  v17 = 0;
  v18 = nullptr;
  LODWORD(v19) = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
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
  if ( a3 )
  {
    sub_2034FF0((__int64)&v16, *((_QWORD *)a1 + 1), a2);
    v13 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(a2 + 24) )
    {
      sub_227BA10(a2, 32);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v13 + 1;
      *v13 = 32;
    }
    v8 = (__int64 (__fastcall **)())v7[1].m128i_i64[1];
  }
  if ( v7[1].m128i_i8[0] )
    v14 = sub_2032850(v7);
  v14 = (__m128i *)&v16;
  v12 = _mm_loadh_ps((const double *)&v14);
  v14 = (__m128i *)v8;
  v15[0] = v12;
  v15[1] = _mm_loadh_ps((const double *)&v14);
  sub_2038AA0(a2, (__int64)a1, (__int64)v15, a4, a5, a6);
  return (_BYTE *)sub_202ECB0((__int64)&v16);
}
