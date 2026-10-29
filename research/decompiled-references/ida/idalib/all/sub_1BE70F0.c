__int64 __fastcall sub_1BE70F0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 *a4,
        __int64 a5,
        char a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  __int16 v11; // r11
  __int64 v12; // r10
  _DWORD *v13; // rbx
  void **v14; // rcx
  unsigned __int64 v15; // r12
  __int64 *v16; // rdi
  __int64 *v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rdx
  __m128i *v25; // r13
  unsigned __int64 v26; // rsi
  __m128i *v27; // rcx
  __int64 v28; // rdx
  __m128i *v29; // r13
  __int64 v30; // rax
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  _QWORD *v33; // r13
  __int64 v34; // rax
  _QWORD *v35; // r15
  unsigned __int64 v36; // rdi
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  __m128i *v40; // r9
  __int64 v41; // rsi
  __int64 *v42; // [rsp+0h] [rbp-478h]
  __int64 v44; // [rsp+20h] [rbp-458h]
  __int64 v45; // [rsp+28h] [rbp-450h]
  int v49; // [rsp+40h] [rbp-438h]
  int v50; // [rsp+48h] [rbp-430h]
  __int64 v51; // [rsp+50h] [rbp-428h] BYREF
  __int64 v52; // [rsp+58h] [rbp-420h] BYREF
  __m128i v53; // [rsp+60h] [rbp-418h] BYREF
  __m128i v54; // [rsp+70h] [rbp-408h] BYREF
  __m128i v55; // [rsp+80h] [rbp-3F8h] BYREF
  __m128i v56; // [rsp+90h] [rbp-3E8h] BYREF
  __m128i v57; // [rsp+A0h] [rbp-3D8h] BYREF
  __m128i v58[7]; // [rsp+B0h] [rbp-3C8h] BYREF
  void *ptr[2]; // [rsp+120h] [rbp-358h] BYREF
  _BYTE v60[256]; // [rsp+130h] [rbp-348h] BYREF
  __int64 v61; // [rsp+230h] [rbp-248h]
  __int128 v62; // [rsp+240h] [rbp-238h] BYREF
  int v63; // [rsp+250h] [rbp-228h]
  __int16 v64; // [rsp+254h] [rbp-224h]
  __int64 v65; // [rsp+258h] [rbp-220h]
  _QWORD *v66; // [rsp+260h] [rbp-218h]
  __int64 v67; // [rsp+268h] [rbp-210h]
  _QWORD v68[17]; // [rsp+270h] [rbp-208h] BYREF
  __int64 v69; // [rsp+2F8h] [rbp-180h]
  __int64 v70; // [rsp+300h] [rbp-178h]
  __int64 v71; // [rsp+310h] [rbp-168h]
  __int64 v72; // [rsp+318h] [rbp-160h]
  int v73; // [rsp+328h] [rbp-150h]
  char v74; // [rsp+32Ch] [rbp-14Ch]
  void *v75; // [rsp+330h] [rbp-148h]
  __int64 v76; // [rsp+338h] [rbp-140h]
  _QWORD v77[10]; // [rsp+340h] [rbp-138h] BYREF
  void *v78; // [rsp+390h] [rbp-E8h]
  __int64 v79; // [rsp+398h] [rbp-E0h]
  _WORD v80[52]; // [rsp+3A0h] [rbp-D8h] BYREF
  void *v81; // [rsp+408h] [rbp-70h]
  __int64 v82; // [rsp+410h] [rbp-68h]
  _BYTE v83[96]; // [rsp+418h] [rbp-60h] BYREF

  v8 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
    return 0;
  v11 = *(_WORD *)a2 & 0x1FF;
  v12 = 8LL * *(unsigned int *)(a2 + 4);
  v13 = (_DWORD *)(a2 + v12 + 80);
  if ( v11 == 24 )
    v13 = (_DWORD *)(a2 + v12 + 64);
  if ( !*v13 )
    return 0;
  v14 = ptr;
  v15 = a2;
  v45 = a5;
  ptr[0] = v60;
  ptr[1] = (void *)0x800000000LL;
  v61 = 0;
  if ( (v8 & 0x80000) == 0 )
    goto LABEL_15;
  if ( v11 == 24 )
  {
    v42 = (__int64 *)(a2 + v12 + 64);
    v16 = v42;
    v17 = (__int64 *)(a2 + 64);
    if ( *(_DWORD *)v42 )
      goto LABEL_10;
  }
  else
  {
    a5 = *(unsigned int *)(a2 + v12 + 80);
    v42 = (__int64 *)(a2 + v12 + 80);
    v16 = v42;
    if ( (_DWORD)a5 )
    {
LABEL_10:
      v18 = v8 >> 16;
      if ( (v18 & 8) != 0 )
      {
        if ( v11 == 24 )
        {
          if ( *(_DWORD *)(a2 + v12 + 64) )
          {
            a2 += v12 + 16LL * ((v18 & 8) != 0) + 64;
LABEL_14:
            sub_F1EA70(v16, a2, (__int64)ptr);
            v11 = *(_WORD *)v15 & 0x1FF;
            v12 = 8LL * *(unsigned int *)(v15 + 4);
LABEL_15:
            if ( v11 == 24 )
            {
              v17 = (__int64 *)(v15 + 64);
              v42 = (__int64 *)(v15 + v12 + 64);
            }
            else
            {
              v17 = (__int64 *)(v15 + 80);
              v42 = (__int64 *)(v15 + v12 + 80);
            }
            goto LABEL_17;
          }
        }
        else if ( *(_DWORD *)(a2 + v12 + 80) )
        {
          a2 += v12 + 16LL * ((v18 & 8) != 0) + 80;
          goto LABEL_14;
        }
      }
      a2 = 0;
      goto LABEL_14;
    }
    v17 = (__int64 *)(a2 + 80);
  }
LABEL_17:
  if ( v17 != v42 )
  {
    v44 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
        v20 = *(_BYTE *)(v19 + 28) & 0x7F;
        if ( (unsigned int)v20 - 53 <= 1 || (v21 = (v20 + 52) & 0x7F, (unsigned __int8)v21 <= 1u) )
        {
          v19 = sub_B72ED0(*v17 & 0xFFFFFFFFFFFFFFF8LL);
          v20 = *(_BYTE *)(v19 + 28) & 0x7F;
        }
        if ( v20 != 71 )
          goto LABEL_51;
        v22 = *(_DWORD *)(v15 + 24);
        a7 = 0.0;
        v80[48] = 0;
        v63 = v22;
        a2 = v19;
        v64 = 0;
        v51 = 0;
        v66 = v68;
        v69 &= 0xFFFFFFFE00000000LL;
        v71 &= 0xFFFFFFFE00000000LL;
        v75 = v77;
        v76 = 0x800000000LL;
        v78 = v80;
        v62 = 0;
        v65 = 0;
        v67 = 0x400000000LL;
        v68[16] = 0;
        v70 = 0;
        v72 = 0;
        v73 = 0;
        v74 = 0;
        v77[8] = 0;
        v77[9] = 0;
        v79 = 0x400000000LL;
        v81 = v83;
        v82 = 0x400000000LL;
        v23 = sub_1D76460(a1, v19, ptr, &v51, &v62, 1);
        if ( !v23 )
          break;
        v14 = (void **)v45;
        if ( v45 )
        {
          v24 = *(unsigned int *)(v45 + 8);
          v25 = *(__m128i **)v45;
          a7 = 0.0;
          v26 = *(unsigned int *)(v45 + 12);
          v27 = (__m128i *)(*(_QWORD *)v45 + (v24 << 6));
          if ( v24 >= v26 )
          {
            v39 = v24 + 1;
            v56 = 0;
            v40 = &v56;
            v57 = 0;
            memset(v58, 0, 32);
            if ( v26 < v39 )
            {
              v41 = v45 + 16;
              if ( v25 > &v56 || v27 <= &v56 )
              {
                v50 = v23;
                sub_2237220(v45, v41, v39, 64);
                v40 = &v56;
                v23 = v50;
                v27 = (__m128i *)(*(_QWORD *)v45 + ((unsigned __int64)*(unsigned int *)(v45 + 8) << 6));
              }
              else
              {
                v49 = v23;
                sub_2237220(v45, v41, v39, 64);
                v23 = v49;
                v40 = (__m128i *)(*(_QWORD *)v45 + (char *)&v56 - (char *)v25);
                v27 = (__m128i *)(((unsigned __int64)*(unsigned int *)(v45 + 8) << 6) + *(_QWORD *)v45);
              }
            }
            *v27 = _mm_loadu_si128(v40);
            v27[1] = _mm_loadu_si128(v40 + 1);
            v27[2] = _mm_loadu_si128(v40 + 2);
            v27[3] = _mm_loadu_si128(v40 + 3);
          }
          else
          {
            *v27 = 0;
            v27[1] = 0;
            v27[2] = 0;
            v27[3] = 0;
          }
          v28 = (unsigned int)(*(_DWORD *)(v45 + 8) + 1);
          *(_DWORD *)(v45 + 8) = v28;
          v29 = (__m128i *)(*(_QWORD *)v45 + (v28 << 6) - 64);
          a2 = *(_QWORD *)(a1 + 248);
          sub_1BD97A0((__int64)&v53, a2, v23, (__int64 *)&v62);
          v30 = *(_QWORD *)(v19 + 48);
          v21 = *v17;
          a8 = (__m128)_mm_load_si128(&v53);
          v31 = _mm_load_si128(&v54);
          v32 = _mm_load_si128(&v55);
          v56 = (__m128i)a8;
          v57 = v31;
          v58[0] = v32;
          v29->m128i_i64[0] = v21;
          v29->m128i_i64[1] = v30;
          v29[1] = _mm_load_si128(&v56);
          v29[2] = _mm_load_si128(&v57);
          v29[3] = _mm_load_si128(v58);
        }
LABEL_37:
        if ( v81 != v83 )
          free(v81);
        if ( v78 != v80 )
          free(v78);
        if ( v75 != v77 )
          free(v75);
        v33 = v66;
        v34 = 4LL * (unsigned int)v67;
        v35 = &v66[v34];
        if ( v66 != &v66[v34] )
        {
          do
          {
            v35 -= 4;
            a2 = v35[1];
            if ( a2 )
            {
              v36 = v35[2];
              if ( v36 )
                sub_1580C40(v36, a2);
            }
          }
          while ( v33 != v35 );
          v35 = v66;
        }
        if ( v35 != v68 )
          free(v35);
LABEL_51:
        if ( v42 == ++v17 )
          goto LABEL_52;
      }
      if ( v44 )
      {
        if ( !a6 || (a2 = *(_QWORD *)(v44 + 48), !(unsigned __int8)sub_1D3A950(a1, a2, *(_QWORD *)(v51 + 48))) )
        {
          if ( a3 )
          {
            v38 = sub_C00A40(v15, a2, v21, (__int64)v14, a5);
            sub_168B9F0((__int64)&v56, (__int64 *)(a1 + 8), v38, 0xB8Cu, 0);
            v52 = *(_QWORD *)(v15 + 16);
            sub_15894B0((__int64)&v56, &v52);
            sub_15F7200(&v56);
            sub_1BE6FF0(a1, v15, 0, 0);
          }
          sub_19A2E00((__int64)&v62);
          break;
        }
        goto LABEL_37;
      }
      v44 = v51;
      if ( a4 )
        *a4 = *v17;
      ++v17;
      sub_19A2E00((__int64)&v62);
      if ( v42 == v17 )
      {
LABEL_52:
        v9 = v44;
        if ( v44 )
        {
          v37 = sub_C00A40(v15, a2, v21, (__int64)v14, a5);
          if ( !sub_1BCC890(a1, v44, v37, a3, a7, a8) )
            goto LABEL_31;
        }
        break;
      }
    }
  }
  v9 = 0;
LABEL_31:
  if ( ptr[0] != v60 )
    free(ptr[0]);
  return v9;
}
