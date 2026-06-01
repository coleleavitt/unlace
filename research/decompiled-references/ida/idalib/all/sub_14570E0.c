void __fastcall sub_14570E0(__int64 a1)
{
  __int64 v2; // rax
  char v3; // bp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  char v10; // al
  void **v11; // rbp
  unsigned __int64 v12; // rax
  void **v13; // rdx
  void **v14; // r13
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // r13
  char v18; // al
  __int64 v19; // rbp
  unsigned int v20; // esi
  unsigned int v21; // edx
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // edx
  unsigned __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r11
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // edx
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 *v48; // r10
  int v49; // eax
  bool v50; // zf
  int v51; // r13d
  int v52; // eax
  void **v53; // [rsp+8h] [rbp-E0h]
  void **v54; // [rsp+8h] [rbp-E0h]
  __int64 v55; // [rsp+8h] [rbp-E0h]
  __int64 v56; // [rsp+8h] [rbp-E0h]
  __int64 v57; // [rsp+8h] [rbp-E0h]
  unsigned __int64 *v58; // [rsp+8h] [rbp-E0h]
  __int64 v59; // [rsp+8h] [rbp-E0h]
  unsigned __int64 *v60; // [rsp+8h] [rbp-E0h]
  unsigned __int64 *v61; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v62; // [rsp+20h] [rbp-C8h]
  unsigned __int64 *v63; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v65; // [rsp+28h] [rbp-C0h]
  __int64 v66; // [rsp+38h] [rbp-B0h] BYREF
  int v67[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int16 v68; // [rsp+50h] [rbp-98h]
  void *v69; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v70; // [rsp+68h] [rbp-80h]
  __int64 v71; // [rsp+70h] [rbp-78h]
  void *v72; // [rsp+80h] [rbp-68h]
  __int64 v73; // [rsp+90h] [rbp-58h] BYREF
  __int16 v74; // [rsp+A0h] [rbp-48h]

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 1120);
    if ( v2 )
      *(_BYTE *)(v2 + 26) = 1;
    v3 = *(_BYTE *)(a1 + 544);
    *(_BYTE *)(a1 + 544) = v3 | 0x20;
    sub_14634E0(a1, v67);
    *(_BYTE *)(a1 + 544) = (32 * ((v3 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
    v4 = *(_QWORD *)(a1 + 1120);
    if ( v4 )
      *(_BYTE *)(v4 + 26) = 0;
    if ( v68 == 2 )
      break;
    if ( v68 != 6 )
    {
      sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 48), v67[0], 1143);
      sub_AEA040((__int64)&v69);
      return;
    }
    v9 = sub_1460F90(a1, v67);
    v10 = *(_BYTE *)(v9 + 3);
    if ( (v10 & 0x20) == 0 )
    {
      if ( (v10 & 2) == 0 )
        goto LABEL_30;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 21LL) & 2) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 1704);
        v66 = v9;
        v20 = *(_DWORD *)(v19 + 16);
        if ( !v20 )
        {
          v69 = nullptr;
          goto LABEL_93;
        }
        v21 = (v20 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v22 = (unsigned __int64 *)(*(_QWORD *)v19 + 16LL * v21);
        v23 = *v22;
        if ( v9 == *v22 )
          goto LABEL_36;
        v51 = 1;
        v48 = nullptr;
        if ( v23 == -4096 )
        {
LABEL_101:
          v48 = v22;
LABEL_102:
          v52 = *(_DWORD *)(v19 + 8);
          v5 = 3 * v20;
          v69 = v48;
          v49 = v52 + 1;
          v6 = (unsigned int)(4 * v49);
          if ( (unsigned int)v6 < (unsigned int)v5 )
          {
            v6 = v9;
            v5 = v20 - *(_DWORD *)(v19 + 12) - v49;
            if ( (unsigned int)v5 <= v20 >> 3 )
            {
LABEL_94:
              sub_12F12D0(v19, v20, v5, v6, v7, v8);
              sub_12EC520((__int64 *)v19, &v66, &v69);
              v6 = v66;
              v48 = (unsigned __int64 *)v69;
              v49 = *(_DWORD *)(v19 + 8) + 1;
            }
            v50 = *v48 == -4096;
            *(_DWORD *)(v19 + 8) = v49;
            if ( !v50 )
              --*(_DWORD *)(v19 + 12);
            *v48 = v6;
            v27 = 0;
            v24 = v48 + 1;
            v28 = v66;
            *v24 = 0;
            goto LABEL_48;
          }
LABEL_93:
          v20 *= 2;
          goto LABEL_94;
        }
        while ( 1 )
        {
          if ( v23 == -8192 && !v48 )
            v48 = v22;
          v7 = (unsigned int)(v51 + 1);
          v21 = (v20 - 1) & (v51 + v21);
          v22 = (unsigned __int64 *)(*(_QWORD *)v19 + 16LL * v21);
          v23 = *v22;
          if ( v9 == *v22 )
            break;
          if ( v23 == -4096 )
          {
            if ( v48 )
              goto LABEL_102;
            goto LABEL_101;
          }
          ++v51;
        }
LABEL_36:
        v24 = v22 + 1;
        v25 = v22[1];
        v26 = (unsigned __int64 *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
        v27 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v25 && (v25 & 4) != 0 )
        {
          v28 = v9;
          if ( !v26 )
            goto LABEL_48;
          v27 = *v26;
        }
        while ( v27 && (*(_BYTE *)(v27 + 12) & 3) == 2 )
          v27 = *(_QWORD *)v27;
        v28 = v9;
LABEL_48:
        if ( (*(_BYTE *)(v28 + 4) & 0x10) == 0 )
        {
          if ( (*(_BYTE *)(v28 + 3) & 2) != 0 )
            goto LABEL_50;
          v33 = 0;
LABEL_91:
          v37 = 0;
          goto LABEL_72;
        }
        v58 = v24;
        sub_145CD30(a1, v28);
        v24 = v58;
        if ( (*(_BYTE *)(v28 + 3) & 2) != 0 )
        {
LABEL_50:
          v29 = *(_QWORD *)(a1 + 56);
          if ( (*(_BYTE *)(v29 + 21) & 2) == 0 && *(char *)(v29 + 22) >= 0 )
            goto LABEL_89;
          v30 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
          if ( !v30 )
            goto LABEL_89;
          v31 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*v24 || (*v24 & 4) == 0 || (v32 = *v24 & 0xFFFFFFFFFFFFFFF8LL, !v31) )
          {
            v45 = *(_QWORD *)(a1 + 128);
            *(_QWORD *)(a1 + 208) += 32LL;
            v46 = (v45 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( *(_QWORD *)(a1 + 136) >= v46 + 32 && v45 )
            {
              *(_QWORD *)(a1 + 128) = v46 + 32;
              v32 = (v45 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v64 = v31;
              v60 = v24;
              v32 = sub_986170(a1 + 128, 32, 32, 4, v7, v8);
              v31 = v64;
              v24 = v60;
              v46 = v32 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)(v32 + 8) = 0;
            *(_DWORD *)(v32 + 16) = 0;
            *(_QWORD *)(v32 + 24) = 0;
            *(_QWORD *)v32 = v31;
            *(_BYTE *)(v32 + 20) = 0;
            *v24 = v46 | 4;
            v30 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
          }
          if ( *(_DWORD *)(v32 + 16) != v30 )
          {
            v61 = v24;
            v55 = v32;
            sub_14476F0(a1, v28, v32);
            v32 = v55;
            v24 = v61;
          }
          v33 = *(unsigned __int8 *)(v32 + 20);
        }
        else
        {
LABEL_89:
          v33 = 0;
        }
        v34 = v66;
        if ( (*(_BYTE *)(v66 + 4) & 0x10) != 0 )
        {
          v62 = v24;
          v57 = v66;
          sub_145CD30(a1, v66);
          v34 = v57;
          v24 = v62;
          v35 = *(_BYTE *)(v57 + 3) & 2;
        }
        else
        {
          v35 = *(_BYTE *)(v66 + 3) & 2;
        }
        if ( !v35 )
          goto LABEL_91;
        v36 = *(_QWORD *)(a1 + 56);
        if ( (*(_BYTE *)(v36 + 21) & 2) != 0 || (v37 = 0, *(char *)(v36 + 22) < 0) )
        {
          v38 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
          if ( !v38 )
            goto LABEL_91;
          v39 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*v24 || (*v24 & 4) == 0 || (v40 = *v24 & 0xFFFFFFFFFFFFFFF8LL, !v39) )
          {
            v43 = *(_QWORD *)(a1 + 128);
            *(_QWORD *)(a1 + 208) += 32LL;
            v44 = (v43 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( *(_QWORD *)(a1 + 136) >= v44 + 32 && v43 )
            {
              *(_QWORD *)(a1 + 128) = v44 + 32;
              v40 = (v43 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v65 = v39;
              v63 = v24;
              v59 = v34;
              v40 = sub_986170(a1 + 128, 32, 32, 4, v39, v8);
              v39 = v65;
              v24 = v63;
              v34 = v59;
              v44 = v40 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)(v40 + 8) = 0;
            *(_DWORD *)(v40 + 16) = 0;
            *(_QWORD *)(v40 + 24) = 0;
            *(_QWORD *)v40 = v39;
            *(_BYTE *)(v40 + 20) = 0;
            *v24 = v44 | 4;
            v38 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
          }
          if ( *(_DWORD *)(v40 + 16) != v38 )
          {
            v56 = v40;
            sub_14476F0(a1, v34, v40);
            v40 = v56;
          }
          v41 = *(_QWORD *)(v40 + 8);
          v42 = v41 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v41 & 4) != 0 )
            v37 = *(unsigned int *)(v42 + 8);
          else
            v37 = v42 != 0;
        }
LABEL_72:
        if ( (!v27 || (*(_BYTE *)(v27 + 12) & 3) != 0
                   || !((4 * v33) & 0xFFFFFFFFFFFFFFF8LL | v27 & 0xFFFFFFFFFFFFFFF8LL))
          && !v37 )
        {
          goto LABEL_30;
        }
      }
      sub_FC70B0((__int64)&v69, *(_QWORD *)(a1 + 48), v67[0], 1296);
      if ( (_BYTE)v74 )
      {
        sub_FC7790(v71, (__int64 *)&v69, SHIBYTE(v74));
        v71 = 0;
        v74 = 0;
      }
      if ( v72 != &v73 )
        operator delete(v72);
      v11 = (void **)v69;
      if ( v69 )
      {
        v12 = v70;
        if ( v70 )
        {
          if ( (unsigned __int64)v69 >= v70 && (unsigned __int64)v69 <= v70 + 14848 )
          {
            v47 = *(unsigned int *)(v70 + 14976);
            *(_DWORD *)(v70 + 14976) = v47 + 1;
            *(_QWORD *)(v12 + 8 * v47 + 14848) = v11;
          }
          else
          {
            v13 = *((void ***)v69 + 66);
            v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v69 + 134)];
            if ( v13 != v14 )
            {
              do
              {
                while ( 1 )
                {
                  v14 -= 8;
                  v15 = (void **)v14[3];
                  if ( v15 == v14 + 5 )
                    break;
                  v53 = v13;
                  operator delete(v15);
                  v13 = v53;
                  if ( v53 == v14 )
                    goto LABEL_21;
                }
              }
              while ( v13 != v14 );
LABEL_21:
              v14 = (void **)v11[66];
            }
            if ( v14 != v11 + 68 )
              free(v14);
            v16 = (void **)v11[52];
            v17 = v11 + 52;
            if ( v16 != v11 + 54 )
              free(v16);
            v54 = v11 + 12;
            do
            {
              while ( 1 )
              {
                v17 -= 4;
                if ( *v17 == v17 + 2 )
                  break;
                operator delete(*v17);
                if ( v17 == v54 )
                  goto LABEL_29;
              }
            }
            while ( v17 != v54 );
LABEL_29:
            operator delete(v11, 0x3A0u);
          }
        }
      }
LABEL_30:
      v18 = *(_BYTE *)(v9 + 4);
      *(_BYTE *)(v9 + 3) |= 0xA0u;
      if ( (v18 & 1) != 0 )
        *(_BYTE *)(v9 + 4) = v18 | 2;
    }
  }
}
