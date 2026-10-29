__int64 __fastcall sub_1F53760(__int64 a1, __int64 *a2, _BYTE *a3)
{
  __int64 v3; // r15
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // r14d
  bool v18; // zf
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rax
  _QWORD *v22; // r13
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // rax
  int v32; // r14d
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 *v37; // r8
  __int64 v38; // r9
  unsigned int v39; // esi
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 *v42; // rax
  __int64 v43; // r10
  _QWORD *v44; // rax
  _QWORD *v45; // r13
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  unsigned __int64 *v52; // rsi
  __int64 v53; // rcx
  char v54; // al
  _DWORD *v55; // rcx
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // edi
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // esi
  __int64 v63; // r8
  int v64; // edx
  int v65; // r14d
  int v66; // eax
  __int64 v67; // [rsp+8h] [rbp-70h]
  int v68; // [rsp+8h] [rbp-70h]
  __int64 *v69; // [rsp+8h] [rbp-70h]
  _DWORD *v70; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+18h] [rbp-60h]
  __int64 v72; // [rsp+20h] [rbp-58h] BYREF
  __int64 v73; // [rsp+28h] [rbp-50h] BYREF
  __int64 *v74; // [rsp+30h] [rbp-48h] BYREF
  int v75; // [rsp+38h] [rbp-40h]

  v3 = (__int64)a3;
  sub_1F4ACC0(a1, a2, a3);
  v7 = a2[2];
  v8 = *(unsigned int *)(v7 + 24);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *(_QWORD *)(*a2 + 144);
  v11 = (unsigned int)(v8 + 1);
  v12 = *(_QWORD *)(v9 + 8 * v8);
  *(_DWORD *)(v7 + 24) = v11;
  if ( (_DWORD)v12 == 1 )
  {
    v45 = *(_QWORD **)(v7 + 8);
    v46 = sub_1EE13A0((__int64)v45, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
    v51 = sub_1EDB980(v45, v46, v47, v48, v49, v50);
    *(_QWORD *)(v3 + 136) = v51 & 0xFFFFFFFFFFFFFFFBLL;
    v13 = *(_QWORD *)(v51 + 48);
    if ( !v13 )
    {
      v7 = a2[2];
      a2[7] = 0;
      v17 = 0;
      v11 = *(unsigned int *)(v7 + 24);
      v9 = *(_QWORD *)(v7 + 32);
      goto LABEL_8;
    }
    goto LABEL_17;
  }
  if ( (int)v12 <= 1 )
  {
    if ( !(_DWORD)v12 )
    {
      v17 = 0;
      v13 = 0;
      if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 60 > 1 )
      {
        sub_1F43DB0(a2, (unsigned __int64 *)(v3 + 96), a1);
        v7 = a2[2];
        v11 = *(unsigned int *)(v7 + 24);
        v9 = *(_QWORD *)(v7 + 32);
      }
      goto LABEL_8;
    }
LABEL_18:
    v17 = 0;
    v13 = 0;
    v18 = *(_QWORD *)(v9 + 8 * v11) == 0;
    *(_DWORD *)(v7 + 24) = v11 + 1;
    if ( v18 )
      goto LABEL_9;
LABEL_19:
    sub_1F4E180(a2, v3, 0, v13, v17, v6);
    v36 = sub_1EE13A0(*(_QWORD *)(a2[2] + 8), *(_QWORD *)(a2[2] + 16), (__int64 *)(a2[2] + 32), (_DWORD *)(a2[2] + 24));
    if ( !v36 || (*(_BYTE *)(v3 + 74) & 1) == 0 )
      return a1;
    v39 = *(_DWORD *)(v10 + 1184);
    v73 = v3;
    if ( v39 )
    {
      v40 = *(_QWORD *)(v10 + 1168);
      v41 = (v39 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
      v42 = (__int64 *)(v40 + 16LL * v41);
      v43 = *v42;
      if ( v3 == *v42 )
      {
LABEL_23:
        v44 = v42 + 1;
LABEL_24:
        *v44 = 2 * v36 + 1;
        return a1;
      }
      v65 = 1;
      v37 = nullptr;
      if ( v43 != -4096 )
      {
        while ( 1 )
        {
          if ( v43 == -8192 && !v37 )
            v37 = v42;
          v41 = (v39 - 1) & (v65 + v41);
          v42 = (__int64 *)(v40 + 16LL * v41);
          v43 = *v42;
          if ( v3 == *v42 )
            goto LABEL_23;
          if ( v43 == -4096 )
          {
            if ( v37 )
              goto LABEL_56;
            break;
          }
          ++v65;
        }
      }
      v37 = v42;
LABEL_56:
      v66 = *(_DWORD *)(v10 + 1176);
      v74 = v37;
      v34 = (unsigned int)(v66 + 1);
      v35 = (unsigned int)(4 * v34);
      if ( (unsigned int)v35 < 3 * v39 )
      {
        v35 = v39 >> 3;
        if ( v39 - *(_DWORD *)(v10 + 1180) - (unsigned int)v34 > (unsigned int)v35 )
          goto LABEL_43;
        goto LABEL_42;
      }
    }
    else
    {
      v74 = nullptr;
    }
    v39 *= 2;
LABEL_42:
    sub_EDC060(v10 + 1168, v39, v34, v35, (__int64)v37, v38);
    sub_ED8600((__int64 *)(v10 + 1168), &v73, &v74);
    v3 = v73;
    v37 = v74;
    LODWORD(v34) = *(_DWORD *)(v10 + 1176) + 1;
LABEL_43:
    v18 = *v37 == -4096;
    *(_DWORD *)(v10 + 1176) = v34;
    if ( !v18 )
      --*(_DWORD *)(v10 + 1180);
    *v37 = v3;
    v44 = v37 + 1;
    v37[1] = 0;
    goto LABEL_24;
  }
  if ( (_DWORD)v12 == 2 )
  {
    v22 = *(_QWORD **)(v7 + 8);
    v23 = sub_1EE13A0((__int64)v22, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
    v28 = sub_1EDB980(v22, v23, v24, v25, v26, v27);
    v29 = a2[2];
    v30 = v28;
    v31 = *(unsigned int *)(v29 + 24);
    *(_DWORD *)(v29 + 24) = v31 + 1;
    v67 = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v31);
    v32 = sub_1EE7490(v29);
    v33 = sub_1F21B20((__int64 *)(v10 + 2352), 16, 3u);
    *(_DWORD *)(v33 + 8) = v32;
    *(_QWORD *)v33 = v30 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(v67 - 1));
    *(_QWORD *)(v3 + 136) = v33 | 4;
    sub_1F43DB0(a2, (unsigned __int64 *)(v3 + 96), a1);
LABEL_17:
    v7 = a2[2];
    v11 = *(unsigned int *)(v7 + 24);
    v9 = *(_QWORD *)(v7 + 32);
    goto LABEL_18;
  }
  if ( (_DWORD)v12 != 3 )
    goto LABEL_18;
  v13 = sub_1EE1670(v7);
  if ( v13 )
  {
    v7 = a2[2];
    v14 = a2[1];
    v15 = *(unsigned int *)(v7 + 24);
    v9 = *(_QWORD *)(v7 + 32);
    v11 = (unsigned int)(v15 + 1);
    v16 = *(_QWORD *)(v9 + 8 * v15);
    *(_DWORD *)(v7 + 24) = v11;
    v17 = v16;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 144) + 2320LL) + 21LL) & 2) == 0
      || (((unsigned __int8)*(_QWORD *)(v3 + 96) | (unsigned __int8)(*(__int64 *)(v3 + 96) >> 1)) & 1) == 0 )
    {
      goto LABEL_8;
    }
    if ( *(_QWORD *)a1 )
    {
      v53 = 0;
      if ( *(_BYTE *)(a1 + 16) )
        v53 = *(_QWORD *)(a1 + 8);
      v68 = v16;
      sub_1F3D930(a2 + 1, (unsigned __int64 *)(v3 + 96), *(_QWORD *)a1, v53);
      v14 = a2[1];
      LODWORD(v16) = v68;
    }
    v71 = v16;
    v69 = (__int64 *)(v14 + 3648);
    v70 = (_DWORD *)v14;
    v74 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    v75 = v71;
    v54 = sub_1ECDE20(v69, (__int64 *)&v74, &v72);
    v55 = v70;
    if ( v54 )
    {
      v56 = (__int64 *)(v72 + 16);
      v57 = *(_QWORD *)(v72 + 16);
      if ( v57 )
      {
        v58 = 0;
        if ( *(_BYTE *)(a1 + 16) )
          v58 = *(_QWORD *)(a1 + 8);
        sub_1F3D930(a2 + 1, (unsigned __int64 *)(v3 + 96), v57, v58);
        v7 = a2[2];
        v11 = *(unsigned int *)(v7 + 24);
        v9 = *(_QWORD *)(v7 + 32);
        goto LABEL_8;
      }
LABEL_51:
      v7 = a2[2];
      *v56 = v3;
      v11 = *(unsigned int *)(v7 + 24);
      v9 = *(_QWORD *)(v7 + 32);
      goto LABEL_8;
    }
    v59 = v70[916];
    v60 = v72;
    v61 = (unsigned int)(v70[914] + 1);
    v62 = 2 * v59;
    v63 = (unsigned int)(4 * v61);
    v73 = v72;
    if ( (unsigned int)v63 < 3 * v59 )
    {
      if ( v59 - v70[915] - (unsigned int)v61 > v59 >> 3 )
        goto LABEL_48;
      v62 = v59;
    }
    sub_1EFDA80((__int64 **)v69, v62, v61, (__int64)v70, v63, v6);
    sub_1ECDE20(v69, (__int64 *)&v74, &v73);
    v55 = v70;
    LODWORD(v61) = v70[914] + 1;
    v60 = v73;
LABEL_48:
    v18 = *(_QWORD *)v60 == -4096;
    v55[914] = v61;
    if ( !v18 || *(_DWORD *)(v60 + 8) != -1 )
      --v55[915];
    v56 = (__int64 *)(v60 + 16);
    *(v56 - 2) = (__int64)v74;
    v64 = v75;
    *v56 = 0;
    *((_DWORD *)v56 - 2) = v64;
    goto LABEL_51;
  }
  v52 = (unsigned __int64 *)(v3 + 96);
  if ( !v3 )
    v52 = nullptr;
  v17 = 0;
  sub_1F43DB0(a2, v52, a1);
  v7 = a2[2];
  v11 = *(unsigned int *)(v7 + 24);
  v9 = *(_QWORD *)(v7 + 32);
LABEL_8:
  v18 = *(_QWORD *)(v9 + 8 * v11) == 0;
  *(_DWORD *)(v7 + 24) = v11 + 1;
  if ( !v18 )
    goto LABEL_19;
LABEL_9:
  v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL);
  if ( v19 == sub_A01140 )
    v20 = sub_B70A60(v3);
  else
    v20 = v19(v3);
  *(_QWORD *)(v3 + 128) = *(_QWORD *)(v20 + 128);
  return a1;
}
