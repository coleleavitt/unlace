__int64 __fastcall sub_7F9B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  int *v7; // rdx
  int v8; // esi
  unsigned int v9; // ecx
  __int64 v10; // r8
  int *v11; // rcx
  __int64 v12; // r8
  int *v13; // rdi
  int *i; // rbp
  __int64 v15; // rax
  void *v16; // rbx
  void *v17; // rbx
  __int64 v19; // rax
  _DWORD *v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rdx
  int *v29; // r14
  __int64 v30; // r15
  void *v31; // rdi
  _QWORD *v32; // rsi
  int *v33; // rax
  void *v34; // rdi
  __int64 v35; // rsi
  void *v36; // rbp
  int v37; // edx
  __int64 v38; // rdx
  char v39; // cl
  __int64 v40; // rdx
  int v41; // edx
  __int64 v42; // rdx
  char v43; // cl
  __int64 v44; // rdx
  _QWORD v47[2]; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v48[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-E0h]
  __int64 v51; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-D0h]
  __int64 v53; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-C0h]
  __int64 v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __int64 v57; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+98h] [rbp-A0h]
  __int64 v59; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-90h]
  char v61[32]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-58h]
  __int64 v65; // [rsp+E8h] [rbp-50h]
  __int64 v66; // [rsp+F0h] [rbp-48h]

  v62 = a1;
  v47[0] = 0;
  v47[1] = 0;
  v48[0] = 1;
  v48[1] = 0;
  v49 = 0;
  v50 = 0;
  v51 = 1;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 1;
  v66 = 0;
  v6 = *(unsigned int *)(a2 + 8);
  v7 = *(int **)a2;
  v8 = *(_DWORD *)(a1 + 12);
  v9 = v6 - 1;
  v6 *= 40;
  v10 = 5LL * (v8 & v9);
  v11 = (int *)((char *)v7 + v6);
  v12 = 8 * v10;
  v13 = &v7[(unsigned __int64)v12 / 4];
  if ( v12 != v6 )
  {
    for ( i = &v7[(unsigned __int64)v12 / 4]; v11 != i; i += 10 )
    {
      v15 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && a1 == v15 )
        {
LABEL_19:
          sub_25A130((char *)&v63);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v47, i + 2);
          v20 = *(_DWORD **)(sub_15D1F10(a1) + 24);
          if ( v20 && *v20 == 5 && v20[1] == 1 )
          {
            sub_3EC020((__int64)&v62, (__int64)v47);
            sub_3EC020((__int64)v61, a3);
            v36 = qword_1C7F2C0;
            BYTE4(v57) &= 0xFCu;
            BYTE4(v59) &= 0xFCu;
            LODWORD(v57) = 0;
            v58 = 0;
            LODWORD(v59) = 1;
            v60 = 0;
            sub_1836B00(qword_1C7F2C0, v61, &v62, &v57);
            sub_182CBA0(v36, &v59);
            BYTE4(v59) &= ~1u;
            LODWORD(v59) = 1;
            sub_25A130(v61);
            sub_25A130((char *)&v62);
            sub_3EC020((__int64)v61, (__int64)v47);
            sub_27B620((__int64)&v62, (__int64)&v57, (__int64)v61);
            v37 = v62;
            LODWORD(v62) = v49;
            LODWORD(v49) = v37;
            v38 = v63;
            v63 = v50;
            v50 = v38;
            v39 = BYTE4(v62) & 1;
            LOBYTE(v38) = BYTE4(v49) & 0xFC | BYTE4(v62) & 2;
            BYTE4(v62) = BYTE4(v49) & 1 | BYTE4(v62) & 0xFC | BYTE4(v49) & 2;
            BYTE4(v49) = v39 | v38;
            LODWORD(v38) = v64;
            LODWORD(v64) = v51;
            LODWORD(v51) = v38;
            v40 = v65;
            v65 = v52;
            v52 = v40;
            LOBYTE(v40) = BYTE4(v64) & 1 | BYTE4(v51) & 0xFC | BYTE4(v64) & 2;
            BYTE4(v64) = BYTE4(v51) & 1 | BYTE4(v64) & 0xFC | BYTE4(v51) & 2;
            BYTE4(v51) = v40;
            sub_25A130((char *)&v62);
            sub_25A130(v61);
            sub_3EC020((__int64)v61, a3);
            sub_27B620((__int64)&v62, (__int64)&v57, (__int64)v61);
            v41 = v62;
            LODWORD(v62) = v53;
            LODWORD(v53) = v41;
            v42 = v63;
            v63 = v54;
            v54 = v42;
            v43 = BYTE4(v62) & 1;
            LOBYTE(v42) = BYTE4(v53) & 0xFC | BYTE4(v62) & 2;
            BYTE4(v62) = BYTE4(v53) & 1 | BYTE4(v62) & 0xFC | BYTE4(v53) & 2;
            BYTE4(v53) = v43 | v42;
            LODWORD(v42) = v64;
            LODWORD(v64) = v55;
            LODWORD(v55) = v42;
            v44 = v65;
            v65 = v56;
            v56 = v44;
            LOBYTE(v44) = BYTE4(v64) & 1 | BYTE4(v55) & 0xFC | BYTE4(v64) & 2;
            BYTE4(v64) = BYTE4(v55) & 1 | BYTE4(v64) & 0xFC | BYTE4(v55) & 2;
            BYTE4(v55) = v44;
            sub_25A130((char *)&v62);
            sub_25A130(v61);
            sub_25A130((char *)&v57);
          }
          else
          {
            sub_3EC020((__int64)v61, (__int64)v47);
            v57 = 1;
            v58 = 0;
            v59 = 1;
            v60 = 0;
            sub_182CBA0(qword_1C7F2C0, &v59);
            BYTE4(v59) &= ~1u;
            LODWORD(v59) = 1;
            sub_27B620((__int64)&v62, (__int64)&v57, (__int64)v61);
            v21 = v62;
            LODWORD(v62) = v49;
            LODWORD(v49) = v21;
            v22 = v63;
            v63 = v50;
            v50 = v22;
            v23 = BYTE4(v62) & 1;
            LOBYTE(v22) = BYTE4(v49) & 0xFC | BYTE4(v62) & 2;
            BYTE4(v62) = BYTE4(v49) & 1 | BYTE4(v62) & 0xFC | BYTE4(v49) & 2;
            BYTE4(v49) = v23 | v22;
            LODWORD(v22) = v64;
            LODWORD(v64) = v51;
            LODWORD(v51) = v22;
            v24 = v65;
            v65 = v52;
            v52 = v24;
            LOBYTE(v24) = BYTE4(v64) & 1 | BYTE4(v51) & 0xFC | BYTE4(v64) & 2;
            BYTE4(v64) = BYTE4(v51) & 1 | BYTE4(v64) & 0xFC | BYTE4(v51) & 2;
            BYTE4(v51) = v24;
            sub_25A130((char *)&v62);
            sub_25A130((char *)&v57);
            sub_25A130(v61);
            sub_3EC020((__int64)v61, a3);
            v57 = 1;
            v58 = 0;
            v59 = 1;
            v60 = 0;
            sub_182CBA0(qword_1C7F2C0, &v59);
            LODWORD(v59) = 1;
            BYTE4(v59) &= ~1u;
            sub_27B620((__int64)&v62, (__int64)&v57, (__int64)v61);
            v25 = v62;
            LODWORD(v62) = v53;
            LODWORD(v53) = v25;
            v26 = v63;
            v63 = v54;
            v54 = v26;
            v27 = BYTE4(v62) & 1;
            LOBYTE(v26) = BYTE4(v53) & 0xFC | BYTE4(v62) & 2;
            BYTE4(v62) = BYTE4(v53) & 1 | BYTE4(v62) & 0xFC | BYTE4(v53) & 2;
            BYTE4(v53) = v27 | v26;
            LODWORD(v26) = v64;
            LODWORD(v64) = v55;
            LODWORD(v55) = v26;
            v28 = v65;
            v65 = v56;
            v56 = v28;
            LOBYTE(v28) = BYTE4(v64) & 1 | BYTE4(v55) & 0xFC | BYTE4(v64) & 2;
            BYTE4(v64) = BYTE4(v55) & 1 | BYTE4(v64) & 0xFC | BYTE4(v55) & 2;
            BYTE4(v55) = v28;
            sub_25A130((char *)&v62);
            sub_25A130((char *)&v57);
            sub_25A130(v61);
          }
          if ( (unsigned __int8)sub_7FB1D0(a3, 0) && (unsigned __int8)sub_7FB1D0(v47, 0) )
            sub_1831620(qword_1C7F2C0, &v53);
          if ( (unsigned __int8)sub_7FB2D0(a3, 0) && (unsigned __int8)sub_7FB2D0(v47, 0) )
            sub_1831620(qword_1C7F2C0, &v53);
          if ( !(unsigned __int8)sub_753DF0((__int64)&v49, 1u) )
          {
            v29 = *(int **)a2;
            v30 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
            if ( *(_QWORD *)a2 != v30 )
            {
              while ( *(_QWORD *)v29 <= 1u )
              {
                v29 += 10;
                if ( (int *)v30 == v29 )
                  goto LABEL_40;
              }
              while ( (int *)v30 != v29 )
              {
                v31 = qword_1C7F2C0;
                v32 = v29 + 2;
                if ( (v29[7] & 1) != 0 || v29[6] != 1 || (v51 & 0x100000000LL) != 0 || (_DWORD)v51 != 1 )
                {
                  sub_1848FF0(qword_1C7F2C0, v32, &v49);
                }
                else
                {
                  sub_1831650(qword_1C7F2C0, v32, &v49);
                  sub_182CBA0(v31, v29 + 6);
                  *((_BYTE *)v29 + 28) &= ~1u;
                  v29[6] = 1;
                }
                v33 = v29 + 10;
                if ( (int *)v30 == v29 + 10 )
                  break;
                while ( 1 )
                {
                  v29 = v33;
                  if ( *(_QWORD *)v33 > 1u )
                    break;
                  v33 += 10;
                  if ( (int *)v30 == v33 )
                    goto LABEL_40;
                }
              }
            }
LABEL_40:
            v34 = qword_1C7F2C0;
            v35 = a2 + 24;
            if ( (*(_BYTE *)(a2 + 44) & 1) != 0
              || *(_DWORD *)(a2 + 40) != 1
              || (v51 & 0x100000000LL) != 0
              || (_DWORD)v51 != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v35, &v49);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, v35, &v49);
              sub_182CBA0(v34, a2 + 40);
              *(_BYTE *)(a2 + 44) &= ~1u;
              *(_DWORD *)(a2 + 40) = 1;
            }
          }
          sub_7F9760(a2, a4, (__int64)&v53);
          goto LABEL_9;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v7; v7 += 10 )
  {
    v19 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 > 1u )
    {
      if ( *(_DWORD *)(v19 + 12) == v8 && a1 == v19 )
      {
        i = v7;
        goto LABEL_19;
      }
    }
    else if ( !v19 )
    {
      break;
    }
  }
LABEL_8:
  sub_25A130((char *)&v63);
LABEL_9:
  sub_25A130((char *)&v53);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v49);
  sub_182CBA0(v16, &v51);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v47);
  return sub_182CBA0(v17, v48);
}

