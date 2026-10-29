__int64 __fastcall sub_361840(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  void *v6; // rbx
  __int64 v8; // r10
  __int64 v10; // rdx
  char *v12; // rcx
  int v13; // edi
  unsigned int v14; // esi
  __int64 v15; // r11
  char *v16; // rsi
  __int64 v17; // r11
  char *v18; // r9
  char *i; // r13
  __int64 v20; // rdx
  __int64 v21; // rdx
  bool v22; // zf
  void *v23; // r15
  _QWORD *v24; // rax
  int v25; // edx
  void *v26; // rdi
  __int64 *v27; // r15
  __int64 v28; // r14
  __int64 v29; // rax
  char *v30; // rdx
  int v31; // r10d
  unsigned int v32; // esi
  __int64 v33; // rbx
  char *v34; // rsi
  __int64 v35; // rbx
  char *v36; // r11
  char *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rsi
  char v41; // al
  char v42; // dl
  char v43; // al
  char v44; // dl
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  _QWORD *v49; // rsi
  int v50; // r11d
  unsigned int v51; // edx
  _QWORD *v52; // r10
  __int64 v53; // rdx
  _QWORD *v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rax
  void *v59; // rdi
  int v60; // edx
  int v61; // eax
  _QWORD *v62; // [rsp+8h] [rbp-B0h]
  __int64 v63; // [rsp+8h] [rbp-B0h]
  _QWORD *v64; // [rsp+8h] [rbp-B0h]
  void *v65; // [rsp+10h] [rbp-A8h]
  _QWORD *v66; // [rsp+28h] [rbp-90h]
  __int64 v67; // [rsp+30h] [rbp-88h] BYREF
  __int64 v68; // [rsp+38h] [rbp-80h]
  __int64 v69; // [rsp+40h] [rbp-78h] BYREF
  __int64 v70; // [rsp+48h] [rbp-70h]
  __int64 v71; // [rsp+50h] [rbp-68h]
  __int64 v72; // [rsp+58h] [rbp-60h] BYREF
  __int64 v73; // [rsp+60h] [rbp-58h]
  __int64 v74; // [rsp+68h] [rbp-50h] BYREF
  __int64 v75; // [rsp+70h] [rbp-48h]

  v6 = qword_1C7F2C0;
  if ( a3 )
  {
    v8 = *a4;
    v10 = *(unsigned int *)(a2 + 80);
    v72 = 0;
    v12 = *(char **)(a2 + 72);
    v74 = 1;
    v13 = *(_DWORD *)(v8 + 12);
    v14 = v10 - 1;
    v10 *= 40;
    v71 = v8;
    v73 = 0;
    v75 = 0;
    v15 = 5LL * (v13 & v14);
    v16 = &v12[v10];
    v17 = 8 * v15;
    v18 = &v12[v17];
    if ( v17 != v10 )
    {
      for ( i = &v12[v17]; v16 != i; i += 40 )
      {
        v20 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v20 + 12) == v13 && v8 == v20 )
            goto LABEL_21;
        }
        else if ( !v20 )
        {
          goto LABEL_11;
        }
      }
    }
    while ( v18 != v12 )
    {
      v21 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 > 1u )
      {
        if ( *(_DWORD *)(v21 + 12) == v13 && v8 == v21 )
        {
          i = v12;
LABEL_21:
          v62 = a4;
          sub_182CBA0(qword_1C7F2C0, &v72);
          sub_182CBA0(v6, &v74);
          v68 = 0;
          v69 = 1;
          v70 = 0;
          v22 = (i[12] & 1) == 0;
          v67 = 0;
          v23 = qword_1C7F2C0;
          v24 = v62;
          if ( v22 )
          {
            LODWORD(v67) = *((_DWORD *)i + 2);
          }
          else
          {
            sub_182C690(qword_1C7F2C0, &v67, i + 8);
            v24 = v62;
          }
          if ( (i[28] & 1) != 0 )
          {
            v64 = v24;
            sub_182C690(v23, &v69, i + 24);
            v24 = v64;
          }
          else
          {
            v25 = *((_DWORD *)i + 6);
            BYTE4(v69) &= ~1u;
            LODWORD(v69) = v25;
          }
          v26 = qword_1C7F2C0;
          if ( a3 == 1 )
            goto LABEL_48;
          v27 = v24 + 1;
          v63 = (__int64)&v24[(unsigned int)(a3 - 2) + 2];
LABEL_27:
          v28 = *v27;
          v29 = *(unsigned int *)(a2 + 80);
          v72 = 0;
          v74 = 1;
          v30 = *(char **)(a2 + 72);
          v31 = *(_DWORD *)(v28 + 12);
          v32 = v29 - 1;
          v71 = v28;
          v73 = 0;
          v29 *= 40;
          v75 = 0;
          v33 = 5LL * (v31 & v32);
          v34 = &v30[v29];
          v35 = 8 * v33;
          v36 = &v30[v35];
          if ( v35 == v29 )
          {
LABEL_35:
            while ( v36 != v30 )
            {
              v39 = *(_QWORD *)v30;
              if ( *(_QWORD *)v30 > 1u )
              {
                if ( *(_DWORD *)(v39 + 12) == v31 && v28 == v39 )
                {
                  v37 = v30;
                  goto LABEL_44;
                }
              }
              else if ( !v39 )
              {
                break;
              }
              v30 += 40;
            }
LABEL_34:
            sub_182CBA0(v26, &v72);
            sub_182CBA0(v26, &v74);
            BUG();
          }
          v37 = &v30[v35];
          while ( 1 )
          {
            v38 = *(_QWORD *)v37;
            if ( *(_QWORD *)v37 > 1u )
            {
              if ( *(_DWORD *)(v38 + 12) == v31 && v28 == v38 )
              {
LABEL_44:
                sub_182CBA0(v26, &v72);
                sub_182CBA0(v26, &v74);
                v40 = v37 + 8;
                v26 = qword_1C7F2C0;
                if ( (v37[28] & 1) != 0 || *((_DWORD *)v37 + 6) != 1 || (v69 & 0x100000000LL) != 0 || (_DWORD)v69 != 1 )
                {
                  v41 = sub_1848D40(qword_1C7F2C0, v40, &v67);
                  v26 = qword_1C7F2C0;
                  if ( !v41 )
                    goto LABEL_47;
                }
                else if ( (v37[12] & 1) != 0 || (v67 & 0x100000000LL) != 0 )
                {
                  v47 = sub_182C7B0(qword_1C7F2C0, v40, &v67);
                  v26 = qword_1C7F2C0;
                  if ( v47 >= 0 )
                    goto LABEL_47;
                }
                else if ( *((_DWORD *)v37 + 2) >= (int)v67 )
                {
                  goto LABEL_47;
                }
                v48 = *(unsigned int *)(a2 + 80);
                v49 = *(_QWORD **)(a2 + 72);
                v71 = v28;
                v72 = 0;
                v74 = 1;
                v50 = *(_DWORD *)(v28 + 12);
                v51 = v48 - 1;
                v73 = 0;
                v48 *= 40;
                v75 = 0;
                v52 = (_QWORD *)((char *)v49 + v48);
                v53 = 40LL * (v50 & v51);
                v54 = &v49[(unsigned __int64)v53 / 8];
                if ( v53 == v48 )
                {
LABEL_62:
                  while ( v54 != v49 )
                  {
                    v57 = *v49;
                    if ( *v49 > 1u )
                    {
                      if ( *(_DWORD *)(v57 + 12) == v50 && v28 == v57 )
                      {
                        v55 = v49;
                        goto LABEL_71;
                      }
                    }
                    else if ( !v57 )
                    {
                      break;
                    }
                    v49 += 5;
                  }
LABEL_61:
                  sub_182CBA0(v26, &v72);
                  sub_182CBA0(v26, &v74);
                  BUG();
                }
                v55 = &v49[(unsigned __int64)v53 / 8];
                while ( 2 )
                {
                  v56 = *v55;
                  if ( *v55 <= 1u )
                  {
                    if ( !v56 )
                      goto LABEL_61;
                    goto LABEL_58;
                  }
                  if ( *(_DWORD *)(v56 + 12) != v50 || v28 != v56 )
                  {
LABEL_58:
                    v55 += 5;
                    if ( v52 == v55 )
                      goto LABEL_62;
                    continue;
                  }
                  break;
                }
LABEL_71:
                v66 = v55;
                sub_182CBA0(v26, &v72);
                sub_182CBA0(v26, &v74);
                v58 = v66;
                v59 = qword_1C7F2C0;
                if ( (*((_BYTE *)v66 + 12) & 1) != 0 )
                {
                  v65 = qword_1C7F2C0;
                  sub_182C690(qword_1C7F2C0, &v67, v66 + 1);
                  v58 = v66;
                  v59 = v65;
                  if ( (*((_BYTE *)v66 + 28) & 1) != 0 )
                    goto LABEL_75;
LABEL_73:
                  v61 = *((_DWORD *)v58 + 6);
                  BYTE4(v69) &= ~1u;
                  LODWORD(v69) = v61;
                  v26 = qword_1C7F2C0;
                }
                else
                {
                  v60 = *((_DWORD *)v66 + 2);
                  BYTE4(v67) &= ~1u;
                  LODWORD(v67) = v60;
                  if ( (*((_BYTE *)v66 + 28) & 1) == 0 )
                    goto LABEL_73;
LABEL_75:
                  sub_182C690(v59, &v69, v58 + 3);
                  v26 = qword_1C7F2C0;
                }
LABEL_47:
                if ( ++v27 == (__int64 *)v63 )
                {
LABEL_48:
                  v42 = BYTE4(v67);
                  *(_DWORD *)a1 = v67;
                  v43 = v42 & 3 | *(_BYTE *)(a1 + 4) & 0xFC;
                  v44 = BYTE4(v69);
                  *(_BYTE *)(a1 + 4) = v43;
                  v45 = v68;
                  v68 = 0;
                  *(_QWORD *)(a1 + 8) = v45;
                  *(_DWORD *)(a1 + 16) = v69;
                  *(_BYTE *)(a1 + 20) = v44 & 3 | *(_BYTE *)(a1 + 20) & 0xFC;
                  v46 = v70;
                  v70 = 0;
                  *(_QWORD *)(a1 + 24) = v46;
                  sub_182CBA0(v26, &v67);
                  sub_182CBA0(v26, &v69);
                  return a1;
                }
                goto LABEL_27;
              }
            }
            else if ( !v38 )
            {
              goto LABEL_34;
            }
            v37 += 40;
            if ( v34 == v37 )
              goto LABEL_35;
          }
        }
      }
      else if ( !v21 )
      {
        break;
      }
      v12 += 40;
    }
LABEL_11:
    sub_182CBA0(qword_1C7F2C0, &v72);
    sub_182CBA0(v6, &v74);
    v69 = 1;
    v67 = 0;
    v68 = 0;
    v70 = 0;
    BUG();
  }
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = 0;
  sub_182CBA0(v6, a1 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  return a1;
}

