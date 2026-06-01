void __fastcall sub_1F4C350(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  bool v9; // sf
  _BYTE *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (__fastcall *v14)(__int64); // rcx
  __int64 (__fastcall *v15)(__int64); // rdx
  __int64 v16; // rdi
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r15
  __m128 v29; // xmm0
  char v30; // al
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __m128i v38; // xmm0
  unsigned __int8 *v39; // rbx
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 *v42; // rsi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __m128i v46; // xmm1
  __int64 v47; // rdx
  __int64 v48; // rax
  __m128i v49; // xmm2
  unsigned __int64 v50; // r12
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  const __m128i *v55; // rcx
  __m128i *v56; // rax
  _BYTE *v57; // rdi
  unsigned __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rdx
  __int64 v63; // r15
  void *v64; // rdi
  unsigned __int64 v65; // rbp
  __int64 v66; // rdi
  unsigned int v67; // esi
  __m128i v68; // [rsp+0h] [rbp-108h] BYREF
  __m128i v69; // [rsp+10h] [rbp-F8h] BYREF
  __int64 *v70[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+30h] [rbp-D8h] BYREF
  __m128 v72; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h]
  _BYTE v75[120]; // [rsp+90h] [rbp-78h] BYREF

  sub_1F4C110(a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  *(_QWORD *)(a2 + 80) = 0;
  *(_BYTE *)(a2 + 88) = v6 & 7 | *(_BYTE *)(a2 + 88) & 0xF8;
  v7 = a1[2];
  v8 = *(unsigned int *)(v7 + 24);
  *(_DWORD *)(v7 + 24) = v8 + 1;
  v9 = *(char *)(a2 + 28) < 0;
  *(_BYTE *)(a2 + 88) = (8 * (*(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8) != 0)) | *(_BYTE *)(a2 + 88) & 0xF7;
  if ( !v9 )
  {
    v10 = (_BYTE *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v10 + 8LL) & 0x7F) == 0x14 )
        return;
    }
    else if ( (v10[8] & 0x7F) == 0x14 )
    {
      return;
    }
    v11 = sub_BA8BD0(a2);
    v14 = sub_A55E60;
    v15 = *(__int64 (__fastcall **)(__int64))(*v11 + 32LL);
    v16 = v15 == sub_A55E60 ? v11[12] : v15((__int64)v11);
    v17 = *(_QWORD *)(a2 + 40);
    if ( (v17 & 7) != 0 )
    {
      v18 = 0;
      v19 = 0;
    }
    else
    {
      v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = v18;
    }
    v20 = sub_BAE3D0(v16, v19, (__int64 *)&v72, (__int64)v14, v12, v13);
    v21 = v20;
    if ( v20 != a2 )
    {
      if ( v20 )
      {
        v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v22 = *(_QWORD *)v22;
        v23 = *(_BYTE *)(v22 + 8);
        v24 = *(_QWORD *)(v21 + 16);
        v25 = v22 - 48;
        if ( (v23 & 0x7F) != 0x17 )
          v25 = 0;
        v26 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v24 & 4) != 0 )
        {
          v26 = *(_QWORD *)v26;
          if ( (*(_BYTE *)(v26 + 8) & 0x7F) == 0x17 )
            goto LABEL_16;
        }
        else if ( (*(_BYTE *)(v26 + 8) & 0x7F) == 0x17 )
        {
LABEL_16:
          v27 = v26 - 48;
          if ( v25 )
          {
            v28 = *a1;
            if ( v27 )
            {
              v68.m128i_i64[0] = v27;
              v29 = _mm_loadh_ps((const double *)v68.m128i_i64);
              v68.m128i_i64[0] = v28 + 11520;
              v69 = (__m128i)v29;
              v30 = sub_1F21CC0(v28 + 11520, v69.m128i_i64, v70);
              v32 = v68.m128i_i64[0];
              if ( v30 )
              {
                if ( (*(_BYTE *)(v28 + 11520) & 1) != 0 )
                {
                  v33 = v28 + 11528;
                  v34 = 48;
                }
                else
                {
                  v33 = *(_QWORD *)(v28 + 11528);
                  v34 = 24LL * *(unsigned int *)(v28 + 11536);
                }
                sub_1ED21B0(&v72, v70[0], (_QWORD *)(v34 + v33), v68.m128i_i64[0], 1);
                v35 = *(unsigned int *)(v72.m128_u64[0] + 16);
LABEL_22:
                v68.m128i_i64[0] = a2;
                v36 = *(_QWORD *)(v28 + 11576) + 96 * v35;
                v68.m128i_i64[0] = v21;
                v37 = *(unsigned int *)(v36 + 24);
                v38 = (__m128i)_mm_loadh_ps((const double *)v68.m128i_i64);
                if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(v36 + 28) )
                {
                  v68 = v38;
                  sub_2237220(v36 + 16, v36 + 32, v37 + 1, 16);
                  v37 = *(unsigned int *)(v36 + 24);
                  v38 = _mm_load_si128(&v68);
                }
                *(__m128i *)(*(_QWORD *)(v36 + 16) + 16 * v37) = v38;
                ++*(_DWORD *)(v36 + 24);
                return;
              }
              v42 = v70[0];
              v72.m128_u64[0] = (unsigned __int64)v70[0];
              v43 = (*(_DWORD *)(v28 + 11520) >> 1) + 1;
              if ( (*(_BYTE *)(v28 + 11520) & 1) != 0 )
              {
                v45 = 6;
                v44 = 2;
              }
              else
              {
                v44 = *(unsigned int *)(v28 + 11536);
                v45 = (unsigned int)(3 * v44);
              }
              if ( 4 * v43 >= (unsigned int)v45 )
              {
                v67 = 2 * v44;
              }
              else
              {
                v45 = (unsigned int)(v44 - (v43 + *(_DWORD *)(v28 + 11524)));
                if ( (unsigned int)v45 > (unsigned int)v44 >> 3 )
                  goto LABEL_42;
                v67 = v44;
              }
              sub_1F3B4F0(v68.m128i_i64[0], v67, v44, v68.m128i_i64[0], v45, v31);
              sub_1F21CC0(v68.m128i_i64[0], v69.m128i_i64, (__int64 **)&v72);
              v42 = (__int64 *)v72.m128_u64[0];
              v32 = v68.m128i_i64[0];
              v43 = (*(_DWORD *)(v28 + 11520) >> 1) + 1;
LABEL_42:
              *(_DWORD *)(v28 + 11520) = *(_DWORD *)(v28 + 11520) & 1 | (2 * v43);
              if ( *v42 != -4096 || v42[1] != -4096 )
                --*(_DWORD *)(v28 + 11524);
              v46 = _mm_load_si128(&v69);
              *((_DWORD *)v42 + 4) = 0;
              *(__m128i *)v42 = v46;
              v70[0] = v42;
              if ( (*(_BYTE *)(v28 + 11520) & 1) != 0 )
              {
                v47 = v28 + 11528;
                v48 = 48;
              }
              else
              {
                v47 = *(_QWORD *)(v28 + 11528);
                v48 = 24LL * *(unsigned int *)(v28 + 11536);
              }
              sub_1ED21B0(&v72, v42, (_QWORD *)(v48 + v47), v32, 1);
              v49 = _mm_load_si128(&v69);
              v70[1] = (__int64 *)0x400000000LL;
              v50 = v72.m128_u64[0];
              v74 = 0x400000000LL;
              v72 = (__m128)v49;
              v51 = *(unsigned int *)(v28 + 11584);
              ptr = v75;
              v52 = *(unsigned int *)(v28 + 11588);
              v53 = v51 + 1;
              v70[0] = &v71;
              if ( v51 + 1 > v52 )
              {
                v65 = *(_QWORD *)(v28 + 11576);
                v66 = v28 + 11576;
                if ( v65 > (unsigned __int64)&v72 || (unsigned __int64)&v72 >= v65 + 96 * v51 )
                {
                  sub_1F36990(v66, v53);
                  v54 = *(_QWORD *)(v28 + 11576);
                  v51 = *(unsigned int *)(v28 + 11584);
                  v55 = (const __m128i *)&v72;
                }
                else
                {
                  sub_1F36990(v66, v53);
                  v54 = *(_QWORD *)(v28 + 11576);
                  v51 = *(unsigned int *)(v28 + 11584);
                  v55 = (const __m128i *)((char *)&v72 + v54 - v65);
                }
              }
              else
              {
                v54 = *(_QWORD *)(v28 + 11576);
                v55 = (const __m128i *)&v72;
              }
              v56 = (__m128i *)(v54 + 96 * v51);
              *v56 = _mm_loadu_si128(v55);
              v56[1].m128i_i64[0] = (__int64)v56[2].m128i_i64;
              v56[1].m128i_i64[1] = 0x400000000LL;
              if ( v55[1].m128i_i32[2] )
                sub_1F35E40((__int64)v56[1].m128i_i64, (__int64)v55[1].m128i_i64);
              v35 = *(unsigned int *)(v28 + 11584);
              v57 = ptr;
              *(_DWORD *)(v28 + 11584) = v35 + 1;
              if ( v57 != v75 )
              {
                free(v57);
                v35 = (unsigned int)(*(_DWORD *)(v28 + 11584) - 1);
              }
              *(_DWORD *)(v50 + 16) = v35;
              goto LABEL_22;
            }
            goto LABEL_31;
          }
          if ( !v27 )
            return;
LABEL_30:
          v28 = *a1;
LABEL_31:
          sub_1EAC9C0((__int64)&v72, v28, *(_DWORD *)(a2 + 24), 3713);
          v39 = (unsigned __int8 *)v72.m128_u64[0];
          if ( !v72.m128_u64[0] )
          {
            v58 = v72.m128_u64[1];
            v59 = *(_DWORD *)(v72.m128_u64[1] + 14976);
            if ( v59 )
            {
              v60 = (unsigned int)(v59 - 1);
              *(_DWORD *)(v72.m128_u64[1] + 14976) = v60;
              v39 = *(unsigned __int8 **)(v58 + 8 * v60 + 14848);
              v61 = *((unsigned int *)v39 + 134);
              *v39 = 0;
              v62 = *((_QWORD *)v39 + 66);
              *((_DWORD *)v39 + 106) = 0;
              v63 = v62 + (v61 << 6);
              while ( v62 != v63 )
              {
                while ( 1 )
                {
                  v63 -= 64;
                  v64 = *(void **)(v63 + 24);
                  if ( v64 == (void *)(v63 + 40) )
                    break;
                  v68.m128i_i64[0] = v62;
                  operator delete(v64);
                  v62 = v68.m128i_i64[0];
                  if ( v68.m128i_i64[0] == v63 )
                    goto LABEL_61;
                }
              }
LABEL_61:
              *((_DWORD *)v39 + 134) = 0;
            }
            else
            {
              v39 = (unsigned __int8 *)operator new(0x3A0u);
              *v39 = 0;
              *((_QWORD *)v39 + 12) = v39 + 112;
              *((_QWORD *)v39 + 16) = v39 + 144;
              *((_QWORD *)v39 + 20) = v39 + 176;
              *((_QWORD *)v39 + 24) = v39 + 208;
              *((_QWORD *)v39 + 28) = v39 + 240;
              *((_QWORD *)v39 + 32) = v39 + 272;
              *((_QWORD *)v39 + 36) = v39 + 304;
              *((_QWORD *)v39 + 40) = v39 + 336;
              *((_QWORD *)v39 + 44) = v39 + 368;
              *((_QWORD *)v39 + 48) = v39 + 400;
              *((_QWORD *)v39 + 52) = v39 + 432;
              *((_QWORD *)v39 + 13) = 0;
              v39[112] = 0;
              *((_QWORD *)v39 + 17) = 0;
              v39[144] = 0;
              *((_QWORD *)v39 + 21) = 0;
              v39[176] = 0;
              *((_QWORD *)v39 + 25) = 0;
              v39[208] = 0;
              *((_QWORD *)v39 + 29) = 0;
              v39[240] = 0;
              *((_QWORD *)v39 + 33) = 0;
              v39[272] = 0;
              *((_QWORD *)v39 + 37) = 0;
              v39[304] = 0;
              *((_QWORD *)v39 + 41) = 0;
              v39[336] = 0;
              *((_QWORD *)v39 + 45) = 0;
              v39[368] = 0;
              *((_QWORD *)v39 + 49) = 0;
              v39[400] = 0;
              *((_QWORD *)v39 + 53) = 0x800000000LL;
              *((_QWORD *)v39 + 66) = v39 + 544;
              *((_QWORD *)v39 + 67) = 0x600000000LL;
            }
            v72.m128_u64[0] = (unsigned __int64)v39;
          }
          v39[*v39 + 1] = 5;
          v40 = v72.m128_u64[0];
          v41 = *(unsigned __int8 *)v72.m128_u64[0];
          *(_BYTE *)v72.m128_u64[0] = v41 + 1;
          *(_QWORD *)(v40 + 8 * v41 + 16) = v18;
          sub_AEA040((__int64)&v72);
          sub_1EAC9C0((__int64)&v72, *a1, *(_DWORD *)(v21 + 24), 113);
          sub_AEA040((__int64)&v72);
          return;
        }
        if ( !v25 )
          return;
        goto LABEL_30;
      }
    }
  }
}
