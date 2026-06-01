__int64 __fastcall sub_9B8610(_QWORD *a1, char a2, unsigned int a3, int *a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r13d
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rdx
  int v26; // edx
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rdx
  char v30; // si
  __int64 v31; // rax
  char v32; // cl
  __int64 v33; // rdx
  int v34; // edx
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // si
  __int64 v39; // rax
  char v40; // cl
  __int64 v41; // rdx
  int v42; // edx
  __int64 v43; // rdx
  char v44; // cl
  __int64 v45; // rdx
  void *v47; // [rsp+8h] [rbp-E0h]
  _BYTE *v49; // [rsp+28h] [rbp-C0h]
  __int64 v50; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-B0h]
  __int64 v52; // [rsp+40h] [rbp-A8h]
  __int64 v53; // [rsp+48h] [rbp-A0h]
  char v54[32]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-78h] BYREF
  __int64 v56; // [rsp+78h] [rbp-70h]
  __int64 v57; // [rsp+80h] [rbp-68h] BYREF
  __int64 v58; // [rsp+88h] [rbp-60h]
  __int64 v59; // [rsp+90h] [rbp-58h] BYREF
  __int64 v60; // [rsp+98h] [rbp-50h]
  __int64 v61; // [rsp+A0h] [rbp-48h]
  __int64 v62; // [rsp+A8h] [rbp-40h]

  v8 = sub_99D4C0((__int64)a1, a5, a6);
  if ( (_BYTE)v8 )
  {
    v50 = 0;
    v51 = 0;
    v52 = 1;
    v53 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v50, (int *)&qword_1C7F260);
    v10 = *a4;
    if ( a2 )
    {
      if ( v10 <= 0 )
        goto LABEL_5;
    }
    else if ( v10 >= 0 )
    {
LABEL_5:
      v11 = a3;
      if ( !*(_QWORD *)(a1[78] + 8LL * a3) )
        goto LABEL_8;
      v12 = sub_999800((__int64)a1, a3);
      sub_3EBB80((__int64)v54, *(_QWORD *)(a1[78] + 8LL * a3) + 16LL, v12);
      sub_27B620((__int64)&v55, (__int64)v54, (__int64)a4);
      sub_3EC020((__int64)&v59, (__int64)&v55);
      goto LABEL_7;
    }
    v11 = a3;
    v19 = *(_QWORD *)(a1[77] + 8LL * a3);
    v20 = a3;
    if ( !v19 )
    {
LABEL_8:
      v55 = 1;
      v56 = 0;
      v57 = 1;
      v58 = 0;
      sub_182CBA0(qword_1C7F2C0, &v57);
      BYTE4(v57) &= ~1u;
      v49 = (_BYTE *)(4 * v11);
      v17 = a1[74];
      LODWORD(v57) = 1;
      if ( (*(_BYTE *)(v17 + 4 * v11 + 3) & 0x40) == 0 )
        goto LABEL_9;
      sub_992B90((__int64)&v59, (__int64)a4);
      v22 = v59;
      LODWORD(v59) = v55;
      LODWORD(v55) = v22;
      v23 = v60;
      v60 = v56;
      v56 = v23;
      v24 = BYTE4(v59) & 1;
      LOBYTE(v23) = BYTE4(v55) & 0xFC | BYTE4(v59) & 2;
      BYTE4(v59) = BYTE4(v55) & 1 | BYTE4(v59) & 0xFC | BYTE4(v55) & 2;
      BYTE4(v55) = v24 | v23;
      LODWORD(v23) = v61;
      LODWORD(v61) = v57;
      LODWORD(v57) = v23;
      v25 = v62;
      v62 = v58;
      v58 = v25;
      LOBYTE(v25) = BYTE4(v61) & 1 | BYTE4(v57) & 0xFC | BYTE4(v61) & 2;
      BYTE4(v61) = BYTE4(v57) & 1 | BYTE4(v61) & 0xFC | BYTE4(v57) & 2;
      BYTE4(v57) = v25;
      sub_25A130((char *)&v59);
      if ( (v49[a1[74] + 3] & 0x40) == 0 )
        goto LABEL_9;
      if ( (v55 & 0x100000000LL) == 0 && (_DWORD)v55 == 1 && (v57 & 0x100000000LL) == 0 && (_DWORD)v57 == 1 )
        goto LABEL_25;
      if ( *(int *)a5 < 0 )
      {
        v59 = 0;
        v60 = 0;
        v61 = 1;
        v62 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v59, (int *)&v55);
      }
      else
      {
        sub_992D20((__int64)&v59, a5, (__int64)&v55);
      }
      v26 = v59;
      v27 = BYTE4(v59);
      LODWORD(v59) = *(_DWORD *)a5;
      v28 = *(_QWORD *)(a5 + 8);
      *(_DWORD *)a5 = v26;
      v29 = v60;
      v60 = v28;
      LOBYTE(v28) = *(_BYTE *)(a5 + 4);
      *(_QWORD *)(a5 + 8) = v29;
      LOBYTE(v29) = v27;
      v27 &= ~2u;
      v30 = v28 & 0xFD;
      BYTE4(v59) = v28 & 1 | v27 & 0xFE | v28 & 2;
      LODWORD(v28) = *(_DWORD *)(a5 + 16);
      *(_BYTE *)(a5 + 4) = v27 & 1 | v30 & 0xFE | v29 & 2;
      LODWORD(v29) = v61;
      LODWORD(v61) = v28;
      v31 = *(_QWORD *)(a5 + 24);
      v32 = BYTE4(v61);
      *(_DWORD *)(a5 + 16) = v29;
      v33 = v62;
      v62 = v31;
      LOBYTE(v31) = *(_BYTE *)(a5 + 20);
      *(_QWORD *)(a5 + 24) = v33;
      LOBYTE(v33) = v32;
      v32 &= ~2u;
      BYTE4(v61) = v31 & 1 | v32 & 0xFE | v31 & 2;
      *(_BYTE *)(a5 + 20) = v32 & 1 | v31 & 0xFC | v33 & 2;
      sub_25A130((char *)&v59);
      sub_9AFFD0((__int64)a1, a5, a6);
      if ( (v49[a1[74] + 3] & 0x40) != 0 )
      {
LABEL_25:
        if ( (*(_BYTE *)(a6 + 20) & 1) == 0 && *(_DWORD *)(a6 + 16) == 1 )
        {
          if ( (v50 & 0x100000000LL) != 0 )
            goto LABEL_29;
        }
        else
        {
          sub_992C20((__int64)&v59, a6);
          v34 = v59;
          v35 = BYTE4(v59);
          LODWORD(v59) = *(_DWORD *)a6;
          v36 = *(_QWORD *)(a6 + 8);
          *(_DWORD *)a6 = v34;
          v37 = v60;
          v60 = v36;
          LOBYTE(v36) = *(_BYTE *)(a6 + 4);
          *(_QWORD *)(a6 + 8) = v37;
          LOBYTE(v37) = v35;
          v35 &= ~2u;
          v38 = v36 & 0xFD;
          BYTE4(v59) = v36 & 1 | v35 & 0xFE | v36 & 2;
          LODWORD(v36) = *(_DWORD *)(a6 + 16);
          *(_BYTE *)(a6 + 4) = v35 & 1 | v38 & 0xFE | v37 & 2;
          LODWORD(v37) = v61;
          LODWORD(v61) = v36;
          v39 = *(_QWORD *)(a6 + 24);
          v40 = BYTE4(v61);
          *(_DWORD *)(a6 + 16) = v37;
          v41 = v62;
          v62 = v39;
          LOBYTE(v39) = *(_BYTE *)(a6 + 20);
          *(_QWORD *)(a6 + 24) = v41;
          LOBYTE(v41) = v40;
          v40 &= ~2u;
          BYTE4(v61) = v39 & 1 | v40 & 0xFE | v39 & 2;
          *(_BYTE *)(a6 + 20) = v40 & 1 | v39 & 0xFC | v41 & 2;
          sub_25A130((char *)&v59);
          sub_9AFFD0((__int64)a1, a5, a6);
          if ( (v50 & 0x100000000LL) != 0 )
            goto LABEL_28;
        }
      }
      else
      {
LABEL_9:
        if ( (v50 & 0x100000000LL) != 0 )
          goto LABEL_10;
      }
      if ( (_DWORD)v50 == -1 && (v52 & 0x100000000LL) == 0 && (_DWORD)v52 == 1 )
        goto LABEL_13;
LABEL_28:
      if ( (v49[a1[74] + 3] & 0x40) != 0 )
      {
LABEL_29:
        sub_992C20((__int64)&v59, (__int64)&v50);
        v42 = v59;
        LODWORD(v59) = v50;
        LODWORD(v50) = v42;
        v43 = v60;
        v60 = v51;
        v51 = v43;
        v44 = BYTE4(v59) & 1;
        LOBYTE(v43) = BYTE4(v50) & 0xFC | BYTE4(v59) & 2;
        BYTE4(v59) = BYTE4(v50) & 1 | BYTE4(v59) & 0xFC | BYTE4(v50) & 2;
        BYTE4(v50) = v44 | v43;
        LODWORD(v43) = v61;
        LODWORD(v61) = v52;
        LODWORD(v52) = v43;
        v45 = v62;
        v62 = v53;
        v53 = v45;
        LOBYTE(v45) = BYTE4(v61) & 1 | BYTE4(v52) & 0xFC | BYTE4(v61) & 2;
        BYTE4(v61) = BYTE4(v52) & 1 | BYTE4(v61) & 0xFC | BYTE4(v52) & 2;
        BYTE4(v52) = v45;
        sub_25A130((char *)&v59);
        sub_9AFFD0((__int64)a1, a5, (__int64)&v50);
      }
LABEL_10:
      v18 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a6 + 4) & 1) != 0
        || *(_DWORD *)a6 != -1
        || (*(_BYTE *)(a6 + 20) & 1) != 0
        || *(_DWORD *)(a6 + 16) != 1 )
      {
        if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v50, a6) )
        {
LABEL_13:
          v8 = 0;
LABEL_14:
          sub_25A130((char *)&v55);
          sub_25A130((char *)&v50);
          return v8;
        }
        v18 = qword_1C7F2C0;
      }
      sub_27B950((__int64)v18, a6, (int *)&v50);
      goto LABEL_14;
    }
    v47 = (void *)(v19 + 16);
    v21 = sub_999800((__int64)a1, v20);
    sub_3EBB80((__int64)v54, v21, (__int64)v47);
    sub_27B620((__int64)&v55, (__int64)v54, (__int64)a4);
    sub_3EC020((__int64)&v59, (__int64)&v55);
LABEL_7:
    v13 = v59;
    LODWORD(v59) = v50;
    LODWORD(v50) = v13;
    v14 = v60;
    v60 = v51;
    v51 = v14;
    v15 = BYTE4(v59) & 1;
    LOBYTE(v14) = BYTE4(v50) & 0xFC | BYTE4(v59) & 2;
    BYTE4(v59) = BYTE4(v50) & 1 | BYTE4(v59) & 0xFC | BYTE4(v50) & 2;
    BYTE4(v50) = v15 | v14;
    LODWORD(v14) = v61;
    LODWORD(v61) = v52;
    LODWORD(v52) = v14;
    v16 = v62;
    v62 = v53;
    v53 = v16;
    LOBYTE(v16) = BYTE4(v61) & 1 | BYTE4(v52) & 0xFC | BYTE4(v61) & 2;
    BYTE4(v61) = BYTE4(v52) & 1 | BYTE4(v61) & 0xFC | BYTE4(v52) & 2;
    BYTE4(v52) = v16;
    sub_25A130((char *)&v59);
    sub_25A130((char *)&v55);
    sub_25A130(v54);
    goto LABEL_8;
  }
  return v8;
}

