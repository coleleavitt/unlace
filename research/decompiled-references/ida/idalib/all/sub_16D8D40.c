__int64 __fastcall sub_16D8D40(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 *v4; // r14
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 **v16; // rax
  __int64 *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // rcx
  char v20; // al
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  bool v24; // al
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  char *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rax
  char *v44; // [rsp+8h] [rbp-100h]
  __int64 v45; // [rsp+8h] [rbp-100h]
  __int64 v46; // [rsp+8h] [rbp-100h]
  __int64 v47; // [rsp+8h] [rbp-100h]
  unsigned __int8 v48; // [rsp+8h] [rbp-100h]
  char *v49; // [rsp+8h] [rbp-100h]
  __int64 v50; // [rsp+8h] [rbp-100h]
  unsigned __int8 v51; // [rsp+17h] [rbp-F1h]
  __int64 v52; // [rsp+28h] [rbp-E0h]
  __int64 v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+40h] [rbp-C8h] BYREF
  int v55; // [rsp+48h] [rbp-C0h]
  __int64 *v56; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v57; // [rsp+60h] [rbp-A8h] BYREF
  char v58; // [rsp+B8h] [rbp-50h]
  unsigned int v59; // [rsp+C0h] [rbp-48h]
  char v60; // [rsp+C4h] [rbp-44h]

  v4 = &a2[a3];
  if ( a2 != v4 )
  {
    v7 = a2;
    v51 = 0;
    while ( 1 )
    {
      v8 = *v7;
      if ( *(char *)(*v7 + 28) >= 0 )
      {
        if ( (unsigned __int8)sub_1E63CF0(a1, *(unsigned int *)(v8 + 24), *(_QWORD *)(v8 + 48), 1, 5261)
          || (LODWORD(v53) = 1,
              v46 = sub_B74600(v8),
              v31 = sub_B73090(v8),
              v55 = 2872,
              v56 = &v53,
              v54 = off_2BC6948,
              (unsigned __int8)sub_1866EA0(a1, v31, v46, &v54)) )
        {
          sub_B88650(v8, 1);
          v51 = 1;
        }
      }
      if ( a4 )
      {
        v9 = *(_QWORD *)(v8 + 40);
        if ( ((v9 & 7) != 0 || (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v8 + 29) & 2) == 0 )
        {
          v10 = *(_BYTE **)(a1 + 232);
          if ( (v10[1] & 8) == 0 && (*v10 & 8) == 0 )
          {
            sub_168B9F0((__int64)&v54, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1611u, 0);
            sub_15F7200(&v54);
          }
        }
      }
      v11 = sub_B74600(v8);
      sub_16B5DF0(a1, v11, *(_DWORD *)(v8 + 24));
      if ( *(char *)(v8 + 28) >= 0 )
      {
        v30 = (char *)sub_F63270(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL), v11, v12, v13, v14, v15);
        if ( v30 )
        {
          if ( v30[28] >= 0 )
          {
            v11 = *((_QWORD *)v30 + 13);
            v44 = v30;
            sub_7052B0((__int64 *)(v11 + 96), v11, v12, v13, v14, v15);
            v12 = (__int64)v44;
            if ( *(char *)(*((_QWORD *)v44 + 16) + 7LL) >= 0
              && !(unsigned __int8)sub_B8E180((unsigned __int64)(v44 + 64)) )
            {
              v12 = (__int64)v44;
              if ( (v44[76] & 8) != 0 )
              {
                v45 = sub_1A69EF0(a1, v44);
                sub_1910D40(a1, *(unsigned int *)(v8 + 24), v45, 1);
                LODWORD(v54) = *(_DWORD *)(v8 + 24);
                v11 = v45;
                sub_18F5260(a1, v45, (unsigned int)&v54, 1, 0, 0, 0, 0, 0);
              }
            }
          }
        }
      }
      if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v16 = (__int64 **)sub_B8C3D0(v8, v11, v12, v13, v14, v15);
        v17 = *v16;
        v18 = (unsigned __int64)&(*v16)[*((unsigned int *)v16 + 2)];
        if ( (unsigned __int64)v17 >= v18 )
        {
          if ( v17 == (__int64 *)v18 )
            goto LABEL_17;
          if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 102 )
          {
LABEL_49:
            while ( 1 )
            {
              v32 = *v17;
              if ( *(_WORD *)(*v17 + 36) == 102 )
                break;
              ++v17;
            }
            v33 = *(_QWORD *)(v8 + 48);
            v47 = v32;
            if ( (v33 & 1) == 0 && (byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
            {
              sub_168B9F0((__int64)&v54, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0xC8Fu, 0);
              v34 = sub_B17520(v47);
              if ( v58 )
              {
                sub_16B7630(&v57, (__int64)v34);
              }
              else if ( v60 )
              {
                v49 = v34;
                v37 = sub_168B9E0(&v54);
                v40 = (__int64)v49;
                v41 = v37;
                v42 = (__int64)v56;
                if ( v56 )
                {
                  v52 = v41;
                  v42 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(*v56 + 32))(v56, *v56, v49);
                  v41 = v52;
                  v40 = (__int64)v49;
                }
                v50 = v40;
                v53 = v42;
                v43 = sub_1587BC0(v41, &v53, v40, v41, v38, v39);
                sub_16B7630((unsigned __int8 **)(*v43 + 32LL * v59 + 8), v50);
              }
              LODWORD(v53) = 1;
              sub_1587D10((__int64)&v54, (int *)&v53);
              sub_15F7200(&v54);
            }
            goto LABEL_17;
          }
          v35 = (__int64 *)(v18 + 8);
          while ( v17 != v35 )
          {
            v36 = *v35++;
            if ( *(_WORD *)(v36 + 36) == 102 )
              goto LABEL_49;
          }
        }
        else
        {
          v19 = v17;
          while ( *(_WORD *)(*v19 + 36) != 102 )
          {
            if ( (__int64 *)v18 == ++v19 )
              goto LABEL_17;
          }
          if ( (__int64 *)v18 != v19 )
            goto LABEL_49;
        }
      }
LABEL_17:
      v20 = *(_BYTE *)(v8 + 28);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      {
        if ( v20 < 0 )
          goto LABEL_26;
        v21 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          v21 = *(_QWORD *)v21;
        if ( !v21 )
        {
LABEL_24:
          v23 = sub_B74600(v8);
          v24 = sub_F65F60(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v24 )
          {
            v48 = v24;
            sub_B88650(v8, 1);
            sub_168B9F0((__int64)&v54, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1561u, 0);
            sub_15F7200(&v54);
            v51 = v48;
          }
          goto LABEL_26;
        }
        v22 = *(_BYTE *)(v21 + 8) & 0x7F;
        if ( v22 > 0x12u )
        {
          if ( ((v22 + 94) & 0x7Fu) > 5 )
            goto LABEL_24;
        }
        else if ( ((1LL << v22) & 0x40182) == 0 )
        {
          goto LABEL_24;
        }
        v26 = *(_QWORD *)(sub_B8C1B0(v21) + 16);
        if ( (v26 & 4) != 0 )
          v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v27 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v27 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v28 = v27 - 64;
          if ( v28 )
          {
            v29 = *(_QWORD *)(v8 + 40);
            LODWORD(v54) = *(_DWORD *)(v8 + 24);
            sub_1868660(a1, &v54, v29, v28, 0);
          }
        }
        v20 = *(_BYTE *)(v8 + 28);
      }
      if ( v20 >= 0 )
        goto LABEL_24;
LABEL_26:
      if ( v4 == ++v7 )
        return v51;
    }
  }
  return 0;
}
