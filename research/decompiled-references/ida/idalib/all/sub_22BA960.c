void __fastcall sub_22BA960(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int128 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  char v19; // dl
  __m128i v20; // xmm7
  __int64 v21; // [rsp+10h] [rbp-1A8h]
  __int64 v22; // [rsp+20h] [rbp-198h]
  __int64 v23; // [rsp+28h] [rbp-190h]
  _QWORD v24[4]; // [rsp+30h] [rbp-188h] BYREF
  __int64 v25; // [rsp+50h] [rbp-168h]
  __int128 v26; // [rsp+60h] [rbp-158h]
  __int16 v27; // [rsp+80h] [rbp-138h]
  _OWORD v28[2]; // [rsp+90h] [rbp-128h] BYREF
  char v29; // [rsp+B0h] [rbp-108h]
  char v30; // [rsp+B1h] [rbp-107h]
  __m128i v31; // [rsp+C0h] [rbp-F8h]
  __int64 v32; // [rsp+E0h] [rbp-D8h]
  __m128i v33; // [rsp+F0h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+110h] [rbp-A8h]
  unsigned __int128 v36; // [rsp+120h] [rbp-98h] BYREF
  __int64 v37; // [rsp+140h] [rbp-78h]
  __m128i v38; // [rsp+150h] [rbp-68h] BYREF
  __m128i v39; // [rsp+160h] [rbp-58h]
  __int64 v40; // [rsp+170h] [rbp-48h]

  v4 = a1->m128i_i64[0];
  v5 = &v36;
  LOBYTE(v36) = 45;
  v38.m128i_i64[0] = v4;
  v38.m128i_i64[1] = a1->m128i_i64[1];
  v6 = sub_2246AB0(v38.m128i_i64, &v36, 1u, 0);
  if ( v6 == -1 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v7 = v38.m128i_i64[1];
    v8 = v6 + 1;
    v9 = 0;
    if ( v8 <= v38.m128i_i64[1] )
    {
      v7 = v8;
      v9 = v38.m128i_i64[1] - v8;
    }
    v10 = v38.m128i_i64[0] + v7;
  }
  v36 = __PAIR128__(v9, v10);
  v38.m128i_i8[0] = 45;
  v11 = sub_2246AB0((__int64 *)&v36, &v38, 1u, 0);
  if ( v11 == -1 )
  {
    v14 = 0;
    v15 = 0;
  }
  else
  {
    v12 = *((_QWORD *)&v36 + 1);
    v13 = v11 + 1;
    v14 = 0;
    if ( v13 <= *((_QWORD *)&v36 + 1) )
    {
      v12 = v13;
      v14 = *((_QWORD *)&v36 + 1) - v13;
    }
    v15 = v36 + v12;
  }
  v16 = a1->m128i_i64[0];
  *((_QWORD *)&v26 + 1) = a3;
  LOWORD(v37) = 261;
  *(_QWORD *)&v26 = a2;
  v38.m128i_i64[0] = v16;
  v17 = a1->m128i_i64[1];
  v36 = __PAIR128__(v14, v15);
  v31.m128i_i64[0] = (__int64)"-";
  LOWORD(v32) = 259;
  v27 = 261;
  v38.m128i_i64[1] = v17;
  v33.m128i_i8[0] = 45;
  v18 = sub_2246AB0(v38.m128i_i64, &v33, 1u, 0);
  if ( v18 == -1 )
  {
    v18 = v38.m128i_u64[1];
  }
  else if ( v38.m128i_i64[1] <= v18 )
  {
    v18 = v38.m128i_u64[1];
  }
  v24[1] = v18;
  LOWORD(v25) = 773;
  v24[0] = v38.m128i_i64[0];
  v24[2] = "-";
  v28[1] = v26;
  *(_QWORD *)&v28[0] = v24;
  v29 = 2;
  v30 = v27;
  v33.m128i_i64[0] = (__int64)v28;
  BYTE1(v35) = v32;
  v19 = v37;
  v34 = v31;
  v33.m128i_i64[1] = v21;
  LOBYTE(v35) = 2;
  if ( (_BYTE)v37 )
  {
    if ( (_BYTE)v37 == 1 )
    {
      v20 = _mm_load_si128(&v34);
      v38 = _mm_load_si128(&v33);
      v39 = v20;
      v40 = v35;
    }
    else
    {
      if ( BYTE1(v37) == 1 )
      {
        v23 = *((_QWORD *)&v36 + 1);
        v5 = (unsigned __int128 *)v36;
      }
      else
      {
        v19 = 2;
      }
      v38.m128i_i64[0] = (__int64)&v33;
      v39.m128i_i64[0] = (__int64)v5;
      v38.m128i_i64[1] = v22;
      v39.m128i_i64[1] = v23;
      LOBYTE(v40) = 2;
      BYTE1(v40) = v19;
    }
  }
  else
  {
    LOWORD(v40) = 256;
  }
  sub_22BA1F0(a1, &v38);
}
