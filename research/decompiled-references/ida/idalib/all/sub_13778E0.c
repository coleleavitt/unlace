_BYTE *__fastcall sub_13778E0(_BYTE *a1, __int64 a2, int a3, __int64 *a4)
{
  char v5; // bl
  char *v6; // rax
  char *v7; // r13
  char v8; // di
  const char *v9; // rbx
  const char *v10; // rdx
  char v11; // al
  const char **v12; // rdx
  char v13; // al
  __int64 v14; // r15
  _QWORD *v15; // rcx
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  char v18; // al
  _BYTE *result; // rax
  __int64 v20; // r15
  __m128i *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __m128i si128; // xmm0
  const char *v25; // r15
  const char *v26; // rcx
  char v27; // dl
  const char **v28; // rdx
  __int64 v29; // rcx
  char v30; // dl
  size_t v31; // [rsp+8h] [rbp-240h]
  const char *v32; // [rsp+28h] [rbp-220h]
  __int64 v34; // [rsp+38h] [rbp-210h]
  bool v35; // [rsp+47h] [rbp-201h]
  __int64 v36; // [rsp+48h] [rbp-200h]
  __int64 v37; // [rsp+50h] [rbp-1F8h]
  __int64 v38; // [rsp+58h] [rbp-1F0h]
  const char *v39; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-1E0h]
  const char *v41; // [rsp+70h] [rbp-1D8h]
  __int16 v42; // [rsp+80h] [rbp-1C8h]
  __int64 v43; // [rsp+90h] [rbp-1B8h]
  const char **v44; // [rsp+C0h] [rbp-188h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-180h]
  __int64 v46; // [rsp+D0h] [rbp-178h]
  __int16 v47; // [rsp+E0h] [rbp-168h]
  const char ***v48; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-150h]
  char *v50; // [rsp+100h] [rbp-148h]
  __int16 v51; // [rsp+110h] [rbp-138h]
  _QWORD v52[2]; // [rsp+120h] [rbp-128h] BYREF
  char *v53; // [rsp+130h] [rbp-118h]
  size_t v54; // [rsp+138h] [rbp-110h]
  __int16 v55; // [rsp+140h] [rbp-108h]
  __int64 v56; // [rsp+150h] [rbp-F8h]
  _QWORD *v57; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+188h] [rbp-C0h]
  __int64 v59; // [rsp+190h] [rbp-B8h]
  __int16 v60; // [rsp+1A0h] [rbp-A8h]
  _QWORD *v61; // [rsp+1B0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+1B8h] [rbp-90h]
  char *v63; // [rsp+1C0h] [rbp-88h]
  __int16 v64; // [rsp+1D0h] [rbp-78h]
  __int64 v65; // [rsp+1E0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+1E8h] [rbp-60h]
  __int64 v67; // [rsp+1F0h] [rbp-58h]
  __int64 v68; // [rsp+1F8h] [rbp-50h]
  __int64 v69; // [rsp+200h] [rbp-48h]

  v5 = a3;
  v6 = sub_102DAD0(a3);
  v31 = 0;
  v7 = v6;
  if ( v6 )
    v31 = strlen(v6);
  v8 = v5;
  v9 = "di";
  v35 = sub_102DCD0(v8);
  if ( !v35 )
    v9 = "ouxX";
  v32 = &v9[strlen(v9)];
  do
  {
    v18 = *v9;
    v55 = 1283;
    v54 = v31;
    LOBYTE(v56) = v18;
    v57 = v52;
    LOBYTE(v43) = v18;
    v11 = *(_BYTE *)(a2 + 32);
    v61 = &v57;
    v52[0] = "\"";
    v53 = v7;
    v58 = 0;
    v59 = v56;
    v60 = 2050;
    v62 = 0;
    v63 = "\"";
    v64 = 770;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v12 = (const char **)"_FMT";
        v39 = "_FMT";
        v42 = 259;
        v34 = v40;
        v13 = 3;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 33) == 1 )
        {
          v10 = *(const char **)a2;
          v36 = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v10 = (const char *)a2;
          v11 = 2;
        }
        HIBYTE(v42) = 3;
        v41 = "_FMT";
        v40 = v36;
        v39 = v10;
        v12 = &v39;
        LOBYTE(v42) = v11;
        v13 = 2;
      }
      v44 = v12;
      LOBYTE(v47) = v13;
      v48 = &v44;
      v45 = v34;
      v46 = v43;
      HIBYTE(v47) = 8;
      v49 = 0;
      v50 = "__";
      v51 = 770;
    }
    else
    {
      v42 = 256;
      v47 = 256;
      v51 = 256;
    }
    v14 = *a4;
    LOWORD(v69) = 257;
    v15 = *(_QWORD **)(v14 + 32);
    if ( *(_QWORD *)(v14 + 24) - (_QWORD)v15 > 7u )
    {
      *v15 = 0x20656E6966656423LL;
      *(_QWORD *)(v14 + 32) += 8LL;
    }
    else
    {
      v14 = sub_227BF10(v14, "#define ", 8);
    }
    sub_2254180(&v48, v14);
    v16 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(v14 + 24) )
    {
      v14 = sub_227BA10(v14, 32);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v16 + 1;
      *v16 = 32;
    }
    sub_2254180(&v61, v14);
    v17 = *(_BYTE **)(v14 + 32);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v14 + 24) )
    {
      sub_227BA10(v14, 10);
    }
    else
    {
      *(_QWORD *)(v14 + 32) = v17 + 1;
      *v17 = 10;
    }
    if ( (unsigned __int8)v69 > 1u )
    {
      v20 = *a4;
      v21 = *(__m128i **)(*a4 + 32);
      if ( *(_QWORD *)(*a4 + 24) - (_QWORD)v21 > 0x18u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v21[1].m128i_i8[8] = 40;
        v21[1].m128i_i64[0] = 0x6465746163657270LL;
        *v21 = si128;
        *(_QWORD *)(v20 + 32) += 25LL;
      }
      else
      {
        v20 = sub_227BF10(*a4, "#pragma clang deprecated(", 25);
      }
      sub_2254180(&v48, v20);
      v22 = *(_QWORD *)(v20 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v22) > 2 )
      {
        *(_BYTE *)(v22 + 2) = 34;
        *(_WORD *)v22 = 8236;
        *(_QWORD *)(v20 + 32) += 3LL;
      }
      else
      {
        v20 = sub_227BF10(v20, ", \"", 3);
      }
      sub_2254180(&v65, v20);
      v23 = *(_QWORD *)(v20 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v23) > 2 )
      {
        *(_BYTE *)(v23 + 2) = 10;
        *(_WORD *)v23 = 10530;
        *(_QWORD *)(v20 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v20, "\")\n", 3);
      }
    }
    ++v9;
  }
  while ( v32 != v9 );
  result = a1;
  if ( (*a1 & 8) != 0 && !v35 )
  {
    v25 = "bB";
    do
    {
      v30 = *v25;
      LOWORD(v69) = 257;
      v54 = v31;
      LOBYTE(v56) = v30;
      v57 = v52;
      LOBYTE(v43) = v30;
      v27 = *(_BYTE *)(a2 + 32);
      v52[0] = "\"";
      v53 = v7;
      v55 = 1283;
      v58 = 0;
      v59 = v56;
      v60 = 2050;
      v61 = &v57;
      v62 = 0;
      v63 = "\"";
      v64 = 770;
      if ( v27 )
      {
        if ( v27 == 1 )
        {
          v28 = (const char **)"_FMT";
          v29 = 3;
          v39 = "_FMT";
          v42 = 259;
          v37 = v40;
        }
        else
        {
          if ( *(_BYTE *)(a2 + 33) == 1 )
          {
            v26 = *(const char **)a2;
            v38 = *(_QWORD *)(a2 + 8);
          }
          else
          {
            v26 = (const char *)a2;
            v27 = 2;
          }
          HIBYTE(v42) = 3;
          LOBYTE(v42) = v27;
          v28 = &v39;
          v40 = v38;
          v41 = "_FMT";
          v39 = v26;
          v29 = 2;
        }
        v44 = v28;
        LOBYTE(v47) = v29;
        v45 = v37;
        v46 = v43;
        v48 = &v44;
        HIBYTE(v47) = 8;
        v49 = 0;
        v50 = "__";
        v51 = 770;
      }
      else
      {
        v29 = 256;
        v42 = 256;
        v47 = 256;
        v51 = 256;
      }
      ++v25;
      result = sub_1039E30(a4, (__int64)&v48, (__int64)&v61, v29, 1283, 2050, v65, v66, v67, v68, v69);
    }
    while ( v25 != "" );
  }
  return result;
}
