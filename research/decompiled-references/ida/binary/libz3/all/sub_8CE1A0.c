__int64 __fastcall sub_8CE1A0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, _BYTE *a5)
{
  _QWORD *v5; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rbx
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
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int i; // r14d
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  char *v32; // rbp
  void *v33; // [rsp+0h] [rbp-208h]
  int *v34; // [rsp+8h] [rbp-200h]
  int *v35; // [rsp+10h] [rbp-1F8h]
  int *v36; // [rsp+18h] [rbp-1F0h]
  char *v37; // [rsp+18h] [rbp-1F0h]
  char *v38; // [rsp+20h] [rbp-1E8h]
  __int64 v39; // [rsp+28h] [rbp-1E0h]
  __m128 v40; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 *v41; // [rsp+40h] [rbp-1C8h] BYREF
  _QWORD **v42; // [rsp+48h] [rbp-1C0h]
  void *v43; // [rsp+50h] [rbp-1B8h]
  int v44; // [rsp+58h] [rbp-1B0h]
  unsigned int v45; // [rsp+5Ch] [rbp-1ACh]
  __m128i v46; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 *v47; // [rsp+70h] [rbp-198h]
  __m128i *v48; // [rsp+78h] [rbp-190h]
  __m128i v49; // [rsp+80h] [rbp-188h] BYREF
  __int64 v50; // [rsp+90h] [rbp-178h] BYREF
  __int64 v51; // [rsp+98h] [rbp-170h]
  __int64 v52; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-160h]
  int v54[8]; // [rsp+B0h] [rbp-158h] BYREF
  int v55[6]; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-120h]
  char v57[32]; // [rsp+F0h] [rbp-118h] BYREF
  char v58[32]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+138h] [rbp-D0h]
  __int64 v61; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+148h] [rbp-C0h]
  char v63[32]; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+170h] [rbp-98h] BYREF
  _QWORD **v65; // [rsp+178h] [rbp-90h]
  __int64 v66; // [rsp+180h] [rbp-88h]
  __int64 v67; // [rsp+188h] [rbp-80h]

  v5 = a2 + 103;
  v9 = a2;
  *a5 = 0;
  sub_8CCE80((__int64)a2, a2 + 103);
  if ( (unsigned int)sub_8B36C0((__int64)(a2 + 103)) && (unsigned int)sub_8B4740(v5, a3) == 1 )
  {
    v59 = 0;
    v12 = a2[302] + 232LL * a3;
    v36 = (int *)v12;
    v60 = 0;
    v61 = 1;
    v62 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v59, (int *)(v12 + 40));
    sub_3EBD70((__int64)&v64, (__int64)&v59);
    v50 = 0;
    v51 = 0;
    v52 = 1;
    v53 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, v36 + 2);
    sub_3EBD70((__int64)v57, (__int64)&v50);
    v43 = v54;
    sub_894A60((__int64)v54, (__int64)v57, (__int64)&v64);
    sub_25A130(v57);
    sub_25A130((char *)&v50);
    sub_25A130((char *)&v64);
    sub_25A130((char *)&v59);
    v41 = (unsigned __int64 *)(a2[288] + 16LL * *(unsigned int *)(a2[102] + 4LL * a3));
    sub_89A080((__int64)&v64, v41, 1);
    v42 = v65;
    LODWORD(a2) = (_DWORD)v41;
    v45 = v64;
    sub_89A080((__int64)&v64, v41, 0);
    v13 = v9[101];
    v41 = (unsigned __int64 *)v9[3];
    v44 = v64;
    v47 = (__int64 *)(16LL * a3 + v13);
    v40 = _mm_loadh_ps((const double *)&v41);
    sub_2FCDE0(v47);
    v17 = v44;
    v18 = v45;
    si128 = _mm_load_si128((const __m128i *)&v40);
    if ( v44 != v45 )
    {
      v40.m128_u64[0] = 0;
      a2 = *v42;
      v48 = &v49;
      while ( 1 )
      {
        v20 = v9[99];
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
        v14 = v9[31] + 56LL * (((unsigned int)v14 - v15) >> 1);
        v15 = *(_DWORD *)(v14 + 44);
        if ( v15 != -2 )
        {
          v21 = v9[2];
          v45 = v18;
          v44 = v17;
          v49 = si128;
          sub_894B80(v21, v15, v48->m128i_i64);
          v22 = _mm_load_si128(&v49);
          v23 = v44;
          v40.m128_u64[0] = v49.m128i_i64[0];
          v59 = v22.m128i_i64[0];
          v41 = (unsigned __int64 *)v49.m128i_i64[1];
          v24 = v45;
          if ( v22.m128i_i64[0] )
            ++*(_DWORD *)(v22.m128i_i64[0] + 8);
          v45 = v24;
          v44 = v23;
          v46 = v22;
          sub_892EB0(v47 + 1, &v59);
          si128 = _mm_load_si128(&v46);
          v17 = v44;
          a2 = *v42;
          v18 = v45;
        }
      }
      goto LABEL_16;
    }
    v40.m128_u64[0] = 0;
LABEL_22:
    sub_1745AB0(
      (int)v5,
      (int)a2,
      v14,
      v15,
      v17,
      v16,
      v33,
      &v64,
      &v59,
      v57,
      &v50,
      a3,
      v40.m128_i32[0],
      v40.m128_i32[2],
      (int)v41,
      (int)v42,
      (int)v43,
      v44,
      v46.m128i_i32[0],
      v46.m128i_i32[2],
      (int)v47,
      (int)v48,
      v49.m128i_i32[0],
      v49.m128i_i32[2],
      v50,
      v51,
      v52,
      v53,
      v54[0],
      v54[2],
      v54[4],
      v54[6],
      v55[0],
      v55[2],
      v55[4],
      v56);
    v25 = v9[32];
    for ( i = 0; v25; v25 = v9[32] )
    {
      if ( i >= *(_DWORD *)(v25 - 4) )
        break;
      v27 = v9[99];
      v28 = v27 ? *(_DWORD *)(v27 - 4) : 0;
      v59 = 0;
      v29 = v9[302] + 232LL * (v28 + 2 * i + 1);
      v60 = 0;
      v61 = 1;
      v62 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v35, (int *)(v29 + 8));
      v64 = 0;
      v65 = nullptr;
      v66 = 1;
      v67 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v34, v35);
      sub_27B950((__int64)qword_1C7F2C0, v9[29] + 32LL * i++, v34);
      sub_25A130((char *)v34);
      sub_25A130((char *)v35);
    }
    v59 = 0;
    v60 = 0;
    v61 = 1;
    v62 = 0;
    sub_182CBA0(qword_1C7F2C0, &v61);
    LODWORD(v61) = 1;
    BYTE4(v61) &= ~1u;
    sub_8AD320((__int64)v34, (__int64)v35, (__int64)v43);
    sub_25A130((char *)v35);
    sub_8A6700((__int64 *)v35, v9, a3, (__int64)v34, 1);
    v30 = *a4;
    v31 = v60;
    *a4 = v59;
    sub_892CB0(v30, v31);
    sub_894960((__int64)v37, v9[100] + 32 * v39);
    v32 = (char *)v43;
    sub_89A7E0((__int64)v35, (__int64)v43, (__int64)v37);
    v50 = 0;
    v51 = 0;
    v52 = 1;
    v53 = 0;
    sub_182CBA0(qword_1C7F2C0, &v52);
    BYTE4(v52) &= ~1u;
    LODWORD(v52) = 1;
    sub_8AD320(a1, (__int64)v38, (__int64)v35);
    sub_25A130(v38);
    sub_25A130(v63);
    sub_25A130((char *)v35);
    sub_25A130(v58);
    sub_25A130(v37);
    sub_2A6060((__int64)v34);
    sub_892CB0(v40.m128_i64[0], (__int64)v41);
    sub_25A130((char *)v55);
    sub_25A130(v32);
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

