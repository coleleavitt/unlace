__int64 __fastcall sub_4366B0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  int *v6; // rbp
  __int64 v7; // rdx
  int *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // r13d
  __int64 v14; // r12
  unsigned __int8 v15; // dl
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ebp
  int v21; // ebx
  void *v22; // r15
  int v23; // ebx
  char *v24; // r13
  char *v25; // rdx
  int v26; // eax
  _DWORD *v27; // rbx
  int v28; // ebp
  int v29; // r13d
  char *v30; // rbx
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // ebp
  int v36; // ebx
  void *v37; // rax
  char *v38; // r15
  char *v39; // rdx
  __int64 v40; // r15
  char *v41; // rbx
  __int64 v42; // rax
  int v43; // ebp
  int v44; // ebp
  int v45; // ebx
  void *v46; // rax
  char *v47; // r15
  char *v48; // rdx
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // ebp
  int v53; // ebx
  int v54; // ebx
  void *v55; // rax
  char *v56; // r15
  char *v57; // rdx
  char *v58; // rbx
  char *v59; // rbx
  int v60; // eax
  int v61; // eax
  int v62; // ebp
  int v63; // eax
  bool v64; // zf
  __int64 v65; // rbx
  int v66; // eax
  int v67; // [rsp+24h] [rbp-A4h]
  void *v68; // [rsp+28h] [rbp-A0h]
  void *v69; // [rsp+30h] [rbp-98h]
  int v70; // [rsp+3Ch] [rbp-8Ch]
  void *v71; // [rsp+40h] [rbp-88h]
  int v72; // [rsp+48h] [rbp-80h]
  int v73; // [rsp+4Ch] [rbp-7Ch]
  _QWORD *src; // [rsp+50h] [rbp-78h]
  __int64 v75; // [rsp+58h] [rbp-70h]
  unsigned int v76; // [rsp+64h] [rbp-64h]
  unsigned int v77; // [rsp+64h] [rbp-64h]
  unsigned int v78; // [rsp+64h] [rbp-64h]
  unsigned int v79; // [rsp+64h] [rbp-64h]
  unsigned __int8 *v80; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v81; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v82; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v83; // [rsp+68h] [rbp-60h]
  __int64 v84; // [rsp+70h] [rbp-58h]
  unsigned int v85; // [rsp+7Ch] [rbp-4Ch]
  char v86; // [rsp+8Fh] [rbp-39h] BYREF
  __int64 v87[7]; // [rsp+90h] [rbp-38h] BYREF

  v5 = a3;
  v87[0] = 0;
  v6 = (int *)sub_47B0B0(a1, a2, a3);
  v8 = (int *)sub_47B0B0(a1, a2, v7);
  v84 = sub_4495F0(a1, 576);
  if ( v5 < 0 )
  {
    v5 = 0;
    if ( a2 )
      v5 = strlen(a2);
  }
  v85 = sub_435280(a1, (__int64)a2, (unsigned int)v5, v87, (__int64)v6, (__int64)v8, v84, 1);
  v9 = *v8 - 1;
  v64 = *v8 == 1;
  *v8 = v9;
  if ( v9 < 0 || v64 )
  {
    sub_47B120(v8);
    v66 = *v6 - 1;
    v64 = *v6 == 1;
    *v6 = v66;
    if ( v66 >= 0 && !v64 )
      goto LABEL_4;
  }
  else
  {
    v10 = *v6 - 1;
    v64 = *v6 == 1;
    *v6 = v10;
    if ( v10 >= 0 && !v64 )
      goto LABEL_4;
  }
  sub_47B120(v6);
LABEL_4:
  sub_47D7E0(a1, a2, (unsigned int)v5, a4);
  if ( !v85 )
  {
    v80 = (unsigned __int8 *)a2;
    v76 = v5;
    v13 = 0;
    v14 = v87[0];
    v75 = v87[0];
    src = *(_QWORD **)(v84 + 32);
    v73 = *(_DWORD *)(v87[0] + 4);
    while ( 1 )
    {
      v15 = *(_BYTE *)(v14 + 14);
      while ( 1 )
      {
        *(_BYTE *)(v14 + 14) = ++v15;
        if ( v73 == -2 )
        {
          v34 = *((_DWORD *)src + 5);
          v70 = v34 + 1;
          if ( v34 == *((_DWORD *)src + 11) + 1 )
          {
            v44 = *(_DWORD *)(a4 + 40) + v70;
            if ( v44 > 178956970 )
              sub_47D740(
                (unsigned int)"max # of tokens for a Tcl parse (%d) exceeded",
                178956970,
                v34,
                (_DWORD)src,
                v11,
                v12);
            if ( *(_DWORD *)(a4 + 44) >= v44 )
            {
              v48 = *(char **)(a4 + 32);
            }
            else
            {
              v45 = 2 * v44;
              v46 = nullptr;
              if ( a4 + 96 != *(_QWORD *)(a4 + 32) )
                v46 = *(void **)(a4 + 32);
              v69 = v46;
              if ( v45 >= 178956971 )
                v45 = 178956970;
              v47 = (char *)sub_40FD00(v46);
              if ( !v47 )
              {
                v45 = v44 + v70 + 50;
                if ( v45 >= 178956971 )
                  v45 = 178956970;
                v47 = (char *)sub_40FC10(v69, 24 * v45);
              }
              *(_DWORD *)(a4 + 44) = v45;
              if ( !v69 )
                memcpy(v47, (const void *)(a4 + 96), 24LL * *(int *)(a4 + 40));
              v48 = v47;
              *(_QWORD *)(a4 + 32) = v47;
            }
            v40 = v70;
            v59 = &v48[24 * *(int *)(a4 + 40)];
            memcpy(v59, src, 24LL * v70);
            *(_DWORD *)v59 = 64;
            *(_DWORD *)(a4 + 40) += v70;
          }
          else
          {
            v35 = *(_DWORD *)(a4 + 40) + v70 + 1;
            if ( v35 > 178956970 )
              sub_47D740(
                (unsigned int)"max # of tokens for a Tcl parse (%d) exceeded",
                178956970,
                v34,
                (_DWORD)src,
                v11,
                v12);
            if ( *(_DWORD *)(a4 + 44) >= v35 )
            {
              v39 = *(char **)(a4 + 32);
            }
            else
            {
              v36 = 2 * v35;
              v37 = nullptr;
              if ( a4 + 96 != *(_QWORD *)(a4 + 32) )
                v37 = *(void **)(a4 + 32);
              v68 = v37;
              if ( v36 >= 178956971 )
                v36 = 178956970;
              v38 = (char *)sub_40FD00(v37);
              if ( !v38 )
              {
                v36 = v70 + v35 + 51;
                if ( v36 >= 178956971 )
                  v36 = 178956970;
                v38 = (char *)sub_40FC10(v68, 24 * v36);
              }
              *(_DWORD *)(a4 + 44) = v36;
              if ( !v68 )
                memcpy(v38, (const void *)(a4 + 96), 24LL * *(int *)(a4 + 40));
              v39 = v38;
              *(_QWORD *)(a4 + 32) = v38;
            }
            v40 = v70;
            v41 = &v39[24 * *(int *)(a4 + 40)];
            *(_QWORD *)v41 = *src;
            *((_QWORD *)v41 + 1) = src[1];
            v42 = src[2];
            *(_DWORD *)v41 = 64;
            *((_QWORD *)v41 + 2) = v42;
            ++*((_DWORD *)v41 + 5);
            memcpy(v41 + 24, src, 24LL * v70);
            *(_DWORD *)(a4 + 40) += v70 + 1;
          }
          v43 = *((_DWORD *)src + 2) + *((_DWORD *)src + 4) - (_DWORD)v80;
          v76 -= v43;
          v80 += v43;
          src += 3 * v40;
          goto LABEL_27;
        }
        if ( v73 <= -2 )
        {
          if ( v73 == -3 )
          {
            v49 = sub_47D8F0(v80, v76);
            v78 = v76 - v49;
            v82 = &v80[v49];
            LOBYTE(v50) = sub_434D30(v82, v78, &v86, nullptr);
            v52 = v50;
            v72 = *(_DWORD *)(a4 + 40);
            v53 = v72 + 2;
            if ( v72 + 2 > 178956970 )
              sub_47D740((unsigned int)"max # of tokens for a Tcl parse (%d) exceeded", 178956970, v72, v51, v11, v12);
            if ( *(_DWORD *)(a4 + 44) >= v53 )
            {
              v57 = *(char **)(a4 + 32);
            }
            else
            {
              v54 = 2 * v53;
              v55 = nullptr;
              if ( a4 + 96 != *(_QWORD *)(a4 + 32) )
                v55 = *(void **)(a4 + 32);
              if ( v54 >= 178956971 )
                v54 = 178956970;
              v71 = v55;
              v56 = (char *)sub_40FD00(v55);
              if ( !v56 )
              {
                v54 = v72 + 54;
                if ( v72 + 54 >= 178956971 )
                  v54 = 178956970;
                v56 = (char *)sub_40FC10(v71, 24 * v54);
              }
              *(_DWORD *)(a4 + 44) = v54;
              if ( !v71 )
                memcpy(v56, (const void *)(a4 + 96), 24LL * *(int *)(a4 + 40));
              v57 = v56;
              *(_QWORD *)(a4 + 32) = v56;
            }
            v76 = v78 - v52;
            v58 = &v57[24 * *(int *)(a4 + 40)];
            *(_DWORD *)v58 = 64;
            *((_DWORD *)v58 + 4) = v52;
            *((_QWORD *)v58 + 1) = v82;
            *((_DWORD *)v58 + 5) = 1;
            *((_DWORD *)v58 + 6) = 4;
            *((_QWORD *)v58 + 4) = v82;
            *((_DWORD *)v58 + 10) = v52;
            *((_DWORD *)v58 + 11) = 0;
            v80 = &v82[v52];
            *(_DWORD *)(a4 + 40) += 2;
            goto LABEL_27;
          }
LABEL_10:
          v14 = 16LL * v73 + v75;
          v16 = sub_47D8F0(v80, v76);
          v76 -= v16;
          v80 += v16;
          v19 = *(unsigned __int8 *)(v14 + 12);
          if ( v19 == 77 )
            goto LABEL_27;
          if ( *(unsigned __int8 *)(v14 + 12) > 0x4Du )
          {
            if ( v19 == 133 )
              goto LABEL_27;
          }
          else if ( v19 == 67 )
          {
            goto LABEL_27;
          }
          v20 = v13;
          v67 = *(_DWORD *)(a4 + 40);
          v21 = v67 + 2;
          if ( v67 + 2 > 178956970 )
            sub_47D740((unsigned int)"max # of tokens for a Tcl parse (%d) exceeded", 178956970, v17, v18, v11, v12);
          if ( *(_DWORD *)(a4 + 44) >= v21 )
          {
            v25 = *(char **)(a4 + 32);
          }
          else
          {
            v22 = *(void **)(a4 + 32);
            v23 = 2 * v21;
            if ( (void *)(a4 + 96) == v22 )
              v22 = nullptr;
            if ( v23 >= 178956971 )
              v23 = 178956970;
            v24 = (char *)sub_40FD00(v22);
            if ( !v24 )
            {
              v23 = v67 + 54;
              if ( v67 + 54 >= 178956971 )
                v23 = 178956970;
              v24 = (char *)sub_40FC10(v22, 24 * v23);
            }
            *(_DWORD *)(a4 + 44) = v23;
            if ( !v22 )
              memcpy(v24, (const void *)(a4 + 96), 24LL * *(int *)(a4 + 40));
            v25 = v24;
            *(_QWORD *)(a4 + 32) = v24;
          }
          v13 = *(_DWORD *)(a4 + 40);
          v30 = &v25[24 * v13];
          *(_DWORD *)(a4 + 40) = v13 + 2;
          *(_DWORD *)v30 = 64;
          *((_DWORD *)v30 + 6) = 128;
          *((_QWORD *)v30 + 1) = v80;
          *((_DWORD *)v30 + 11) = v20;
          goto LABEL_27;
        }
        if ( v73 != -1 )
          goto LABEL_10;
LABEL_28:
        if ( v15 == 1 )
          break;
        if ( v15 > 1u )
        {
          if ( v15 != 2 )
            continue;
          v26 = *(unsigned __int8 *)(v14 + 12);
          if ( v26 != 77 )
          {
            if ( *(unsigned __int8 *)(v14 + 12) > 0x4Du )
            {
              if ( v26 == 132 )
                goto LABEL_39;
              if ( v26 == 133 )
              {
                v32 = sub_47D8F0(v80, v76);
                v77 = v76 - v32;
                v81 = &v80[v32];
                LOBYTE(v33) = sub_434D30(v81, v77, &v86, nullptr);
                v76 = v77 - v33;
                v80 = &v81[v33];
                goto LABEL_35;
              }
LABEL_34:
              v27 = (_DWORD *)(*(_QWORD *)(a4 + 32) + 24LL * v13);
              v28 = v27[11];
              v27[4] = (_DWORD)v80 - v27[2];
              v29 = *(_DWORD *)(a4 + 40) + ~v13;
              v27[11] = 0;
              v27[5] = v29;
              v13 = v28;
              goto LABEL_35;
            }
            if ( v26 != 67 )
              goto LABEL_34;
          }
LABEL_35:
          v14 = 16LL * *(int *)(v14 + 8) + v75;
LABEL_27:
          v15 = *(_BYTE *)(v14 + 14);
          goto LABEL_28;
        }
        if ( !v15 )
          v73 = *(_DWORD *)v14;
      }
      v73 = *(_DWORD *)(v14 + 4);
      v60 = sub_47D8F0(v80, v76);
      v79 = v76 - v60;
      v83 = &v80[v60];
      LOBYTE(v61) = sub_434D30(v83, v79, &v86, nullptr);
      v62 = v61;
      v63 = *(unsigned __int8 *)(v14 + 12);
      if ( v63 != 77 )
      {
        v64 = *(unsigned __int8 *)(v14 + 12) > 0x4Du ? v63 == 133 : v63 == 67;
        if ( !v64 )
        {
          v65 = *(_QWORD *)(a4 + 32) + 24LL * v13;
          *(_DWORD *)(v65 + 40) = v62;
          *(_QWORD *)(v65 + 32) = v83;
        }
      }
      v76 = v79 - v62;
      v80 = &v83[v62];
    }
  }
  *(_QWORD *)(a4 + 80) = *(_QWORD *)(v84 + 80);
  *(_DWORD *)(a4 + 48) = *(_DWORD *)(v84 + 48);
LABEL_39:
  sub_47DCE0(v84);
  sub_449510(a1, v84);
  Tcl_Free(v87[0]);
  return v85;
}

