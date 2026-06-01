__int64 __fastcall sub_1FE78D0(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  __int32 v6; // eax
  char v8; // r13
  int v9; // eax
  char v10; // al
  _QWORD *v11; // rcx
  char v12; // al
  __m128i v13; // xmm6
  unsigned __int64 v14; // rcx
  __int8 *v15; // rsi
  __m128i *v16; // rax
  __int64 v17; // rcx
  char v18; // dl
  __m128i v19; // xmm2
  __m128i *v20; // rcx
  unsigned __int128 *v21; // rsi
  __int64 v24; // [rsp+18h] [rbp-230h]
  __int64 v25; // [rsp+20h] [rbp-228h]
  __int64 v26; // [rsp+28h] [rbp-220h]
  __m128i v27; // [rsp+30h] [rbp-218h] BYREF
  __int64 v28; // [rsp+40h] [rbp-208h] BYREF
  void *v29[2]; // [rsp+50h] [rbp-1F8h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-1E8h] BYREF
  void *v31; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-1D0h]
  __m128i v33; // [rsp+80h] [rbp-1C8h] BYREF
  _QWORD v34[4]; // [rsp+90h] [rbp-1B8h] BYREF
  __int16 v35; // [rsp+B0h] [rbp-198h]
  __int64 v36; // [rsp+C0h] [rbp-188h]
  _QWORD v37[4]; // [rsp+F0h] [rbp-158h] BYREF
  __int16 v38; // [rsp+110h] [rbp-138h]
  __m128i v39; // [rsp+120h] [rbp-128h] BYREF
  __m128i v40; // [rsp+130h] [rbp-118h] BYREF
  __int64 v41; // [rsp+140h] [rbp-108h]
  _QWORD v42[4]; // [rsp+150h] [rbp-F8h] BYREF
  __int16 v43; // [rsp+170h] [rbp-D8h]
  __m128i v44; // [rsp+180h] [rbp-C8h] BYREF
  __m128i v45; // [rsp+190h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+1A0h] [rbp-A8h]
  unsigned __int128 v47; // [rsp+1B0h] [rbp-98h] BYREF
  __int128 v48; // [rsp+1C0h] [rbp-88h]
  __int64 v49; // [rsp+1D0h] [rbp-78h]
  __m128i v50; // [rsp+1E0h] [rbp-68h] BYREF
  __m128i v51; // [rsp+1F0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+200h] [rbp-48h]

  v5 = *a2;
  if ( *(_BYTE *)(v5 + 20) && !*(_DWORD *)(v5 + 16) )
  {
    v6 = *(_DWORD *)(v5 + 12);
    v47 = __PAIR128__(a4, a3);
    v44.m128i_i32[0] = v6;
    *(_QWORD *)&v48 = v44.m128i_i64[0];
    v50.m128i_i64[0] = (__int64)&v47;
    LOWORD(v49) = 2309;
    v51.m128i_i64[0] = (__int64)"_t";
    LOWORD(v52) = 770;
    sub_2253560(a1, &v50);
    return a1;
  }
  v8 = *(_BYTE *)(v5 + 25);
  *(_QWORD *)&v47 = "_t";
  LOWORD(v49) = 259;
  if ( v8 )
  {
    v14 = *(unsigned int *)(v5 + 28);
    if ( *(_DWORD *)(v5 + 28) )
    {
      v15 = &v51.m128i_i8[5];
      while ( 1 )
      {
        *--v15 = v14 % 0xA + 48;
        if ( v14 <= 9 )
          break;
        v14 /= 0xAu;
      }
    }
    else
    {
      v51.m128i_i8[4] = 48;
      v15 = &v51.m128i_i8[4];
    }
    v29[0] = v30;
    sub_1FE43F0(v29, v15, (__int64)v51.m128i_i64 + 5);
    v16 = (__m128i *)sub_99BDC0(v29, 0, 0, "x", 1u);
    v31 = &v33;
    if ( (__m128i *)v16->m128i_i64[0] == &v16[1] )
    {
      v33 = _mm_loadu_si128(v16 + 1);
    }
    else
    {
      v31 = (void *)v16->m128i_i64[0];
      v33.m128i_i64[0] = v16[1].m128i_i64[0];
    }
    v17 = v16->m128i_i64[1];
    v16[1].m128i_i8[0] = 0;
    v5 = *a2;
    v32 = v17;
    v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
    v16->m128i_i64[1] = 0;
  }
  else
  {
    v33.m128i_i8[0] = 0;
    v32 = 0;
    v31 = &v33;
  }
  v42[0] = &v31;
  v43 = 260;
  sub_1FE76E0(&v27, (int *)(v5 + 4));
  v9 = *(_DWORD *)(*a2 + 12);
  v35 = 1283;
  v38 = 2306;
  LODWORD(v36) = v9;
  v34[0] = "v";
  v40.m128i_i64[0] = (__int64)&v27;
  v34[2] = a3;
  LOWORD(v41) = 1026;
  v34[3] = a4;
  v37[0] = v34;
  v37[2] = v36;
  v39.m128i_i64[0] = (__int64)v37;
  v10 = v43;
  if ( !(_BYTE)v43 )
  {
    LOWORD(v46) = 256;
    goto LABEL_20;
  }
  if ( (_BYTE)v43 == 1 )
  {
    v18 = v41;
    v19 = _mm_load_si128(&v40);
    v44 = _mm_load_si128(&v39);
    v45 = v19;
    v46 = v41;
    v12 = v49;
    if ( (_BYTE)v49 )
    {
      if ( (_BYTE)v49 == 1 )
        goto LABEL_13;
      if ( BYTE1(v46) == 1 )
      {
        v25 = v44.m128i_i64[1];
        v20 = (__m128i *)v44.m128i_i64[0];
LABEL_37:
        if ( BYTE1(v49) == 1 )
        {
          v26 = *((_QWORD *)&v47 + 1);
          v21 = (unsigned __int128 *)v47;
        }
        else
        {
          v21 = &v47;
          v12 = 2;
        }
        v50.m128i_i64[0] = (__int64)v20;
        v51.m128i_i64[0] = (__int64)v21;
        v50.m128i_i64[1] = v25;
        LOBYTE(v52) = v18;
        v51.m128i_i64[1] = v26;
        BYTE1(v52) = v12;
        goto LABEL_21;
      }
LABEL_36:
      v20 = &v44;
      v18 = 2;
      goto LABEL_37;
    }
LABEL_20:
    LOWORD(v52) = 256;
    goto LABEL_21;
  }
  if ( HIBYTE(v43) == 1 )
  {
    v11 = (_QWORD *)v42[0];
    v24 = v42[1];
  }
  else
  {
    v11 = v42;
    v10 = 2;
  }
  BYTE1(v46) = v10;
  v12 = v49;
  v44.m128i_i64[0] = (__int64)&v39;
  v45.m128i_i64[0] = (__int64)v11;
  v45.m128i_i64[1] = v24;
  LOBYTE(v46) = 2;
  if ( !(_BYTE)v49 )
    goto LABEL_20;
  if ( (_BYTE)v49 != 1 )
    goto LABEL_36;
LABEL_13:
  v13 = _mm_load_si128(&v45);
  v50 = _mm_load_si128(&v44);
  v51 = v13;
  v52 = v46;
LABEL_21:
  sub_2253560(a1, &v50);
  if ( (__int64 *)v27.m128i_i64[0] != &v28 )
    operator delete((void *)v27.m128i_i64[0]);
  if ( v31 != &v33 )
    operator delete(v31);
  if ( v8 && v29[0] != v30 )
    operator delete(v29[0]);
  return a1;
}
