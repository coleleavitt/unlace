__int64 __fastcall sub_8C5020(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, _BYTE *a5)
{
  _QWORD *v5; // r14
  _QWORD *v6; // r13
  __int64 v10; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // r9d
  int v17; // r8d
  unsigned int v18; // eax
  __m128i si128; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rdi
  __m128i v22; // xmm0
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rax
  unsigned int i; // r13d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  char *v34; // r14
  void *v35; // [rsp+0h] [rbp-208h]
  char *v36; // [rsp+8h] [rbp-200h]
  char *v37; // [rsp+10h] [rbp-1F8h]
  int *v38; // [rsp+18h] [rbp-1F0h]
  char *v39; // [rsp+18h] [rbp-1F0h]
  char *v40; // [rsp+20h] [rbp-1E8h]
  __int64 v41; // [rsp+28h] [rbp-1E0h]
  __m128 v42; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 *v43; // [rsp+40h] [rbp-1C8h] BYREF
  _QWORD **v44; // [rsp+48h] [rbp-1C0h]
  __m128i v45; // [rsp+50h] [rbp-1B8h] BYREF
  void *v46; // [rsp+60h] [rbp-1A8h]
  int v47; // [rsp+68h] [rbp-1A0h]
  unsigned int v48; // [rsp+6Ch] [rbp-19Ch]
  __int64 *v49; // [rsp+70h] [rbp-198h]
  __m128i *v50; // [rsp+78h] [rbp-190h]
  __m128i v51; // [rsp+80h] [rbp-188h] BYREF
  __int64 v52; // [rsp+90h] [rbp-178h] BYREF
  __int64 v53; // [rsp+98h] [rbp-170h]
  __int64 v54; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-160h]
  int v56[8]; // [rsp+B0h] [rbp-158h] BYREF
  int v57[6]; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-120h]
  char v59[32]; // [rsp+F0h] [rbp-118h] BYREF
  char v60[32]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v61; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+138h] [rbp-D0h]
  __int64 v63; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+148h] [rbp-C0h]
  char v65[32]; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+170h] [rbp-98h] BYREF
  _QWORD **v67; // [rsp+178h] [rbp-90h]
  __int64 v68; // [rsp+180h] [rbp-88h]
  __int64 v69; // [rsp+188h] [rbp-80h]

  v5 = a2;
  v6 = a2 + 100;
  *a5 = 0;
  sub_8C3EF0((__int64)a2, a2 + 100);
  if ( (unsigned int)sub_8B36C0((__int64)(a2 + 100)) && (unsigned int)sub_8B4740(v6, a3) == 1 )
  {
    v61 = 0;
    v12 = a2[299] + 232LL * a3;
    v38 = (int *)v12;
    v62 = 0;
    v63 = 1;
    v64 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v61, (int *)(v12 + 40));
    sub_3EBD70((__int64)&v66, (__int64)&v61);
    v52 = 0;
    v53 = 0;
    v54 = 1;
    v55 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v52, v38 + 2);
    sub_3EBD70((__int64)v59, (__int64)&v52);
    v46 = v56;
    sub_894A60((__int64)v56, (__int64)v59, (__int64)&v66);
    sub_25A130(v59);
    sub_25A130((char *)&v52);
    sub_25A130((char *)&v66);
    sub_25A130((char *)&v61);
    v43 = (unsigned __int64 *)(a2[285] + 16LL * *(unsigned int *)(a2[99] + 4LL * a3));
    sub_89A080((__int64)&v66, v43, 1);
    v44 = v67;
    LODWORD(a2) = (_DWORD)v43;
    v47 = v66;
    sub_89A080((__int64)&v66, v43, 0);
    v13 = v5[98];
    v43 = (unsigned __int64 *)v5[3];
    v45.m128i_i32[0] = v66;
    v49 = (__int64 *)(16LL * a3 + v13);
    v42 = _mm_loadh_ps((const double *)&v43);
    sub_2FCDE0(v49);
    v17 = v45.m128i_i32[0];
    v18 = v47;
    si128 = _mm_load_si128((const __m128i *)&v42);
    if ( v45.m128i_i32[0] != v47 )
    {
      v42.m128_u64[0] = 0;
      a2 = *v44;
      v50 = &v51;
      while ( 1 )
      {
        v20 = v5[96];
        LODWORD(v14) = a2[5 * v18 + 4];
        if ( !v20 )
          break;
        v15 = *(_DWORD *)(v20 - 4);
        if ( (unsigned int)v14 >= v15 )
          goto LABEL_11;
LABEL_16:
        ++v18;
        if ( a2 )
        {
          v14 = (__int64)&a2[5 * v18];
          while ( v18 < *((_DWORD *)a2 - 1) )
          {
            v15 = *(_DWORD *)(v14 + 32);
            v16 = v18 + 1;
            v14 += 40;
            if ( v15 != -1 )
              break;
            ++v18;
          }
        }
        if ( v17 == v18 )
          goto LABEL_22;
      }
      v15 = 0;
LABEL_11:
      if ( (((_BYTE)v15 - (_BYTE)v14) & 1) == 0 )
      {
        v14 = v5[28] + 24LL * (((unsigned int)v14 - v15) >> 1);
        v15 = *(_DWORD *)(v14 + 16);
        if ( v15 != -2 )
        {
          v21 = v5[2];
          v47 = v18;
          v45.m128i_i32[0] = v17;
          v51 = si128;
          sub_894B80(v21, v15, v50->m128i_i64);
          v22 = _mm_load_si128(&v51);
          v23 = v45.m128i_i32[0];
          v42.m128_u64[0] = v51.m128i_i64[0];
          v61 = v22.m128i_i64[0];
          v43 = (unsigned __int64 *)v51.m128i_i64[1];
          v24 = v47;
          if ( v22.m128i_i64[0] )
            ++*(_DWORD *)(v22.m128i_i64[0] + 8);
          v48 = v24;
          v47 = v23;
          v45 = v22;
          sub_892EB0(v49 + 1, &v61);
          v17 = v47;
          si128 = _mm_load_si128(&v45);
          a2 = *v44;
          v18 = v48;
        }
      }
      goto LABEL_16;
    }
    v42.m128_u64[0] = 0;
LABEL_22:
    sub_1745AB0(
      (int)v6,
      (int)a2,
      v14,
      v15,
      v17,
      v16,
      v35,
      &v66,
      &v61,
      &v52,
      v59,
      a3,
      v42.m128_i32[0],
      v42.m128_i32[2],
      (int)v43,
      (int)v44,
      v45.m128i_i32[0],
      v45.m128i_i32[2],
      (int)v46,
      v47,
      (int)v49,
      (int)v50,
      v51.m128i_i32[0],
      v51.m128i_i32[2],
      v52,
      v53,
      v54,
      v55,
      v56[0],
      v56[2],
      v56[4],
      v56[6],
      v57[0],
      v57[2],
      v57[4],
      v58);
    v25 = v5[29];
    for ( i = 0; v25; v25 = v5[29] )
    {
      if ( i >= *(_DWORD *)(v25 - 4) )
        break;
      v27 = v5[96];
      v28 = v27 ? *(_DWORD *)(v27 - 4) : 0;
      v66 = 0;
      v29 = v5[299] + 232LL * (v28 + 2 * i + 1);
      v67 = nullptr;
      v68 = 1;
      v69 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v36, (int *)(v29 + 8));
      v30 = sub_182D050(qword_1C7F2C0, v36);
      v31 = i++;
      *(_DWORD *)(v5[26] + 4 * v31) = v30;
      sub_25A130(v36);
    }
    v61 = 0;
    v62 = 0;
    v63 = 1;
    v64 = 0;
    sub_182CBA0(qword_1C7F2C0, &v63);
    LODWORD(v63) = 1;
    BYTE4(v63) &= ~1u;
    sub_8AD320((__int64)v36, (__int64)v37, (__int64)v46);
    sub_25A130(v37);
    sub_8A6CB0((__int64 *)v37, v5, a3, (__int64)v36, 1);
    v32 = *a4;
    v33 = v62;
    *a4 = v61;
    sub_892CB0(v32, v33);
    sub_894960((__int64)v40, v5[97] + 32 * v41);
    v34 = (char *)v46;
    sub_89A7E0((__int64)v37, (__int64)v46, (__int64)v40);
    v52 = 0;
    v53 = 0;
    v54 = 1;
    v55 = 0;
    sub_182CBA0(qword_1C7F2C0, &v54);
    BYTE4(v54) &= ~1u;
    LODWORD(v54) = 1;
    sub_8AD320(a1, (__int64)v39, (__int64)v37);
    sub_25A130(v39);
    sub_25A130(v65);
    sub_25A130(v37);
    sub_25A130(v60);
    sub_25A130(v40);
    sub_2A6060((__int64)v36);
    sub_892CB0(v42.m128_i64[0], (__int64)v43);
    sub_25A130((char *)v57);
    sub_25A130(v34);
  }
  else
  {
    v10 = *(_QWORD *)(a2[3] + 864LL);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    sub_892CB0(*a4, a4[1]);
    *a4 = v10;
    sub_8AD320(a1, (__int64)&qword_1C7F280, (__int64)&qword_1C7F200);
  }
  return a1;
}

