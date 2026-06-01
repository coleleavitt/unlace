__int64 __fastcall sub_34B090(__int64 a1, __int64 a2, _QWORD **a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  char *v9; // rdx
  int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // r10
  char *v13; // rsi
  __int64 v14; // r10
  char *v15; // r8
  char *v16; // r12
  __int64 v17; // rax
  void *v18; // rbx
  __int64 v19; // rsi
  void *v20; // rdi
  __int64 v22; // rax
  void *v23; // r14
  void *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rax
  unsigned int v27; // r12d
  __int64 v28; // r9
  __int64 v29; // rax
  char *v30; // rdx
  int v31; // edi
  unsigned int v32; // esi
  __int64 v33; // r10
  char *v34; // rsi
  __int64 v35; // r10
  char *v36; // r8
  char *i; // r14
  __int64 v38; // rax
  void *v39; // rbx
  __int64 v40; // rax
  void *v41; // rdi
  int v42; // eax
  int *v43; // rdx
  void *v44; // r8
  char v45; // al
  int v46; // esi
  int v47; // eax
  void *v48; // r14
  char v49; // dl
  void *v50; // rbx
  char v51; // al
  char v52; // dl
  __int64 v53; // rax
  __int64 v54; // rax
  void *v55; // [rsp+10h] [rbp-A8h]
  void *v56; // [rsp+10h] [rbp-A8h]
  int *v57; // [rsp+18h] [rbp-A0h]
  int v58; // [rsp+30h] [rbp-88h] BYREF
  char v59; // [rsp+34h] [rbp-84h]
  __int64 v60; // [rsp+38h] [rbp-80h]
  int v61; // [rsp+40h] [rbp-78h] BYREF
  char v62; // [rsp+44h] [rbp-74h]
  __int64 v63; // [rsp+48h] [rbp-70h]
  __int64 v64; // [rsp+50h] [rbp-68h] BYREF
  __int64 v65; // [rsp+58h] [rbp-60h] BYREF
  __int64 v66; // [rsp+60h] [rbp-58h] BYREF
  __int64 v67; // [rsp+68h] [rbp-50h] BYREF
  __int64 v68; // [rsp+70h] [rbp-48h]

  v4 = *a3;
  if ( *a3 && *((_DWORD *)v4 - 1) )
  {
    v5 = *v4;
    v6 = *(unsigned int *)(a2 + 224);
    v65 = 0;
    v9 = *(char **)(a2 + 216);
    v67 = 1;
    v10 = *(_DWORD *)(v5 + 12);
    v11 = v6 - 1;
    v6 *= 40;
    v64 = v5;
    v66 = 0;
    v68 = 0;
    v12 = 5LL * (v10 & v11);
    v13 = &v9[v6];
    v14 = 8 * v12;
    v15 = &v9[v14];
    if ( v14 == v6 )
    {
LABEL_13:
      while ( v15 != v9 )
      {
        v22 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 > 1u )
        {
          if ( *(_DWORD *)(v22 + 12) == v10 && v5 == v22 )
          {
            v16 = v9;
            goto LABEL_22;
          }
        }
        else if ( !v22 )
        {
          break;
        }
        v9 += 40;
      }
LABEL_10:
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v65);
      sub_182CBA0(v18, &v67);
      v59 &= 0xFCu;
      v62 &= 0xFCu;
      v58 = 0;
      v60 = 0;
      v61 = 1;
      v63 = 0;
      BUG();
    }
    v16 = &v9[v14];
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 > 1u )
      {
        if ( *(_DWORD *)(v17 + 12) == v10 && v5 == v17 )
        {
LABEL_22:
          v23 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v65);
          sub_182CBA0(v23, &v67);
          v59 &= 0xFCu;
          v24 = qword_1C7F2C0;
          v62 &= 0xFCu;
          v58 = 0;
          v60 = 0;
          v61 = 1;
          v63 = 0;
          if ( (v16[12] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v58, v16 + 8);
            if ( (v16[28] & 1) != 0 )
              goto LABEL_36;
LABEL_24:
            v25 = *((_DWORD *)v16 + 6);
            v62 &= ~1u;
            v61 = v25;
          }
          else
          {
            v58 = *((_DWORD *)v16 + 2);
            if ( (v16[28] & 1) == 0 )
              goto LABEL_24;
LABEL_36:
            sub_182C690(v24, &v61, v16 + 24);
          }
          v26 = *a3;
          v27 = 1;
          if ( !*a3 )
            goto LABEL_57;
LABEL_26:
          if ( v27 >= *((_DWORD *)v26 - 1) )
            goto LABEL_57;
          v28 = v26[v27];
          v29 = *(unsigned int *)(a2 + 224);
          v65 = 0;
          v67 = 1;
          v30 = *(char **)(a2 + 216);
          v31 = *(_DWORD *)(v28 + 12);
          v32 = v29 - 1;
          v64 = v28;
          v66 = 0;
          v29 *= 40;
          v68 = 0;
          v33 = 5LL * (v31 & v32);
          v34 = &v30[v29];
          v35 = 8 * v33;
          v36 = &v30[v35];
          if ( v35 != v29 )
          {
            for ( i = &v30[v35]; v34 != i; i += 40 )
            {
              v38 = *(_QWORD *)i;
              if ( *(_QWORD *)i > 1u )
              {
                if ( *(_DWORD *)(v38 + 12) == v31 && v28 == v38 )
                  goto LABEL_46;
              }
              else if ( !v38 )
              {
                goto LABEL_34;
              }
            }
          }
          if ( v30 == v36 )
          {
LABEL_34:
            v39 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v65);
            sub_182CBA0(v39, &v67);
            BYTE4(v64) &= 0xFCu;
            BYTE4(v66) &= 0xFCu;
            LODWORD(v64) = 0;
            v65 = 0;
            LODWORD(v66) = 1;
            v67 = 0;
            BUG();
          }
          while ( 1 )
          {
            v40 = *(_QWORD *)v30;
            if ( *(_QWORD *)v30 > 1u )
            {
              if ( *(_DWORD *)(v40 + 12) == v31 && v28 == v40 )
              {
                i = v30;
LABEL_46:
                v55 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v65);
                sub_182CBA0(v55, &v67);
                BYTE4(v64) &= 0xFCu;
                v41 = qword_1C7F2C0;
                BYTE4(v66) &= 0xFCu;
                LODWORD(v64) = 0;
                v65 = 0;
                LODWORD(v66) = 1;
                v67 = 0;
                if ( (i[12] & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, &v64, i + 8);
                else
                  LODWORD(v64) = *((_DWORD *)i + 2);
                if ( (i[28] & 1) != 0 )
                {
                  sub_182C690(v41, &v66, i + 24);
                }
                else
                {
                  v42 = *((_DWORD *)i + 6);
                  BYTE4(v66) &= ~1u;
                  LODWORD(v66) = v42;
                }
                if ( (v66 & 0x100000000LL) != 0 || (_DWORD)v66 != 1 || (v62 & 1) != 0 || v61 != 1 )
                {
                  if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v64, &v58) )
                    goto LABEL_53;
LABEL_59:
                  v43 = (int *)&v64;
                  v44 = qword_1C7F2C0;
                  if ( (v64 & 0x100000000LL) != 0 )
                  {
LABEL_60:
                    v57 = v43;
                    v56 = v44;
                    sub_182C690(v44, &v58, v43);
                    v43 = v57;
                    v44 = v56;
                    if ( (v57[5] & 1) == 0 )
                      goto LABEL_55;
                    goto LABEL_61;
                  }
LABEL_54:
                  v45 = *((_BYTE *)v43 + 20);
                  v46 = *v43;
                  v59 &= ~1u;
                  v58 = v46;
                  if ( (v45 & 1) == 0 )
                    goto LABEL_55;
LABEL_61:
                  sub_182C690(v44, &v61, v43 + 4);
                  goto LABEL_56;
                }
                v44 = qword_1C7F2C0;
                if ( (v64 & 0x100000000LL) != 0 || (v59 & 1) != 0 )
                {
                  if ( (int)sub_182C7B0(qword_1C7F2C0, &v64, &v58) < 0 )
                    goto LABEL_59;
LABEL_53:
                  v43 = &v58;
                  v44 = qword_1C7F2C0;
                  if ( (v59 & 1) != 0 )
                    goto LABEL_60;
                  goto LABEL_54;
                }
                v43 = &v58;
                if ( (int)v64 >= v58 )
                  goto LABEL_54;
                v58 = v64;
                v43 = (int *)&v64;
                v59 &= ~1u;
LABEL_55:
                v47 = v43[4];
                v62 &= ~1u;
                v61 = v47;
LABEL_56:
                v48 = qword_1C7F2C0;
                ++v27;
                sub_182CBA0(qword_1C7F2C0, &v64);
                sub_182CBA0(v48, &v66);
                v26 = *a3;
                if ( !*a3 )
                {
LABEL_57:
                  v49 = v59;
                  v50 = qword_1C7F2C0;
                  *(_DWORD *)a1 = v58;
                  v51 = v49 & 3 | *(_BYTE *)(a1 + 4) & 0xFC;
                  v52 = v62;
                  *(_BYTE *)(a1 + 4) = v51;
                  v53 = v60;
                  v60 = 0;
                  *(_QWORD *)(a1 + 8) = v53;
                  *(_DWORD *)(a1 + 16) = v61;
                  *(_BYTE *)(a1 + 20) = v52 & 3 | *(_BYTE *)(a1 + 20) & 0xFC;
                  v54 = v63;
                  v63 = 0;
                  *(_QWORD *)(a1 + 24) = v54;
                  sub_182CBA0(v50, &v58);
                  sub_182CBA0(v50, &v61);
                  return a1;
                }
                goto LABEL_26;
              }
            }
            else if ( !v40 )
            {
              goto LABEL_34;
            }
            v30 += 40;
            if ( v36 == v30 )
              goto LABEL_34;
          }
        }
      }
      else if ( !v17 )
      {
        goto LABEL_10;
      }
      v16 += 40;
      if ( v13 == v16 )
        goto LABEL_13;
    }
  }
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v19 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  v20 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = 0;
  sub_182CBA0(v20, v19);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = 1;
  return a1;
}

