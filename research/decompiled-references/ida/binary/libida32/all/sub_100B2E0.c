void *__fastcall sub_100B2E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // bp
  __int16 v9; // ax
  bool v10; // zf
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  int v13; // eax
  _BOOL4 v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 (*v20)(); // rax
  unsigned __int8 *v21; // r13
  _QWORD *v22; // rdx
  __int64 v23; // rax
  void **v24; // r13
  unsigned __int64 v25; // rax
  void **v26; // r14
  void **v27; // rbp
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // rbp
  void **v31; // r14
  void *result; // rax
  __m128i v33; // xmm0
  __int64 v34; // r14
  __int64 (__fastcall *v35)(__int64, __int64, __int64, __int64); // rax
  unsigned int v36; // eax
  int v37; // eax
  __int64 *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  char v41; // dl
  __int64 (__fastcall *v42)(__int64, __int64, __int64, __int64); // rax
  unsigned int v43; // eax
  int v44; // eax
  __int64 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // al
  __int64 (__fastcall *v49)(__int64, __int64, __int64, __int64); // rax
  unsigned int v50; // eax
  int v51; // eax
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rax
  __m128i v57; // xmm0
  int v58; // eax
  unsigned __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 v65; // r14
  void *v66; // rdi
  __m128i v67; // [rsp+0h] [rbp-98h] BYREF
  void *v68; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v69; // [rsp+18h] [rbp-80h]
  __int64 v70; // [rsp+20h] [rbp-78h]
  void *v71; // [rsp+30h] [rbp-68h]
  __int64 v72; // [rsp+40h] [rbp-58h] BYREF
  __int16 v73; // [rsp+50h] [rbp-48h]

  if ( (*(_BYTE *)(a3 + 107) & 1) != 0 )
    *(_BYTE *)(a1 + 184) &= ~2u;
  v8 = *(_BYTE *)(a3 + 47);
  v9 = (*(_WORD *)(a3 + 46) >> 7) & 0xF;
  if ( ((*(_WORD *)(a3 + 46) >> 7) & 0xF) == 1 )
  {
    *(_DWORD *)(a1 + 152) = ((v8 & 8) == 0) + 1;
  }
  else if ( (_BYTE)v9 )
  {
    if ( (_BYTE)v9 != 2 )
    {
      *(_DWORD *)(a1 + 152) = ((v8 & 8) == 0) + 5;
      if ( (*(_BYTE *)(a3 + 32) & 1) == 0 )
        goto LABEL_9;
      goto LABEL_8;
    }
    *(_DWORD *)(a1 + 152) = ((v8 & 8) == 0) + 3;
  }
  if ( (*(_BYTE *)(a3 + 32) & 1) != 0 )
  {
LABEL_8:
    *(_BYTE *)(a1 + 33) = 64;
    *(_BYTE *)(a1 + 23) = 64;
    *(_BYTE *)(a1 + 25) = 64;
  }
LABEL_9:
  if ( (*(_BYTE *)(a3 + 89) & 1) != 0 )
  {
    *(_WORD *)(a1 + 10) = 8224;
    *(_WORD *)(a1 + 30) = 16448;
    if ( (*(_BYTE *)(a3 + 60) & 4) == 0 )
    {
      *(_QWORD *)(a1 + 80) = sub_21D5360();
      *(_WORD *)(a1 + 16) = 8224;
    }
  }
  if ( (v8 & 0x20) == 0 )
    goto LABEL_18;
  v10 = *(_BYTE *)(a1 + 22) == 32;
  *(_DWORD *)(a1 + 30) = -2139078592;
  *(_DWORD *)(a1 + 12) = 538972176;
  *(_WORD *)(a1 + 16) = 4112;
  *(_WORD *)(a1 + 20) = 8224;
  if ( !v10 )
  {
    *(_WORD *)(a1 + 22) = 16448;
    *(_QWORD *)(a1 + 104) = sub_21D5370();
  }
  v11 = *(_QWORD *)a1;
  *(_WORD *)(a1 + 24) = -32640;
  v12 = *(__int64 (__fastcall **)(__int64))(v11 + 32);
  v13 = v12 == sub_6CE2F0 ? *(unsigned __int8 *)(a1 + 8) : v12(a1);
  *(_DWORD *)(a1 + 140) = 9;
  *(_DWORD *)(a1 + 168) = 7;
  v14 = v13 != 32;
  v15 = 2 * v14 + 6;
  v16 = 2 * v14 + 5;
  *(_DWORD *)(a1 + 136) = v15;
  *(_DWORD *)(a1 + 144) = v16;
  *(_DWORD *)(a1 + 148) = v16;
  *(_QWORD *)(a1 + 80) = sub_21D5340();
  *(_QWORD *)(a1 + 96) = sub_21D5360();
  *(_QWORD *)(a1 + 112) = sub_21D5380();
  if ( (unsigned int)sub_FC6D50(a3) == 300 )
  {
    v34 = *(_QWORD *)(a1 + 208);
    v35 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
    v67.m128i_i64[0] = v34 + 304;
    if ( v35 == sub_FD4AE0 )
    {
      v36 = sub_2220DF0("__opencl_c_generic_address_space", 32);
      v37 = sub_2221120(v34 + 304, "__opencl_c_generic_address_space", 32, v36);
      if ( v37 == -1 )
        v38 = (__int64 *)(*(_QWORD *)(v34 + 304) + 8LL * *(unsigned int *)(v34 + 312));
      else
        v38 = (__int64 *)(*(_QWORD *)(v34 + 304) + 8LL * v37);
      sub_E9D250((__int64 **)&v68, v38, 1);
      v39 = *(unsigned int *)(v34 + 312);
      v40 = *(_QWORD *)(v34 + 304);
      v67.m128i_i64[1] = (__int64)v68;
      sub_E9D250((__int64 **)&v68, (__int64 *)(v40 + 8 * v39), 1);
      v41 = 0;
      if ( v68 != (void *)v67.m128i_i64[1] )
        v41 = *(_BYTE *)(*(_QWORD *)v67.m128i_i64[1] + 8LL);
    }
    else
    {
      v41 = v35(a1, v34 + 304, (__int64)"__opencl_c_generic_address_space", 32);
    }
    *(_BYTE *)(a3 + 60) = v41 & 1 | *(_BYTE *)(a3 + 60) & 0xFE;
    v42 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
    if ( v42 == sub_FD4AE0 )
    {
      v43 = sub_2220DF0("__opencl_c_pipes", 16);
      v44 = sub_2221120(v67.m128i_i64[0], "__opencl_c_pipes", 16, v43);
      if ( v44 == -1 )
        v45 = (__int64 *)(*(_QWORD *)(v34 + 304) + 8LL * *(unsigned int *)(v34 + 312));
      else
        v45 = (__int64 *)(*(_QWORD *)(v34 + 304) + 8LL * v44);
      sub_E9D250((__int64 **)&v68, v45, 1);
      v46 = *(unsigned int *)(v34 + 312);
      v47 = *(_QWORD *)(v34 + 304);
      v67.m128i_i64[1] = (__int64)v68;
      sub_E9D250((__int64 **)&v68, (__int64 *)(v47 + 8 * v46), 1);
      v48 = 0;
      if ( v68 != (void *)v67.m128i_i64[1] )
        v48 = *(_BYTE *)(*(_QWORD *)v67.m128i_i64[1] + 8LL);
    }
    else
    {
      v48 = v42(a1, v67.m128i_i64[0], (__int64)"__opencl_c_pipes", 16);
    }
    *(_BYTE *)(a3 + 60) = *(_BYTE *)(a3 + 60) & 0xFD | (2 * (v48 & 1));
    v49 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 528LL);
    if ( v49 == sub_FD4AE0 )
    {
      v50 = sub_2220DF0("__opencl_c_device_enqueue", 25);
      v51 = sub_2221120(v67.m128i_i64[0], "__opencl_c_device_enqueue", 25, v50);
      if ( v51 == -1 )
        v52 = (__int64 *)(*(_QWORD *)(v34 + 304) + 8LL * *(unsigned int *)(v34 + 312));
      else
        v52 = (__int64 *)(*(_QWORD *)(v34 + 304) + 8LL * v51);
      sub_E9D250((__int64 **)&v68, v52, 1);
      v53 = *(unsigned int *)(v34 + 312);
      v54 = *(_QWORD *)(v34 + 304);
      v67.m128i_i64[0] = (__int64)v68;
      sub_E9D250((__int64 **)&v68, (__int64 *)(v54 + 8 * v53), 1);
      v55 = 0;
      if ( v68 != (void *)v67.m128i_i64[0] )
        v55 = *(_BYTE *)(*(_QWORD *)v67.m128i_i64[0] + 8LL);
    }
    else
    {
      v55 = v49(a1, v67.m128i_i64[0], (__int64)"__opencl_c_device_enqueue", 25);
    }
    *(_BYTE *)(a3 + 20) = *(_BYTE *)(a3 + 20) & 0xBF | ((v55 & 1) << 6);
    v17 = *(_DWORD *)(a3 + 36);
    if ( !v17 )
      goto LABEL_21;
  }
  else
  {
LABEL_18:
    v17 = *(_DWORD *)(a3 + 36);
    if ( !v17 )
      goto LABEL_21;
  }
  if ( v17 == 32 )
  {
    *(_BYTE *)(a1 + 22) = 32;
    *(_BYTE *)(a1 + 24) = 32;
    v67.m128i_i64[0] = sub_21D5360();
    v57 = _mm_loadl_epi64(&v67);
    v18 = *(_DWORD *)(a3 + 40);
    *(__m128i *)(a1 + 104) = _mm_unpacklo_epi64(v57, v57);
    if ( !v18 )
      goto LABEL_25;
    goto LABEL_22;
  }
  if ( v17 == 64 )
  {
    *(_BYTE *)(a1 + 22) = 64;
    *(_BYTE *)(a1 + 24) = 64;
    v67.m128i_i64[0] = sub_21D5370();
    v33 = _mm_loadl_epi64(&v67);
    v18 = *(_DWORD *)(a3 + 40);
    *(__m128i *)(a1 + 104) = _mm_unpacklo_epi64(v33, v33);
    if ( !v18 )
      goto LABEL_25;
    goto LABEL_22;
  }
LABEL_21:
  v18 = *(_DWORD *)(a3 + 40);
  if ( !v18 )
    goto LABEL_25;
LABEL_22:
  if ( v18 == *(unsigned __int8 *)(a1 + 22) )
  {
    *(_WORD *)(a1 + 24) = *(_WORD *)(a1 + 22);
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a1 + 104);
    v19 = *(_DWORD *)(a3 + 100);
    if ( !v19 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( v18 == 128 )
  {
    *(_WORD *)(a1 + 24) = -32640;
    *(_QWORD *)(a1 + 112) = sub_21D5380();
    v19 = *(_DWORD *)(a3 + 100);
    if ( !v19 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( v18 == 80 )
  {
    v56 = sub_21D53A0();
    v10 = *(_DWORD *)(a1 + 260) == 15;
    *(_QWORD *)(a1 + 112) = v56;
    if ( (!v10 || (v58 = *(_DWORD *)(a1 + 264), v58 != 27) && v58) && *(_DWORD *)(a1 + 248) == 37 )
      *(_WORD *)(a1 + 24) = 8288;
    else
      *(_WORD *)(a1 + 24) = -32640;
  }
LABEL_25:
  v19 = *(_DWORD *)(a3 + 100);
  if ( v19 )
LABEL_26:
    *(_WORD *)(a1 + 64) = 8 * v19;
LABEL_27:
  *(_BYTE *)(a1 + 56) |= (*(_BYTE *)(a3 + 164) & 2) != 0;
  if ( (*(_BYTE *)(a3 + 45) & 0x20) != 0 )
  {
    v20 = *(__int64 (**)())(*(_QWORD *)a1 + 744LL);
    if ( v20 == sub_1007DE0 || !((unsigned __int8 (__fastcall *)(__int64))v20)(a1) )
    {
      sub_FA3370((__int64)&v68, a2, 0, 51);
      v21 = (unsigned __int8 *)v68;
      if ( !v68 )
      {
        v59 = v69;
        v60 = *(_DWORD *)(v69 + 14976);
        if ( v60 )
        {
          v62 = (unsigned int)(v60 - 1);
          *(_DWORD *)(v69 + 14976) = v62;
          v21 = *(unsigned __int8 **)(v59 + 8 * v62 + 14848);
          v63 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v64 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v65 = v64 + (v63 << 6);
          while ( v64 != v65 )
          {
            while ( 1 )
            {
              v65 -= 64;
              v66 = *(void **)(v65 + 24);
              if ( v66 == (void *)(v65 + 40) )
                break;
              v67.m128i_i64[0] = v64;
              operator delete(v66);
              v64 = v67.m128i_i64[0];
              if ( v67.m128i_i64[0] == v65 )
                goto LABEL_117;
            }
          }
LABEL_117:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        v68 = v21;
      }
      v21[*v21 + 1] = 1;
      v22 = v68;
      v23 = *(unsigned __int8 *)v68;
      *(_BYTE *)v68 = v23 + 1;
      v22[v23 + 2] = "-fprotect-parens";
      if ( (_BYTE)v73 )
      {
        sub_FA3A50(v70, (__int64)&v68, SHIBYTE(v73));
        v70 = 0;
        v73 = 0;
      }
      if ( v71 != &v72 )
        operator delete(v71);
      v24 = (void **)v68;
      if ( v68 )
      {
        v25 = v69;
        if ( v69 )
        {
          if ( (unsigned __int64)v68 >= v69 && (unsigned __int64)v68 <= v69 + 14848 )
          {
            v61 = *(unsigned int *)(v69 + 14976);
            *(_DWORD *)(v69 + 14976) = v61 + 1;
            *(_QWORD *)(v25 + 8 * v61 + 14848) = v24;
          }
          else
          {
            v26 = *((void ***)v68 + 66);
            v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v68 + 134)];
            if ( v26 != v27 )
            {
              do
              {
                while ( 1 )
                {
                  v27 -= 8;
                  v28 = (void **)v27[3];
                  if ( v28 == v27 + 5 )
                    break;
                  operator delete(v28);
                  if ( v26 == v27 )
                    goto LABEL_41;
                }
              }
              while ( v26 != v27 );
LABEL_41:
              v27 = (void **)v24[66];
            }
            if ( v27 != v24 + 68 )
              free(v27);
            v29 = (void **)v24[52];
            if ( v29 != v24 + 54 )
              free(v29);
            v30 = v24 + 48;
            v31 = v24 + 8;
            do
            {
              while ( *v30 != v30 + 2 )
              {
                operator delete(*v30);
                v30 -= 4;
                if ( v31 == v30 )
                  goto LABEL_49;
              }
              v30 -= 4;
            }
            while ( v30 != v31 );
LABEL_49:
            operator delete(v24, 0x3A0u);
          }
        }
      }
      *(_BYTE *)(a3 + 45) &= ~0x20u;
    }
  }
  result = (void *)*(unsigned int *)(a3 + 196);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 400) = (_DWORD)result;
    *(_BYTE *)(a1 + 404) = 1;
  }
  if ( (*(_BYTE *)(a3 + 108) & 4) != 0 )
  {
    result = &unk_2492CE0;
    *(_QWORD *)(a1 + 352) = &unk_2492CE0;
  }
  if ( (*(_BYTE *)(a3 + 60) & 0x10) != 0 && (*(_BYTE *)(a3 + 89) & 4) != 0 && a4 && !*(_BYTE *)(a1 + 472) )
    *(_BYTE *)(a1 + 472) = *(_DWORD *)(a4 + 340) == 10;
  return result;
}

