__int64 __fastcall sub_1560700(const __m128i *a1, bool *a2, char a3, unsigned int a4, __m128i a5, __m128 a6)
{
  __int16 v7; // ax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax
  bool v14; // sf
  unsigned int v15; // eax
  unsigned int v16; // r12d
  int v17; // eax
  int v18; // r12d
  int v20; // eax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 *v25; // rdi
  int *m128i_i32; // r12
  __int64 *v27; // rdi
  __int64 v28; // rsi
  char *v29; // r12
  char *v30; // r9
  signed __int64 v31; // rcx
  signed __int64 v32; // r11
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // r10
  unsigned int v36; // esi
  __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // r12
  char *v43; // rdi
  size_t v44; // r10
  size_t v45; // rax
  char *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 i; // rax
  __int64 *v49; // rdi
  __int16 dest; // [rsp+10h] [rbp-118h]
  char *desta; // [rsp+10h] [rbp-118h]
  char *destb; // [rsp+10h] [rbp-118h]
  void *destc; // [rsp+10h] [rbp-118h]
  char *v55; // [rsp+18h] [rbp-110h]
  int v56; // [rsp+18h] [rbp-110h]
  signed __int64 v57; // [rsp+20h] [rbp-108h]
  __int64 v58; // [rsp+20h] [rbp-108h]
  __int64 v59; // [rsp+20h] [rbp-108h]
  char *v60; // [rsp+20h] [rbp-108h]
  __int64 v61; // [rsp+20h] [rbp-108h]
  char *v62; // [rsp+28h] [rbp-100h]
  char *v63; // [rsp+28h] [rbp-100h]
  signed __int64 v64; // [rsp+28h] [rbp-100h]
  signed __int64 v65; // [rsp+28h] [rbp-100h]
  char *v66; // [rsp+28h] [rbp-100h]
  __int64 v67; // [rsp+30h] [rbp-F8h]
  __int64 v68; // [rsp+30h] [rbp-F8h]
  size_t v69; // [rsp+30h] [rbp-F8h]
  size_t v70; // [rsp+30h] [rbp-F8h]
  __int64 v71; // [rsp+30h] [rbp-F8h]
  char *v72; // [rsp+38h] [rbp-F0h]
  char *v73; // [rsp+38h] [rbp-F0h]
  char *v74; // [rsp+40h] [rbp-E8h]
  size_t v75; // [rsp+48h] [rbp-E0h]
  void *src; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-C8h]
  _BYTE v78[16]; // [rsp+68h] [rbp-C0h] BYREF
  __int8 *v79; // [rsp+78h] [rbp-B0h] BYREF
  void *ptr; // [rsp+80h] [rbp-A8h]
  __int64 v81; // [rsp+88h] [rbp-A0h]
  _BYTE v82[16]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-88h] BYREF
  void *v84; // [rsp+A8h] [rbp-80h]
  __int64 v85; // [rsp+B0h] [rbp-78h]
  _BYTE v86[16]; // [rsp+B8h] [rbp-70h] BYREF
  __int8 *v87; // [rsp+C8h] [rbp-60h] BYREF
  void *v88; // [rsp+D0h] [rbp-58h]
  __int64 v89; // [rsp+D8h] [rbp-50h]
  _BYTE v90[72]; // [rsp+E0h] [rbp-48h] BYREF

  v7 = a1[2].m128i_i16[0];
  if ( v7 == 27 )
  {
    m128i_i32 = a1[1].m128i_i32;
    goto LABEL_52;
  }
LABEL_2:
  if ( v7 == 158 )
  {
    v10 = a1->m128i_i64[1];
    if ( (**(_BYTE **)(v10 + 56) & 8) == 0 )
      return 0;
  }
  else
  {
    if ( (unsigned __int16)(v7 - 406) <= 8u )
      return 0;
    v10 = a1->m128i_i64[1];
    if ( v7 == 20 )
    {
      v11 = *(_QWORD *)(v10 + 2944);
      if ( v11 >= *(unsigned int *)(v10 + 2912) )
        v12 = sub_14180A0(v10, 1u);
      else
        v12 = *(_QWORD *)(v10 + 2904) + 24 * v11;
      if ( *(_WORD *)(v12 + 16) == 20 && (unsigned int)sub_155C260(a1, 0, 1) )
        return 0;
      v10 = a1->m128i_i64[1];
    }
  }
  src = v78;
  ptr = v82;
  v81 = 0x200000000LL;
  v13 = *(char **)(v10 + 56);
  v79 = &a1[31].m128i_i8[8];
  v14 = *v13 < 0;
  v77 = 0x200000000LL;
  if ( (v14 || (v13[89] & 1) != 0) && a1[2].m128i_i16[0] == 20 )
  {
    v87 = &a1[31].m128i_i8[8];
    v84 = v86;
    v85 = 0x200000000LL;
    v88 = v90;
    v89 = 0x200000000LL;
    v83 = 0;
    sub_14A9F50(a1, (__int64)&v83, a5, a6);
    v28 = (unsigned int)v77;
    v29 = (char *)src;
    v30 = (char *)v84;
    v31 = 8LL * (unsigned int)v77;
    v32 = 8LL * (unsigned int)v85;
    v55 = (char *)v84 + v32;
    v33 = v32 >> 3;
    desta = (char *)src + v31;
    v34 = (unsigned int)v77 + (v32 >> 3);
    if ( v31 )
    {
      if ( v34 > HIDWORD(v77) )
      {
        v68 = (8LL * (unsigned int)v85) >> 3;
        v63 = (char *)v84;
        v58 = 8LL * (unsigned int)v85;
        sub_2237220(&src, v78, v34, 8);
        v28 = (unsigned int)v77;
        v29 = (char *)src;
        v33 = v68;
        v30 = v63;
        v31 = 8LL * (unsigned int)v77;
        v32 = v58;
        desta = (char *)src + v31;
      }
      v35 = v31 >> 3;
      if ( v31 >> 3 >= v33 )
      {
        v43 = desta;
        v44 = v31 - v32;
        v45 = v32;
        v46 = &v29[v31 - v32];
        v59 = v32 >> 3;
        v47 = v28 + (v32 >> 3);
        if ( v47 > HIDWORD(v77) )
        {
          v75 = v32;
          v74 = v30;
          v73 = &v29[v31 - v32];
          v70 = v31 - v32;
          v65 = v32;
          sub_2237220(&src, v78, v47, 8);
          LODWORD(v28) = v77;
          v45 = v75;
          v30 = v74;
          v43 = (char *)src + 8 * (unsigned int)v77;
          v46 = v73;
          v44 = v70;
          v32 = v65;
        }
        if ( v46 != desta )
        {
          v72 = v30;
          v69 = v44;
          v64 = v32;
          destb = v46;
          memmove(v43, v46, v45);
          LODWORD(v28) = v77;
          v30 = v72;
          v44 = v69;
          v32 = v64;
          v46 = destb;
        }
        LODWORD(v77) = v59 + v28;
        if ( v46 != v29 )
        {
          v60 = v30;
          destc = (void *)v32;
          memmove(&v29[v32], v29, v44);
          v30 = v60;
          v32 = (signed __int64)destc;
        }
        if ( v30 != v55 )
          memmove(v29, v30, v32);
      }
      else
      {
        v36 = v33 + v28;
        LODWORD(v77) = v36;
        if ( v29 != desta )
        {
          v67 = v31 >> 3;
          v62 = v30;
          v57 = v31;
          memcpy(&v29[8 * v36 - v31], v29, v31);
          v35 = v67;
          v30 = v62;
          v31 = v57;
        }
        if ( v35 )
        {
          if ( (v29 >= v30 + 16 || v30 >= v29 + 16) && (unsigned __int64)(v35 - 1) > 3 )
          {
            v37 = 0;
            v38 = 0;
            v39 = ((unsigned __int64)(v35 - 2) >> 1) + 1;
            do
            {
              a5 = _mm_loadu_si128((const __m128i *)&v30[v37]);
              ++v38;
              *(__m128i *)&v29[v37] = a5;
              v37 += 16;
            }
            while ( v38 < v39 );
            v40 = 2 * v39;
            v41 = 16 * v39;
            v42 = &v29[v41];
            if ( v35 != v40 )
              *(_QWORD *)v42 = *(_QWORD *)&v30[v41];
          }
          else
          {
            for ( i = 0; i != v35; ++i )
              *(_QWORD *)&v29[8 * i] = *(_QWORD *)&v30[8 * i];
          }
          v30 += v31;
        }
        if ( v55 != v30 )
          memcpy(desta, v30, v55 - v30);
      }
    }
    else
    {
      if ( v34 > HIDWORD(v77) )
      {
        v71 = (8LL * (unsigned int)v85) >> 3;
        v66 = (char *)v84;
        v61 = 8LL * (unsigned int)v85;
        sub_2237220(&src, v78, v34, 8);
        LODWORD(v28) = v77;
        LODWORD(v33) = v71;
        v30 = v66;
        v32 = v61;
        desta = (char *)src + 8 * (unsigned int)v77;
      }
      if ( v30 != v55 )
      {
        v56 = v33;
        memcpy(desta, v30, v32);
        LODWORD(v28) = v77;
        LODWORD(v33) = v56;
      }
      LODWORD(v77) = v33 + v28;
    }
    LODWORD(v85) = 0;
    sub_15D8C50(&v79, &v87);
    LODWORD(v89) = 0;
    sub_15DCED0(v87, &v87);
    if ( v88 != v90 )
      free(v88);
    if ( v84 != v86 )
      free(v84);
  }
  v15 = sub_155DB90((__int64)a1, a4, 1u, a2);
  v16 = v15;
  if ( v15 != 2 && (a3 != 1 || v15) )
    goto LABEL_35;
  v17 = a1[2].m128i_u16[0];
  v18 = 0;
  dest = a1[2].m128i_i16[0];
  while ( 2 )
  {
    switch ( v17 )
    {
      case 76:
        v18 |= (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) != 0;
        if ( (unsigned int)sub_155CFC0((__int64)a1) != 3 )
          goto LABEL_32;
        goto LABEL_40;
      case 79:
      case 84:
      case 86:
      case 88:
      case 92:
      case 93:
      case 94:
      case 95:
      case 98:
      case 99:
      case 103:
      case 106:
      case 107:
      case 108:
      case 127:
      case 129:
      case 155:
      case 160:
      case 161:
      case 177:
      case 178:
      case 179:
      case 181:
      case 182:
      case 183:
      case 202:
      case 203:
      case 205:
      case 211:
      case 258:
      case 259:
      case 260:
      case 261:
      case 262:
      case 263:
      case 264:
      case 265:
      case 266:
      case 267:
      case 268:
      case 269:
      case 270:
      case 271:
      case 272:
      case 273:
      case 341:
      case 342:
      case 343:
      case 344:
      case 345:
      case 346:
      case 347:
      case 348:
      case 349:
      case 350:
      case 351:
      case 352:
      case 362:
      case 371:
      case 372:
      case 394:
      case 400:
      case 415:
      case 417:
      case 418:
      case 424:
      case 425:
        if ( (unsigned int)sub_155CFC0((__int64)a1) == 3 )
          goto LABEL_40;
        if ( a1[2].m128i_i16[0] != 5 )
          goto LABEL_22;
        goto LABEL_34;
      case 113:
        v21 = a1->m128i_i64[1];
        v22 = *(_QWORD *)(v21 + 2944);
        if ( v22 >= *(unsigned int *)(v21 + 2912) )
          v23 = sub_14180A0(v21, 1u);
        else
          v23 = *(_QWORD *)(v21 + 2904) + 24 * v22;
        LOBYTE(v23) = *(_WORD *)(v23 + 16) == 22;
        v18 |= v23;
        goto LABEL_31;
      default:
LABEL_31:
        if ( (unsigned int)sub_155CFC0((__int64)a1) == 3 )
          goto LABEL_40;
LABEL_32:
        if ( !(_BYTE)v18 )
          goto LABEL_23;
        if ( a1[2].m128i_i16[0] == 5 )
          goto LABEL_34;
LABEL_22:
        v18 = 1;
LABEL_23:
        v20 = sub_155DB90((__int64)a1, a4, 1u, a2);
        if ( v20 == 3 )
          goto LABEL_40;
        if ( !v20 && a3 != 1 )
          goto LABEL_34;
        if ( v20 != 1 )
        {
          v17 = a1[2].m128i_u16[0];
          continue;
        }
        v16 = sub_1560060((__int64)a1, 1u, 1u, 0, dest == 76);
        if ( v16 != 2 )
          goto LABEL_35;
        v24 = a1[2].m128i_i16[0];
        if ( v24 == 189 )
        {
LABEL_34:
          v16 = 0;
LABEL_35:
          sub_15DCED0(v79, &v79);
          if ( ptr != v82 )
            free(ptr);
          if ( src != v78 )
            free(src);
          return v16;
        }
        if ( a3 )
        {
          v16 = v24 != 64;
          goto LABEL_35;
        }
        if ( v24 != 64 )
          goto LABEL_46;
        LODWORD(v83) = 1507394;
        if ( !(unsigned __int8)sub_15680D0(a1, &v83, 2, 3) )
        {
LABEL_40:
          v16 = 3;
          goto LABEL_35;
        }
        v24 = a1[2].m128i_i16[0];
LABEL_46:
        if ( v24 == 27 )
        {
          v49 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v49, a1[1].m128i_i32);
          v16 = a1[2].m128i_i16[0] != 23;
          goto LABEL_35;
        }
        if ( v24 != 66 )
          goto LABEL_35;
        v25 = (__int64 *)a1->m128i_i64[1];
        m128i_i32 = a1[1].m128i_i32;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v25, a1[1].m128i_i32);
        sub_15DCED0(v79, &v79);
        if ( ptr != v82 )
          free(ptr);
        if ( src != v78 )
        {
          free(src);
          v7 = a1[2].m128i_i16[0];
          if ( v7 == 27 )
            goto LABEL_52;
          goto LABEL_2;
        }
        v7 = a1[2].m128i_i16[0];
        if ( v7 != 27 )
          goto LABEL_2;
LABEL_52:
        v27 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v27, m128i_i32);
        return a1[2].m128i_i16[0] != 23;
    }
  }
}
