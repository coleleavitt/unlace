void __fastcall sub_1CAB820(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 **v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // r15
  __int64 v21; // r13
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __m128i *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rax
  size_t v36; // rdx
  unsigned __int8 *v37; // rbx
  unsigned __int8 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // r13
  unsigned __int8 *v48; // rbx
  _BYTE *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // r13
  void *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 v63; // r14
  void *v64; // rdi
  __int64 v65; // [rsp+8h] [rbp-E0h] BYREF
  void *s2; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+18h] [rbp-D0h]
  _QWORD v68[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v70; // [rsp+40h] [rbp-A8h]
  __int64 v71; // [rsp+48h] [rbp-A0h]
  char v72; // [rsp+98h] [rbp-50h]
  unsigned int v73; // [rsp+A0h] [rbp-48h]
  char v74; // [rsp+A4h] [rbp-44h]

  v9 = *a1;
  s2 = nullptr;
  v67 = 0;
  if ( !(unsigned __int8)sub_181EB00(v9, (__int64)a3, 0, &s2, nullptr, a4, a5) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_10;
  v14 = (__int64 **)sub_B8C3D0(a2, (__int64)a3, v10, v11, v12, v13);
  v15 = *v14;
  v16 = (unsigned __int64)&(*v14)[*((unsigned int *)v14 + 2)];
  if ( (unsigned __int64)v15 < v16 )
  {
    v33 = v15;
    while ( *(_WORD *)(*v33 + 36) != 367 )
    {
      if ( (__int64 *)v16 == ++v33 )
        goto LABEL_10;
    }
    if ( (__int64 *)v16 == v33 )
      goto LABEL_10;
  }
  else
  {
    if ( v15 == (__int64 *)v16 )
    {
LABEL_10:
      v19 = sub_168B6C0((__int64)a1);
      v20 = s2;
      v21 = v67;
      v22 = v19;
      v23 = (_QWORD *)sub_168B6C0((__int64)a1);
      v26 = v23[294];
      v23[304] += 56LL;
      v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v23[295] >= v27 + 56 && v26 )
      {
        v23[294] = v27 + 56;
        v28 = (__m128i *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v28 = (__m128i *)sub_986170((__int64)(v23 + 294), 56, 56, 3, v24, v25);
      }
      sub_B30000(v28, v22, a3, v20, v21);
      sub_B8CC60(a2, (__int64)v28, v29, v30, v31, v32);
      return;
    }
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 367 )
    {
      v17 = (__int64 *)(v16 + 8);
      while ( v15 != v17 )
      {
        v18 = *v17++;
        if ( *(_WORD *)(v18 + 36) == 367 )
          goto LABEL_19;
      }
      goto LABEL_10;
    }
  }
LABEL_19:
  v34 = *v15;
  if ( *(_WORD *)(*v15 + 36) != 367 )
  {
    v35 = v15 + 1;
    do
      v34 = *v35++;
    while ( *(_WORD *)(v34 + 36) != 367 );
  }
  v36 = *(unsigned int *)(v34 + 40);
  if ( v36 != v67 || *(_DWORD *)(v34 + 40) && memcmp(*(const void **)(v34 + 48), s2, v36) )
  {
    sub_168B9F0((__int64)v68, a1, a3[1].m128i_u32[2], 0x1ACBu, 0);
    if ( v72 )
    {
      v37 = v70;
      if ( !v70 )
      {
        v53 = v71;
        v54 = *(_DWORD *)(v71 + 14976);
        if ( v54 )
        {
          v55 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v71 + 14976) = v55;
          v37 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
          v56 = *((unsigned int *)v37 + 134);
          *v37 = 0;
          v57 = *((_QWORD *)v37 + 66);
          *((_DWORD *)v37 + 106) = 0;
          v58 = v57 + (v56 << 6);
          while ( v57 != v58 )
          {
            while ( 1 )
            {
              v58 -= 64;
              v59 = *(void **)(v58 + 24);
              if ( v59 == (void *)(v58 + 40) )
                break;
              operator delete(v59);
              if ( v57 == v58 )
                goto LABEL_45;
            }
          }
LABEL_45:
          *((_DWORD *)v37 + 134) = 0;
        }
        else
        {
          v37 = (unsigned __int8 *)operator new(0x3A0u);
          *v37 = 0;
          *((_QWORD *)v37 + 12) = v37 + 112;
          *((_QWORD *)v37 + 16) = v37 + 144;
          *((_QWORD *)v37 + 20) = v37 + 176;
          *((_QWORD *)v37 + 24) = v37 + 208;
          *((_QWORD *)v37 + 28) = v37 + 240;
          *((_QWORD *)v37 + 32) = v37 + 272;
          *((_QWORD *)v37 + 36) = v37 + 304;
          *((_QWORD *)v37 + 40) = v37 + 336;
          *((_QWORD *)v37 + 44) = v37 + 368;
          *((_QWORD *)v37 + 48) = v37 + 400;
          *((_QWORD *)v37 + 52) = v37 + 432;
          *((_QWORD *)v37 + 13) = 0;
          v37[112] = 0;
          *((_QWORD *)v37 + 17) = 0;
          v37[144] = 0;
          *((_QWORD *)v37 + 21) = 0;
          v37[176] = 0;
          *((_QWORD *)v37 + 25) = 0;
          v37[208] = 0;
          *((_QWORD *)v37 + 29) = 0;
          v37[240] = 0;
          *((_QWORD *)v37 + 33) = 0;
          v37[272] = 0;
          *((_QWORD *)v37 + 37) = 0;
          v37[304] = 0;
          *((_QWORD *)v37 + 41) = 0;
          v37[336] = 0;
          *((_QWORD *)v37 + 45) = 0;
          v37[368] = 0;
          *((_QWORD *)v37 + 49) = 0;
          v37[400] = 0;
          *((_QWORD *)v37 + 53) = 0x800000000LL;
          *((_QWORD *)v37 + 66) = v37 + 544;
          *((_QWORD *)v37 + 67) = 0x600000000LL;
        }
        v70 = v37;
      }
      v37[*v37 + 1] = 16;
      v38 = v70;
      v39 = *v70;
      *v70 = v39 + 1;
      *(_QWORD *)&v38[8 * v39 + 16] = a3;
    }
    else if ( v74 )
    {
      v42 = sub_168B9E0(v68);
      v45 = v69;
      if ( v69 )
        v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      v65 = v45;
      v46 = sub_1587BC0(v42, &v65, v40, v41, v43, v44);
      v47 = *v46 + 32LL * v73;
      v48 = *(unsigned __int8 **)(v47 + 8);
      if ( !v48 )
      {
        v51 = *(_QWORD *)(v47 + 16);
        v52 = *(_DWORD *)(v51 + 14976);
        if ( v52 )
        {
          v60 = (unsigned int)(v52 - 1);
          *(_DWORD *)(v51 + 14976) = v60;
          v48 = *(unsigned __int8 **)(v51 + 8 * v60 + 14848);
          v61 = *((unsigned int *)v48 + 134);
          *v48 = 0;
          v62 = *((_QWORD *)v48 + 66);
          *((_DWORD *)v48 + 106) = 0;
          v63 = v62 + (v61 << 6);
          while ( v62 != v63 )
          {
            while ( 1 )
            {
              v63 -= 64;
              v64 = *(void **)(v63 + 24);
              if ( v64 == (void *)(v63 + 40) )
                break;
              operator delete(v64);
              if ( v62 == v63 )
                goto LABEL_50;
            }
          }
LABEL_50:
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v48 = (unsigned __int8 *)operator new(0x3A0u);
          *v48 = 0;
          *((_QWORD *)v48 + 12) = v48 + 112;
          *((_QWORD *)v48 + 16) = v48 + 144;
          *((_QWORD *)v48 + 20) = v48 + 176;
          *((_QWORD *)v48 + 24) = v48 + 208;
          *((_QWORD *)v48 + 28) = v48 + 240;
          *((_QWORD *)v48 + 32) = v48 + 272;
          *((_QWORD *)v48 + 36) = v48 + 304;
          *((_QWORD *)v48 + 40) = v48 + 336;
          *((_QWORD *)v48 + 44) = v48 + 368;
          *((_QWORD *)v48 + 48) = v48 + 400;
          *((_QWORD *)v48 + 52) = v48 + 432;
          *((_QWORD *)v48 + 13) = 0;
          v48[112] = 0;
          *((_QWORD *)v48 + 17) = 0;
          v48[144] = 0;
          *((_QWORD *)v48 + 21) = 0;
          v48[176] = 0;
          *((_QWORD *)v48 + 25) = 0;
          v48[208] = 0;
          *((_QWORD *)v48 + 29) = 0;
          v48[240] = 0;
          *((_QWORD *)v48 + 33) = 0;
          v48[272] = 0;
          *((_QWORD *)v48 + 37) = 0;
          v48[304] = 0;
          *((_QWORD *)v48 + 41) = 0;
          v48[336] = 0;
          *((_QWORD *)v48 + 45) = 0;
          v48[368] = 0;
          *((_QWORD *)v48 + 49) = 0;
          v48[400] = 0;
          *((_QWORD *)v48 + 53) = 0x800000000LL;
          *((_QWORD *)v48 + 66) = v48 + 544;
          *((_QWORD *)v48 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v47 + 8) = v48;
      }
      v48[*v48 + 1] = 16;
      v49 = *(_BYTE **)(v47 + 8);
      v50 = (unsigned __int8)*v49;
      *v49 = v50 + 1;
      *(_QWORD *)&v49[8 * v50 + 16] = a3;
    }
    sub_15F7200(v68);
  }
}
