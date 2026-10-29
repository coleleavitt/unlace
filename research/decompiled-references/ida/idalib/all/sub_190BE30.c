__int64 __fastcall sub_190BE30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned __int8 a9,
        __int64 *a10,
        char a11)
{
  __int64 v14; // rcx
  size_t v15; // r15
  size_t v16; // rax
  __int64 v17; // r13
  unsigned int v18; // eax
  __m128 v19; // xmm1
  __int64 v20; // r9
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __m128i v34; // xmm2
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rax
  bool v39; // r13
  _BOOL4 v40; // r9d
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v44; // [rsp+10h] [rbp-288h]
  unsigned __int64 v45; // [rsp+18h] [rbp-280h]
  unsigned __int8 v46; // [rsp+24h] [rbp-274h]
  unsigned int v47; // [rsp+34h] [rbp-264h]
  __int64 v48; // [rsp+38h] [rbp-260h]
  __int64 v49; // [rsp+48h] [rbp-250h] BYREF
  __m128i v50; // [rsp+50h] [rbp-248h] BYREF
  __int64 v51; // [rsp+60h] [rbp-238h]
  __int64 v52; // [rsp+70h] [rbp-228h] BYREF
  int v53; // [rsp+78h] [rbp-220h]
  __int16 v54; // [rsp+7Ch] [rbp-21Ch]
  char v55; // [rsp+7Eh] [rbp-21Ah]
  unsigned __int8 v56; // [rsp+7Fh] [rbp-219h]
  unsigned __int64 v57; // [rsp+80h] [rbp-218h]
  __int64 v58; // [rsp+88h] [rbp-210h]
  __int64 v59; // [rsp+90h] [rbp-208h] BYREF
  _QWORD *v60; // [rsp+98h] [rbp-200h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-1F8h]
  _BYTE v62[64]; // [rsp+A8h] [rbp-1F0h] BYREF
  void *v63[2]; // [rsp+E8h] [rbp-1B0h]
  __int64 v64; // [rsp+F8h] [rbp-1A0h]
  __int64 v65; // [rsp+100h] [rbp-198h]
  __m128 v66; // [rsp+108h] [rbp-190h]
  __int64 v67; // [rsp+118h] [rbp-180h]
  __int64 v68; // [rsp+120h] [rbp-178h]
  __int64 v69; // [rsp+128h] [rbp-170h]
  __int64 v70; // [rsp+130h] [rbp-168h]
  void *ptr[2]; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v72[41]; // [rsp+150h] [rbp-148h] BYREF

  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)(a3 + 4) )
    {
      v17 = 1;
      if ( !*(_QWORD *)(a3 + 8) )
        return v17;
    }
  }
  v46 = a6;
  v50.m128i_i32[2] = 0;
  v72[32] = 0;
  ptr[0] = v72;
  ptr[1] = (void *)0x800000000LL;
  v50.m128i_i64[0] = 0;
  v51 = 0;
  sub_18C1280((__int64 *)a1, (__int64)a5, (__int64)ptr, &v50, &v49, a6, a7);
  if ( (v50.m128i_i8[0] & 7) != 0 )
  {
    v45 = 0;
    v47 = v50.m128i_u32[2];
  }
  else
  {
    v45 = v50.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
    v47 = v50.m128i_u32[2];
    if ( (v50.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v14 = *(_QWORD *)((v50.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( (*(_QWORD *)v14 & 0xFFFFFFFE) != 0 )
      {
        v48 = *(_QWORD *)((v50.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16);
        if ( *(_WORD *)(v14 + 16) == 9020 )
        {
          v15 = (unsigned int)*(_QWORD *)v14;
          v16 = j__strlen("#>");
          if ( v15 >= v16 && (!v16 || !memcmp((const void *)(v48 + v15 - v16 + 16), "#>", v16)) )
          {
            v17 = 1;
            goto LABEL_20;
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 48) != 2
    || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0
    || (*(_BYTE *)(a2 + 8) & 0x20) == 0 )
  {
    goto LABEL_13;
  }
  v34 = _mm_load_si128(&v50);
  v60 = v62;
  v61 = 0x800000000LL;
  v59 = 0;
  v67 = v51;
  *(_OWORD *)v63 = 0;
  v64 = 0;
  v65 = a1;
  v66 = (__m128)v34;
  v68 = 0;
  v69 = 3;
  v70 = 0x101010000LL;
  sub_1A395A0(&v59);
  if ( !(unsigned __int8)sub_1A49A10(a1, &v59, a2, 0, 0)
    || (v37 = sub_16C47B0(*v60 & 0xFFFFFFFFFFFFFFF8LL), (*(_BYTE *)(v37 + 28) & 0x7Fu) - 26 > 0x1A) )
  {
    sub_169D230((__int64)&v59);
LABEL_13:
    v18 = 12;
    if ( *a5 != 8 )
      v18 = 0;
    v19 = (__m128)_mm_load_si128(&v50);
    v60 = v62;
    v69 = v18;
    v59 = 0;
    v61 = 0x800000000LL;
    *(_OWORD *)v63 = 0;
    v64 = 0;
    v65 = a1;
    v66 = v19;
    v67 = v51;
    v68 = 0;
    v70 = 0x101010000LL;
    sub_1A395A0(&v59);
    if ( a4 || v49 )
    {
      if ( (unsigned __int8)sub_1CE41F0(a1, a4 | 0x100000000LL, (__int64)&v52, 1) )
      {
LABEL_18:
        v17 = 1;
LABEL_19:
        sub_169D230((__int64)&v59);
        goto LABEL_20;
      }
      v22 = v59;
      if ( (_DWORD)v59 == 1 || *(_DWORD *)a3 && *(_DWORD *)(a3 + 4) && !*(_QWORD *)(a3 + 8) )
      {
        v17 = sub_1CB42E0(a1, a3, a4, &v50, a9, v49);
        goto LABEL_19;
      }
    }
    else
    {
      v39 = 0;
      v40 = 1;
      if ( v45 && !*(_QWORD *)(a3 + 8) )
      {
        v42 = sub_15F1670(a1);
        v39 = v42 != 0;
        v40 = v42 == 0;
      }
      sub_1A5D3E0(a1, (unsigned int)&v59, a2, a3, 0, v40, 0);
      v22 = v59;
      if ( (_DWORD)v59 == 1 || *(_DWORD *)a3 && (v20 = *(unsigned int *)(a3 + 4), (_DWORD)v20) && !*(_QWORD *)(a3 + 8) )
      {
        v17 = sub_1CB42E0(a1, a3, 0, &v50, a9, v49);
        goto LABEL_19;
      }
      if ( v39 )
      {
        v41 = sub_19E7170(*(_QWORD *)(a1 + 736), &v59, a2, v45, 1);
        if ( v41 == 1 )
          goto LABEL_18;
        v17 = v41 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v41 & 0xFFFFFFFFFFFFFFFELL) != 0 )
          goto LABEL_19;
        v22 = v59;
      }
    }
    if ( v22 == 5 )
      goto LABEL_18;
    if ( !(_DWORD)v61 )
    {
      if ( v45 )
      {
        if ( v46 )
        {
          v23 = *(_QWORD *)(a1 + 232);
          if ( (*(_WORD *)v23 & 0x808) == 0 && (*(_BYTE *)(v23 + 12) & 1) == 0 && (*(_BYTE *)(v23 + 47) & 0x20) == 0 )
          {
            v24 = (unsigned __int64)sub_17FF390(a1, v47, v45, a2, (unsigned int)v61, v20);
            if ( v24 )
            {
              v52 = v24 | (*(_BYTE *)(v24 + 29) >> 5) & 3;
              sub_1743080((__int64)&v60, v52);
              LODWORD(v59) = 2;
            }
          }
        }
      }
    }
    v25 = sub_18C19C0(a1, a3, (__int64)&v59, v46);
    v28 = v25;
    if ( (_DWORD)v61 || v25 )
      goto LABEL_90;
    if ( (!*(_DWORD *)a3 || !*(_DWORD *)(a3 + 4)) && !*(_QWORD *)(a3 + 8) && (**(_BYTE **)(a1 + 232) & 0x20) != 0 )
    {
      v33 = sub_18D7B30(a1, *(_QWORD **)(a1 + 248), (__int64)&v50, a4, v49);
      if ( v33 )
        goto LABEL_79;
    }
    if ( a11 )
      goto LABEL_18;
    v29 = *(_QWORD *)(a3 + 8);
    v53 = 16843009;
    v54 = 1;
    v55 = 0;
    v57 = v45;
    v58 = v29;
    v52 = (__int64)off_2C58E38;
    v56 = a9;
    if ( a10 )
    {
      a10[2] = v45;
      if ( v29 )
        a10[3] = v29;
    }
    else
    {
      a10 = &v52;
    }
    if ( (unsigned __int8)sub_18DE2E0(a1, a2, (unsigned int *)a3, (__int64)&v59, (__int64)a10, 0, 0, 0, 0) )
      goto LABEL_18;
    if ( (_DWORD)v59 != 2 || (v30 = sub_16C47B0(*v60 & 0xFFFFFFFFFFFFFFF8LL), (*(_BYTE *)(v30 + 28) & 0x7F) != 0x32) )
    {
LABEL_90:
      if ( (unsigned __int8)sub_19C4B30(a1, a3, &v59, a9, v26, v27) )
      {
        v17 = sub_19CC8A0(a1, a3, a4, &v59, v49, a2);
        goto LABEL_19;
      }
      if ( !v49 && !a4 )
      {
        v17 = sub_190B490(a1, (__int64 *)a3, (__int64)&v59, v28, 0, 0, (__m128i)0LL, v19);
        goto LABEL_19;
      }
      v33 = sub_1CD7830(a1, a3, a4, &v59, v28, v49);
    }
    else
    {
      LODWORD(v59) = 0;
      LODWORD(v61) = 0;
      if ( v63[0] )
      {
        v44 = v30;
        sub_1A39780(v63[0]);
        v30 = v44;
      }
      BYTE6(v70) = 0;
      *(_OWORD *)v63 = 0;
      v31 = *(_QWORD *)(v30 + 40);
      v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v31 & 7) != 0 )
        v32 = 0;
      v33 = sub_19E7170(*(_QWORD *)(a1 + 736), &v59, a2, v32, 0);
      if ( v33 != 1 && (v33 & 0xFFFFFFFFFFFFFFFELL) == 0 )
        goto LABEL_18;
    }
LABEL_79:
    v17 = v33;
    goto LABEL_19;
  }
  v52 = *(_QWORD *)(v37 + 48);
  v38 = sub_C1BEF0((__int64)&v52, v37, v35, v36);
  v17 = sub_190BDA0(a1, v37, v38, 1, v47, 0, 0.0, a8);
  sub_169D230((__int64)&v59);
LABEL_20:
  if ( ptr[0] != v72 )
    free(ptr[0]);
  return v17;
}
