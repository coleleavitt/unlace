unsigned __int64 __fastcall sub_16043A0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v9; // r14
  __int64 v11; // rbp
  unsigned int v12; // esi
  unsigned int v13; // edx
  __int64 *v14; // rax
  unsigned __int64 *v15; // r9
  __int64 v16; // rax
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r10
  char v25; // al
  __int64 v26; // rax
  int v27; // eax
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  __int64 *v33; // rbp
  __int64 v34; // rax
  __int64 v35; // r14
  size_t v36; // rax
  int v37; // eax
  bool v38; // zf
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r10d
  int v46; // eax
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+0h] [rbp-68h]
  __int64 v51; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v52; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v53; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v54; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v55; // [rsp+8h] [rbp-60h]
  unsigned __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  __int64 v58; // [rsp+10h] [rbp-58h]
  unsigned __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v61; // [rsp+28h] [rbp-40h] BYREF

  v6 = (*(_BYTE *)(a1[290] + 3LL) & 4) != 0;
  v7 = (v6 << 23) | a1[2183] & 0xFFFFFFFFFF7FFFFFLL;
  if ( ((((((*(_BYTE *)(a1[290] + 3LL) & 4) != 0) << 23) | (_DWORD)a1[2183] & 0xFF7FFFFF) >> 16) & 0x80u) == 0 )
  {
    v9 = a1[193];
    if ( !v9 )
    {
      v35 = a1[2188];
      v36 = j__strlen("bool");
      v9 = sub_6F3470(v35, "bool", v36);
      a1[193] = v9;
    }
    if ( (*(_BYTE *)(v9 + 3) & 2) != 0 )
    {
      v11 = a2[213];
      v60 = v9;
      v12 = *(_DWORD *)(v11 + 16);
      if ( v12 )
      {
        v13 = (v12 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
        v14 = (__int64 *)(*(_QWORD *)v11 + 16LL * v13);
        a5 = *v14;
        if ( *v14 == v9 )
        {
LABEL_8:
          v15 = (unsigned __int64 *)(v14 + 1);
          v16 = v14[1];
          v17 = (unsigned __int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
          v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v16 && (v16 & 4) != 0 )
          {
            v18 = 0;
            if ( !v17 )
              goto LABEL_15;
            v18 = *v17;
          }
          while ( v18 && (*(_BYTE *)(v18 + 12) & 3) == 2 )
            v18 = *(_QWORD *)v18;
LABEL_15:
          if ( (*(_BYTE *)(v9 + 4) & 0x10) != 0 )
          {
            v49 = v15;
            sub_145CD30((__int64)a2);
            v15 = v49;
            if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
              goto LABEL_19;
          }
          else if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
          {
            v20 = 0;
            goto LABEL_68;
          }
          v19 = a2[7];
          if ( (*(_BYTE *)(v19 + 21) & 2) != 0 || *(char *)(v19 + 22) < 0 )
          {
            v21 = *(_DWORD *)(a2[213] + 48LL);
            if ( v21 )
            {
              v22 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !*v15 || (*v15 & 4) == 0 || (v23 = *v15 & 0xFFFFFFFFFFFFFFF8LL, !v22) )
              {
                v39 = a2[16];
                a2[26] += 32LL;
                v40 = (v39 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                if ( a2[17] >= v40 + 32 && v39 )
                {
                  a2[16] = v40 + 32;
                  v23 = (v39 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                }
                else
                {
                  v56 = v22;
                  v52 = v15;
                  v23 = sub_986170((__int64)(a2 + 16), 32, 32, 4, v22, (__int64)v15);
                  v22 = v56;
                  v15 = v52;
                  v40 = v23 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)(v23 + 8) = 0;
                *(_DWORD *)(v23 + 16) = 0;
                *(_QWORD *)(v23 + 24) = 0;
                *(_QWORD *)v23 = v22;
                *(_BYTE *)(v23 + 20) = 0;
                *v15 = v40 | 4;
                v21 = *(_DWORD *)(a2[213] + 48LL);
              }
              if ( *(_DWORD *)(v23 + 16) != v21 )
              {
                v53 = v15;
                v47 = v23;
                sub_14476F0((__int64)a2, v9, v23);
                v23 = v47;
                v15 = v53;
              }
              v20 = 4LL * *(unsigned __int8 *)(v23 + 20);
LABEL_27:
              v24 = v60;
              if ( (*(_BYTE *)(v60 + 4) & 0x10) != 0 )
              {
                v57 = v20;
                v54 = v15;
                v50 = v60;
                sub_145CD30((__int64)a2);
                v24 = v50;
                v20 = v57;
                v15 = v54;
                v25 = *(_BYTE *)(v50 + 3) & 2;
              }
              else
              {
                v25 = *(_BYTE *)(v60 + 3) & 2;
              }
              if ( v25 )
              {
                v26 = a2[7];
                if ( (*(_BYTE *)(v26 + 21) & 2) != 0 || *(char *)(v26 + 22) < 0 )
                {
                  v27 = *(_DWORD *)(a2[213] + 48LL);
                  if ( v27 )
                  {
                    v28 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !*v15 || (*v15 & 4) == 0 || (v29 = *v15 & 0xFFFFFFFFFFFFFFF8LL, !v28) )
                    {
                      v42 = a2[16];
                      a2[26] += 32LL;
                      v43 = (v42 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                      if ( a2[17] >= v43 + 32 && v42 )
                      {
                        a2[16] = v43 + 32;
                        v29 = (v42 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                      }
                      else
                      {
                        v59 = v28;
                        v58 = v20;
                        v55 = v15;
                        v51 = v24;
                        v44 = sub_986170((__int64)(a2 + 16), 32, 32, 4, v20, (__int64)v15);
                        v28 = v59;
                        v20 = v58;
                        v29 = v44;
                        v15 = v55;
                        v43 = v44 & 0xFFFFFFFFFFFFFFFBLL;
                        v24 = v51;
                      }
                      *(_QWORD *)(v29 + 8) = 0;
                      *(_DWORD *)(v29 + 16) = 0;
                      *(_QWORD *)(v29 + 24) = 0;
                      *(_QWORD *)v29 = v28;
                      *(_BYTE *)(v29 + 20) = 0;
                      *v15 = v43 | 4;
                      v27 = *(_DWORD *)(a2[213] + 48LL);
                    }
                    if ( *(_DWORD *)(v29 + 16) != v27 )
                    {
                      v48 = v20;
                      sub_14476F0((__int64)a2, v24, v29);
                      v20 = v48;
                    }
                    v30 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (*(_QWORD *)(v29 + 8) & 4) != 0 )
                    {
                      v31 = *(_QWORD *)v30;
                      v32 = *(unsigned int *)(v30 + 8);
                    }
                    else
                    {
                      v31 = v29 + 8;
                      v32 = v30 != 0;
                    }
LABEL_40:
                    if ( v18
                      && (*(_BYTE *)(v18 + 12) & 3) == 0
                      && (v33 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL | v18 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
                    {
                      if ( !v32 )
                      {
                        v41 = sub_13F1C60(v33);
                        if ( !v41 )
                          return (v6 << 23) & 0xFFFFDFFFFFFFFFFFLL | v7 & 0xFFFFDFFFFF7FFFFFLL;
                        v34 = v41[2];
                        goto LABEL_45;
                      }
                    }
                    else if ( !v32 )
                    {
                      return (v6 << 23) & 0xFFFFDFFFFFFFFFFFLL | v7 & 0xFFFFDFFFFF7FFFFFLL;
                    }
                    v34 = *(_QWORD *)(*(_QWORD *)(v31 + 8 * v32 - 8) + 16LL);
LABEL_45:
                    if ( v34 )
                    {
                      v6 = 0;
                      if ( (*(_BYTE *)(v34 + 36) & 2) == 0 && *(_DWORD *)(v34 + 28) == 1 )
                        v6 = *(_WORD *)(*(_QWORD *)(v34 + 16) + 16LL) == 114;
                    }
                    return (v6 << 23) & 0xFFFFDFFFFFFFFFFFLL | v7 & 0xFFFFDFFFFF7FFFFFLL;
                  }
                }
              }
LABEL_68:
              v32 = 0;
              v31 = 0;
              goto LABEL_40;
            }
          }
LABEL_19:
          v20 = 0;
          goto LABEL_27;
        }
        v45 = 1;
        a6 = nullptr;
        if ( a5 != -4096 )
        {
          while ( 1 )
          {
            if ( a5 == -8192 && !a6 )
              a6 = v14;
            v13 = (v12 - 1) & (v45 + v13);
            v14 = (__int64 *)(*(_QWORD *)v11 + 16LL * v13);
            a5 = *v14;
            if ( *v14 == v9 )
              goto LABEL_8;
            if ( a5 == -4096 )
            {
              if ( a6 )
                goto LABEL_77;
              break;
            }
            ++v45;
          }
        }
        a6 = v14;
LABEL_77:
        v46 = *(_DWORD *)(v11 + 8);
        a3 = 3 * v12;
        v61 = a6;
        v37 = v46 + 1;
        a4 = (unsigned int)(4 * v37);
        if ( (unsigned int)a4 < (unsigned int)a3 )
        {
          a3 = v12 - *(_DWORD *)(v11 + 12) - v37;
          a4 = v12 >> 3;
          if ( (unsigned int)a3 > (unsigned int)a4 )
            goto LABEL_52;
          goto LABEL_51;
        }
      }
      else
      {
        v61 = nullptr;
      }
      v12 *= 2;
LABEL_51:
      sub_12F12D0(v11, v12, a3, a4, a5, (__int64)a6);
      sub_12EC520((__int64 *)v11, &v60, &v61);
      v9 = v60;
      a6 = v61;
      v37 = *(_DWORD *)(v11 + 8) + 1;
LABEL_52:
      v38 = *a6 == -4096;
      *(_DWORD *)(v11 + 8) = v37;
      if ( !v38 )
        --*(_DWORD *)(v11 + 12);
      *a6 = v9;
      v18 = 0;
      v15 = (unsigned __int64 *)(a6 + 1);
      v9 = v60;
      *v15 = 0;
      goto LABEL_15;
    }
  }
  return (v6 << 23) & 0xFFFFDFFFFFFFFFFFLL | v7 & 0xFFFFDFFFFF7FFFFFLL;
}
