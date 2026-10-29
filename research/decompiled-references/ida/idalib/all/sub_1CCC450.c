unsigned __int64 __fastcall sub_1CCC450(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __m128 a7,
        double a8,
        __int64 a9,
        unsigned int a10,
        int a11,
        __int16 a12,
        unsigned int a13,
        __int64 a14)
{
  int v15; // r14d
  __int64 v19; // r12
  char v20; // al
  __int64 v21; // r8
  __int64 v22; // r9
  int *v23; // r15
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD *v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r15
  unsigned __int8 v36; // al
  unsigned __int64 *v37; // rcx
  __int64 v38; // rdi
  unsigned __int64 *v39; // rdx
  unsigned __int64 *v40; // rax
  unsigned __int64 *v41; // rcx
  unsigned __int64 *v42; // rax
  unsigned __int64 *v43; // rdx
  unsigned __int64 *v44; // rdx
  __int64 v45; // rdi
  unsigned __int64 *v46; // rcx
  unsigned __int64 *v47; // rax
  unsigned __int64 *v48; // rdx
  __int64 v49; // rax
  __m128i v50; // xmm1
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // rsi
  __int64 v54; // rbp
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rdi
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // eax
  bool v67; // [rsp+8h] [rbp-110h]
  __int64 v68; // [rsp+8h] [rbp-110h]
  unsigned __int64 v69; // [rsp+8h] [rbp-110h]
  __int64 v70; // [rsp+8h] [rbp-110h]
  char v71; // [rsp+13h] [rbp-105h]
  char v72; // [rsp+14h] [rbp-104h]
  char v73; // [rsp+14h] [rbp-104h]
  bool v74; // [rsp+18h] [rbp-100h]
  char v75; // [rsp+18h] [rbp-100h]
  int v76; // [rsp+1Ch] [rbp-FCh] BYREF
  unsigned __int64 v77; // [rsp+28h] [rbp-F0h] BYREF
  __m128i v78; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v79; // [rsp+48h] [rbp-D0h]
  _QWORD v80[3]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+78h] [rbp-A0h]
  __m128i v83; // [rsp+80h] [rbp-98h] BYREF
  __int64 v84; // [rsp+90h] [rbp-88h]

  v15 = a6;
  v67 = (_DWORD)a6 != 0;
  v19 = a14;
  v76 = a3;
  v20 = sub_1CBDF60(a1, a4, 0, (_DWORD)a6 != 0 ? 6 : 0, 0, a6, a7);
  v21 = a5;
  v22 = v67;
  v71 = v20;
  v23 = (int *)&a10;
  if ( !a10 )
    v23 = &v76;
  v24 = *(_QWORD **)(a1 + 248);
  v25 = *(_QWORD *)(v24[283] + 80LL);
  v26 = *(_QWORD *)(v25 + 72);
  v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v26 & 1) == 0 )
  {
    v28 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v29 = v26 & 2;
      v30 = (__int64)v28;
      if ( !(_DWORD)v29 )
        goto LABEL_6;
      v74 = v67;
      v72 = v21;
      v68 = *(_QWORD *)(v24[283] + 80LL);
      v60 = sub_6E2500(v28, v68, v29, v25, v21, v22);
      v25 = v68;
      LOBYTE(v22) = v74;
      v27 = v60 & 0xFFFFFFFFFFFFFFFELL;
      LOBYTE(v21) = v72;
      v26 = v27 | 1;
      *(_QWORD *)(v68 + 72) = v27 | 1;
    }
  }
  v61 = v26 & 0xFFFFFFFFFFFFFFF8LL;
  v30 = v61;
  if ( v27 )
  {
    if ( (v27 & 4) != 0 )
    {
      v30 = 0;
      if ( v61 )
      {
        v62 = *(_QWORD *)v61;
        v63 = *(_DWORD *)(*(_QWORD *)v61 + 12LL);
        if ( *(_DWORD *)(v61 + 8) != v63 )
        {
          *(_DWORD *)(v61 + 8) = v63;
          v75 = v22;
          v73 = v21;
          v69 = v61;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 152LL))(v62, v25);
          LOBYTE(v22) = v75;
          LOBYTE(v21) = v73;
          v61 = v69;
        }
        v30 = *(_QWORD *)(v61 + 16);
      }
    }
  }
  v24 = *(_QWORD **)(a1 + 248);
LABEL_6:
  if ( v30 )
    v30 += 40;
  v35 = sub_BBEBE0(v24, v30, *v23, a11, a12, v22, a9, v21, a4);
  *(_BYTE *)(v35 + 29) &= 0x9Fu;
  if ( (*(_BYTE *)(v35 + 80) & 2) != 0 )
  {
    v64 = sub_15F25A0(a1, v30, v31, v32, v33, v34);
    if ( v64 )
    {
      v65 = *(unsigned int *)(v64 + 1488);
      if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(v64 + 1492) )
      {
        v70 = v64;
        sub_2237220(v64 + 1480, v64 + 1496, v65 + 1, 8);
        v64 = v70;
        v65 = *(unsigned int *)(v70 + 1488);
      }
      *(_QWORD *)(*(_QWORD *)(v64 + 1480) + 8 * v65) = v35;
      ++*(_DWORD *)(v64 + 1488);
    }
  }
  if ( a9 )
  {
    sub_1CCBE80(a1, (__int64 *)a2, a10, a9, *(double *)a7.m128_u64, a8);
    v36 = *(_BYTE *)(v35 + 28) & 0x7F;
    if ( (unsigned int)v36 - 40 > 6 || v36 == 43 )
    {
LABEL_26:
      if ( !*(_BYTE *)(a2 + 100) )
        goto LABEL_35;
      v44 = *(unsigned __int64 **)(a2 + 80);
      v45 = *(unsigned int *)(a2 + 92);
      v46 = &v44[v45];
      if ( v44 != v46 )
      {
        v47 = *(unsigned __int64 **)(a2 + 80);
        if ( v35 == *v44 )
          goto LABEL_34;
        while ( v46 != ++v47 )
        {
          if ( v35 == *v47 )
            goto LABEL_34;
        }
      }
      if ( (unsigned int)v45 < *(_DWORD *)(a2 + 88) )
      {
        *(_DWORD *)(a2 + 92) = v45 + 1;
        *v46 = v35;
        v44 = *(unsigned __int64 **)(a2 + 80);
        v47 = &v44[v45];
      }
      else
      {
LABEL_35:
        v47 = (unsigned __int64 *)sub_2236760(a2 + 80, v35);
        v44 = *(unsigned __int64 **)(a2 + 80);
        if ( !*(_BYTE *)(a2 + 100) )
        {
          v48 = &v44[*(unsigned int *)(a2 + 88)];
LABEL_37:
          if ( v48 != v47 && (*v47 == -2 || *v47 == -1) )
          {
            do
              ++v47;
            while ( v48 != v47 && *v47 >= 0xFFFFFFFFFFFFFFFELL );
          }
          sub_15C17C0(a1 + 2608, v35);
          goto LABEL_43;
        }
      }
LABEL_34:
      v48 = &v44[*(unsigned int *)(a2 + 92)];
      goto LABEL_37;
    }
    if ( !*(_BYTE *)(a2 + 452) )
      goto LABEL_19;
    v37 = *(unsigned __int64 **)(a2 + 432);
    v38 = *(unsigned int *)(a2 + 444);
    v39 = &v37[v38];
    if ( v37 != v39 )
    {
      v40 = *(unsigned __int64 **)(a2 + 432);
      if ( v35 == *v37 )
        goto LABEL_74;
      while ( v39 != ++v40 )
      {
        if ( v35 == *v40 )
          goto LABEL_74;
      }
    }
    if ( (unsigned int)v38 < *(_DWORD *)(a2 + 440) )
    {
      *(_DWORD *)(a2 + 444) = v38 + 1;
      *v39 = v35;
      v37 = *(unsigned __int64 **)(a2 + 432);
      v40 = &v37[v38];
    }
    else
    {
LABEL_19:
      v40 = (unsigned __int64 *)sub_2236760(a2 + 432, v35);
      v37 = *(unsigned __int64 **)(a2 + 432);
      if ( !*(_BYTE *)(a2 + 452) )
      {
        v41 = &v37[*(unsigned int *)(a2 + 440)];
LABEL_21:
        if ( v41 != v40 && *v40 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v42 = v40 + 1;
          do
          {
            v43 = v42;
            if ( v41 == v42 )
              break;
            ++v42;
          }
          while ( *v43 >= 0xFFFFFFFFFFFFFFFELL );
        }
        goto LABEL_26;
      }
    }
LABEL_74:
    v41 = &v37[*(unsigned int *)(a2 + 444)];
    goto LABEL_21;
  }
LABEL_43:
  if ( (*(_DWORD *)(a4 + 20) & 0x1FFFFFFF) != 0 )
  {
    if ( v71 )
      sub_B88650(v35, 1);
  }
  else
  {
    sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), *(_DWORD *)(v35 + 24), 0x142Eu, 0);
    v78.m128i_i64[0] = *(_QWORD *)(a4 + 12);
    sub_1587DB0((__int64)v80, v78.m128i_i64);
    sub_15F7200(v80);
    sub_B88650(v35, 1);
  }
  v49 = *(_QWORD *)(v19 + 8);
  if ( v15 )
  {
    if ( !v49 )
      return v35;
    sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a13, 0x141Au, 0);
    sub_15F7200(v80);
    a7.m128_u64[0] = 0;
    *(_DWORD *)v19 = 0;
    *(_QWORD *)(v19 + 8) = 0;
    *(_QWORD *)(v19 + 16) = 0;
    LODWORD(v80[0]) = 0;
    v80[1] = 0;
    v80[2] = 0;
    *(_OWORD *)ptr = 0;
    v82 = 0;
    v83 = 0u;
    v84 = 0;
    sub_E907B0(v19 + 24, (__int64)ptr);
    v50 = _mm_load_si128(&v83);
    *(_DWORD *)(v19 + 64) = v84;
    v51 = HIDWORD(v84);
    *(__m128i *)(v19 + 48) = v50;
    *(_DWORD *)(v19 + 68) = v51;
    if ( HIDWORD(v82) )
      free(ptr[1]);
    v49 = *(_QWORD *)(v19 + 8);
  }
  if ( v49 )
  {
    sub_1CAFE90(&v78, (_QWORD **)(a1 + 248), v19);
    v52 = v78.m128i_i64[1];
    sub_F22A90(v80, v78.m128i_i64[1]);
    if ( sub_F22B30(v80) )
    {
      v66 = sub_1CB2FB0((__int64)&v78, v52, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), v66, 0x13F3u, 0);
      v77 = sub_F1E510((__int64)&v78, a1 + 8, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)v80, (__int64 *)&v77);
      sub_15F7200(v80);
    }
    else
    {
      v53 = v78.m128i_i64[1];
      sub_F22A90(v80, v78.m128i_i64[1]);
      v54 = v80[0];
      if ( ((v78.m128i_i32[0] + 2147483642) & 0x7FFFFFFFu) <= 1 )
        v55 = *(unsigned int *)((v79 & 0xFFFFFFFFFFFFFFFCLL) + 16);
      else
        v55 = (unsigned int)sub_F1E510((__int64)&v78, v53, *(double *)a7.m128_u64);
      if ( !(unsigned __int8)sub_1E52ED0(a1, v55, v54, 12) )
        sub_BC4990(v35, *(_QWORD **)(a1 + 248), &v78, v56, v57, v58);
    }
  }
  return v35;
}
