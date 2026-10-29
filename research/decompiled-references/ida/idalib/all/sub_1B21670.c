void __fastcall sub_1B21670(__int64 a1, unsigned __int64 a2, char *a3, unsigned int a4, double a5)
{
  __int64 v5; // r14
  unsigned __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r13d
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // edx
  int v20; // r15d
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // ebx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r13d
  unsigned __int64 v34; // r12
  char v35; // r14
  __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r12
  char v42; // al
  __int64 v43; // rax
  unsigned int v44; // r9d
  char v45; // dl
  char v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  _BOOL8 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdi
  void (*v57)(); // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbp
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // [rsp+0h] [rbp-F8h]
  int v73; // [rsp+0h] [rbp-F8h]
  int v74; // [rsp+Ch] [rbp-ECh]
  int v75; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v76; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v77; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v78[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v80; // [rsp+50h] [rbp-A8h] BYREF
  char v81; // [rsp+A8h] [rbp-50h]
  unsigned int v82; // [rsp+B0h] [rbp-48h]
  char v83; // [rsp+B4h] [rbp-44h]

  if ( !a3 )
    return;
  v5 = (__int64)a3;
  if ( a3[28] < 0 )
    return;
  v7 = a2;
  if ( a2 )
  {
    v72 = sub_EEC8C0(a2, a2, a5);
    v12 = sub_EEB7E0(a2, a2, a5);
  }
  else
  {
    v37 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a3 + 16LL))(a3);
    v12 = *(_DWORD *)(v5 + 24);
    v72 = v37;
  }
  v13 = *(_BYTE *)(v5 + 28) & 0x7F;
  v14 = (unsigned int)v13 - 40;
  if ( (unsigned int)v14 > 6 )
  {
LABEL_28:
    if ( v13 == 71 )
    {
      v5 = *(_QWORD *)(v5 + 48);
      v13 = *(_BYTE *)(v5 + 28) & 0x7F;
    }
    v20 = v13;
    if ( (unsigned int)v13 - 34 <= 5 )
    {
      v21 = sub_B06290((_BYTE *)v5);
      if ( a4 )
      {
        v14 = HIDWORD(v21);
        if ( BYTE4(v21) )
        {
          if ( (_DWORD)v21 == 2 )
          {
            sub_168B9F0((__int64)v78, (__int64 *)a1, a4, 0x1195u, 0);
            sub_15F7200(v78);
            sub_168B9F0((__int64)v78, (__int64 *)a1, *(_DWORD *)(v5 + 24), 0x170Bu, 0);
            if ( v81 )
            {
              sub_AE9DF0(&v80, v5, 0xAu);
            }
            else if ( v83 )
            {
              v67 = sub_168B9E0(v78);
              v70 = v79;
              if ( v79 )
                v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 32LL))(v79);
              v77 = v70;
              v71 = sub_1587BC0(v67, &v77, v65, v66, v68, v69);
              sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v82 + 8), v5, 0xAu);
            }
            sub_15F7200(v78);
            return;
          }
        }
      }
      v20 = *(_BYTE *)(v5 + 28) & 0x7F;
    }
    if ( (unsigned int)(v20 - 26) > 0x1A )
    {
      if ( !v7 )
        return;
      v23 = *(_QWORD *)a1;
      v77 = sub_EEC8C0(v7, a2, a5);
      v27 = sub_C00A40(v7, a2, v38, v39, v40);
    }
    else
    {
      if ( !v7 )
      {
        if ( sub_F62670(*(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL), nullptr, v14, v9, v10, v11)
          || (v41 = *(_QWORD *)a1, (unsigned __int8)(sub_B06290((_BYTE *)v5) >> 32))
          || (unsigned __int8)sub_1B18650(v12, v72, v41, *(_QWORD *)(v5 + 48), 0) )
        {
          if ( *(_DWORD *)(a1 + 24) )
          {
            v42 = *(_BYTE *)(v5 + 28) & 0x7F;
            if ( ((v42 + 94) & 0x7Fu) <= 0xC || v42 == 71 )
            {
              v43 = sub_B06110((_BYTE *)v5);
              v44 = *(_DWORD *)(a1 + 24);
              if ( !v45 || v44 > *(_DWORD *)(v43 + 60) )
              {
                v46 = 0;
                v47 = *(_QWORD *)(a1 + 16) + 56LL * v44 - 56;
                if ( *(_BYTE *)(v47 + 40) )
                {
                  v7 = *(_QWORD *)(v47 + 32);
                  v46 = v7 == 0;
                }
                v74 = *(_DWORD *)(a1 + 24);
                v48 = ((unsigned __int64)*(unsigned int *)(v47 + 48) << 32) | *(unsigned int *)(v47 + 48);
                v73 = *(_DWORD *)(v47 + 24);
                v49 = *(_DWORD *)(sub_168B6E0(a1) + 64) > 0x33u;
                v50 = sub_168B6C0(a1);
                v51 = sub_B30E20(v50, v49, v73, v7, v46, v74, v48);
                sub_B8CC60(v5, v51, v52, v53, v54, v55);
                v56 = *(_QWORD *)(sub_168B6C0(a1) + 18368);
                if ( v56 )
                {
                  v57 = *(void (**)())(*(_QWORD *)v56 + 160LL);
                  if ( v57 != nullsub_447 )
                    ((void (__fastcall *)(__int64, __int64, __int64))v57)(v56, v5, v51);
                }
              }
            }
          }
        }
        return;
      }
      v22 = *(_QWORD *)a1;
      if ( !(unsigned __int8)(sub_B06290((_BYTE *)v5) >> 32) )
      {
        a2 = v72;
        if ( !(unsigned __int8)sub_1B18650(v12, v72, v22, *(_QWORD *)(v5 + 48), 0) )
          return;
      }
      v23 = *(_QWORD *)a1;
      v77 = sub_EEC8C0(v7, a2, a5);
      v27 = sub_C00A40(v7, a2, v24, v25, v26);
      v20 = *(_BYTE *)(v5 + 28) & 0x7F;
    }
    if ( (unsigned int)(v20 - 40) <= 6 )
    {
      v76 = v5;
      v28 = sub_B06290((_BYTE *)v5);
      v33 = v28;
      v34 = HIDWORD(v28);
      v35 = BYTE4(v28);
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 232) + 64LL) > 0x31u
        && (sub_15F2610(v23, 1, v29, v30, v31, v32) || sub_15F24E0(v23, 1, v58, v59, v60, v61) || sub_15F3040(v23))
        && !sub_9B48E0(v76) )
      {
        if ( !(_BYTE)v34 || v33 > 1 )
        {
          v62 = (__int64 *)(v23 + 8);
          sub_168B9F0((__int64)v78, v62, *(_DWORD *)(v76 + 24), 0x11B1u, 0);
          sub_15F7200(v78);
          sub_168B9F0((__int64)v78, v62, v27, 0x193Fu, 0);
          v63 = sub_17B9080((__int64)v78, &v76);
          v75 = 0;
          v64 = sub_1587D10(v63, &v75);
          sub_15884C0(v64, &v77);
          sub_15F7200(v78);
        }
      }
      else if ( !v35 )
      {
        v36 = (__int64 *)(v23 + 8);
        sub_168B9F0((__int64)v78, v36, *(_DWORD *)(v76 + 24), 0x1C38u, 0);
        sub_15F7200(v78);
        sub_168B9F0((__int64)v78, v36, v27, 0x1934u, 0);
        sub_15884C0((__int64)v78, &v77);
        sub_15F7200(v78);
      }
    }
    return;
  }
  if ( ((v13 + 85) & 0x7D) == 0 )
    goto LABEL_14;
  v15 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
  {
    v16 = *(_BYTE *)(sub_B8EAA0(*(_QWORD *)(v15 + 8)) + 8) & 0x7F;
    if ( !v16 )
      goto LABEL_26;
  }
  else
  {
    v16 = *(_BYTE *)(sub_B8EAA0(v15) + 8) & 0x7F;
    if ( !v16 )
    {
LABEL_26:
      a2 = *(_QWORD *)(a1 + 8);
      sub_1AFBE90((__int64)v78, a2, v5);
      if ( (unsigned __int8)sub_FFEF60(SHIDWORD(v78[0]), a2, v19) )
      {
        sub_168B9F0((__int64)v78, (__int64 *)a1, v12, 0x1211u, 0);
        sub_15F7200(v78);
        sub_1AFBE90((__int64)v78, *(_QWORD *)(a1 + 8), v5);
        sub_1B20830(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), v5, (unsigned int *)v78, 0);
        return;
      }
      v13 = *(_BYTE *)(v5 + 28) & 0x7F;
      goto LABEL_28;
    }
  }
  if ( v16 == 24 )
    goto LABEL_26;
  v13 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( v13 == 43 )
  {
    if ( (*(_BYTE *)(v5 + 96) & 7) != 2 && ((*(_BYTE *)(v5 + 96) & 7) != 0 || ((*(_BYTE *)(v5 + 96) >> 3) & 3) != 2) )
      return;
    goto LABEL_25;
  }
  v17 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    v17 = *(_QWORD *)v17;
  if ( ((*(_BYTE *)(v17 + 8) + 70) & 0x7Fu) <= 3 )
    goto LABEL_26;
LABEL_14:
  if ( (*(_BYTE *)(v5 + 96) & 7) != 2 && ((*(_BYTE *)(v5 + 96) & 7) != 0 || ((*(_BYTE *)(v5 + 96) >> 3) & 3) != 2) )
    goto LABEL_17;
LABEL_25:
  if ( !sub_A5EB90(v5) )
    goto LABEL_26;
  v13 = *(_BYTE *)(v5 + 28) & 0x7F;
LABEL_17:
  if ( v13 != 43 )
  {
    v18 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
      v18 = *(_QWORD *)v18;
    if ( ((*(_BYTE *)(v18 + 8) + 70) & 0x7Fu) <= 3 )
      goto LABEL_26;
  }
}
