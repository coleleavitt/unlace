__m128i *__fastcall sub_11C8180(__m128i *a1, __int64 *a2, __int64 a3, _DWORD *a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  __int64 v10; // rax
  const char **v11; // rax
  char *v12; // rdx
  char *v13; // rbp
  _BYTE *v14; // rax
  __int64 v15; // rdx
  size_t v16; // rax
  __m128i *v17; // rax
  char *v18; // rdi
  __m128i v19; // kr20_16
  __int64 v20; // rax
  const char **v21; // rax
  size_t v22; // rdx
  const char *v23; // r12
  const char *v24; // rsi
  _BYTE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rax
  const char **v29; // rax
  size_t v30; // rdx
  const char *v31; // r12
  char *v32; // r15
  unsigned __int64 v33; // rdx
  __m128i *v34; // rdi
  __m128i *v35; // rdx
  __int64 v36; // rax
  const char **v37; // rax
  size_t v38; // rdx
  const char *v39; // r12
  __int64 v40; // rdx
  unsigned __int64 v41; // [rsp+20h] [rbp-188h]
  void *v42; // [rsp+30h] [rbp-178h] BYREF
  __int64 v43; // [rsp+38h] [rbp-170h]
  __m128i v44; // [rsp+40h] [rbp-168h] BYREF
  __m128i v45; // [rsp+50h] [rbp-158h] BYREF
  __int64 v46; // [rsp+60h] [rbp-148h] BYREF
  __m128i v47; // [rsp+70h] [rbp-138h] BYREF
  __int64 v48; // [rsp+80h] [rbp-128h] BYREF
  __m128i v49; // [rsp+90h] [rbp-118h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v51; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-E8h] BYREF
  __m128i v53; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v55; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v57; // [rsp+110h] [rbp-98h] BYREF
  __int64 v58; // [rsp+120h] [rbp-88h] BYREF
  char *v59; // [rsp+130h] [rbp-78h] BYREF
  unsigned __int64 v60; // [rsp+138h] [rbp-70h]
  void *v61; // [rsp+140h] [rbp-68h] BYREF
  __int64 v62; // [rsp+148h] [rbp-60h]
  __m128i v63; // [rsp+150h] [rbp-58h] BYREF
  __int64 v64; // [rsp+160h] [rbp-48h]

  switch ( a4[8] )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      v57 = 0u;
      v59 = nullptr;
      v60 = 0;
      sub_113D7E0(a3, &v57, &v59, a5);
      sub_1140F70((__int64)a1, v59, v60, v57.m128i_i64[0], v57.m128i_i64[1], (__int64)a4);
      return a1;
    case 3:
    case 4:
    case 5:
      sub_11397D0((__int64)a1, a3, a4, &v59);
      return a1;
    case 7:
      v8 = sub_10DCD30(a3, 0x9B3u);
      if ( v8 )
        goto LABEL_3;
      goto LABEL_6;
    case 8:
    case 9:
    case 0x28:
    case 0x36:
      v8 = sub_10DCD30(a3, 0x913u);
      if ( v8 )
        goto LABEL_3;
      goto LABEL_6;
    case 0xA:
      v8 = sub_10DCD30(a3, 0x913u);
      if ( v8 )
        goto LABEL_3;
      v8 = sub_10DCD30(a3, 0x8D4u);
      if ( v8 )
        goto LABEL_3;
      sub_11BA9A0(a1, (char *)"ck810");
      return a1;
    case 0xC:
      v14 = (_BYTE *)sub_1245260(a3);
      if ( v14 )
      {
        v59 = (char *)&v61;
        sub_11BA8E0(&v59, v14, (__int64)&v14[v15]);
      }
      else
      {
        LOBYTE(v61) = 0;
        v59 = (char *)&v61;
        v60 = 0;
      }
      v16 = j__strlen("hexagon");
      v17 = (__m128i *)sub_99BDC0(&v59, 0, 0, "hexagon", v16);
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( (__m128i *)v17->m128i_i64[0] == &v17[1] )
      {
        a1[1] = _mm_loadu_si128(v17 + 1);
      }
      else
      {
        a1->m128i_i64[0] = v17->m128i_i64[0];
        a1[1].m128i_i64[0] = v17[1].m128i_i64[0];
      }
      a1->m128i_i64[1] = v17->m128i_i64[1];
      v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
      v17->m128i_i64[1] = 0;
      v17[1].m128i_i8[0] = 0;
      v18 = v59;
      if ( v59 == (char *)&v61 )
        return a1;
      goto LABEL_62;
    case 0xD:
    case 0xE:
      sub_114DEB0(a1, a3, (__int64)a4);
      return a1;
    case 0xF:
      sub_11506D0((__int64)a1, a3);
      return a1;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      v57 = 0u;
      v59 = nullptr;
      v60 = 0;
      sub_1152ED0(a3, a4, (const char **)&v57, &v59);
      v19 = v57;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      sub_11BA8E0(a1, v19.m128i_i64[0], v19.m128i_i64[0] + v19.m128i_i64[1]);
      return a1;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      v20 = sub_10DCD30(a3, 0x913u);
      if ( v20 )
      {
        v21 = *(const char ***)(v20 + 48);
        v22 = 0;
        v23 = *v21;
        if ( *v21 )
          v22 = j__strlen(*v21);
        v24 = v23;
      }
      else
      {
        v24 = &byte_22F0C30;
        v22 = j__strlen(&byte_22F0C30);
      }
      v25 = (_BYTE *)sub_22A7CF0(a4, v24, v22);
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      goto LABEL_32;
    case 0x19:
    case 0x1A:
      v27 = sub_10DCD30(a3, 0x8D4u);
      v28 = sub_10DCD30(a3, 0x913u);
      if ( v28 )
      {
        v29 = *(const char ***)(v28 + 48);
        v30 = 0;
        v31 = *v29;
        if ( *v29 )
          v30 = j__strlen(*v29);
        v32 = (char *)sub_1029840((__int64)a4, (__int64)v31, v30);
        v41 = v33;
        v60 = v33;
        v59 = v32;
        v64 = 0;
        sub_11BA9A0(&v57, "r600");
        if ( !(unsigned __int8)sub_11BFEB0((__int64)&v59, &v57, "rv630", 5) )
          sub_11BFEB0((__int64)&v59, &v57, "rv635", 5);
        sub_11BA9A0(&v55, "rs880");
        if ( !(unsigned __int8)sub_11BFEB0((__int64)&v59, &v55, "rv610", 5)
          && !(unsigned __int8)sub_11BFEB0((__int64)&v59, &v55, "rv620", 5) )
        {
          sub_11BFEB0((__int64)&v59, &v55, "rs780", 5);
        }
        sub_11BA9A0(&v53, "rv770");
        sub_11BFEB0((__int64)&v59, &v53, "rv740", 5);
        sub_11BA9A0(&v51, "cedar");
        sub_11BFEB0((__int64)&v59, &v51, "palm", 4);
        sub_11BA9A0(&v49, "sumo");
        if ( !(unsigned __int8)sub_11BFEB0((__int64)&v59, &v49, "sumo", 4) )
          sub_11BFEB0((__int64)&v59, &v49, "sumo2", 5);
        sub_11BA9A0(&v47, "cypress");
        sub_11BFEB0((__int64)&v59, &v47, "hemlock", 7);
        sub_11BA9A0(&v45, "cayman");
        sub_11BFEB0((__int64)&v59, &v45, "aruba", 5);
        if ( v32 )
        {
          v42 = &v44;
          sub_11BA8E0(&v42, v32, (__int64)&v32[v41]);
          v34 = (__m128i *)v42;
          v35 = a1 + 1;
          if ( !(_BYTE)v64 )
          {
            a1->m128i_i64[0] = (__int64)v35;
            if ( v34 != &v44 )
            {
              v36 = v44.m128i_i64[0];
              a1->m128i_i64[0] = (__int64)v34;
              a1[1].m128i_i64[0] = v36;
LABEL_45:
              a1->m128i_i64[1] = v43;
              goto LABEL_46;
            }
LABEL_81:
            a1[1] = _mm_load_si128(&v44);
            goto LABEL_45;
          }
        }
        else
        {
          v34 = &v44;
          v44.m128i_i8[0] = 0;
          v35 = a1 + 1;
          v42 = &v44;
          v43 = 0;
          if ( !(_BYTE)v64 )
          {
            a1->m128i_i64[0] = (__int64)v35;
            goto LABEL_81;
          }
        }
        a1->m128i_i64[0] = (__int64)v35;
        if ( v61 == &v63 )
        {
          a1[1] = _mm_load_si128(&v63);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)v61;
          a1[1].m128i_i64[0] = v63.m128i_i64[0];
        }
        v40 = v62;
        v62 = 0;
        v63.m128i_i8[0] = 0;
        a1->m128i_i64[1] = v40;
        v61 = &v63;
        if ( v34 != &v44 )
          operator delete(v34);
LABEL_46:
        if ( (__int64 *)v45.m128i_i64[0] != &v46 )
          operator delete((void *)v45.m128i_i64[0]);
        if ( (__int64 *)v47.m128i_i64[0] != &v48 )
          operator delete((void *)v47.m128i_i64[0]);
        if ( (__int64 *)v49.m128i_i64[0] != &v50 )
          operator delete((void *)v49.m128i_i64[0]);
        if ( (__int64 *)v51.m128i_i64[0] != &v52 )
          operator delete((void *)v51.m128i_i64[0]);
        if ( (__int64 *)v53.m128i_i64[0] != &v54 )
          operator delete((void *)v53.m128i_i64[0]);
        if ( (__int64 *)v55.m128i_i64[0] != &v56 )
          operator delete((void *)v55.m128i_i64[0]);
        if ( (__int64 *)v57.m128i_i64[0] != &v58 )
          operator delete((void *)v57.m128i_i64[0]);
        if ( (_BYTE)v64 )
        {
          v18 = (char *)v61;
          if ( v61 != &v63 )
LABEL_62:
            operator delete(v18);
        }
        return a1;
      }
      if ( v27 )
      {
        v37 = *(const char ***)(v27 + 48);
        v38 = 0;
        v39 = *v37;
        if ( *v37 )
          v38 = j__strlen(*v37);
        v25 = (_BYTE *)sub_1029840((__int64)a4, (__int64)v39, v38);
        a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
        if ( v25 )
        {
LABEL_32:
          sub_11BA8E0(a1, v25, (__int64)&v25[v26]);
        }
        else
        {
          a1->m128i_i64[1] = 0;
          a1[1].m128i_i8[0] = 0;
        }
      }
      else
      {
LABEL_6:
        sub_11BA9A0(a1, (char *)&byte_22F0C30);
      }
      return a1;
    case 0x1B:
    case 0x1C:
      sub_115C370(a1, a3, (__int64)a4);
      return a1;
    case 0x1D:
    case 0x1E:
    case 0x1F:
      sub_115D530((__int64)a1, (__int64)a2, a3, (__int64)a4);
      return a1;
    case 0x20:
      sub_115F7A0(a1, a3, (__int64)a4);
      return a1;
    case 0x25:
    case 0x26:
      sub_1163620((__int64)a1, a2, a3, a4);
      return a1;
    case 0x29:
    case 0x2A:
      v8 = sub_10DCD30(a3, 0x8D4u);
      if ( !v8 )
        goto LABEL_6;
LABEL_3:
      sub_11BA9A0(a1, **(char ***)(v8 + 48));
      return a1;
    case 0x37:
    case 0x38:
      v10 = sub_10DCD30(a3, 0x913u);
      if ( v10 )
      {
        v11 = *(const char ***)(v10 + 48);
        v12 = nullptr;
        v13 = (char *)*v11;
        if ( *v11 )
          v12 = &v13[j__strlen(*v11)];
      }
      else
      {
        v13 = "generic";
        v12 = &aGeneric[j__strlen("generic") + 1];
      }
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      sub_11BA8E0(a1, v13, (__int64)v12);
      return a1;
    default:
      goto LABEL_6;
  }
}
