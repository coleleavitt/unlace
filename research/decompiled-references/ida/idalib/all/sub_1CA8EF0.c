void __fastcall sub_1CA8EF0(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __m128i *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int ***v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int **v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int **v24; // rcx
  unsigned __int8 *v25; // rbx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r12
  unsigned __int8 *v29; // rbx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // r14
  unsigned __int8 *v40; // rbx
  _BYTE *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r13
  unsigned __int8 *v51; // rbx
  _BYTE *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // r15
  __int64 v65; // r14
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // r14
  __int64 v70; // r13
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 v74; // rdx
  __int64 v75; // r15
  void *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r14
  __int64 v79; // r15
  __int64 v80; // r14
  void *v81; // rdi
  __int64 v82; // [rsp+8h] [rbp-E0h]
  unsigned __int32 v83; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v84; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v85[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v87; // [rsp+40h] [rbp-A8h]
  __int64 v88; // [rsp+48h] [rbp-A0h]
  char v89; // [rsp+98h] [rbp-50h]
  unsigned int v90; // [rsp+A0h] [rbp-48h]
  char v91; // [rsp+A4h] [rbp-44h]

  v4 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( !(unsigned __int8)sub_B19800(
                           *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL) + 16LL,
                           **(unsigned int **)(*(_QWORD *)(v4 + 8) + 16LL),
                           (int *)&v83) )
  {
    sub_168B9F0((__int64)v85, a1, a3[1].m128i_u32[2], 0x19C0u, 0);
    if ( v89 )
    {
      v25 = v87;
      if ( !v87 )
      {
        v56 = v88;
        v57 = *(_DWORD *)(v88 + 14976);
        if ( v57 )
        {
          v62 = (unsigned int)(v57 - 1);
          *(_DWORD *)(v88 + 14976) = v62;
          v25 = *(unsigned __int8 **)(v56 + 8 * v62 + 14848);
          v63 = *((unsigned int *)v25 + 134);
          *v25 = 0;
          v64 = *((_QWORD *)v25 + 66);
          *((_DWORD *)v25 + 106) = 0;
          v65 = v64 + (v63 << 6);
          while ( v64 != v65 )
          {
            while ( 1 )
            {
              v65 -= 64;
              v66 = *(void **)(v65 + 24);
              if ( v66 == (void *)(v65 + 40) )
                break;
              operator delete(v66);
              if ( v64 == v65 )
                goto LABEL_62;
            }
          }
LABEL_62:
          *((_DWORD *)v25 + 134) = 0;
        }
        else
        {
          v25 = (unsigned __int8 *)operator new(0x3A0u);
          *v25 = 0;
          *((_QWORD *)v25 + 12) = v25 + 112;
          *((_QWORD *)v25 + 16) = v25 + 144;
          *((_QWORD *)v25 + 20) = v25 + 176;
          *((_QWORD *)v25 + 24) = v25 + 208;
          *((_QWORD *)v25 + 28) = v25 + 240;
          *((_QWORD *)v25 + 32) = v25 + 272;
          *((_QWORD *)v25 + 36) = v25 + 304;
          *((_QWORD *)v25 + 40) = v25 + 336;
          *((_QWORD *)v25 + 44) = v25 + 368;
          *((_QWORD *)v25 + 48) = v25 + 400;
          *((_QWORD *)v25 + 52) = v25 + 432;
          *((_QWORD *)v25 + 13) = 0;
          v25[112] = 0;
          *((_QWORD *)v25 + 17) = 0;
          v25[144] = 0;
          *((_QWORD *)v25 + 21) = 0;
          v25[176] = 0;
          *((_QWORD *)v25 + 25) = 0;
          v25[208] = 0;
          *((_QWORD *)v25 + 29) = 0;
          v25[240] = 0;
          *((_QWORD *)v25 + 33) = 0;
          v25[272] = 0;
          *((_QWORD *)v25 + 37) = 0;
          v25[304] = 0;
          *((_QWORD *)v25 + 41) = 0;
          v25[336] = 0;
          *((_QWORD *)v25 + 45) = 0;
          v25[368] = 0;
          *((_QWORD *)v25 + 49) = 0;
          v25[400] = 0;
          *((_QWORD *)v25 + 53) = 0x800000000LL;
          *((_QWORD *)v25 + 66) = v25 + 544;
          *((_QWORD *)v25 + 67) = 0x600000000LL;
        }
        v87 = v25;
      }
      v25[*v25 + 1] = 16;
      v26 = v87;
      v27 = *v87;
      *v87 = v27 + 1;
      *(_QWORD *)&v26[8 * v27 + 16] = a3;
    }
    else
    {
      if ( !v91 )
      {
LABEL_20:
        sub_15F7200(v85);
        return;
      }
      v34 = sub_168B9E0(v85);
      v37 = v86;
      if ( v86 )
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 32LL))(v86);
      v84 = v37;
      v38 = sub_1587BC0(v34, &v84, v32, v33, v35, v36);
      v39 = *v38 + 32LL * v90;
      v40 = *(unsigned __int8 **)(v39 + 8);
      if ( !v40 )
      {
        v60 = *(_QWORD *)(v39 + 16);
        v61 = *(_DWORD *)(v60 + 14976);
        if ( v61 )
        {
          v72 = (unsigned int)(v61 - 1);
          *(_DWORD *)(v60 + 14976) = v72;
          v40 = *(unsigned __int8 **)(v60 + 8 * v72 + 14848);
          v73 = *((unsigned int *)v40 + 134);
          *v40 = 0;
          v74 = *((_QWORD *)v40 + 66);
          *((_DWORD *)v40 + 106) = 0;
          v75 = v74 + (v73 << 6);
          while ( v74 != v75 )
          {
            while ( 1 )
            {
              v75 -= 64;
              v76 = *(void **)(v75 + 24);
              if ( v76 == (void *)(v75 + 40) )
                break;
              v82 = v74;
              operator delete(v76);
              v74 = v82;
              if ( v82 == v75 )
                goto LABEL_72;
            }
          }
LABEL_72:
          *((_DWORD *)v40 + 134) = 0;
        }
        else
        {
          v40 = (unsigned __int8 *)operator new(0x3A0u);
          *v40 = 0;
          *((_QWORD *)v40 + 12) = v40 + 112;
          *((_QWORD *)v40 + 16) = v40 + 144;
          *((_QWORD *)v40 + 20) = v40 + 176;
          *((_QWORD *)v40 + 24) = v40 + 208;
          *((_QWORD *)v40 + 28) = v40 + 240;
          *((_QWORD *)v40 + 32) = v40 + 272;
          *((_QWORD *)v40 + 36) = v40 + 304;
          *((_QWORD *)v40 + 40) = v40 + 336;
          *((_QWORD *)v40 + 44) = v40 + 368;
          *((_QWORD *)v40 + 48) = v40 + 400;
          *((_QWORD *)v40 + 52) = v40 + 432;
          *((_QWORD *)v40 + 13) = 0;
          v40[112] = 0;
          *((_QWORD *)v40 + 17) = 0;
          v40[144] = 0;
          *((_QWORD *)v40 + 21) = 0;
          v40[176] = 0;
          *((_QWORD *)v40 + 25) = 0;
          v40[208] = 0;
          *((_QWORD *)v40 + 29) = 0;
          v40[240] = 0;
          *((_QWORD *)v40 + 33) = 0;
          v40[272] = 0;
          *((_QWORD *)v40 + 37) = 0;
          v40[304] = 0;
          *((_QWORD *)v40 + 41) = 0;
          v40[336] = 0;
          *((_QWORD *)v40 + 45) = 0;
          v40[368] = 0;
          *((_QWORD *)v40 + 49) = 0;
          v40[400] = 0;
          *((_QWORD *)v40 + 53) = 0x800000000LL;
          *((_QWORD *)v40 + 66) = v40 + 544;
          *((_QWORD *)v40 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v39 + 8) = v40;
      }
      v40[*v40 + 1] = 16;
      v41 = *(_BYTE **)(v39 + 8);
      v42 = (unsigned __int8)*v41;
      *v41 = v42 + 1;
      *(_QWORD *)&v41[8 * v42 + 16] = a3;
    }
    v28 = *(_QWORD *)(v4 + 8);
    if ( v89 )
    {
      v29 = v87;
      if ( !v87 )
      {
        v54 = v88;
        v55 = *(_DWORD *)(v88 + 14976);
        if ( v55 )
        {
          v67 = (unsigned int)(v55 - 1);
          *(_DWORD *)(v88 + 14976) = v67;
          v29 = *(unsigned __int8 **)(v54 + 8 * v67 + 14848);
          v68 = *((unsigned int *)v29 + 134);
          *v29 = 0;
          v69 = *((_QWORD *)v29 + 66);
          *((_DWORD *)v29 + 106) = 0;
          v70 = v69 + (v68 << 6);
          while ( v69 != v70 )
          {
            while ( 1 )
            {
              v70 -= 64;
              v71 = *(void **)(v70 + 24);
              if ( v71 == (void *)(v70 + 40) )
                break;
              operator delete(v71);
              if ( v69 == v70 )
                goto LABEL_67;
            }
          }
LABEL_67:
          *((_DWORD *)v29 + 134) = 0;
        }
        else
        {
          v29 = (unsigned __int8 *)operator new(0x3A0u);
          *v29 = 0;
          *((_QWORD *)v29 + 12) = v29 + 112;
          *((_QWORD *)v29 + 16) = v29 + 144;
          *((_QWORD *)v29 + 20) = v29 + 176;
          *((_QWORD *)v29 + 24) = v29 + 208;
          *((_QWORD *)v29 + 28) = v29 + 240;
          *((_QWORD *)v29 + 32) = v29 + 272;
          *((_QWORD *)v29 + 36) = v29 + 304;
          *((_QWORD *)v29 + 40) = v29 + 336;
          *((_QWORD *)v29 + 44) = v29 + 368;
          *((_QWORD *)v29 + 48) = v29 + 400;
          *((_QWORD *)v29 + 52) = v29 + 432;
          *((_QWORD *)v29 + 13) = 0;
          v29[112] = 0;
          *((_QWORD *)v29 + 17) = 0;
          v29[144] = 0;
          *((_QWORD *)v29 + 21) = 0;
          v29[176] = 0;
          *((_QWORD *)v29 + 25) = 0;
          v29[208] = 0;
          *((_QWORD *)v29 + 29) = 0;
          v29[240] = 0;
          *((_QWORD *)v29 + 33) = 0;
          v29[272] = 0;
          *((_QWORD *)v29 + 37) = 0;
          v29[304] = 0;
          *((_QWORD *)v29 + 41) = 0;
          v29[336] = 0;
          *((_QWORD *)v29 + 45) = 0;
          v29[368] = 0;
          *((_QWORD *)v29 + 49) = 0;
          v29[400] = 0;
          *((_QWORD *)v29 + 53) = 0x800000000LL;
          *((_QWORD *)v29 + 66) = v29 + 544;
          *((_QWORD *)v29 + 67) = 0x600000000LL;
        }
        v87 = v29;
      }
      v29[*v29 + 1] = 5;
      v30 = v87;
      v31 = *v87;
      *v87 = v31 + 1;
      *(_QWORD *)&v30[8 * v31 + 16] = v28;
    }
    else if ( v91 )
    {
      v45 = sub_168B9E0(v85);
      v48 = v86;
      if ( v86 )
        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 32LL))(v86);
      v84 = v48;
      v49 = sub_1587BC0(v45, &v84, v43, v44, v46, v47);
      v50 = *v49 + 32LL * v90;
      v51 = *(unsigned __int8 **)(v50 + 8);
      if ( !v51 )
      {
        v58 = *(_QWORD *)(v50 + 16);
        v59 = *(_DWORD *)(v58 + 14976);
        if ( v59 )
        {
          v77 = (unsigned int)(v59 - 1);
          *(_DWORD *)(v58 + 14976) = v77;
          v51 = *(unsigned __int8 **)(v58 + 8 * v77 + 14848);
          v78 = *((unsigned int *)v51 + 134);
          *v51 = 0;
          v79 = *((_QWORD *)v51 + 66);
          *((_DWORD *)v51 + 106) = 0;
          v80 = v79 + (v78 << 6);
          while ( v79 != v80 )
          {
            while ( 1 )
            {
              v80 -= 64;
              v81 = *(void **)(v80 + 24);
              if ( v81 == (void *)(v80 + 40) )
                break;
              operator delete(v81);
              if ( v79 == v80 )
                goto LABEL_77;
            }
          }
LABEL_77:
          *((_DWORD *)v51 + 134) = 0;
        }
        else
        {
          v51 = (unsigned __int8 *)operator new(0x3A0u);
          *v51 = 0;
          *((_QWORD *)v51 + 12) = v51 + 112;
          *((_QWORD *)v51 + 16) = v51 + 144;
          *((_QWORD *)v51 + 20) = v51 + 176;
          *((_QWORD *)v51 + 24) = v51 + 208;
          *((_QWORD *)v51 + 28) = v51 + 240;
          *((_QWORD *)v51 + 32) = v51 + 272;
          *((_QWORD *)v51 + 36) = v51 + 304;
          *((_QWORD *)v51 + 40) = v51 + 336;
          *((_QWORD *)v51 + 44) = v51 + 368;
          *((_QWORD *)v51 + 48) = v51 + 400;
          *((_QWORD *)v51 + 52) = v51 + 432;
          *((_QWORD *)v51 + 13) = 0;
          v51[112] = 0;
          *((_QWORD *)v51 + 17) = 0;
          v51[144] = 0;
          *((_QWORD *)v51 + 21) = 0;
          v51[176] = 0;
          *((_QWORD *)v51 + 25) = 0;
          v51[208] = 0;
          *((_QWORD *)v51 + 29) = 0;
          v51[240] = 0;
          *((_QWORD *)v51 + 33) = 0;
          v51[272] = 0;
          *((_QWORD *)v51 + 37) = 0;
          v51[304] = 0;
          *((_QWORD *)v51 + 41) = 0;
          v51[336] = 0;
          *((_QWORD *)v51 + 45) = 0;
          v51[368] = 0;
          *((_QWORD *)v51 + 49) = 0;
          v51[400] = 0;
          *((_QWORD *)v51 + 53) = 0x800000000LL;
          *((_QWORD *)v51 + 66) = v51 + 544;
          *((_QWORD *)v51 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v50 + 8) = v51;
      }
      v51[*v51 + 1] = 5;
      v52 = *(_BYTE **)(v50 + 8);
      v53 = (unsigned __int8)*v52;
      *v52 = v53 + 1;
      *(_QWORD *)&v52[8 * v53 + 16] = v28;
    }
    goto LABEL_20;
  }
  LODWORD(v85[0]) = 0;
  if ( v83 <= 1 )
  {
    if ( !(unsigned __int8)sub_15EB880((__int64)a3, *a1, 1u) )
      return;
  }
  else if ( v83 <= 3
         && (!(unsigned __int8)sub_15EB880((__int64)a3, *a1, 2u)
          || !(unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, v85, 0xFFFFFFFFLL, 0)) )
  {
    return;
  }
  v5 = sub_168B6C0((__int64)a1);
  v6 = (_QWORD *)sub_168B6C0((__int64)a1);
  v9 = v6[294];
  v6[304] += 48LL;
  v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6[295] >= (unsigned __int64)&v10[3] && v9 )
    v6[294] = v10 + 3;
  else
    v10 = (__m128i *)sub_986170((__int64)(v6 + 294), 48, 48, 3, v7, v8);
  sub_B197D0(v10, v5, a3, v83, v85[0]);
  sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = (unsigned int ***)sub_B8C3D0(a2, (__int64)v10, v15, v16, v17, v18);
    v22 = *v19;
    v23 = (unsigned __int64)&(*v19)[*((unsigned int *)v19 + 2)];
    if ( (unsigned __int64)v22 >= v23 )
    {
      if ( v22 == (unsigned int **)v23 )
        return;
      while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 364 )
      {
        v23 += 8LL;
        if ( v22 == (unsigned int **)v23 )
          return;
      }
    }
    else
    {
      v24 = v22;
      while ( *((_WORD *)*v24 + 18) != 364 )
      {
        if ( (unsigned int **)v23 == ++v24 )
          return;
      }
      if ( (unsigned int **)v23 == v24 )
        return;
    }
    while ( *((_WORD *)*v22 + 18) != 364 )
      ++v22;
    sub_1CA24E0((__int64 *)*a1, (_QWORD *)a2, (unsigned int *)v10, *v22, v20, v21);
  }
}
