__int64 __fastcall sub_852C30(__int64 **a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  __int64 v6; // rax
  unsigned __int8 **v7; // rbp
  unsigned __int8 *v8; // r12
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  unsigned __int8 *v15; // r12
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int8 *v20; // r12
  unsigned __int64 v21; // r15
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  unsigned __int8 *v27; // rbx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 (*v35)(void); // rax
  __int64 v36; // r12
  __int64 (*v37)(); // rax
  __int64 v38; // rax
  unsigned __int8 *v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // r14
  __int64 v44; // r13
  void *v45; // rdi
  unsigned __int8 *v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // r12
  void *v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // r13
  void *v59; // rdi
  unsigned __int8 *v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // r13
  void *v66; // rdi

  v4 = **a1;
  if ( (*(_BYTE *)(v4 + 1) & 6) == 0 )
  {
    sub_823870((__m128i *)a1[1], a1[2][2], *(_QWORD *)(v4 + 8));
    return 1;
  }
  if ( !a2 )
  {
    v33 = *a1[4];
    v34 = *a1[3];
    if ( v33 && v34 )
    {
      if ( v33 == v34 )
      {
        v5 = 0;
        goto LABEL_5;
      }
      v35 = *(__int64 (**)(void))(*(_QWORD *)v34 + 32LL);
      if ( v35 == sub_6A41B0 )
        v36 = sub_777E10(v34);
      else
        v36 = v35();
      v37 = *(__int64 (**)())(*(_QWORD *)v33 + 32LL);
      if ( v37 == sub_6A41B0 )
        v38 = sub_777E10(v33);
      else
        v38 = ((__int64 (__fastcall *)(__int64))v37)(v33);
      if ( v36 == v38 )
      {
        v5 = 0;
        v4 = **a1;
        goto LABEL_5;
      }
      v34 = *a1[3];
      v33 = *a1[4];
    }
    v5 = (unsigned __int8)sub_777930(v34, v33) ^ 1;
    v4 = **a1;
    goto LABEL_5;
  }
  v5 = 1;
  if ( *(_QWORD *)(a2 + 8) != a2 + 8 )
  {
    v5 = 3 - sub_76E0C0(a2, *a1[5]);
    v4 = **a1;
  }
LABEL_5:
  v6 = sub_A2E130(a1[2], v4, 2207, 0);
  v7 = (unsigned __int8 **)v6;
  if ( v6 )
  {
    v8 = *(unsigned __int8 **)v6;
    if ( !*(_QWORD *)v6 )
    {
      v53 = *(_QWORD *)(v6 + 8);
      v54 = *(_DWORD *)(v53 + 14976);
      if ( v54 )
      {
        v55 = (unsigned int)(v54 - 1);
        *(_DWORD *)(v53 + 14976) = v55;
        v8 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v8 + 134);
        v57 = *((_QWORD *)v8 + 66);
        *v8 = 0;
        *((_DWORD *)v8 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            operator delete(v59, *(_QWORD *)(v58 + 40) + 1LL);
            if ( v57 == v58 )
              goto LABEL_59;
          }
        }
LABEL_59:
        *((_DWORD *)v8 + 134) = 0;
      }
      else
      {
        v8 = (unsigned __int8 *)operator new(0x3A0u);
        *v8 = 0;
        *((_QWORD *)v8 + 12) = v8 + 112;
        *((_QWORD *)v8 + 16) = v8 + 144;
        *((_QWORD *)v8 + 20) = v8 + 176;
        *((_QWORD *)v8 + 24) = v8 + 208;
        *((_QWORD *)v8 + 28) = v8 + 240;
        *((_QWORD *)v8 + 32) = v8 + 272;
        *((_QWORD *)v8 + 36) = v8 + 304;
        *((_QWORD *)v8 + 40) = v8 + 336;
        *((_QWORD *)v8 + 44) = v8 + 368;
        *((_QWORD *)v8 + 48) = v8 + 400;
        *((_QWORD *)v8 + 13) = 0;
        v8[112] = 0;
        *((_QWORD *)v8 + 17) = 0;
        v8[144] = 0;
        *((_QWORD *)v8 + 21) = 0;
        v8[176] = 0;
        *((_QWORD *)v8 + 25) = 0;
        v8[208] = 0;
        *((_QWORD *)v8 + 29) = 0;
        v8[240] = 0;
        *((_QWORD *)v8 + 33) = 0;
        v8[272] = 0;
        *((_QWORD *)v8 + 37) = 0;
        v8[304] = 0;
        *((_QWORD *)v8 + 41) = 0;
        v8[336] = 0;
        *((_QWORD *)v8 + 45) = 0;
        v8[368] = 0;
        *((_QWORD *)v8 + 49) = 0;
        v8[400] = 0;
        *((_QWORD *)v8 + 52) = v8 + 432;
        *((_QWORD *)v8 + 53) = 0x800000000LL;
        *((_QWORD *)v8 + 66) = v8 + 544;
        *((_QWORD *)v8 + 67) = 0x600000000LL;
      }
      *v7 = v8;
    }
    v8[*v8 + 1] = 3;
    v9 = *v7;
    v10 = **v7;
    *v9 = v10 + 1;
    *(_QWORD *)&v9[8 * v10 + 16] = v5;
    v11 = a1[1];
    v12 = *((unsigned int *)v11 + 14);
    if ( v12 == *((_DWORD *)v11 + 6) >> 4 )
    {
      v14 = v11[5];
    }
    else
    {
      v13 = *(_QWORD *)(v11[6] + 8 * v12 - 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v11[6] + 8 * v12 - 8) > 7u )
        goto LABEL_9;
      v14 = sub_6E8B00(a1[2][2], 0);
    }
LABEL_12:
    v15 = *v7;
    if ( !*v7 )
    {
      v60 = v7[1];
      v61 = *((_DWORD *)v60 + 3744);
      if ( v61 )
      {
        v62 = (unsigned int)(v61 - 1);
        *((_DWORD *)v60 + 3744) = v62;
        v15 = *(unsigned __int8 **)&v60[8 * v62 + 14848];
        v63 = *((unsigned int *)v15 + 134);
        v64 = *((_QWORD *)v15 + 66);
        *v15 = 0;
        *((_DWORD *)v15 + 106) = 0;
        v65 = v64 + (v63 << 6);
        while ( v64 != v65 )
        {
          while ( 1 )
          {
            v65 -= 64;
            v66 = *(void **)(v65 + 24);
            if ( v66 == (void *)(v65 + 40) )
              break;
            operator delete(v66, *(_QWORD *)(v65 + 40) + 1LL);
            if ( v64 == v65 )
              goto LABEL_66;
          }
        }
LABEL_66:
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        v15 = (unsigned __int8 *)operator new(0x3A0u);
        *v15 = 0;
        *((_QWORD *)v15 + 12) = v15 + 112;
        *((_QWORD *)v15 + 16) = v15 + 144;
        *((_QWORD *)v15 + 20) = v15 + 176;
        *((_QWORD *)v15 + 24) = v15 + 208;
        *((_QWORD *)v15 + 28) = v15 + 240;
        *((_QWORD *)v15 + 32) = v15 + 272;
        *((_QWORD *)v15 + 36) = v15 + 304;
        *((_QWORD *)v15 + 40) = v15 + 336;
        *((_QWORD *)v15 + 44) = v15 + 368;
        *((_QWORD *)v15 + 48) = v15 + 400;
        *((_QWORD *)v15 + 13) = 0;
        v15[112] = 0;
        *((_QWORD *)v15 + 17) = 0;
        v15[144] = 0;
        *((_QWORD *)v15 + 21) = 0;
        v15[176] = 0;
        *((_QWORD *)v15 + 25) = 0;
        v15[208] = 0;
        *((_QWORD *)v15 + 29) = 0;
        v15[240] = 0;
        *((_QWORD *)v15 + 33) = 0;
        v15[272] = 0;
        *((_QWORD *)v15 + 37) = 0;
        v15[304] = 0;
        *((_QWORD *)v15 + 41) = 0;
        v15[336] = 0;
        *((_QWORD *)v15 + 45) = 0;
        v15[368] = 0;
        *((_QWORD *)v15 + 49) = 0;
        v15[400] = 0;
        *((_QWORD *)v15 + 52) = v15 + 432;
        *((_QWORD *)v15 + 53) = 0x800000000LL;
        *((_QWORD *)v15 + 66) = v15 + 544;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      *v7 = v15;
    }
    v15[*v15 + 1] = 8;
    v16 = *v7;
    v17 = **v7;
    *v16 = v17 + 1;
    *(_QWORD *)&v16[8 * v17 + 16] = v14;
    v18 = *a1[3];
    v19 = sub_6E8B00(a1[2][2], v18);
    v20 = *v7;
    v21 = v19;
    if ( !*v7 )
    {
      v39 = v7[1];
      v40 = *((_DWORD *)v39 + 3744);
      if ( v40 )
      {
        v41 = (unsigned int)(v40 - 1);
        *((_DWORD *)v39 + 3744) = v41;
        v20 = *(unsigned __int8 **)&v39[8 * v41 + 14848];
        v42 = *((unsigned int *)v20 + 134);
        v43 = *((_QWORD *)v20 + 66);
        *v20 = 0;
        *((_DWORD *)v20 + 106) = 0;
        v44 = v43 + (v42 << 6);
        while ( v43 != v44 )
        {
          while ( 1 )
          {
            v44 -= 64;
            v45 = *(void **)(v44 + 24);
            if ( v45 == (void *)(v44 + 40) )
              break;
            v18 = *(_QWORD *)(v44 + 40) + 1LL;
            operator delete(v45, v18);
            if ( v43 == v44 )
              goto LABEL_45;
          }
        }
LABEL_45:
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        v20 = (unsigned __int8 *)operator new(0x3A0u);
        *v20 = 0;
        *((_QWORD *)v20 + 12) = v20 + 112;
        *((_QWORD *)v20 + 16) = v20 + 144;
        *((_QWORD *)v20 + 20) = v20 + 176;
        *((_QWORD *)v20 + 24) = v20 + 208;
        *((_QWORD *)v20 + 28) = v20 + 240;
        *((_QWORD *)v20 + 32) = v20 + 272;
        *((_QWORD *)v20 + 36) = v20 + 304;
        *((_QWORD *)v20 + 40) = v20 + 336;
        *((_QWORD *)v20 + 44) = v20 + 368;
        *((_QWORD *)v20 + 48) = v20 + 400;
        *((_QWORD *)v20 + 13) = 0;
        v20[112] = 0;
        *((_QWORD *)v20 + 17) = 0;
        v20[144] = 0;
        *((_QWORD *)v20 + 21) = 0;
        v20[176] = 0;
        *((_QWORD *)v20 + 25) = 0;
        v20[208] = 0;
        *((_QWORD *)v20 + 29) = 0;
        v20[240] = 0;
        *((_QWORD *)v20 + 33) = 0;
        v20[272] = 0;
        *((_QWORD *)v20 + 37) = 0;
        v20[304] = 0;
        *((_QWORD *)v20 + 41) = 0;
        v20[336] = 0;
        *((_QWORD *)v20 + 45) = 0;
        v20[368] = 0;
        *((_QWORD *)v20 + 49) = 0;
        v20[400] = 0;
        *((_QWORD *)v20 + 52) = v20 + 432;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        *((_QWORD *)v20 + 66) = v20 + 544;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      *v7 = v20;
    }
    v20[*v20 + 1] = 8;
    v22 = *v7;
    v23 = **v7;
    *v22 = v23 + 1;
    *(_QWORD *)&v22[8 * v23 + 16] = v21;
    goto LABEL_15;
  }
  v31 = a1[1];
  v32 = *((unsigned int *)v31 + 14);
  if ( v32 == *((_DWORD *)v31 + 6) >> 4 )
    goto LABEL_25;
  v13 = *(_QWORD *)(v31[6] + 8 * v32 - 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v31[6] + 8 * v32 - 8) <= 7u )
  {
    sub_6E8B00(a1[2][2], 0);
    goto LABEL_25;
  }
LABEL_9:
  if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 57 >= 3 )
    v13 = 0;
  v14 = sub_6E8B00(a1[2][2], v13);
  if ( v7 )
    goto LABEL_12;
LABEL_25:
  v18 = *a1[3];
  sub_6E8B00(a1[2][2], v18);
LABEL_15:
  v24 = *(_QWORD *)(*(_QWORD *)(**a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v25 = *(_QWORD *)(v24 + 8);
  if ( (v25 & 7) != 0 || (v25 & 8) != 0 )
    v26 = sub_B0CF30(*(_QWORD *)(**a1 + 8), v18) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v26 = v24 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v7 )
  {
    v27 = *v7;
    if ( !*v7 )
    {
      v46 = v7[1];
      v47 = *((_DWORD *)v46 + 3744);
      if ( v47 )
      {
        v48 = (unsigned int)(v47 - 1);
        *((_DWORD *)v46 + 3744) = v48;
        v27 = *(unsigned __int8 **)&v46[8 * v48 + 14848];
        v49 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v50 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
        v51 = v50 + (v49 << 6);
        while ( v50 != v51 )
        {
          while ( 1 )
          {
            v51 -= 64;
            v52 = *(void **)(v51 + 24);
            if ( v52 == (void *)(v51 + 40) )
              break;
            operator delete(v52, *(_QWORD *)(v51 + 40) + 1LL);
            if ( v50 == v51 )
              goto LABEL_52;
          }
        }
LABEL_52:
        *((_DWORD *)v27 + 134) = 0;
      }
      else
      {
        v27 = (unsigned __int8 *)operator new(0x3A0u);
        *v27 = 0;
        *((_QWORD *)v27 + 12) = v27 + 112;
        *((_QWORD *)v27 + 16) = v27 + 144;
        *((_QWORD *)v27 + 20) = v27 + 176;
        *((_QWORD *)v27 + 24) = v27 + 208;
        *((_QWORD *)v27 + 28) = v27 + 240;
        *((_QWORD *)v27 + 32) = v27 + 272;
        *((_QWORD *)v27 + 36) = v27 + 304;
        *((_QWORD *)v27 + 40) = v27 + 336;
        *((_QWORD *)v27 + 44) = v27 + 368;
        *((_QWORD *)v27 + 48) = v27 + 400;
        *((_QWORD *)v27 + 13) = 0;
        v27[112] = 0;
        *((_QWORD *)v27 + 17) = 0;
        v27[144] = 0;
        *((_QWORD *)v27 + 21) = 0;
        v27[176] = 0;
        *((_QWORD *)v27 + 25) = 0;
        v27[208] = 0;
        *((_QWORD *)v27 + 29) = 0;
        v27[240] = 0;
        *((_QWORD *)v27 + 33) = 0;
        v27[272] = 0;
        *((_QWORD *)v27 + 37) = 0;
        v27[304] = 0;
        *((_QWORD *)v27 + 41) = 0;
        v27[336] = 0;
        *((_QWORD *)v27 + 45) = 0;
        v27[368] = 0;
        *((_QWORD *)v27 + 49) = 0;
        v27[400] = 0;
        *((_QWORD *)v27 + 52) = v27 + 432;
        *((_QWORD *)v27 + 53) = 0x800000000LL;
        *((_QWORD *)v27 + 66) = v27 + 544;
        *((_QWORD *)v27 + 67) = 0x600000000LL;
      }
      *v7 = v27;
    }
    v27[*v27 + 1] = 8;
    v28 = *v7;
    v29 = **v7;
    *v28 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = v26;
  }
  return 0;
}

