__int64 __fastcall sub_9FAB60(_QWORD *a1, unsigned int a2, _BYTE *a3, __int64 a4, _BYTE *a5, __int64 a6, _QWORD *a7)
{
  __int64 v7; // r13
  int *v9; // r15
  unsigned int *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  char v13; // dl
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // r14
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  char v27; // dl
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  void *v33; // rdi
  int v34; // eax
  void *v35; // rdi
  int v36; // eax
  void *v37; // rdi
  int v38; // eax
  void *v39; // rdi
  int v40; // eax
  void *v41; // rdi
  int v42; // eax
  void *v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  __int64 v47; // [rsp+0h] [rbp-228h]
  unsigned int *v48; // [rsp+10h] [rbp-218h]
  int *v49; // [rsp+28h] [rbp-200h]
  __int64 v51; // [rsp+38h] [rbp-1F0h]
  __int64 v53; // [rsp+48h] [rbp-1E0h]
  int v56[24]; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v57[96]; // [rsp+D0h] [rbp-158h] BYREF
  int v58[8]; // [rsp+130h] [rbp-F8h] BYREF
  int v59[8]; // [rsp+150h] [rbp-D8h] BYREF
  int v60[8]; // [rsp+170h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+190h] [rbp-98h] BYREF
  __int64 v62; // [rsp+198h] [rbp-90h]
  __int64 v63; // [rsp+1A0h] [rbp-88h] BYREF
  __int64 v64; // [rsp+1A8h] [rbp-80h]
  __int64 v65; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v66; // [rsp+1B8h] [rbp-70h]
  __int64 v67; // [rsp+1C0h] [rbp-68h] BYREF
  __int64 v68; // [rsp+1C8h] [rbp-60h]
  __int64 v69; // [rsp+1D0h] [rbp-58h] BYREF
  __int64 v70; // [rsp+1D8h] [rbp-50h]
  __int64 v71; // [rsp+1E0h] [rbp-48h] BYREF
  __int64 v72; // [rsp+1E8h] [rbp-40h]

  v7 = a2;
  if ( a2 == -1 || ((*(_BYTE *)(a1[90] + 4LL * a2 + 3) >> 4) & 3) != 1 )
  {
    v9 = sub_9AD4F0((__int64)a1, a2);
    v10 = *(unsigned int **)(a1[89] + 16LL * a2);
    if ( v10 )
      v48 = &v10[2 * *(v10 - 1)];
    else
      v48 = nullptr;
    *a3 = 1;
    *a5 = 1;
    sub_992B50(a4);
    sub_992B50(a4 + 32);
    sub_992B50(a4 + 64);
    sub_992B50(a6);
    sub_992B50(a6 + 32);
    sub_992B50(a6 + 64);
    v61 = 1;
    v62 = 0;
    v63 = 1;
    v64 = 0;
    sub_182CBA0(qword_1C7F2C0, &v63);
    v11 = *(_DWORD *)a7;
    *(_DWORD *)a7 = v61;
    LODWORD(v61) = v11;
    v12 = a7[1];
    a7[1] = v62;
    v62 = v12;
    v13 = BYTE4(v61) & 1 | *((_BYTE *)a7 + 4) & 0xFC | BYTE4(v61) & 2;
    BYTE4(v61) = *((_BYTE *)a7 + 4) & 1 | BYTE4(v61) & 0xFC | *((_BYTE *)a7 + 4) & 2;
    LODWORD(v12) = *((_DWORD *)a7 + 4);
    v14 = *((_BYTE *)a7 + 20);
    *((_BYTE *)a7 + 4) = v13;
    v15 = v64;
    *((_DWORD *)a7 + 4) = 1;
    LODWORD(v63) = v12;
    v16 = a7[3];
    a7[3] = v15;
    v64 = v16;
    LOBYTE(v16) = v14 & 1 | v14 & 2 | BYTE4(v63) & 0xFC;
    *((_BYTE *)a7 + 20) = v14 & 0xFC | BYTE4(v63) & 2;
    BYTE4(v63) = v16;
    sub_25A130((char *)&v61);
    v17 = *(_QWORD *)(a1[93] + 8 * v7);
    if ( v17 )
    {
      if ( *a3 || sub_33D280(a4, v17 + 16) )
      {
        sub_98B5F0(a4, (int *)(v17 + 16));
        *a3 = 0;
      }
      else if ( *a3 )
      {
        goto LABEL_71;
      }
      if ( *a5 )
      {
        v18 = *(_QWORD *)(a1[94] + 8 * v7);
        v19 = (int *)(v18 + 16);
        if ( !v18 )
          goto LABEL_11;
        goto LABEL_10;
      }
      if ( sub_9F4890(a4, a6) )
        return 1;
    }
LABEL_71:
    v45 = *(_QWORD *)(a1[94] + 8 * v7);
    if ( !v45 )
      goto LABEL_11;
    v19 = (int *)(v45 + 16);
    if ( !*a5 && !sub_33D280((__int64)v19, a6) )
    {
      if ( *a3 || *a5 )
        goto LABEL_11;
      goto LABEL_76;
    }
LABEL_10:
    sub_98B5F0(a6, v19);
    *a5 = 0;
    if ( *a3 )
      goto LABEL_11;
LABEL_76:
    if ( sub_9F4890(a4, a6) )
      return 1;
LABEL_11:
    if ( v10 == v48 )
      return 1;
    while ( 1 )
    {
      v20 = *v10;
      if ( (_DWORD)v20 == -1 )
        goto LABEL_24;
      v21 = a1[87] + 24 * v20;
      v22 = *(_DWORD *)(v21 + 12);
      if ( v22 == -1 )
        goto LABEL_24;
      v23 = 4LL * v22;
      if ( ((*(_BYTE *)(a1[90] + v23 + 3) >> 4) & 3) == 2 )
        goto LABEL_24;
      v47 = *(_QWORD *)v21 + 40LL * v10[1];
      v49 = sub_9AD4F0((__int64)a1, v22);
      v24 = a1[90];
      if ( (*(_BYTE *)(v24 + v23 + 3) & 0x40) != 0
        && (*(_BYTE *)(v24 + 4 * v7 + 3) & 0x40) != 0
        && ((*(_BYTE *)(v47 + 20) & 1) != 0 || *(_DWORD *)(v47 + 16) != 1) )
      {
        sub_992B90((__int64)v58, v47);
        sub_992D20((__int64)&v61, (__int64)a7, (__int64)v58);
        v25 = *(_DWORD *)a7;
        *(_DWORD *)a7 = v61;
        LODWORD(v61) = v25;
        v26 = a7[1];
        a7[1] = v62;
        v62 = v26;
        v27 = *((_BYTE *)a7 + 4) & 0xFC | BYTE4(v61) & 2 | BYTE4(v61) & 1;
        BYTE4(v61) = *((_BYTE *)a7 + 4) & 1 | BYTE4(v61) & 0xFC | *((_BYTE *)a7 + 4) & 2;
        *((_BYTE *)a7 + 4) = v27;
        v28 = v63;
        LODWORD(v63) = *((_DWORD *)a7 + 4);
        v29 = a7[3];
        *((_DWORD *)a7 + 4) = v28;
        v30 = v64;
        v64 = v29;
        LOBYTE(v29) = *((_BYTE *)a7 + 20);
        a7[3] = v30;
        LOBYTE(v30) = v29 & 0xFC | BYTE4(v63) & 2 | BYTE4(v63) & 1;
        BYTE4(v63) = v29 & 1 | BYTE4(v63) & 0xFC | v29 & 2;
        *((_BYTE *)a7 + 20) = v30;
        sub_25A130((char *)&v61);
        sub_25A130((char *)v58);
      }
      v31 = *(_QWORD *)(a1[93] + 8LL * v22);
      v32 = *(_QWORD *)(a1[94] + 8LL * v22);
      v53 = v31;
      v51 = v32;
      if ( *(int *)v47 < 0 )
      {
        if ( v31 )
        {
          sub_9F7AE0((__int64)v57, (__int64)v49, v31 + 16);
          sub_8A6550((__int64)v58, (__int64)v57);
          sub_3ED4D0((__int64)qword_1C7F2C0, v58, v47, (__int64)v58);
          sub_3ED4D0((__int64)qword_1C7F2C0, v59, v47, (__int64)v59);
          sub_3ED4D0((__int64)qword_1C7F2C0, v60, v47, (__int64)v60);
          v61 = 0;
          v33 = qword_1C7F2C0;
          v62 = 0;
          v63 = 1;
          v64 = 0;
          if ( (v9[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v61, v9);
          else
            LODWORD(v61) = *v9;
          if ( (v9[5] & 1) != 0 )
          {
            sub_182C690(v33, &v63, v9 + 4);
          }
          else
          {
            v34 = v9[4];
            BYTE4(v63) &= ~1u;
            LODWORD(v63) = v34;
          }
          v65 = 0;
          v35 = qword_1C7F2C0;
          v66 = 0;
          v67 = 1;
          v68 = 0;
          if ( (v9[9] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v65, v9 + 8);
          else
            LODWORD(v65) = v9[8];
          if ( (v9[13] & 1) != 0 )
          {
            sub_182C690(v35, &v67, v9 + 12);
          }
          else
          {
            v36 = v9[12];
            BYTE4(v67) &= ~1u;
            LODWORD(v67) = v36;
          }
          v69 = 0;
          v37 = qword_1C7F2C0;
          v70 = 0;
          v71 = 1;
          v72 = 0;
          if ( (v9[17] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v69, v9 + 16);
          else
            LODWORD(v69) = v9[16];
          if ( (v9[21] & 1) != 0 )
          {
            sub_182C690(v37, &v71, v9 + 20);
          }
          else
          {
            v38 = v9[20];
            BYTE4(v71) &= ~1u;
            LODWORD(v71) = v38;
          }
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v61, (__int64)v58, (__int64)&v61);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v65, (__int64)v59, (__int64)&v65);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v69, (__int64)v60, (__int64)&v69);
          sub_8A6550((__int64)v56, (__int64)&v61);
          sub_2A6060((__int64)&v61);
          sub_2A6060((__int64)v58);
          sub_2A6060((__int64)v57);
          if ( *a3 || sub_33D280(a4, (__int64)v56) )
          {
            sub_98B5F0(a4, v56);
            *a3 = 0;
            goto LABEL_50;
          }
          if ( !*a3 )
          {
LABEL_50:
            if ( !*a5 && sub_9F4890(a4, a6) )
              goto LABEL_83;
          }
          sub_2A6060((__int64)v56);
        }
        if ( !v51 )
          goto LABEL_24;
        sub_9F7AE0((__int64)v57, (__int64)v49, v51 + 16);
        sub_8A6550((__int64)v58, (__int64)v57);
        sub_3ED4D0((__int64)qword_1C7F2C0, v58, v47, (__int64)v58);
        sub_3ED4D0((__int64)qword_1C7F2C0, v59, v47, (__int64)v59);
        sub_3ED4D0((__int64)qword_1C7F2C0, v60, v47, (__int64)v60);
        v61 = 0;
        v39 = qword_1C7F2C0;
        v62 = 0;
        v63 = 1;
        v64 = 0;
        if ( (v9[1] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v61, v9);
        else
          LODWORD(v61) = *v9;
        if ( (v9[5] & 1) != 0 )
        {
          sub_182C690(v39, &v63, v9 + 4);
        }
        else
        {
          v40 = v9[4];
          BYTE4(v63) &= ~1u;
          LODWORD(v63) = v40;
        }
        v65 = 0;
        v41 = qword_1C7F2C0;
        v66 = 0;
        v67 = 1;
        v68 = 0;
        if ( (v9[9] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v65, v9 + 8);
        else
          LODWORD(v65) = v9[8];
        if ( (v9[13] & 1) != 0 )
        {
          sub_182C690(v41, &v67, v9 + 12);
        }
        else
        {
          v42 = v9[12];
          BYTE4(v67) &= ~1u;
          LODWORD(v67) = v42;
        }
        v69 = 0;
        v43 = qword_1C7F2C0;
        v70 = 0;
        v71 = 1;
        v72 = 0;
        if ( (v9[17] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v69, v9 + 16);
        else
          LODWORD(v69) = v9[16];
        if ( (v9[21] & 1) != 0 )
        {
          sub_182C690(v43, &v71, v9 + 20);
        }
        else
        {
          v44 = v9[20];
          BYTE4(v71) &= ~1u;
          LODWORD(v71) = v44;
        }
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v61, (__int64)v58, (__int64)&v61);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v65, (__int64)v59, (__int64)&v65);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v69, (__int64)v60, (__int64)&v69);
        sub_8A6550((__int64)v56, (__int64)&v61);
        sub_2A6060((__int64)&v61);
        sub_2A6060((__int64)v58);
        sub_2A6060((__int64)v57);
        if ( *a5 || sub_33D280((__int64)v56, a6) )
        {
          sub_98B5F0(a6, v56);
          *a5 = 0;
          if ( !*a3 )
            goto LABEL_85;
        }
        else if ( !*a3 && !*a5 )
        {
          goto LABEL_85;
        }
        goto LABEL_23;
      }
      if ( v32 )
        break;
LABEL_18:
      if ( v53 )
      {
        sub_9F7AE0((__int64)v57, (__int64)v49, v53 + 16);
        sub_8A6550((__int64)v58, (__int64)v57);
        sub_3ED4D0((__int64)qword_1C7F2C0, v58, v47, (__int64)v58);
        sub_3ED4D0((__int64)qword_1C7F2C0, v59, v47, (__int64)v59);
        sub_3ED4D0((__int64)qword_1C7F2C0, v60, v47, (__int64)v60);
        sub_8A6550((__int64)&v61, (__int64)v9);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v61, (__int64)v58, (__int64)&v61);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v65, (__int64)v59, (__int64)&v65);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v69, (__int64)v60, (__int64)&v69);
        sub_8A6550((__int64)v56, (__int64)&v61);
        sub_2A6060((__int64)&v61);
        sub_2A6060((__int64)v58);
        sub_2A6060((__int64)v57);
        if ( !*a5 && !sub_33D280((__int64)v56, a6) )
        {
          if ( *a3 || *a5 )
            goto LABEL_23;
LABEL_85:
          if ( sub_9F4890(a4, a6) )
            goto LABEL_83;
          goto LABEL_23;
        }
        sub_98B5F0(a6, v56);
        *a5 = 0;
        if ( !*a3 )
          goto LABEL_85;
LABEL_23:
        sub_2A6060((__int64)v56);
      }
LABEL_24:
      v10 += 2;
      if ( v10 == v48 )
        return 1;
    }
    sub_9F7AE0((__int64)v57, (__int64)v49, v32 + 16);
    sub_8A6550((__int64)v58, (__int64)v57);
    sub_3ED4D0((__int64)qword_1C7F2C0, v58, v47, (__int64)v58);
    sub_3ED4D0((__int64)qword_1C7F2C0, v59, v47, (__int64)v59);
    sub_3ED4D0((__int64)qword_1C7F2C0, v60, v47, (__int64)v60);
    sub_8A6550((__int64)&v61, (__int64)v9);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v61, (__int64)v58, (__int64)&v61);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v65, (__int64)v59, (__int64)&v65);
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v69, (__int64)v60, (__int64)&v69);
    sub_8A6550((__int64)v56, (__int64)&v61);
    sub_2A6060((__int64)&v61);
    sub_2A6060((__int64)v58);
    sub_2A6060((__int64)v57);
    if ( *a3 || sub_33D280(a4, (__int64)v56) )
    {
      sub_98B5F0(a4, v56);
      *a3 = 0;
    }
    else if ( *a3 )
    {
LABEL_17:
      sub_2A6060((__int64)v56);
      goto LABEL_18;
    }
    if ( !*a5 && sub_9F4890(a4, a6) )
    {
LABEL_83:
      sub_2A6060((__int64)v56);
      return 1;
    }
    goto LABEL_17;
  }
  return 0;
}

