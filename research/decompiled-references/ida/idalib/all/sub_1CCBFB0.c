__int64 __fastcall sub_1CCBFB0(
        __int64 *a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __m128 a7,
        double a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        __int64 a13,
        unsigned __int8 a14)
{
  _QWORD *v20; // rdi
  unsigned __int8 v21; // r9
  _BOOL8 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  _QWORD *v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v35; // al
  __int64 *v36; // rcx
  __int64 v37; // rdi
  __int64 *v38; // rdx
  __int64 *v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rax
  __int64 *v42; // rdx
  __int64 *v43; // rdx
  __int64 v44; // rdi
  __int64 *v45; // rcx
  __int64 *v46; // rax
  __int64 *v47; // rdx
  __int64 *v48; // rax
  __int64 *v49; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdi
  int v54; // eax
  unsigned __int64 v55; // rbp
  __m128i v56; // xmm0
  _QWORD *v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // [rsp+0h] [rbp-108h]
  unsigned __int64 v64; // [rsp+0h] [rbp-108h]
  __int64 v65; // [rsp+0h] [rbp-108h]
  unsigned __int8 v66; // [rsp+8h] [rbp-100h]
  bool v67; // [rsp+Ch] [rbp-FCh]
  bool v68; // [rsp+Ch] [rbp-FCh]
  __int64 v69; // [rsp+18h] [rbp-F0h] BYREF
  __m128i v70; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+30h] [rbp-D8h]
  __m128i v72; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+58h] [rbp-B0h]

  v20 = (_QWORD *)a1[31];
  v21 = a14;
  v22 = a4 != 0;
  v23 = *(_QWORD *)(v20[283] + 80LL);
  v24 = *(_QWORD *)(v23 + 72);
  v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v24 & 1) == 0 )
  {
    v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v27 = v24 & 2;
      v28 = (__int64)v26;
      if ( !(_DWORD)v27 )
        goto LABEL_4;
      v67 = v22;
      v63 = *(_QWORD *)(v20[283] + 80LL);
      v51 = sub_6E2500(v26, v63, v23, v27, v22, a14);
      v23 = v63;
      LOBYTE(v22) = v67;
      v25 = v51 & 0xFFFFFFFFFFFFFFFELL;
      v21 = a14;
      v24 = v25 | 1;
      *(_QWORD *)(v63 + 72) = v25 | 1;
    }
  }
  v52 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  v28 = v52;
  if ( v25 )
  {
    if ( (v25 & 4) != 0 )
    {
      v28 = 0;
      if ( v52 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(_DWORD *)(*(_QWORD *)v52 + 12LL);
        if ( *(_DWORD *)(v52 + 8) != v54 )
        {
          *(_DWORD *)(v52 + 8) = v54;
          v68 = v22;
          v66 = v21;
          v64 = v52;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 152LL))(v53, v23);
          LOBYTE(v22) = v68;
          v21 = v66;
          v52 = v64;
        }
        v28 = *(_QWORD *)(v52 + 16);
      }
    }
  }
  v20 = (_QWORD *)a1[31];
LABEL_4:
  if ( v28 )
    v28 += 40;
  v29 = sub_BBE1D0(v20, v28, a5, a9, a10, a11, a6, a3, v22, v21, 0);
  *(_BYTE *)(v29 + 29) &= 0x9Fu;
  v30 = v29;
  if ( sub_BBE5D0(v29) )
  {
    v61 = sub_15F25A0((__int64)a1, v28, v31, v32, v33, v34);
    if ( v61 )
    {
      v62 = *(unsigned int *)(v61 + 1488);
      if ( v62 + 1 > (unsigned __int64)*(unsigned int *)(v61 + 1492) )
      {
        v65 = v61;
        sub_2237220(v61 + 1480, v61 + 1496, v62 + 1, 8);
        v61 = v65;
        v62 = *(unsigned int *)(v65 + 1488);
      }
      *(_QWORD *)(*(_QWORD *)(v61 + 1480) + 8 * v62) = v30;
      ++*(_DWORD *)(v61 + 1488);
    }
  }
  if ( a6 )
  {
    sub_1CCBE80((__int64)a1, (__int64 *)a2, a9, a6, *(double *)a7.m128_u64, a8);
    v35 = *(_BYTE *)(v30 + 28) & 0x7F;
    if ( (unsigned int)v35 - 40 > 6 || v35 == 43 )
    {
LABEL_24:
      if ( !*(_BYTE *)(a2 + 100) )
        goto LABEL_33;
      v43 = *(__int64 **)(a2 + 80);
      v44 = *(unsigned int *)(a2 + 92);
      v45 = &v43[v44];
      if ( v43 != v45 )
      {
        v46 = *(__int64 **)(a2 + 80);
        if ( v30 == *v43 )
          goto LABEL_32;
        while ( v45 != ++v46 )
        {
          if ( v30 == *v46 )
            goto LABEL_32;
        }
      }
      if ( (unsigned int)v44 < *(_DWORD *)(a2 + 88) )
      {
        *(_DWORD *)(a2 + 92) = v44 + 1;
        *v45 = v30;
        v43 = *(__int64 **)(a2 + 80);
        v46 = &v43[v44];
      }
      else
      {
LABEL_33:
        v46 = (__int64 *)sub_2236760(a2 + 80, v30);
        v43 = *(__int64 **)(a2 + 80);
        if ( !*(_BYTE *)(a2 + 100) )
        {
          v47 = &v43[*(unsigned int *)(a2 + 88)];
LABEL_35:
          if ( v46 != v47 && (unsigned __int64)*v46 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v48 = v46 + 1;
            do
            {
              v49 = v48;
              if ( v47 == v48 )
                break;
              ++v48;
            }
            while ( (unsigned __int64)*v49 >= 0xFFFFFFFFFFFFFFFELL );
          }
          sub_15C17C0((__int64)(a1 + 326), v30);
          goto LABEL_41;
        }
      }
LABEL_32:
      v47 = &v43[*(unsigned int *)(a2 + 92)];
      goto LABEL_35;
    }
    if ( !*(_BYTE *)(a2 + 452) )
      goto LABEL_17;
    v36 = *(__int64 **)(a2 + 432);
    v37 = *(unsigned int *)(a2 + 444);
    v38 = &v36[v37];
    if ( v36 != v38 )
    {
      v39 = *(__int64 **)(a2 + 432);
      if ( v30 == *v36 )
        goto LABEL_62;
      while ( v38 != ++v39 )
      {
        if ( v30 == *v39 )
          goto LABEL_62;
      }
    }
    if ( (unsigned int)v37 < *(_DWORD *)(a2 + 440) )
    {
      *(_DWORD *)(a2 + 444) = v37 + 1;
      *v38 = v30;
      v36 = *(__int64 **)(a2 + 432);
      v39 = &v36[v37];
    }
    else
    {
LABEL_17:
      v39 = (__int64 *)sub_2236760(a2 + 432, v30);
      v36 = *(__int64 **)(a2 + 432);
      if ( !*(_BYTE *)(a2 + 452) )
      {
        v40 = &v36[*(unsigned int *)(a2 + 440)];
LABEL_19:
        if ( v40 != v39 && (unsigned __int64)*v39 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v41 = v39 + 1;
          do
          {
            v42 = v41;
            if ( v40 == v41 )
              break;
            ++v41;
          }
          while ( (unsigned __int64)*v42 >= 0xFFFFFFFFFFFFFFFELL );
        }
        goto LABEL_24;
      }
    }
LABEL_62:
    v40 = &v36[*(unsigned int *)(a2 + 444)];
    goto LABEL_19;
  }
LABEL_41:
  if ( a13 )
  {
    if ( a4 )
    {
      sub_168B9F0((__int64)&v72, a1 + 1, a12, 0x141Au, 0);
      sub_15F7200(&v72);
    }
    else
    {
      sub_1E5F010(a13, &v69);
      if ( !(unsigned __int8)sub_1E535C0(a1, a9, v69, 12) )
      {
        if ( (unsigned __int8)sub_1CBCEC0(a1, v69, a7) )
        {
          sub_B88650(v30, 1);
        }
        else
        {
          v55 = v69 & 0xFFFFFFFFFFFFFFFCLL | 2;
          sub_F1D250((__int64)&v70, *(_QWORD *)v69, 0, 0);
          v56 = _mm_load_si128(&v70);
          v57 = (_QWORD *)a1[31];
          v74 = v55;
          v72 = v56;
          v73 = v71;
          sub_BC48F0(v30, v57, &v72, v58, v59, v60);
        }
      }
    }
  }
  return v30;
}
