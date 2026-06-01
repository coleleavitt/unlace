void __fastcall sub_16C7630(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  bool v7; // r14
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  char *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int16 *v20; // rax
  __int16 v21; // ax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  char *v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  signed __int64 v38; // r15
  signed __int64 v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // r15
  __int64 *v42; // rbp
  unsigned __int64 v43; // rdi
  __int64 v44; // r14
  __int64 *v45; // rax
  __int64 *v46; // rax
  unsigned __int64 v47; // rdx
  signed __int64 v48; // rbp
  signed __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  char v52; // cl
  unsigned __int64 v53; // rdx
  unsigned __int64 *v54; // rax
  _QWORD *v55; // rcx
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rax
  __int64 *v58; // rax
  __int64 *v59; // rax
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 *v63; // rax
  _QWORD *v64; // rax
  char *v65; // [rsp+0h] [rbp-98h]
  _BYTE *v66; // [rsp+8h] [rbp-90h]
  void (__fastcall *v67)(__int64, _BYTE *, unsigned __int64, __int64, signed __int64); // [rsp+10h] [rbp-88h]
  unsigned __int64 v69; // [rsp+20h] [rbp-78h]
  signed __int64 v70; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v72; // [rsp+38h] [rbp-60h]
  _BYTE v73[88]; // [rsp+40h] [rbp-58h] BYREF

  if ( (*(_WORD *)a2 & 0x1FF) != 0x2E )
    return;
  v6 = *(_QWORD *)&byte_8[*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v6 & 8) != 0 && (*((_BYTE *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    return;
  v7 = 0;
  v9 = a2;
  v67 = (void (__fastcall *)(__int64, _BYTE *, unsigned __int64, __int64, signed __int64))a3;
  ptr = v73;
  v66 = a2;
  v72 = 0x400000000LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v9[2] + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_QWORD *)v10;
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 17LL) & 4) != 0 )
      goto LABEL_57;
    if ( (*v9 & 0x80000LL) != 0 )
      v11 = *(_QWORD *)(sub_F68450(v11, (__int64)a2, a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = (char *)sub_F60F10(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, a3, a4, a5, a6);
    if ( v12[28] < 0 )
      goto LABEL_57;
    v16 = v9[3];
    v17 = (*(_BYTE *)(v16 + 28) & 0x7Fu) - 49;
    if ( (unsigned int)v17 > 2 || *(char *)(v16 + 28) < 0 )
      goto LABEL_57;
    if ( v7 )
    {
LABEL_11:
      v7 = 1;
      goto LABEL_12;
    }
    if ( (v12[29] & 1) != 0 )
    {
      v60 = sub_B8C3D0((__int64)v12, (__int64)a2, v17, v13, v14, v15);
      v17 = *v60;
      v13 = *v60 + 8LL * *((unsigned int *)v60 + 2);
      if ( *v60 < v13 )
      {
        v63 = (__int64 *)*v60;
        while ( 1 )
        {
          v17 = *v63;
          if ( *(_WORD *)(*v63 + 36) == 325 )
            break;
          if ( (__int64 *)v13 == ++v63 )
            goto LABEL_61;
        }
        if ( (__int64 *)v13 != v63 )
          goto LABEL_11;
      }
      else if ( v17 != v13 )
      {
        if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 325 )
          goto LABEL_11;
        v61 = (__int64 *)(v13 + 8);
        while ( 1 )
        {
          v13 = (unsigned __int64)v61;
          if ( (__int64 *)v17 == v61 )
            break;
          v62 = *v61++;
          if ( *(_WORD *)(v62 + 36) == 325 )
            goto LABEL_11;
        }
      }
    }
LABEL_61:
    if ( (*(_BYTE *)(v16 + 29) & 1) != 0 )
    {
      v54 = sub_B8C3D0(v16, (__int64)a2, v17, v13, v14, v15);
      v55 = (_QWORD *)*v54;
      v56 = *v54 + 8LL * *((unsigned int *)v54 + 2);
      if ( *v54 < v56 )
      {
        v64 = (_QWORD *)*v54;
        while ( 1 )
        {
          a2 = (_BYTE *)*v64;
          v55 = v64;
          if ( *(_WORD *)(*v64 + 36LL) == 325 )
            break;
          if ( (_QWORD *)v56 == ++v64 )
            goto LABEL_12;
        }
LABEL_68:
        v7 = v55 != (_QWORD *)v56;
        goto LABEL_12;
      }
      if ( v55 == (_QWORD *)v56 )
        goto LABEL_12;
      if ( *(_WORD *)(*(_QWORD *)v56 + 36LL) == 325 )
        goto LABEL_68;
      v57 = (_QWORD *)(v56 + 8);
      while ( 1 )
      {
        v56 = (unsigned __int64)v57;
        if ( v55 == v57 )
          break;
        a2 = (_BYTE *)*v57++;
        if ( *(_WORD *)(*(_QWORD *)v56 + 36LL) == 325 )
          goto LABEL_68;
      }
    }
LABEL_12:
    v18 = (unsigned int)v72 + 1LL;
    if ( v18 > HIDWORD(v72) )
    {
      a2 = v73;
      sub_2237220(&ptr, v73, v18, 8);
    }
    *((_QWORD *)ptr + (unsigned int)v72) = v16;
    v19 = v9[2];
    LODWORD(v72) = v72 + 1;
    v20 = (unsigned __int16 *)sub_BFB9F0(v19);
    a3 = *v20;
    LOWORD(a3) = a3 & 0x1FF;
    if ( (_WORD)a3 != 46 )
      break;
    v9 = v20;
  }
  if ( v7 )
  {
    v69 = sub_BFBAE0(v19);
    v21 = *(_WORD *)v69 & 0x1FF;
    if ( v21 != 71 )
    {
      if ( v21 != 98 )
        goto LABEL_57;
      v69 = 0;
    }
    v70 = sub_A980A0(*(_QWORD *)(a1 + 248), *((_QWORD *)v66 + 1));
    if ( v70 != 1 )
    {
      v26 = 0;
      v27 = 8LL * (unsigned int)v72;
      v65 = (char *)ptr;
      v28 = (char *)ptr + v27;
      if ( ptr != (char *)ptr + v27 )
      {
        do
        {
          v29 = *(_QWORD *)(a1 + 248);
          v30 = *((_QWORD *)v28 - 1);
          v28 -= 8;
          v31 = sub_EE5E00(v29, v30, v22, v23, v24, v25);
          v26 += sub_A97FF0(v29, v31);
        }
        while ( v65 != v28 );
        v28 = (char *)ptr;
        v27 = 8LL * (unsigned int)v72;
      }
      v32 = *(_QWORD *)(*(_QWORD *)&v28[v27 - 8] + 16LL);
      v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v32 & 4) != 0 )
        v33 = *(_QWORD *)v33;
      if ( (*(_BYTE *)(v33 + 8) & 0x7Fu) - 58 > 3 )
        BUG();
      v34 = *(_QWORD *)(v33 - 16);
      v38 = sub_A98070(*(_QWORD *)(a1 + 248), v34);
      if ( v69 )
      {
        if ( (*v9 & 0x80000) == 0 )
        {
          v34 = *(_QWORD *)(v69 + 16);
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 > 1 )
          {
            v39 = sub_AB0BF0(*(_QWORD **)(a1 + 248), v34, 0);
            if ( v38 < v39 )
              v38 = v39;
          }
        }
      }
      v40 = v26 % v70;
      if ( v26 % v70 || v38 < v70 )
      {
        v41 = (__int64 *)ptr;
        v42 = (__int64 *)((char *)ptr + 8 * (unsigned int)v72);
        if ( ptr == v42 )
LABEL_108:
          BUG();
        while ( 1 )
        {
          v44 = *v41;
          if ( (*(_BYTE *)(*v41 + 29) & 1) != 0 )
          {
            v45 = sub_B8C3D0(*v41, v34, v40, v35, v36, v37);
            v40 = *v45;
            v35 = *v45 + 8LL * *((unsigned int *)v45 + 2);
            if ( *v45 >= v35 )
            {
              if ( v40 != v35 )
              {
                while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 325 )
                {
                  v35 += 8LL;
                  if ( v40 == v35 )
                    goto LABEL_36;
                }
LABEL_47:
                v47 = *(_QWORD *)(v44 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v44 + 16) & 4) != 0 )
                  v47 = *(_QWORD *)v47;
                if ( (*(_BYTE *)(v47 + 8) & 0x7Fu) - 58 > 3 )
                  BUG();
                v48 = sub_A98070(*(_QWORD *)(a1 + 248), *(_QWORD *)(v47 - 16));
                v49 = sub_A980A0(*(_QWORD *)(a1 + 248), *(_QWORD *)(v44 + 48));
                v50 = *(_QWORD *)(v44 + 16);
                if ( v48 <= v49 )
                  v49 = v48;
                if ( (v50 & 4) != 0 )
                  v51 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v51 = v50 & 0xFFFFFFFFFFFFFFF8LL;
                v52 = *(_BYTE *)(v51 + 8);
                v53 = v51 - 64;
                if ( (v52 & 0x7Fu) - 58 >= 4 )
                  v53 = 0;
                v67(a4, v66, v53, v44, v49);
                break;
              }
            }
            else
            {
              v46 = (__int64 *)*v45;
              while ( 1 )
              {
                v40 = *v46;
                if ( *(_WORD *)(*v46 + 36) == 325 )
                  break;
                if ( (__int64 *)v35 == ++v46 )
                  goto LABEL_36;
              }
              if ( (__int64 *)v35 != v46 )
                goto LABEL_47;
            }
          }
LABEL_36:
          v43 = *(_QWORD *)(v44 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v44 + 16) & 4) != 0 )
            v43 = *(_QWORD *)v43;
          if ( (*(_BYTE *)(v43 + 8) & 0x7Fu) - 58 > 3 )
            BUG();
          if ( (*(_BYTE *)(v43 - 35) & 1) != 0 )
          {
            v58 = sub_B8C3D0(v43 - 64, v34, v40, v35, v36, v37);
            v40 = *v58;
            v35 = *v58 + 8LL * *((unsigned int *)v58 + 2);
            if ( *v58 >= v35 )
            {
              if ( v40 != v35 )
              {
                while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 325 )
                {
                  v35 += 8LL;
                  if ( v40 == v35 )
                    goto LABEL_40;
                }
                goto LABEL_47;
              }
            }
            else
            {
              v59 = (__int64 *)*v58;
              while ( 1 )
              {
                v40 = *v59;
                if ( *(_WORD *)(*v59 + 36) == 325 )
                  break;
                if ( (__int64 *)v35 == ++v59 )
                  goto LABEL_40;
              }
              if ( (__int64 *)v35 != v59 )
                goto LABEL_47;
            }
          }
LABEL_40:
          if ( v42 == ++v41 )
            goto LABEL_108;
        }
      }
    }
  }
LABEL_57:
  if ( ptr != v73 )
    free(ptr);
}
