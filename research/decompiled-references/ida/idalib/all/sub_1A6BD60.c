_QWORD *__fastcall sub_1A6BD60(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        unsigned __int64 a5,
        __m128i *a6,
        double a7,
        double a8,
        __int64 a9,
        int a10,
        unsigned __int64 a11,
        unsigned __int8 a12,
        __int64 a13,
        unsigned __int8 a14)
{
  unsigned __int64 v14; // r10
  int v15; // r15d
  __int64 v20; // rsi
  int v21; // r11d
  __int64 (__fastcall *v22)(__int64); // rax
  char v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // kr00_4
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r9
  unsigned int v39; // edi
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // edx
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  int v51; // eax
  size_t v52; // rax
  __int64 v53; // rax
  size_t v54; // rax
  __int64 *v55; // rax
  int v56; // [rsp+10h] [rbp-188h]
  __int64 v57; // [rsp+10h] [rbp-188h]
  unsigned __int64 v59; // [rsp+18h] [rbp-180h]
  unsigned int v60; // [rsp+20h] [rbp-178h]
  unsigned int v61; // [rsp+28h] [rbp-170h]
  int v62; // [rsp+28h] [rbp-170h]
  int v63; // [rsp+28h] [rbp-170h]
  __int64 v64; // [rsp+30h] [rbp-168h] BYREF
  __int64 v65; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v66[3]; // [rsp+40h] [rbp-158h] BYREF
  int v67; // [rsp+58h] [rbp-140h]
  unsigned int v68; // [rsp+68h] [rbp-130h]
  unsigned int v69; // [rsp+6Ch] [rbp-12Ch]
  unsigned int v70; // [rsp+70h] [rbp-128h]
  _QWORD v71[5]; // [rsp+A0h] [rbp-F8h] BYREF
  unsigned int v72; // [rsp+C8h] [rbp-D0h]
  unsigned int v73; // [rsp+CCh] [rbp-CCh]
  unsigned int v74; // [rsp+D0h] [rbp-C8h]
  void *v75[19]; // [rsp+100h] [rbp-98h] BYREF

  v14 = a5;
  v15 = a4;
  v20 = *(_QWORD *)(a2 + 552);
  v21 = a12;
  if ( v20 )
  {
    v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 392LL);
    if ( v22 == sub_6EED90 )
    {
      memset(v75, 0, 0x58u);
      HIDWORD(v75[3]) = 1;
      v75[2] = &v75[4];
    }
    else
    {
      ((void (__fastcall *)(void **, __int64, const __m128i *, __int64, unsigned __int64, __m128i *, __int64, unsigned __int64, _QWORD, __int64))v22)(
        v75,
        v20,
        a3,
        a4,
        a5,
        a6,
        a9,
        a11,
        a12,
        a13);
      v14 = a5;
      v21 = a12;
      if ( v75[0] )
      {
        sub_1A3AB00((__int64)a1, (__int64)v75);
        sub_17A1D90(v75);
        return a1;
      }
    }
    v59 = v14;
    v56 = v21;
    sub_17A1D90(v75);
    v21 = v56;
    v14 = v59;
  }
  v23 = *(_BYTE *)(a9 + 13);
  if ( v23 )
    v23 = *(_BYTE *)(a9 + 12) ^ 1;
  v24 = 0;
  if ( (a3->m128i_i64[0] & 7) == 0 )
    v24 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  v57 = v24;
  sub_1A6A530(&v64, a2, a3, v15, v14, a6, a9, a11, v21, a13, a10 == 1);
  v26 = v64;
  if ( !v64 )
  {
    memset(a1, 0, 0x58u);
    a1[2] = a1 + 4;
    a1[3] = 0x100000000LL;
    return a1;
  }
  if ( !*(_QWORD *)(v64 + 56)
    || (v27 = *(_DWORD *)(*(_QWORD *)(v64 + 40) + 32LL), v27 > 0x2710)
    || (v28 = v27 + 50, v29 = v27 + 50, v30 = **(_QWORD **)(v57 + 16), v61 = v30, v60 = v30, v28 > 0x63)
    && (unsigned int)v30 / (v29 / 0x64) <= 2 )
  {
    sub_1A40180(a1, a2, v57, a3->m128i_u32[2], a14, v25);
    goto LABEL_31;
  }
  v31 = *(unsigned int *)(v64 + 72);
  v32 = *(_QWORD *)(v64 + 432) + 1LL;
  *(_QWORD *)(v64 + 432) = v32;
  if ( v32 >= v31 )
  {
    *(_QWORD *)(v26 + 432) = v31;
    v33 = sub_1A62DB0(v26, a7, a8);
  }
  else
  {
    v33 = *(_QWORD *)(v26 + 64) + 88 * v32;
  }
  sub_1A3B6B0((__int64)v66, v33);
  v34 = v64;
  v35 = *(unsigned int *)(v64 + 72);
  v36 = *(_QWORD *)(v64 + 432) + 1LL;
  *(_QWORD *)(v64 + 432) = v36;
  if ( v36 >= v35 )
  {
    *(_QWORD *)(v34 + 432) = v35;
    v37 = sub_1A62DB0(v34, a7, a8);
  }
  else
  {
    v37 = *(_QWORD *)(v34 + 64) + 88 * v36;
  }
  sub_1A3B6B0((__int64)v71, v37);
  if ( !v66[0] )
    goto LABEL_59;
  if ( v68 > 0x2710
    || (v39 = v69, v69 > 0x2710)
    || v70 > 0x2710
    || (v40 = 150 * v70 + 110 * v69 + 100 * v68, v40 > 0x2710) )
  {
    if ( v61 > 2 )
      goto LABEL_59;
    if ( v71[0] )
    {
      v41 = v72;
      if ( v72 > 0x2710 )
      {
        v38 = 0xFFFFFFFFLL;
        v43 = -1;
      }
      else
      {
        v42 = v73;
        v38 = 0xFFFFFFFFLL;
        v43 = -1;
        if ( v73 <= 0x2710 )
        {
LABEL_38:
          v43 = -1;
          if ( v74 <= 0x2710 )
          {
            v43 = 110 * v42 + 100 * v41 + 150 * v74;
            if ( v43 >= 0x2711 )
              v43 = -1;
          }
        }
      }
      if ( v68 > 0x2710 )
        goto LABEL_61;
      v39 = v69;
LABEL_43:
      if ( v39 <= 0x2710 && v70 <= 0x2710 )
      {
        v45 = 150 * v70 + 110 * v39 + 100 * v68;
        if ( v45 <= 0x2710 && v45 < v43 )
        {
LABEL_47:
          if ( (_DWORD)v38 || !v67 || *(_QWORD *)v66[2] )
            goto LABEL_50;
LABEL_59:
          sub_1A40180(a1, a2, v57, a3->m128i_u32[2], a14, v38);
          goto LABEL_51;
        }
      }
LABEL_61:
      if ( !v23 )
      {
        sub_1A40180(a1, a2, v57, a3->m128i_u32[2], 0, v38);
        goto LABEL_51;
      }
      v65 = v66[0];
      sub_B86A00((__int64)v75, &v65);
      v50 = sub_9B4AA0((__int64)v75, "super");
      if ( v75[0] != &v75[2] )
      {
        v62 = v50;
        operator delete(v75[0]);
        v50 = v62;
      }
      if ( v50 )
      {
        v65 = v71[0];
        sub_B86A00((__int64)v75, &v65);
        v51 = sub_9B4AA0((__int64)v75, "super");
        if ( v75[0] != &v75[2] )
        {
          v63 = v51;
          operator delete(v75[0]);
          v51 = v63;
        }
        if ( v51 )
        {
          v52 = j__strlen("super");
          v53 = *(_QWORD *)sub_1A3B470(*(_QWORD *)(v64 + 40) + 40LL, "super", v52);
          if ( *(_DWORD *)(v53 + 24) && !**(_QWORD **)(v53 + 16) )
          {
            v54 = j__strlen("super");
            v55 = (__int64 *)sub_1A3B470(*(_QWORD *)(v64 + 40) + 40LL, "super", v54);
            sub_1A3D6E0((__int64)v66, *v55);
          }
        }
        else
        {
          sub_1A3D6E0((__int64)v66, (__int64)v71);
        }
      }
      if ( v68 > 0x2710 || v69 > 0x2710 || v70 > 0x2710 || 150 * v70 + 110 * v69 + 100 * v68 > 0x31 )
      {
        v65 = v66[0];
        sub_B86A00((__int64)v75, &v65);
        if ( !sub_9B4AA0((__int64)v75, "super") )
        {
          if ( v75[0] != &v75[2] )
            operator delete(v75[0]);
          sub_1A39530((__int64)v66, (unsigned int *)a6, (__int64)a3);
          sub_1A3AB00((__int64)a1, (__int64)v66);
          goto LABEL_51;
        }
        if ( v75[0] != &v75[2] )
          operator delete(v75[0]);
      }
      goto LABEL_59;
    }
  }
  else
  {
    v38 = (v40 + 50) / 0x64;
    if ( v61 <= 2 || v40 + 50 <= 0x63 )
    {
      if ( !v71[0] )
        goto LABEL_47;
LABEL_26:
      v41 = v72;
      if ( v72 > 0x2710 || (v42 = v73, v73 > 0x2710) )
      {
        v43 = -1;
        goto LABEL_43;
      }
      goto LABEL_38;
    }
    if ( v60 / (unsigned int)v38 <= 2 )
      goto LABEL_59;
    if ( v71[0] )
      goto LABEL_26;
  }
LABEL_50:
  sub_1A3B6B0((__int64)v75, (__int64)v66);
  sub_1A39530((__int64)v75, (unsigned int *)a6, (__int64)a3);
  sub_1A462F0(a2, (__int64)v75, v46, v47, v48, v49);
  sub_1A3AB00((__int64)a1, (__int64)v75);
  sub_17A1D90(v75);
LABEL_51:
  sub_17A1D90(v71);
  sub_17A1D90(v66);
LABEL_31:
  if ( v64 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
  return a1;
}
