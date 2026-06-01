void __fastcall sub_22BAF00(__m128i *a1, __int64 a2, __int64 a3)
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
  __int128 v16; // rax
  char v17; // al
  __m128i v18; // xmm5
  __int64 v19; // [rsp+10h] [rbp-168h]
  __int64 v20; // [rsp+18h] [rbp-160h]
  _QWORD v21[4]; // [rsp+20h] [rbp-158h] BYREF
  __int16 v22; // [rsp+40h] [rbp-138h]
  _OWORD v23[2]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v24; // [rsp+70h] [rbp-108h]
  char *v25; // [rsp+80h] [rbp-F8h]
  __int64 v26; // [rsp+88h] [rbp-F0h]
  __int16 v27; // [rsp+A0h] [rbp-D8h]
  __m128i v28; // [rsp+B0h] [rbp-C8h] BYREF
  __m128i v29; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-A8h]
  unsigned __int128 v31; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v32; // [rsp+100h] [rbp-78h]
  __m128i v33; // [rsp+110h] [rbp-68h] BYREF
  __m128i v34; // [rsp+120h] [rbp-58h]
  __int64 v35; // [rsp+130h] [rbp-48h]

  v4 = a1->m128i_i64[0];
  v5 = &v31;
  LOBYTE(v31) = 45;
  v33.m128i_i64[0] = v4;
  v33.m128i_i64[1] = a1->m128i_i64[1];
  v6 = sub_2246AB0(v33.m128i_i64, &v31, 1u, 0);
  if ( v6 == -1 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    v7 = v33.m128i_i64[1];
    v8 = v6 + 1;
    v9 = 0;
    if ( v8 <= v33.m128i_i64[1] )
    {
      v7 = v8;
      v9 = v33.m128i_i64[1] - v8;
    }
    v10 = v33.m128i_i64[0] + v7;
  }
  v31 = __PAIR128__(v9, v10);
  v33.m128i_i8[0] = 45;
  v11 = sub_2246AB0((__int64 *)&v31, &v33, 1u, 0);
  if ( v11 == -1 )
  {
    v14 = 0;
    v15 = 0;
  }
  else
  {
    v12 = *((_QWORD *)&v31 + 1);
    v13 = v11 + 1;
    v14 = 0;
    if ( v13 <= *((_QWORD *)&v31 + 1) )
    {
      v12 = v13;
      v14 = *((_QWORD *)&v31 + 1) - v13;
    }
    v15 = v31 + v12;
  }
  v27 = 259;
  LOWORD(v32) = 261;
  v31 = __PAIR128__(v14, v15);
  v25 = "-";
  *(_QWORD *)&v16 = sub_22B74E0(a1->m128i_i64);
  v23[1] = v16;
  v22 = 773;
  v21[0] = a2;
  v21[1] = a3;
  v21[2] = "-";
  *(_QWORD *)&v23[0] = v21;
  LOWORD(v24) = 1282;
  v17 = v32;
  v28.m128i_i64[0] = (__int64)v23;
  v29.m128i_i64[0] = (__int64)"-";
  v29.m128i_i64[1] = v26;
  LOWORD(v30) = 770;
  if ( (_BYTE)v32 )
  {
    if ( (_BYTE)v32 == 1 )
    {
      v18 = _mm_load_si128(&v29);
      v33 = _mm_load_si128(&v28);
      v34 = v18;
      v35 = v30;
    }
    else
    {
      if ( BYTE1(v32) == 1 )
      {
        v20 = *((_QWORD *)&v31 + 1);
        v5 = (unsigned __int128 *)v31;
      }
      else
      {
        v17 = 2;
      }
      v33.m128i_i64[0] = (__int64)&v28;
      v34.m128i_i64[0] = (__int64)v5;
      v33.m128i_i64[1] = v19;
      LOBYTE(v35) = 2;
      v34.m128i_i64[1] = v20;
      BYTE1(v35) = v17;
    }
  }
  else
  {
    LOWORD(v35) = 256;
  }
  sub_22BA1F0(a1, &v33);
}
