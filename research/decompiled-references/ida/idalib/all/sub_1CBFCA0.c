__int64 __fastcall sub_1CBFCA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r13
  _QWORD *v15; // r15
  _QWORD *v16; // r14
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  int v35; // ebx
  char *v36; // rdi
  _BOOL8 v37; // r14
  unsigned int v38; // ebx
  char *v39; // r12
  char *v41; // rbx
  unsigned __int8 *v42; // rax
  __int64 v43; // rcx
  unsigned __int8 *v44; // rdx
  __int64 v45; // rax
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdx
  void *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rdx
  void *v81; // rdi
  __int64 v82; // [rsp+0h] [rbp-1A8h]
  __int64 v83; // [rsp+0h] [rbp-1A8h]
  __int64 v84; // [rsp+0h] [rbp-1A8h]
  __int64 v85; // [rsp+0h] [rbp-1A8h]
  unsigned __int8 *v86; // [rsp+0h] [rbp-1A8h]
  __int64 v87; // [rsp+0h] [rbp-1A8h]
  char v88; // [rsp+8h] [rbp-1A0h]
  unsigned __int8 *v89; // [rsp+8h] [rbp-1A0h]
  __int64 v90; // [rsp+10h] [rbp-198h]
  __int64 v91; // [rsp+10h] [rbp-198h]
  __int64 v92; // [rsp+10h] [rbp-198h]
  __int64 v93; // [rsp+18h] [rbp-190h]
  unsigned __int64 v94; // [rsp+28h] [rbp-180h]
  __int64 v97; // [rsp+48h] [rbp-160h] BYREF
  _QWORD v98[2]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v99; // [rsp+60h] [rbp-148h]
  unsigned __int8 *v100; // [rsp+70h] [rbp-138h] BYREF
  __int64 v101; // [rsp+78h] [rbp-130h]
  char v102; // [rsp+C8h] [rbp-E0h]
  unsigned int v103; // [rsp+D0h] [rbp-D8h]
  char v104; // [rsp+D4h] [rbp-D4h]
  void *ptr; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+E8h] [rbp-C0h]
  _BYTE v107[184]; // [rsp+F0h] [rbp-B8h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v5 & 4) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = sub_B8EAA0((__int64)v6);
  v10 = *(_QWORD **)(a4 + 8);
  v82 = v7;
  v11 = *(unsigned int *)(a4 + 16);
  ptr = v107;
  v106 = 0x800000000LL;
  if ( !(8 * v11) )
    goto LABEL_31;
  v88 = 0;
  LODWORD(v12) = v11;
  v13 = a4;
  v14 = v11;
  v15 = v10;
  v16 = v10;
  do
  {
    v23 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
    v24 = *(_BYTE *)(v23 + 28) & 0x7F;
    if ( (unsigned int)v24 - 53 <= 1 || ((v24 + 52) & 0x7Fu) <= 1 )
    {
      v23 = sub_B72ED0(*v15 & 0xFFFFFFFFFFFFFFF8LL);
      v24 = *(_BYTE *)(v23 + 28) & 0x7F;
    }
    if ( v24 == 71 )
    {
      v17 = (_QWORD *)(*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v23 + 16) & 4) != 0 )
        v17 = (_QWORD *)*v17;
      v18 = sub_B8EAA0((__int64)v17);
      if ( (unsigned __int8)sub_B92160(v82, v18, v19, v20, v21, v22) )
      {
        ++v15;
        goto LABEL_9;
      }
      v31 = *(_QWORD *)(v13 + 8);
      v32 = *(_QWORD *)(v31 + 8LL * *(unsigned int *)(v13 + 16) - 8);
      v33 = (unsigned int)(*(_DWORD *)(v13 + 16) - 1);
      *(_DWORD *)(v13 + 16) = v33;
      if ( v15 != (_QWORD *)(v31 + 8 * v33) )
        *v15 = v32;
      v27 = v94 & 0xFFFFFFFF00000000LL | 1;
      v94 = v27;
    }
    else
    {
      v25 = (unsigned int)(v12 - 1);
      v26 = v16[v14 - 1];
      *(_DWORD *)(v13 + 16) = v25;
      if ( v15 != &v16[v25] )
        *v15 = v26;
      v27 = v90 & 0xFFFFFFFF00000000LL;
      v90 &= 0xFFFFFFFF00000000LL;
    }
    v28 = (unsigned int)v106;
    v29 = (unsigned int)v106 + 1LL;
    if ( v29 > HIDWORD(v106) )
    {
      sub_2237220(&ptr, v107, v29, 16);
      v28 = (unsigned int)v106;
    }
    v30 = (unsigned __int64 *)((char *)ptr + 16 * v28);
    *v30 = v27;
    v30[1] = v23;
    v88 = 1;
    LODWORD(v106) = v106 + 1;
LABEL_9:
    v16 = *(_QWORD **)(v13 + 8);
    v12 = *(unsigned int *)(v13 + 16);
    v14 = v12;
  }
  while ( v15 != &v16[v12] );
  a4 = v13;
  LODWORD(v11) = *(_DWORD *)(v13 + 16);
  if ( !v88 )
    goto LABEL_31;
  v34 = *(_DWORD *)v13;
  if ( (_DWORD)v12 )
  {
    v35 = 0;
    if ( v34 == 5 )
      v35 = *(_DWORD *)(v13 + 4);
    *(_DWORD *)v13 = 2;
    sub_1A43500(v13);
    if ( *(_DWORD *)v13 == 5 )
    {
      *(_DWORD *)(v13 + 4) = v35;
      LODWORD(v11) = *(_DWORD *)(v13 + 16);
    }
    else
    {
      v36 = *(char **)(v13 + 88);
      if ( v36 )
        goto LABEL_29;
LABEL_30:
      LODWORD(v11) = *(_DWORD *)(v13 + 16);
    }
LABEL_31:
    v37 = (*(_WORD *)(a2 + 30) & 0x180) != 0;
    if ( (_DWORD)v11 )
    {
      v38 = 0;
      sub_B7D070(a2, *(_QWORD **)(a1 + 248), a4 + 8, a3, v8, v9);
      v39 = (char *)ptr;
      goto LABEL_33;
    }
  }
  else
  {
    if ( v34 != 1 )
      *(_DWORD *)v13 = 0;
    v36 = *(char **)(v13 + 88);
    if ( v36 )
    {
LABEL_29:
      sub_1A39780(v36);
      *(_QWORD *)(v13 + 88) = 0;
      goto LABEL_30;
    }
    v37 = (*(_WORD *)(a2 + 30) & 0x180) != 0;
  }
  sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xE53u, 0);
  if ( v102 )
  {
    sub_AE9DF0(&v100, v37, 2u);
  }
  else if ( v104 )
  {
    v63 = sub_168B9E0(v98);
    v66 = v99;
    if ( v99 )
      v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
    v97 = v66;
    v67 = sub_1587BC0(v63, &v97, v61, v62, v64, v65);
    sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v103 + 8), v37, 2u);
  }
  sub_15F7200(v98);
  v41 = (char *)ptr;
  v39 = (char *)ptr + 16 * (unsigned int)v106;
  if ( ptr != v39 )
  {
    while ( 2 )
    {
      sub_168B9F0((__int64)v98, (__int64 *)(a1 + 8), *(_DWORD *)(*((_QWORD *)v41 + 1) + 24LL), 0x1716u, 0);
      if ( v102 )
      {
        v42 = v100;
        v43 = *(int *)v41;
        if ( !v100 )
        {
          v70 = v101;
          v71 = *(_DWORD *)(v101 + 14976);
          if ( v71 )
          {
            v77 = (unsigned int)(v71 - 1);
            *(_DWORD *)(v101 + 14976) = v77;
            v42 = *(unsigned __int8 **)(v70 + 8 * v77 + 14848);
            v78 = *((unsigned int *)v42 + 134);
            *v42 = 0;
            v79 = *((_QWORD *)v42 + 66);
            *((_DWORD *)v42 + 106) = 0;
            v80 = v79 + (v78 << 6);
            while ( v79 != v80 )
            {
              while ( 1 )
              {
                v80 -= 64;
                v81 = *(void **)(v80 + 24);
                if ( v81 == (void *)(v80 + 40) )
                  break;
                v93 = v80;
                v92 = v79;
                v89 = v42;
                v87 = v43;
                operator delete(v81);
                v79 = v92;
                v80 = v93;
                v43 = v87;
                v42 = v89;
                if ( v92 == v93 )
                  goto LABEL_78;
              }
            }
LABEL_78:
            *((_DWORD *)v42 + 134) = 0;
          }
          else
          {
            v85 = *(int *)v41;
            v42 = (unsigned __int8 *)operator new(0x3A0u);
            *v42 = 0;
            *((_QWORD *)v42 + 12) = v42 + 112;
            *((_QWORD *)v42 + 16) = v42 + 144;
            *((_QWORD *)v42 + 20) = v42 + 176;
            *((_QWORD *)v42 + 24) = v42 + 208;
            *((_QWORD *)v42 + 28) = v42 + 240;
            *((_QWORD *)v42 + 32) = v42 + 272;
            *((_QWORD *)v42 + 36) = v42 + 304;
            *((_QWORD *)v42 + 40) = v42 + 336;
            *((_QWORD *)v42 + 44) = v42 + 368;
            *((_QWORD *)v42 + 48) = v42 + 400;
            *((_QWORD *)v42 + 52) = v42 + 432;
            *((_QWORD *)v42 + 13) = 0;
            v42[112] = 0;
            *((_QWORD *)v42 + 17) = 0;
            v42[144] = 0;
            *((_QWORD *)v42 + 21) = 0;
            v42[176] = 0;
            *((_QWORD *)v42 + 25) = 0;
            v42[208] = 0;
            *((_QWORD *)v42 + 29) = 0;
            v42[240] = 0;
            *((_QWORD *)v42 + 33) = 0;
            v42[272] = 0;
            *((_QWORD *)v42 + 37) = 0;
            v42[304] = 0;
            *((_QWORD *)v42 + 41) = 0;
            v42[336] = 0;
            *((_QWORD *)v42 + 45) = 0;
            v42[368] = 0;
            *((_QWORD *)v42 + 49) = 0;
            v42[400] = 0;
            *((_QWORD *)v42 + 53) = 0x800000000LL;
            v43 = v85;
            *((_QWORD *)v42 + 66) = v42 + 544;
            *((_QWORD *)v42 + 67) = 0x600000000LL;
          }
          v100 = v42;
        }
        v42[*v42 + 1] = 2;
        v44 = v100;
        v45 = *v100;
        *v100 = v45 + 1;
        *(_QWORD *)&v44[8 * v45 + 16] = v43;
        if ( v102 )
        {
LABEL_49:
          v46 = v100;
          if ( !v100 )
          {
            v68 = v101;
            v69 = *(_DWORD *)(v101 + 14976);
            if ( v69 )
            {
              v72 = (unsigned int)(v69 - 1);
              *(_DWORD *)(v101 + 14976) = v72;
              v46 = *(unsigned __int8 **)(v68 + 8 * v72 + 14848);
              v73 = *((unsigned int *)v46 + 134);
              *v46 = 0;
              v74 = *((_QWORD *)v46 + 66);
              *((_DWORD *)v46 + 106) = 0;
              v75 = v74 + (v73 << 6);
              while ( v74 != v75 )
              {
                while ( 1 )
                {
                  v75 -= 64;
                  v76 = *(void **)(v75 + 24);
                  if ( v76 == (void *)(v75 + 40) )
                    break;
                  v91 = v75;
                  v86 = v46;
                  operator delete(v76);
                  v75 = v91;
                  v46 = v86;
                  if ( v74 == v91 )
                    goto LABEL_73;
                }
              }
LABEL_73:
              *((_DWORD *)v46 + 134) = 0;
            }
            else
            {
              v46 = (unsigned __int8 *)operator new(0x3A0u);
              *v46 = 0;
              *((_QWORD *)v46 + 12) = v46 + 112;
              *((_QWORD *)v46 + 16) = v46 + 144;
              *((_QWORD *)v46 + 20) = v46 + 176;
              *((_QWORD *)v46 + 24) = v46 + 208;
              *((_QWORD *)v46 + 28) = v46 + 240;
              *((_QWORD *)v46 + 32) = v46 + 272;
              *((_QWORD *)v46 + 36) = v46 + 304;
              *((_QWORD *)v46 + 40) = v46 + 336;
              *((_QWORD *)v46 + 44) = v46 + 368;
              *((_QWORD *)v46 + 48) = v46 + 400;
              *((_QWORD *)v46 + 52) = v46 + 432;
              *((_QWORD *)v46 + 13) = 0;
              v46[112] = 0;
              *((_QWORD *)v46 + 17) = 0;
              v46[144] = 0;
              *((_QWORD *)v46 + 21) = 0;
              v46[176] = 0;
              *((_QWORD *)v46 + 25) = 0;
              v46[208] = 0;
              *((_QWORD *)v46 + 29) = 0;
              v46[240] = 0;
              *((_QWORD *)v46 + 33) = 0;
              v46[272] = 0;
              *((_QWORD *)v46 + 37) = 0;
              v46[304] = 0;
              *((_QWORD *)v46 + 41) = 0;
              v46[336] = 0;
              *((_QWORD *)v46 + 45) = 0;
              v46[368] = 0;
              *((_QWORD *)v46 + 49) = 0;
              v46[400] = 0;
              *((_QWORD *)v46 + 53) = 0x800000000LL;
              *((_QWORD *)v46 + 66) = v46 + 544;
              *((_QWORD *)v46 + 67) = 0x600000000LL;
            }
            v100 = v46;
          }
          v46[*v46 + 1] = 2;
          v47 = v100;
          v48 = *v100;
          *v100 = v48 + 1;
          *(_QWORD *)&v47[8 * v48 + 16] = v37;
LABEL_45:
          v41 += 16;
          sub_15F7200(v98);
          if ( v39 == v41 )
          {
            v39 = (char *)ptr;
            v38 = 1;
            goto LABEL_33;
          }
          continue;
        }
      }
      else
      {
        if ( !v104 )
          goto LABEL_45;
        v49 = sub_168B9E0(v98);
        v53 = v99;
        if ( v99 )
        {
          v83 = v49;
          v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
          v49 = v83;
        }
        v97 = v53;
        v54 = sub_1587BC0(v49, &v97, v49, v50, v51, v52);
        sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v103 + 8), *(int *)v41, 2u);
        if ( v102 )
          goto LABEL_49;
      }
      break;
    }
    if ( v104 )
    {
      v55 = sub_168B9E0(v98);
      v59 = v99;
      if ( v99 )
      {
        v84 = v55;
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 32LL))(v99);
        v55 = v84;
      }
      v97 = v59;
      v60 = sub_1587BC0(v55, &v97, v55, v56, v57, v58);
      sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v103 + 8), v37, 2u);
    }
    goto LABEL_45;
  }
  v38 = 1;
LABEL_33:
  if ( v39 != v107 )
    free(v39);
  return v38;
}
