__int64 __fastcall sub_14F4830(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        double a7,
        __m128 a8)
{
  int *v9; // r12
  char v11; // al
  __m128 v12; // xmm0
  int v13; // eax
  int *v14; // rsi
  __int64 *v15; // rdi
  __m128i v16; // xmm0
  unsigned int v17; // eax
  __int64 v18; // r14
  __int16 v19; // ax
  int v20; // r13d
  int v21; // r15d
  __int64 *v22; // rdi
  unsigned __int64 v23; // rbx
  __int16 v24; // ax
  unsigned int v25; // r10d
  int v26; // r11d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  char v31; // dl
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  char v34; // r15
  __int64 v35; // rbx
  _DWORD *v36; // r14
  __int16 v37; // ax
  __int64 v38; // r12
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  int v42; // eax
  __int64 *v43; // rdi
  int v44; // r11d
  int v45; // r10d
  char v46; // dl
  __int64 *v47; // rdi
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // rcx
  unsigned __int64 v52; // r13
  __int64 v53; // rdx
  unsigned __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r15
  char *v59; // [rsp+10h] [rbp-118h] BYREF
  unsigned int *v60; // [rsp+18h] [rbp-110h]
  __int64 v61; // [rsp+20h] [rbp-108h]
  __int64 v62; // [rsp+28h] [rbp-100h]
  __int64 **v63; // [rsp+30h] [rbp-F8h]
  __int64 v64; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v65; // [rsp+40h] [rbp-E8h]
  int v66; // [rsp+48h] [rbp-E0h]
  char v67; // [rsp+4Ch] [rbp-DCh] BYREF
  char v68; // [rsp+4Fh] [rbp-D9h]
  _OWORD v69[2]; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+78h] [rbp-B0h]
  _BYTE v72[32]; // [rsp+80h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-88h] BYREF
  int v74; // [rsp+B0h] [rbp-78h]
  __int16 v75; // [rsp+B4h] [rbp-74h]

  v9 = (int *)(a1 + 16);
  v11 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 0;
  v59 = (char *)a1;
  v68 = v11;
  ptr = v72;
  v12 = _mm_loadh_ps((const double *)&v59);
  v71 = 0x400000000LL;
  v69[0] = v12;
  v59 = &v67;
  v13 = *(_DWORD *)(a1 + 16);
  v61 = a2;
  v14 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v13;
  v15 = *(__int64 **)(a1 + 8);
  v16 = (__m128i)_mm_loadh_ps((const double *)&v59);
  v62 = a4;
  v67 = a6;
  v69[1] = v16;
  sub_14634E0(v15, v14);
  v17 = *(_DWORD *)(a1 + 40);
  LOBYTE(v59) = 0;
  v60 = a3;
  *a3 = v17;
  v18 = a1;
  v63 = (__int64 **)v69;
  while ( 1 )
  {
    v19 = *(_WORD *)(v18 + 32);
    v20 = 0;
    if ( v19 == 377 )
    {
      v21 = 1;
    }
    else
    {
      v21 = 0;
      if ( v19 != 378 )
        goto LABEL_4;
      v21 = 2;
    }
    v40 = *(__int64 **)(v18 + 8);
    *(_DWORD *)(v18 + 40) = *(_DWORD *)(v18 + 16);
    sub_14634E0(v40, v9);
    v20 = *(_DWORD *)(v18 + 40);
    if ( v67 )
      sub_14F3990(v63);
    v19 = *(_WORD *)(v18 + 32);
LABEL_4:
    if ( v19 != 5 )
      break;
    v22 = *(__int64 **)(v18 + 8);
    v23 = *(_QWORD *)(v18 + 24);
    *(_DWORD *)(v18 + 40) = *(_DWORD *)(v18 + 16);
    sub_14634E0(v22, v9);
    v24 = *(_WORD *)(v18 + 32);
    v25 = *(_DWORD *)(v18 + 40);
    v26 = 0;
    if ( v24 == 62 )
    {
      v42 = *(_DWORD *)(v18 + 16);
      v43 = *(__int64 **)(v18 + 8);
      LODWORD(v64) = *(_DWORD *)(v18 + 40);
      *(_DWORD *)(v18 + 40) = v42;
      sub_14634E0(v43, v9);
      v44 = *(_DWORD *)(v18 + 40);
      v45 = v64;
      if ( v67 )
      {
        v66 = *(_DWORD *)(v18 + 40);
        sub_14F3990(v63);
        v44 = v66;
        v45 = v64;
      }
      v66 = v44;
      LODWORD(v64) = v45;
      v28 = sub_1496480(v18, nullptr, 5, 3u, nullptr, 0, v16, a8);
      v25 = v64;
      v26 = v66;
      v27 = *(_QWORD *)(v18 + 96);
      if ( v46 )
      {
        LOBYTE(v59) = v46;
        v28 = 0;
      }
      v29 = *(_QWORD *)(v27 + 736);
      goto LABEL_8;
    }
    if ( !v67 )
    {
      v27 = *(_QWORD *)(v18 + 96);
      v28 = 0;
      v29 = *(_QWORD *)(v27 + 736);
LABEL_8:
      v30 = sub_189C680(v29, *(_QWORD *)(v27 + 608), v21, v20, v71, v23, v25, v26, v28);
      if ( !v31 && v30 )
      {
        v32 = (unsigned int)v71;
        v33 = (unsigned int)v71 + 1LL;
        if ( v33 > HIDWORD(v71) )
        {
          v64 = v30;
          sub_2237220(&ptr, v72, v33, 8);
          v32 = (unsigned int)v71;
          v30 = v64;
        }
        *((_QWORD *)ptr + v32) = v30;
        LODWORD(v71) = v71 + 1;
      }
      v24 = *(_WORD *)(v18 + 32);
      goto LABEL_14;
    }
    v48 = v62;
    v49 = *(unsigned int *)(v62 + 8);
    v50 = *(unsigned int *)(v62 + 12);
    if ( v49 >= v50 )
    {
      v52 = v25 | v65 & 0xFFFFFFFF00000000LL;
      v65 = v52;
      if ( v50 < v49 + 1 )
      {
        v57 = v62;
        sub_2237220(v62, v62 + 16, v49 + 1, 16);
        v49 = *(unsigned int *)(v57 + 8);
      }
      v53 = v62;
      v54 = (unsigned __int64 *)(16 * v49 + *(_QWORD *)v62);
      *v54 = v52;
      v54[1] = v23;
      v24 = *(_WORD *)(v18 + 32);
      ++*(_DWORD *)(v53 + 8);
    }
    else
    {
      v51 = *(_QWORD *)v62 + 16 * v49;
      *(_DWORD *)v51 = v25;
      *(_QWORD *)(v51 + 8) = v23;
      ++*(_DWORD *)(v48 + 8);
    }
LABEL_14:
    if ( v24 != 66 )
    {
      v34 = (char)v59;
      v35 = v18;
      v36 = v60;
      if ( (_BYTE)v59 )
        goto LABEL_16;
      if ( (unsigned __int8)sub_1553D50(v35, *v60, a5, 1, 1) )
      {
        v74 = (int)byte_420018;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA760);
        v75 = 63;
        sub_15680D0(v35, &si128, 11, 2);
        if ( *(_WORD *)(v35 + 32) == 52 )
          goto LABEL_39;
      }
      goto LABEL_17;
    }
    v41 = *(__int64 **)(v18 + 8);
    *(_DWORD *)(v18 + 40) = *(_DWORD *)(v18 + 16);
    sub_14634E0(v41, v9);
  }
  v35 = v18;
  v36 = v60;
  if ( v19 != 3 )
  {
    sub_1564840(&si128, v35, v9, 1762);
    sub_AEA040((__int64)&si128);
LABEL_16:
    si128.m128i_i32[0] = (int)&loc_490034;
    v34 = 1;
    sub_15680D0(v35, &si128, 2, 2);
    if ( *(_WORD *)(v35 + 32) == 52 )
    {
LABEL_39:
      v47 = *(__int64 **)(v35 + 8);
      *(_DWORD *)(v35 + 40) = *(_DWORD *)(v35 + 16);
      sub_14634E0(v47, v9);
    }
LABEL_17:
    if ( v67 )
    {
      v37 = *(_WORD *)(v35 + 32);
      if ( v37 == 62 || v37 == 22 )
      {
        sub_14F3990((__int64 **)v69);
        goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v38 = sub_18A90C0(
              *(_QWORD *)(*(_QWORD *)(v35 + 96) + 736LL),
              *(_QWORD *)(*(_QWORD *)(v35 + 96) + 608LL),
              (unsigned int)*v36,
              ptr,
              (unsigned int)v71,
              (unsigned int)*a5);
      *(_QWORD *)(v61 + 16) = v38;
      *v36 = 0;
      *a5 = 0;
      if ( !v34 )
        goto LABEL_22;
    }
    v38 = 0;
    goto LABEL_22;
  }
  v55 = *(_QWORD *)(v35 + 8);
  if ( *(_QWORD *)(v55 + 760) )
  {
    *(_BYTE *)(v55 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v55 + 48) + 6LL) = 1;
  }
  v56 = *(_QWORD *)(v35 + 96);
  v38 = 0;
  *(_WORD *)(v35 + 32) = 1;
  sub_1717260(*(_QWORD *)(v56 + 656), *(_QWORD *)v62, *(unsigned int *)(v62 + 8));
LABEL_22:
  if ( ptr != v72 )
    free(ptr);
  *(_BYTE *)(v35 + 1952) = v68;
  return v38;
}
