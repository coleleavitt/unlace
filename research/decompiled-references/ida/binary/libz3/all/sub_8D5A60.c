__int64 __fastcall sub_8D5A60(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, _BYTE *a5)
{
  _QWORD *v5; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // r9d
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
  __int64 v36; // [rsp+18h] [rbp-1F0h]
  _QWORD **v37; // [rsp+18h] [rbp-1F0h]
  __int64 v38; // [rsp+18h] [rbp-1F0h]
  char *v39; // [rsp+20h] [rbp-1E8h]
  char *v40; // [rsp+28h] [rbp-1E0h]
  __int64 v41; // [rsp+30h] [rbp-1D8h]
  unsigned __int64 *v42; // [rsp+38h] [rbp-1D0h] BYREF
  __m128 v43; // [rsp+40h] [rbp-1C8h] BYREF
  void *v44; // [rsp+50h] [rbp-1B8h]
  int v45; // [rsp+58h] [rbp-1B0h]
  unsigned int v46; // [rsp+5Ch] [rbp-1ACh]
  __m128i v47; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 *v48; // [rsp+70h] [rbp-198h]
  __m128i *v49; // [rsp+78h] [rbp-190h]
  __m128i v50; // [rsp+80h] [rbp-188h] BYREF
  __int64 v51; // [rsp+90h] [rbp-178h] BYREF
  __int64 v52; // [rsp+98h] [rbp-170h]
  __int64 v53; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-160h]
  int v55[8]; // [rsp+B0h] [rbp-158h] BYREF
  int v56[6]; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-120h]
  char v58[32]; // [rsp+F0h] [rbp-118h] BYREF
  char v59[32]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+130h] [rbp-D8h] BYREF
  __int64 v61; // [rsp+138h] [rbp-D0h]
  __int64 v62; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+148h] [rbp-C0h]
  char v64[32]; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+170h] [rbp-98h] BYREF
  _QWORD **v66; // [rsp+178h] [rbp-90h]
  __int64 v67; // [rsp+180h] [rbp-88h]
  __int64 v68; // [rsp+188h] [rbp-80h]
  int v69; // [rsp+190h] [rbp-78h]

  v5 = a2 + 104;
  v9 = a2;
  *a5 = 0;
  sub_8D46D0((__int64)a2, a2 + 104);
  if ( (unsigned int)sub_8B36C0((__int64)(a2 + 104)) && (unsigned int)sub_8B4740(v5, a3) == 1 )
  {
    v60 = 0;
    v12 = a2[303] + 232LL * a3;
    v36 = v12;
    v61 = 0;
    v62 = 1;
    v63 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v60, (int *)(v12 + 40));
    sub_3EBD70((__int64)&v65, (__int64)&v60);
    v51 = 0;
    v52 = 0;
    v53 = 1;
    v54 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v51, (int *)(v36 + 8));
    sub_3EBD70((__int64)v58, (__int64)&v51);
    v44 = v55;
    sub_894A60((__int64)v55, (__int64)v58, (__int64)&v65);
    sub_25A130(v58);
    sub_25A130((char *)&v51);
    sub_25A130((char *)&v65);
    sub_25A130((char *)&v60);
    v42 = (unsigned __int64 *)(a2[289] + 16LL * *(unsigned int *)(a2[103] + 4LL * a3));
    sub_89A080((__int64)&v65, v42, 1);
    v37 = v66;
    LODWORD(a2) = (_DWORD)v42;
    v46 = v65;
    sub_89A080((__int64)&v65, v42, 0);
    v13 = v9[102];
    v42 = (unsigned __int64 *)v9[3];
    v45 = v65;
    v48 = (__int64 *)(16LL * a3 + v13);
    v43 = _mm_loadh_ps((const double *)&v42);
    sub_2FCDE0(v48);
    v17 = v45;
    v18 = v46;
    si128 = _mm_load_si128((const __m128i *)&v43);
    if ( v45 != v46 )
    {
      v43.m128_u64[0] = 0;
      a2 = *v37;
      v49 = &v50;
      while ( 1 )
      {
        v20 = v9[100];
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
          v16 = *((_DWORD *)a2 - 1);
          v14 = (unsigned __int64)&a2[5 * v18];
          while ( v18 < v16 )
          {
            v15 = *(_DWORD *)(v14 + 32);
            v14 += 40LL;
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
        v14 = v9[32] + ((unsigned __int64)(((unsigned int)v14 - v15) >> 1) << 6);
        v15 = *(_DWORD *)(v14 + 52);
        if ( v15 != -2 )
        {
          v21 = v9[2];
          v46 = v18;
          v45 = v17;
          v50 = si128;
          sub_894B80(v21, v15, v49->m128i_i64);
          v22 = _mm_load_si128(&v50);
          v23 = v45;
          v43.m128_u64[0] = v50.m128i_i64[0];
          v60 = v22.m128i_i64[0];
          v42 = (unsigned __int64 *)v50.m128i_i64[1];
          v24 = v46;
          if ( v22.m128i_i64[0] )
            ++*(_DWORD *)(v22.m128i_i64[0] + 8);
          v46 = v24;
          v45 = v23;
          v47 = v22;
          sub_892EB0(v48 + 1, &v60);
          si128 = _mm_load_si128(&v47);
          v17 = v45;
          a2 = *v37;
          v18 = v46;
        }
      }
      goto LABEL_16;
    }
    v43.m128_u64[0] = 0;
LABEL_22:
    sub_1745AB0(
      (int)v5,
      (int)a2,
      v14,
      v15,
      v17,
      v16,
      v33,
      &v65,
      &v60,
      v37,
      v58,
      (int)&v51,
      a3,
      (int)v42,
      v43.m128_i32[0],
      v43.m128_i32[2],
      (int)v44,
      v45,
      v47.m128i_i32[0],
      v47.m128i_i32[2],
      (int)v48,
      (int)v49,
      v50.m128i_i32[0],
      v50.m128i_i32[2],
      v51,
      v52,
      v53,
      v54,
      v55[0],
      v55[2],
      v55[4],
      v55[6],
      v56[0],
      v56[2],
      v56[4],
      v57);
    v25 = v9[33];
    for ( i = 0; v25; v25 = v9[33] )
    {
      if ( i >= *(_DWORD *)(v25 - 4) )
        break;
      v27 = v9[100];
      v28 = v27 ? *(_DWORD *)(v27 - 4) : 0;
      v60 = 0;
      v29 = v9[303] + 232LL * (v28 + 2 * i + 1);
      v61 = 0;
      v62 = 1;
      v63 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v35, (int *)(v29 + 8));
      v65 = 0;
      v66 = nullptr;
      v67 = 1;
      v68 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v34, v35);
      v69 = 0;
      v38 = v9[30] + 40LL * i;
      sub_27B950((__int64)qword_1C7F2C0, v38, v34);
      ++i;
      *(_DWORD *)(v38 + 32) = v69;
      sub_25A130((char *)v34);
      sub_25A130((char *)v35);
    }
    v60 = 0;
    v61 = 0;
    v62 = 1;
    v63 = 0;
    sub_182CBA0(qword_1C7F2C0, &v62);
    LODWORD(v62) = 1;
    BYTE4(v62) &= ~1u;
    sub_8AD320((__int64)v34, (__int64)v35, (__int64)v44);
    sub_25A130((char *)v35);
    sub_8A7260((__int64 *)v35, v9, a3, (__int64)v34, 1);
    v30 = *a4;
    v31 = v61;
    *a4 = v60;
    sub_892CB0(v30, v31);
    sub_894960((__int64)v39, v9[101] + 32 * v41);
    v32 = (char *)v44;
    sub_89A7E0((__int64)v35, (__int64)v44, (__int64)v39);
    v51 = 0;
    v52 = 0;
    v53 = 1;
    v54 = 0;
    sub_182CBA0(qword_1C7F2C0, &v53);
    BYTE4(v53) &= ~1u;
    LODWORD(v53) = 1;
    sub_8AD320(a1, (__int64)v40, (__int64)v35);
    sub_25A130(v40);
    sub_25A130(v64);
    sub_25A130((char *)v35);
    sub_25A130(v59);
    sub_25A130(v39);
    sub_2A6060((__int64)v34);
    sub_892CB0(v43.m128_i64[0], (__int64)v42);
    sub_25A130((char *)v56);
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

