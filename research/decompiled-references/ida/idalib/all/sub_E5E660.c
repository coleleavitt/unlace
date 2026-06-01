void __fastcall sub_E5E660(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  size_t v6; // rax
  char *v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  size_t v13; // rax
  const char *v14; // rsi
  size_t v15; // rax
  char v16; // r15
  size_t v17; // rax
  char v18; // r15
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  size_t v23; // rax
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  void *v28; // rbp
  size_t v29; // rax
  const char *v30; // rax
  __int64 v31; // rdx
  size_t v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rax
  size_t v37; // rax
  const char *v38; // rax
  __int64 v39; // rdx
  size_t v40; // rax
  const char *v41; // rax
  __int64 v42; // rdx
  size_t v43; // rax
  const char *v44; // rsi
  size_t v45; // rax
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rax
  __m128i v50; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 *v51; // [rsp+18h] [rbp-1A0h]
  _BYTE *v52; // [rsp+20h] [rbp-198h]
  char **v53; // [rsp+28h] [rbp-190h]
  __int64 v54; // [rsp+30h] [rbp-188h]
  void *v55; // [rsp+38h] [rbp-180h]
  __int128 v56; // [rsp+40h] [rbp-178h] BYREF
  __int64 v57; // [rsp+50h] [rbp-168h]
  _BYTE v58[48]; // [rsp+60h] [rbp-158h] BYREF
  _QWORD v59[5]; // [rsp+90h] [rbp-128h] BYREF
  _BYTE v60[40]; // [rsp+B8h] [rbp-100h] BYREF
  void *v61[2]; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+108h] [rbp-B0h] BYREF
  _BYTE v64[24]; // [rsp+130h] [rbp-88h] BYREF
  __int64 v65; // [rsp+148h] [rbp-70h]
  __int64 v66; // [rsp+158h] [rbp-60h] BYREF

  if ( a2 )
  {
    v5 = a1 + 1048;
    sub_E5E570((__m128i *)v61, a2);
    sub_E59390((__int64)v64, (__m128i *)v61);
    v6 = j__strlen("id");
    sub_222AB70(a1 + 1048, "id", v6);
    sub_222CAC0(a1 + 1048, v64);
    sub_2229BF0(a1 + 1048);
    sub_222B2A0(v64);
    if ( v61[0] != &v62 )
      operator delete(v61[0]);
    v7 = sub_B3A4D0(a2);
    sub_E598C0((__int64)v64, v7);
    v8 = j__strlen("kind");
    sub_222AB70(v5, "kind", v8);
    sub_222CAC0(v5, v64);
    sub_2229BF0(v5);
    sub_222B2A0(v64);
    v50.m128i_i64[0] = a1;
    *(__m128 *)v64 = _mm_loadh_ps((const double *)v50.m128i_i64);
    v50 = *(__m128i *)v64;
    v9 = j__strlen("loc");
    sub_222AB70(v5, "loc", v9);
    sub_22299F0(v5);
    sub_E5DF10((unsigned int **)v64);
    sub_2229B60(v5);
    sub_2229BF0(v5);
    *(__m128i *)v64 = _mm_load_si128(&v50);
    v10 = j__strlen("range");
    sub_222AB70(v5, "range", v10);
    sub_22299F0(v5);
    sub_E5A1E0((__int64 *)v64);
    sub_2229B60(v5);
    sub_2229BF0(v5);
    switch ( *(_BYTE *)(a2 + 12) )
    {
      case 0:
      case 0xC:
        sub_E5D0F0(a1, a2, a3);
        return;
      case 1:
      case 2:
        v11 = *(_QWORD *)(a2 + 24);
        v12 = *(_QWORD *)(a2 + 16);
        goto LABEL_6;
      case 3:
        v38 = sub_E5D080(a1, *(_DWORD *)(a2 + 12) >> 12);
        sub_E59830((__int64)v64, (__int64)v38, v39);
        v40 = j__strlen("name");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        sub_E585D0(v5, (__int64)"name", v40, (__int64)sub_E58580, v61);
        sub_222B2A0(v64);
        switch ( (*(_BYTE *)(a2 + 13) >> 1) & 7 )
        {
          case 0:
            v44 = "normal";
            goto LABEL_29;
          case 1:
            v44 = "bold";
            goto LABEL_29;
          case 2:
            v44 = "monospaced";
            goto LABEL_29;
          case 3:
            v44 = "emphasized";
            goto LABEL_29;
          case 4:
            v44 = "anchor";
LABEL_29:
            sub_E598C0((__int64)v64, v44);
            v45 = j__strlen("renderKind");
            v61[0] = v64;
            v61[1] = (void *)(a1 + 1048);
            sub_E585D0(v5, (__int64)"renderKind", v45, (__int64)sub_E58580, v61);
            sub_222B2A0(v64);
            break;
          default:
            break;
        }
        v46 = *(_QWORD *)(a2 + 24);
        v62 = 0;
        *(_OWORD *)v61 = 0;
        if ( !(_DWORD)v46 )
          goto LABEL_23;
        v47 = 0;
        v48 = 8 * (3LL * (unsigned int)(v46 - 1) + 3);
        do
        {
          v49 = v47 + *(_QWORD *)(a2 + 16);
          v47 += 24;
          sub_E59830((__int64)v64, *(_QWORD *)(v49 + 8), *(_QWORD *)(v49 + 16));
          sub_E5E110((__int64)v61, (__int64)v64);
          sub_222B2A0(v64);
        }
        while ( v48 != v47 );
        goto LABEL_21;
      case 4:
        sub_E59830((__int64)v64, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        v15 = j__strlen("name");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        sub_E585D0(v5, (__int64)"name", v15, (__int64)sub_E58580, v61);
        sub_222B2A0(v64);
        v16 = *(_BYTE *)(a2 + 13);
        v17 = j__strlen("selfClosing");
        sub_E59B90(a1, (__int64)"selfClosing", v17, (v16 & 4) != 0);
        v18 = *(_BYTE *)(a2 + 13);
        v19 = j__strlen("malformed");
        sub_E59B90(a1, (__int64)"malformed", v19, (v18 & 2) != 0);
        v20 = *(_QWORD *)(a2 + 48);
        v57 = 0;
        v56 = 0;
        if ( (_DWORD)v20 )
        {
          v55 = (void *)(a1 + 1048);
          v53 = (char **)&v56;
          v50.m128i_i64[0] = (__int64)&v63;
          v51 = &v66;
          v54 = 56 * ((unsigned int)(v20 - 1) + 1LL);
          v21 = 0;
          do
          {
            v23 = j__strlen("name");
            sub_E59830((__int64)v61, (__int64)"name", v23);
            sub_E59830(
              v50.m128i_i64[0],
              *(_QWORD *)(*(_QWORD *)(a2 + 40) + v21 + 8),
              *(_QWORD *)(*(_QWORD *)(a2 + 40) + v21 + 16));
            sub_222C650(v59, v61, 2);
            v24 = j__strlen("value");
            sub_E59830((__int64)v64, (__int64)"value", v24);
            v25 = *(_QWORD *)(a2 + 40);
            v26 = *(_QWORD *)(v25 + v21 + 40);
            v27 = *(_QWORD *)(v25 + v21 + 48);
            v21 += 56;
            sub_E59830((__int64)v51, v26, v27);
            v52 = v60;
            sub_222C650(v60, v64, 2);
            sub_222C650(v58, v59, 2);
            sub_E5E110((__int64)v53, (__int64)v58);
            sub_222B2A0(v58);
            sub_222B2A0(v52);
            sub_222B2A0(v59);
            sub_222B2A0(v51);
            sub_222B2A0(v64);
            sub_222B2A0(v50.m128i_i64[0]);
            sub_222B2A0(v61);
          }
          while ( v54 != v21 );
          v28 = v55;
          if ( *((_QWORD *)&v56 + 1) != (_QWORD)v56 )
          {
            v50.m128i_i64[0] = *((_QWORD *)&v56 + 1);
            strcpy(v64, "\b");
            v65 = v57;
            v57 = 0;
            *(__m128 *)&v64[8] = _mm_loadh_ps((const double *)v50.m128i_i64);
            v56 = 0;
            v29 = j__strlen("attrs");
            v61[0] = v64;
            v61[1] = v28;
            sub_E585D0((__int64)v28, (__int64)"attrs", v29, (__int64)sub_E58580, v61);
            sub_222B2A0(v64);
          }
        }
        else
        {
          v53 = (char **)&v56;
        }
        sub_E5D4C0(v53);
        return;
      case 5:
        sub_E59830((__int64)v64, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        v13 = j__strlen("name");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        v14 = "name";
        goto LABEL_7;
      case 6:
      case 7:
        return;
      case 8:
        v30 = sub_E5D080(a1, (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF);
        sub_E59830((__int64)v64, (__int64)v30, v31);
        v32 = j__strlen("name");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        sub_E585D0(v5, (__int64)"name", v32, (__int64)sub_E58580, v61);
        sub_222B2A0(v64);
        v33 = *(_QWORD *)(a2 + 24);
        v62 = 0;
        *(_OWORD *)v61 = 0;
        if ( !(_DWORD)v33 )
          goto LABEL_23;
        v34 = 0;
        v35 = 8 * (3LL * (unsigned int)(v33 - 1) + 3);
        do
        {
          v36 = v34 + *(_QWORD *)(a2 + 16);
          v34 += 24;
          sub_E59830((__int64)v64, *(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16));
          sub_E5E110((__int64)v61, (__int64)v64);
          sub_222B2A0(v64);
        }
        while ( v35 != v34 );
LABEL_21:
        if ( v61[1] != v61[0] )
        {
          v50.m128i_i64[0] = (__int64)v61[1];
          strcpy(v64, "\b");
          v65 = v62;
          v62 = 0;
          *(__m128 *)&v64[8] = _mm_loadh_ps((const double *)v50.m128i_i64);
          *(_OWORD *)v61 = 0;
          v37 = j__strlen("args");
          v59[0] = v64;
          v59[1] = a1 + 1048;
          sub_E585D0(v5, (__int64)"args", v37, (__int64)sub_E58580, v59);
          sub_222B2A0(v64);
        }
LABEL_23:
        sub_E5D4C0((char **)v61);
        break;
      case 9:
        v11 = *(_QWORD *)(a2 + 48);
        v12 = *(_QWORD *)(a2 + 40);
LABEL_6:
        sub_E59830((__int64)v64, v12, v11);
        v13 = j__strlen("text");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        v14 = "text";
        goto LABEL_7;
      case 0xA:
        v41 = sub_E5D080(a1, (*(_DWORD *)(a2 + 12) >> 8) & 0xFFFFF);
        sub_E59830((__int64)v64, (__int64)v41, v42);
        v43 = j__strlen("name");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        sub_E585D0(v5, (__int64)"name", v43, (__int64)sub_E58580, v61);
        sub_222B2A0(v64);
        sub_E59830((__int64)v64, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
        v13 = j__strlen("closeName");
        v61[0] = v64;
        v61[1] = (void *)(a1 + 1048);
        v14 = "closeName";
LABEL_7:
        sub_E585D0(v5, (__int64)v14, v13, (__int64)sub_E58580, v61);
        sub_222B2A0(v64);
        break;
      case 0xB:
        sub_E5E150(a1, a2, a3);
        break;
    }
  }
}
