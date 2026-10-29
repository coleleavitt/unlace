void __fastcall sub_13C53E0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        __int64 *a7,
        char a8,
        int a9)
{
  void **p_s2; // r12
  void **v10; // rbp
  void **v11; // r13
  __int64 *v12; // rdi
  __int64 i; // rax
  unsigned __int64 v14; // rax
  char v15; // r15
  size_t v16; // rax
  _BYTE *v17; // rsi
  _BYTE *v18; // rdx
  unsigned __int8 **v19; // r15
  size_t v20; // rax
  _BYTE *v21; // rdi
  void **v22; // r8
  unsigned __int64 v23; // rdx
  void **v24; // r9
  __int64 v25; // rax
  void **v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 *v29; // rax
  void **v30; // rcx
  void *v31; // rdx
  __int64 *v32; // r9
  void *v33; // rdi
  size_t v34; // rdx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // edx
  __int64 *v38; // rax
  void **v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  void **v42; // rax
  void **v43; // rbx
  void **v44; // r14
  void **v45; // r12
  void **v46; // rdi
  int v47; // edx
  void **v48; // rax
  void **v49; // rdi
  int *v50; // [rsp+0h] [rbp-468h]
  _BYTE *v51; // [rsp+8h] [rbp-460h]
  signed __int64 v52; // [rsp+10h] [rbp-458h]
  __int64 v53; // [rsp+18h] [rbp-450h]
  int v54; // [rsp+20h] [rbp-448h]
  char v55; // [rsp+27h] [rbp-441h]
  void **p_src; // [rsp+28h] [rbp-440h] BYREF
  unsigned __int8 **v57; // [rsp+30h] [rbp-438h]
  void **v58; // [rsp+38h] [rbp-430h]
  void **v59; // [rsp+40h] [rbp-428h]
  __int64 *v60; // [rsp+48h] [rbp-420h]
  char v61; // [rsp+5Eh] [rbp-40Ah] BYREF
  char v62; // [rsp+5Fh] [rbp-409h] BYREF
  void *src; // [rsp+60h] [rbp-408h] BYREF
  size_t n; // [rsp+68h] [rbp-400h]
  _QWORD v65[2]; // [rsp+70h] [rbp-3F8h] BYREF
  int v66; // [rsp+80h] [rbp-3E8h] BYREF
  int v67; // [rsp+84h] [rbp-3E4h]
  char v68; // [rsp+88h] [rbp-3E0h]
  __int64 v69; // [rsp+8Ch] [rbp-3DCh]
  char v70; // [rsp+94h] [rbp-3D4h]
  void *dest; // [rsp+98h] [rbp-3D0h]
  __m128 v72; // [rsp+A0h] [rbp-3C8h] BYREF
  char v73; // [rsp+B8h] [rbp-3B0h]
  void **v74; // [rsp+C0h] [rbp-3A8h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-3A0h]
  void *s1; // [rsp+110h] [rbp-358h] BYREF
  size_t v77[2]; // [rsp+118h] [rbp-350h]
  _BYTE v78[136]; // [rsp+128h] [rbp-340h] BYREF
  void *s2; // [rsp+1B0h] [rbp-2B8h] BYREF
  __int128 v80; // [rsp+1B8h] [rbp-2B0h]
  __int64 v81; // [rsp+1C8h] [rbp-2A0h] BYREF
  void *v82; // [rsp+250h] [rbp-218h] BYREF
  __int128 v83; // [rsp+258h] [rbp-210h]
  __int64 v84; // [rsp+268h] [rbp-200h] BYREF
  void *v85; // [rsp+2F0h] [rbp-178h] BYREF
  __int128 v86; // [rsp+2F8h] [rbp-170h]
  _BYTE v87[136]; // [rsp+308h] [rbp-160h] BYREF
  void *ptr; // [rsp+390h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+398h] [rbp-D0h]
  _BYTE v90[192]; // [rsp+3A8h] [rbp-C0h] BYREF

  p_s2 = &s2;
  v53 = a1;
  v10 = &v82;
  v11 = &v85;
  v54 = a2;
  LODWORD(v50) = a9;
  s1 = v78;
  v51 = a5;
  s2 = &v81;
  v52 = a6;
  v61 = 0;
  *(__m128i *)v77 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v80 = *(_OWORD *)v77;
  v82 = &v84;
  v83 = *(_OWORD *)v77;
  v85 = v87;
  v86 = *(_OWORD *)v77;
  if ( (unsigned __int8)sub_13C05F0(a3, a4, &v61, &s1, &v82) )
  {
    v12 = a7;
    v62 = 0;
    for ( i = a7[1]; i; i = *(_QWORD *)(v14 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v14 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v14 )
        break;
      v12 = (__int64 *)v14;
    }
    v15 = sub_13C05F0((__int64)(v12 + 4), *v12, &v62, &s2, &v85);
    v55 = v15;
    if ( a8 || (_BYTE)v50 )
      goto LABEL_26;
    v16 = j__strlen("<");
    ptr = v90;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&ptr, "<", &asc_2326C50[v16 + 2]);
    if ( v15 )
    {
      v17 = v85;
      v18 = (char *)v85 + v86;
    }
    else
    {
      v17 = v51;
      v18 = &v51[v52];
    }
    v19 = (unsigned __int8 **)&v74;
    sub_A1FE50(&ptr, v17, v18);
    v20 = j__strlen(">");
    sub_A1FE50(&ptr, ">", &asc_2317EAF[v20 + 2]);
    sub_FC70B0((__int64)&v74, v53, v54, 1415);
    sub_AEC220((unsigned __int8 **)&v74, v51, v52);
    p_src = &src;
    v50 = &v66;
    v66 = v54;
    v67 = v54;
    dest = &v72.m128_u16[4];
    v58 = (void **)&v72.m128_u64[1];
    src = v65;
    v57 = (unsigned __int8 **)v65;
    v69 = 0;
    v70 = 0;
    v72.m128_u64[0] = 0;
    v72.m128_i8[8] = 0;
    v73 = 0;
    v68 = 1;
    sub_13BF290(&src, ptr, (__int64)ptr + si128.m128i_i64[0]);
    v21 = dest;
    v22 = &src;
    if ( src == v65 )
    {
      v34 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *(_BYTE *)dest = v65[0];
          v34 = n;
        }
        else
        {
          memcpy(dest, src, n);
          v34 = n;
          v22 = p_src;
        }
        v21 = dest;
      }
      v72.m128_u64[0] = v34;
      v21[v34] = 0;
      v21 = src;
      goto LABEL_14;
    }
    if ( dest == v58 )
    {
      p_src = (void **)v65[0];
      dest = src;
      v72 = _mm_loadh_ps((const double *)&p_src);
    }
    else
    {
      p_src = (void **)v65[0];
      v23 = v72.m128_u64[1];
      dest = src;
      v72 = _mm_loadh_ps((const double *)&p_src);
      if ( v21 )
      {
        src = v21;
        v65[0] = v23;
LABEL_14:
        n = 0;
        *v21 = 0;
        if ( src != v22 + 2 )
        {
          p_src = v22;
          operator delete(src);
          v22 = p_src;
        }
        if ( v66 && v67 )
        {
          v24 = v74;
          if ( v74 )
          {
            v25 = *((unsigned int *)v74 + 134);
            v26 = (void **)v74[66];
            v27 = *((unsigned int *)v74 + 135);
            v28 = v25 + 1;
            v29 = (__int64 *)&v26[8 * v25];
          }
          else
          {
            v35 = v75;
            v36 = *(_DWORD *)(v75 + 14976);
            if ( v36 )
            {
              v40 = (unsigned int)(v36 - 1);
              *(_DWORD *)(v75 + 14976) = v40;
              v24 = *(void ***)(v35 + 8 * v40 + 14848);
              v41 = *((unsigned int *)v24 + 134);
              *(_BYTE *)v24 = 0;
              v26 = (void **)v24[66];
              *((_DWORD *)v24 + 106) = 0;
              v42 = &v26[8 * v41];
              if ( v26 != v42 )
              {
                p_src = &v85;
                v43 = v42;
                v57 = (unsigned __int8 **)&v74;
                v44 = v22;
                v58 = &v82;
                v59 = &s2;
                v45 = v24;
                do
                {
                  while ( 1 )
                  {
                    v43 -= 8;
                    v46 = (void **)v43[3];
                    if ( v46 == v43 + 5 )
                      break;
                    operator delete(v46);
                    if ( v26 == v43 )
                      goto LABEL_66;
                  }
                }
                while ( v26 != v43 );
LABEL_66:
                v24 = v45;
                v22 = v44;
                v11 = p_src;
                v10 = v58;
                v19 = v57;
                p_s2 = v59;
                v26 = (void **)v24[66];
              }
              *((_DWORD *)v24 + 134) = 0;
              v27 = *((unsigned int *)v24 + 135);
            }
            else
            {
              p_src = v22;
              v27 = 6;
              v24 = (void **)operator new(0x3A0u);
              *(_BYTE *)v24 = 0;
              v24[12] = v24 + 14;
              v26 = v24 + 68;
              v24[16] = v24 + 18;
              v24[20] = v24 + 22;
              v24[24] = v24 + 26;
              v24[28] = v24 + 30;
              v24[32] = v24 + 34;
              v24[36] = v24 + 38;
              v24[40] = v24 + 42;
              v24[44] = v24 + 46;
              v24[48] = v24 + 50;
              v24[52] = v24 + 54;
              v24[13] = nullptr;
              *((_BYTE *)v24 + 112) = 0;
              v24[17] = nullptr;
              *((_BYTE *)v24 + 144) = 0;
              v24[21] = nullptr;
              *((_BYTE *)v24 + 176) = 0;
              v24[25] = nullptr;
              *((_BYTE *)v24 + 208) = 0;
              v24[29] = nullptr;
              *((_BYTE *)v24 + 240) = 0;
              v24[33] = nullptr;
              *((_BYTE *)v24 + 272) = 0;
              v24[37] = nullptr;
              *((_BYTE *)v24 + 304) = 0;
              v24[41] = nullptr;
              *((_BYTE *)v24 + 336) = 0;
              v24[45] = nullptr;
              *((_BYTE *)v24 + 368) = 0;
              v24[49] = nullptr;
              *((_BYTE *)v24 + 400) = 0;
              v24[53] = (void *)0x800000000LL;
              v22 = p_src;
              v24[66] = v24 + 68;
              v24[67] = (void *)0x600000000LL;
            }
            v74 = v24;
            v29 = (__int64 *)v26;
            v28 = 1;
          }
          v30 = (void **)v50;
          if ( v28 > v27 )
          {
            if ( v26 > (void **)v50 || v29 <= (__int64 *)v50 )
            {
              v59 = v24;
              v58 = v24 + 68;
              v57 = (unsigned __int8 **)(v24 + 66);
              p_src = (void **)sub_2237400(v24 + 66, v24 + 68, v28, 64, v22);
              sub_9EF810((__int64 *)v57, (__int64)p_src);
              v24 = v59;
              v47 = (int)src;
              v48 = p_src;
              v49 = (void **)v59[66];
              if ( v49 == v58 )
              {
                v59[66] = p_src;
              }
              else
              {
                v58 = (void **)src;
                v57 = (unsigned __int8 **)p_src;
                p_src = v59;
                free(v49);
                v24 = p_src;
                v48 = (void **)v57;
                v47 = (int)v58;
                p_src[66] = v57;
              }
              *((_DWORD *)v24 + 135) = v47;
              v30 = (void **)v50;
              v29 = (__int64 *)&v48[8 * (unsigned __int64)*((unsigned int *)v24 + 134)];
            }
            else
            {
              v60 = (__int64 *)v24;
              p_src = (void **)((char *)v50 - (char *)v26);
              v59 = v24 + 68;
              v58 = v24 + 66;
              v57 = (unsigned __int8 **)sub_2237400(v24 + 66, v24 + 68, v28, 64, v22);
              sub_9EF810((__int64 *)v58, (__int64)v57);
              v24 = (void **)v60;
              v37 = (int)src;
              v38 = (__int64 *)v57;
              v39 = (void **)v60[66];
              if ( v39 == v59 )
              {
                v60[66] = (__int64)v57;
              }
              else
              {
                v59 = (void **)src;
                v58 = (void **)v57;
                v57 = (unsigned __int8 **)v60;
                free(v39);
                v24 = (void **)v57;
                v38 = (__int64 *)v58;
                v37 = (int)v59;
                v57[66] = (unsigned __int8 *)v58;
              }
              *((_DWORD *)v24 + 135) = v37;
              v30 = (void **)((char *)p_src + (_QWORD)v38);
              v29 = &v38[8 * (unsigned __int64)*((unsigned int *)v24 + 134)];
            }
          }
          v31 = *v30;
          v58 = v24;
          v57 = (unsigned __int8 **)v29;
          *v29 = (__int64)v31;
          LODWORD(v31) = *((_DWORD *)v30 + 2);
          p_src = v30;
          *((_DWORD *)v29 + 2) = (_DWORD)v31;
          *(__int64 *)((char *)v29 + 12) = *(__int64 *)((char *)v30 + 12);
          *((_DWORD *)v29 + 5) = *((_DWORD *)v30 + 5);
          v29[3] = (__int64)(v29 + 5);
          sub_13BF350(v29 + 3, v30[3], (__int64)v30[4] + (_QWORD)v30[3]);
          v32 = (__int64 *)v58;
          *((_BYTE *)v57 + 56) = *((_BYTE *)p_src + 56);
          ++*((_DWORD *)v32 + 134);
        }
        if ( dest != v50 + 10 )
          operator delete(dest);
        sub_AEA040((__int64)v19);
        if ( ptr != v90 )
          free(ptr);
LABEL_26:
        if ( v61 != 1 && v55 && v62 && v77[0] == (_QWORD)v80 && (!v77[0] || !memcmp(s1, s2, v77[0])) )
        {
          sub_FC70B0((__int64)&ptr, v53, v54, 1355);
          sub_AEC220((unsigned __int8 **)&ptr, v51, v52);
          sub_AEA040((__int64)&ptr);
        }
        v33 = v85;
        if ( v85 != v11 + 3 )
          goto LABEL_29;
        goto LABEL_30;
      }
    }
    v21 = v65;
    src = v65;
    goto LABEL_14;
  }
  v33 = v85;
  if ( v85 != v87 )
LABEL_29:
    free(v33);
LABEL_30:
  if ( v82 != v10 + 3 )
    free(v82);
  if ( s2 != p_s2 + 3 )
    free(s2);
  if ( s1 != v78 )
    free(s1);
}
