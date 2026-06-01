__int64 __fastcall sub_A15D30(__int64 a1, __int64 *a2, int a3, unsigned __int8 *a4, size_t a5, __int8 a6)
{
  unsigned int *v7; // r12
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rcx
  _WORD *v18; // rdx
  int v19; // edi
  _WORD *v20; // rsi
  __int64 v21; // r9
  unsigned __int16 *v22; // rsi
  int v23; // edi
  int v24; // r13d
  __m128i v25; // rax
  _QWORD *v26; // r11
  unsigned __int16 *v27; // rcx
  char v28; // cl
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __m128i *v31; // rsi
  const __m128i *v32; // r15
  __m128i *v33; // r14
  __int8 v34; // si
  __int8 v35; // al
  __int8 v36; // al
  __int64 v37; // rbp
  __m128i v38; // xmm1
  __m128i *v39; // r12
  __m128i *v40; // rbp
  __m128i *v41; // r14
  int v42; // r13d
  __int64 v43; // r15
  int v44; // r14d
  char i; // al
  __m128i v46; // [rsp+0h] [rbp-248h]
  int v47; // [rsp+10h] [rbp-238h]
  __int64 v48; // [rsp+38h] [rbp-210h]
  unsigned __int16 *v49; // [rsp+48h] [rbp-200h] BYREF
  __int8 v50[4]; // [rsp+54h] [rbp-1F4h] BYREF
  int v51[2]; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-1E8h] BYREF
  char v53; // [rsp+70h] [rbp-1D8h] BYREF
  char v54; // [rsp+80h] [rbp-1C8h]
  char *v55; // [rsp+88h] [rbp-1C0h]
  __int64 v56; // [rsp+90h] [rbp-1B8h]
  char v57; // [rsp+98h] [rbp-1B0h] BYREF
  char v58; // [rsp+A8h] [rbp-1A0h]
  char *v59; // [rsp+B0h] [rbp-198h]
  __int64 v60; // [rsp+B8h] [rbp-190h]
  char v61; // [rsp+C0h] [rbp-188h] BYREF
  char v62; // [rsp+D0h] [rbp-178h]
  __m128i v63; // [rsp+E0h] [rbp-168h] BYREF
  _BYTE v64[112]; // [rsp+F0h] [rbp-158h] BYREF
  char v65; // [rsp+160h] [rbp-E8h]
  __m128i *v66; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+178h] [rbp-D0h]
  _BYTE v68[200]; // [rsp+180h] [rbp-C8h] BYREF

  v7 = (unsigned int *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 104) )
    goto LABEL_3;
  v11 = sub_A0A820(*a2, a4, a5);
  if ( !v12 )
    goto LABEL_3;
  v47 = v11 >> 33;
  v14 = *(_QWORD *)(*a2 + 104);
  v50[0] = a6;
  v51[0] = v47;
  v51[1] = a3;
  v15 = sub_A0D400(a3, v51, v50);
  v16 = *(unsigned int *)(*(_QWORD *)(v14 + 8) + 4LL * ((unsigned int)v15 & (*(_DWORD *)v14 - 1)));
  if ( !(_DWORD)v16 )
    goto LABEL_3;
  v17 = (_WORD *)(*(_QWORD *)(v14 + 16) + v16);
  v18 = v17 + 1;
  if ( !*v17 )
    goto LABEL_3;
  v19 = 0;
  while ( 1 )
  {
    v20 = v18 + 6;
    v21 = (unsigned __int16)v18[4];
    if ( v15 == *(_QWORD *)v18
      && a3 == *((_DWORD *)v18 + 3)
      && v47 == *((_DWORD *)v18 + 4)
      && a6 == *((_BYTE *)v18 + 20) )
    {
      break;
    }
    ++v19;
    v18 = (_WORD *)((char *)v20 + (unsigned int)v21 + (unsigned __int16)v18[5]);
    if ( (unsigned __int16)*v17 == v19 )
      goto LABEL_3;
  }
  v48 = *a2;
  v22 = (_WORD *)((char *)v20 + v21);
  if ( !v22 )
  {
LABEL_3:
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    *(_BYTE *)(a1 + 156) = 0;
    return a1;
  }
  v49 = v22;
  v23 = *v22;
  v49 = v22 + 1;
  v66 = (__m128i *)v68;
  v67 = 0x100000000LL;
  if ( (unsigned __int16)v23 > 1uLL )
    sub_A155D0((__int64)&v66, (unsigned __int16)v23);
  if ( v23 )
  {
    v24 = 0;
    do
    {
      v25.m128i_i64[0] = sub_A09840((__int64 *)&v49);
      v54 &= 0xF0u;
      v52[0] = &v53;
      v55 = &v57;
      v46 = v25;
      v58 &= 0xF8u;
      v59 = &v61;
      v62 &= 0xFCu;
      v52[1] = 0;
      v53 = 0;
      v56 = 0;
      v57 = 0;
      v60 = 0;
      v61 = 0;
      sub_A0BF10(v26, (__int64)v52);
      v27 = v49;
      v49 = (unsigned __int16 *)((char *)v49 + 1);
      v28 = *(_BYTE *)v27;
      if ( (v28 & 1) != 0 )
        v62 = v62 & 0xFC | 1 | v28 & 2;
      v63 = v46;
      sub_A11C70((__int64)v64, (__int64)v52);
      v65 = v62 & 3 | v65 & 0xFC;
      v29 = (unsigned int)v67;
      v30 = (unsigned int)v67 + 1LL;
      if ( v30 > HIDWORD(v67) )
      {
        v41 = v66;
        if ( v66 > &v63 || &v63 >= (__m128i *)((char *)v66 + 136 * (unsigned int)v67) )
        {
          sub_A155D0((__int64)&v66, v30);
          v31 = v66;
          v32 = &v63;
          v29 = (unsigned int)v67;
        }
        else
        {
          sub_A155D0((__int64)&v66, v30);
          v31 = v66;
          v29 = (unsigned int)v67;
          v32 = (__m128i *)((char *)v66 + (char *)&v63 - (char *)v41);
        }
      }
      else
      {
        v31 = v66;
        v32 = &v63;
      }
      ++v24;
      v33 = (__m128i *)((char *)v31 + 136 * v29);
      *v33 = _mm_loadu_si128(v32);
      sub_A0A1C0(v33 + 1, v32 + 1);
      v34 = v32[8].m128i_i8[0];
      v35 = v33[8].m128i_i8[0];
      LODWORD(v67) = v67 + 1;
      v36 = v34 & 1 | v35 & 0xFE;
      v33[8].m128i_i8[0] = v36;
      v33[8].m128i_i8[0] = v32[8].m128i_i8[0] & 2 | v36 & 0xFD;
      sub_A09CE0((__int64)v64);
      sub_A09CE0((__int64)v52);
    }
    while ( v23 != v24 );
  }
  v37 = (unsigned int)v67;
  v38 = _mm_loadu_si128((const __m128i *)(v48 + 8));
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v63 = v38;
  if ( (_DWORD)v37 )
  {
    sub_A15880(a1, (__int64)&v66);
    v42 = *(_DWORD *)(a1 + 8);
    v37 = (unsigned int)v67;
    *(_BYTE *)(a1 + 156) = 0;
    if ( v42 )
    {
      v7 = *(unsigned int **)a1;
      if ( (v63.m128i_i32[2] | v63.m128i_i32[1]) & 0x7FFFFFFF | v63.m128i_i32[0] | v63.m128i_i32[3] & 0x7FFFFFFF )
      {
        v43 = 0;
        v44 = 0;
        for ( i = sub_A09E20(v7, (unsigned int *)&v63); i; i = sub_A09E20(&v7[v43], (unsigned int *)&v63) )
        {
          ++v44;
          v43 += 34;
          if ( v42 == v44 )
            goto LABEL_25;
        }
        *(_DWORD *)(a1 + 152) = v44;
        *(_BYTE *)(a1 + 156) = 1;
        goto LABEL_30;
      }
    }
    else
    {
      v7 = *(unsigned int **)a1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 156) = 0;
  }
LABEL_25:
  if ( !*v7 && (v7[1] & 0x7FFFFFFF) == 0 && (v7[2] & 0x7FFFFFFF) == 0 && (v7[3] & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(a1 + 152) = 0;
    *(_BYTE *)(a1 + 156) = 1;
  }
LABEL_30:
  v39 = v66;
  v40 = (__m128i *)((char *)v66 + 136 * v37);
  if ( v66 != v40 )
  {
    do
    {
      v40 = (__m128i *)((char *)v40 - 136);
      sub_A09CE0((__int64)v40[1].m128i_i64);
    }
    while ( v39 != v40 );
    v40 = v66;
  }
  if ( v40 != (__m128i *)v68 )
    free(v40);
  return a1;
}
