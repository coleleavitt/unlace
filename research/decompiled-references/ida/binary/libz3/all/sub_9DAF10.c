__int64 __fastcall sub_9DAF10(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  int v4; // edx
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rdx
  int v8; // edx
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  unsigned int v12; // eax
  void *v13; // rdi
  int v14; // edx
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  void *v24; // rdi
  unsigned int v25; // eax
  void *v26; // rdi
  unsigned int v27; // eax
  void *v28; // rdi
  unsigned int v29; // eax
  void *v30; // rdi
  char v31; // [rsp+10h] [rbp-190h]
  _BYTE *v32; // [rsp+20h] [rbp-180h]
  char v33; // [rsp+30h] [rbp-170h]
  _WORD v35[5]; // [rsp+4Eh] [rbp-152h] BYREF
  __int64 v36; // [rsp+58h] [rbp-148h]
  __int64 v37; // [rsp+60h] [rbp-140h]
  __int64 v38; // [rsp+68h] [rbp-138h]
  int v39[2]; // [rsp+70h] [rbp-130h] BYREF
  __int64 v40; // [rsp+78h] [rbp-128h]
  __int64 v41; // [rsp+80h] [rbp-120h]
  __int64 v42; // [rsp+88h] [rbp-118h]
  __int64 v43[2]; // [rsp+90h] [rbp-110h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-100h]
  __int64 v45; // [rsp+A8h] [rbp-F8h]
  _QWORD v46[2]; // [rsp+B0h] [rbp-F0h] BYREF
  _QWORD v47[2]; // [rsp+C0h] [rbp-E0h] BYREF
  char v48[32]; // [rsp+D0h] [rbp-D0h] BYREF
  char v49[32]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+110h] [rbp-90h] BYREF
  __int64 v51; // [rsp+118h] [rbp-88h]
  __int64 v52; // [rsp+120h] [rbp-80h] BYREF
  __int64 v53; // [rsp+128h] [rbp-78h]
  __int64 v54; // [rsp+130h] [rbp-70h] BYREF
  __int64 v55; // [rsp+138h] [rbp-68h]
  __int64 v56; // [rsp+140h] [rbp-60h] BYREF
  __int64 v57; // [rsp+148h] [rbp-58h]
  __int64 v58; // [rsp+150h] [rbp-50h] BYREF
  __int64 v59; // [rsp+158h] [rbp-48h]
  __int64 v60; // [rsp+160h] [rbp-40h] BYREF
  __int64 v61; // [rsp+168h] [rbp-38h]

  LOBYTE(v2) = !sub_99A460(a1, a2) && a2 != -1;
  if ( (_BYTE)v2 )
  {
    v32 = (_BYTE *)(4LL * a2);
    if ( (v32[*(_QWORD *)(a1 + 592) + 3] & 0x30) != 0 )
      return 0;
    *(_QWORD *)&v35[1] = 0;
    v36 = 0;
    v37 = 1;
    v38 = 0;
    *(_QWORD *)v39 = 0;
    v40 = 0;
    v41 = 1;
    v42 = 0;
    v43[0] = 0;
    v43[1] = 0;
    v44 = 1;
    v45 = 0;
    sub_9B7380((_QWORD *)a1, a2, v35, (__int64)&v35[1], (_BYTE *)v35 + 1, (__int64)v39, (int *)v43);
    v31 = v35[0];
    if ( LOBYTE(v35[0]) )
    {
      if ( HIBYTE(v35[0]) )
      {
        v58 = 0;
        v59 = 0;
        v29 = 214013 * *(_DWORD *)(a1 + 920);
        v30 = qword_1C7F2C0;
        v60 = 1;
        v61 = 0;
        v29 += 2531011;
        *(_DWORD *)(a1 + 920) = v29;
        LODWORD(v58) = (HIWORD(v29) & 0x7FFF) % 0x2711u;
        sub_182CBA0(v30, &v60);
        BYTE4(v60) &= ~1u;
        LODWORD(v60) = 1;
        sub_9DAE90((_QWORD *)a1, a2, (__int64)&v58);
        sub_25A130((char *)&v58);
        goto LABEL_24;
      }
      if ( (v32[*(_QWORD *)(a1 + 592) + 3] & 0x40) == 0 )
        goto LABEL_22;
    }
    else
    {
      if ( (v32[*(_QWORD *)(a1 + 592) + 3] & 0x40) == 0 )
      {
        if ( HIBYTE(v35[0]) )
        {
LABEL_9:
          v50 = 0;
          v51 = 0;
          v12 = 214013 * *(_DWORD *)(a1 + 920);
          v13 = qword_1C7F2C0;
          v52 = 1;
          v53 = 0;
          v12 += 2531011;
          *(_DWORD *)(a1 + 920) = v12;
          LODWORD(v50) = (HIWORD(v12) & 0x7FFF) % 0x2711u;
          sub_182CBA0(v13, &v52);
          BYTE4(v52) &= ~1u;
          LODWORD(v52) = 1;
          sub_3EBE30((__int64)&v58, (__int64)v43, (__int64)&v50);
          sub_27B340((__int64)&v54, (__int64)&v35[1], (int *)&v58);
          sub_25A130((char *)&v58);
          sub_9DAE90((_QWORD *)a1, a2, (__int64)&v54);
LABEL_23:
          sub_25A130((char *)&v54);
          sub_25A130((char *)&v50);
LABEL_24:
          sub_25A130((char *)v43);
          sub_25A130((char *)v39);
          sub_25A130((char *)&v35[1]);
          return v2;
        }
LABEL_17:
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v35[1], (__int64)v39) )
        {
          if ( (v32[*(_QWORD *)(a1 + 592) + 3] & 0x40) != 0 )
          {
            sub_3EBB80((__int64)&v58, (__int64)v39, (__int64)&v35[1]);
            sub_27B620((__int64)v49, (__int64)&v58, (__int64)v43);
            sub_25A130((char *)&v58);
            v58 = 10000;
            v59 = 0;
            v60 = 1;
            v61 = 0;
            sub_182CBA0(qword_1C7F2C0, &v60);
            LODWORD(v60) = 1;
            BYTE4(v60) &= ~1u;
            v33 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v49, (__int64)&v58);
            sub_25A130((char *)&v58);
            if ( v33 )
              v22 = sub_182D020(qword_1C7F2C0, v49) + 1;
            else
              v22 = 10001;
            v55 = 0;
            BYTE4(v54) &= 0xFCu;
            v23 = 214013 * *(_DWORD *)(a1 + 920);
            v24 = qword_1C7F2C0;
            v56 = 1;
            v57 = 0;
            v23 += 2531011;
            *(_DWORD *)(a1 + 920) = v23;
            LODWORD(v54) = (HIWORD(v23) & 0x7FFFu) % v22;
            sub_182CBA0(v24, &v56);
            BYTE4(v56) &= ~1u;
            LODWORD(v56) = 1;
            sub_3EBE30((__int64)&v58, (__int64)v43, (__int64)&v54);
            sub_27B340((__int64)&v50, (__int64)&v35[1], (int *)&v58);
            sub_25A130((char *)&v58);
            sub_25A130((char *)&v54);
            sub_9DAE90((_QWORD *)a1, a2, (__int64)&v50);
            sub_25A130((char *)&v50);
            sub_25A130(v49);
          }
          else
          {
            v46[0] = 0;
            v46[1] = 0;
            v27 = 214013 * *(_DWORD *)(a1 + 920);
            v28 = qword_1C7F2C0;
            v47[0] = 1;
            v47[1] = 0;
            v27 += 2531011;
            *(_DWORD *)(a1 + 920) = v27;
            LODWORD(v46[0]) = (HIWORD(v27) & 0x7FFF) % 0x2711u;
            sub_182CBA0(v28, v47);
            BYTE4(v47[0]) &= ~1u;
            LODWORD(v47[0]) = 1;
            v54 = 10000;
            v55 = 0;
            v56 = 1;
            v57 = 0;
            sub_182CBA0(qword_1C7F2C0, &v56);
            BYTE4(v56) &= ~1u;
            LODWORD(v56) = 1;
            sub_3EBB80((__int64)v49, (__int64)v39, (__int64)&v35[1]);
            sub_3EBE30((__int64)&v50, (__int64)v46, (__int64)v49);
            sub_27B620((__int64)&v58, (__int64)&v50, (__int64)&v54);
            sub_27B340((__int64)v48, (__int64)&v35[1], (int *)&v58);
            sub_25A130((char *)&v58);
            sub_25A130((char *)&v50);
            sub_25A130(v49);
            sub_25A130((char *)&v54);
            sub_9DAE90((_QWORD *)a1, a2, (__int64)v48);
            sub_25A130(v48);
            sub_25A130((char *)v46);
          }
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_24;
      }
      sub_992CA0((__int64)&v58, (__int64)&v35[1]);
      v4 = v58;
      LODWORD(v58) = *(_DWORD *)&v35[1];
      *(_DWORD *)&v35[1] = v4;
      v5 = v59;
      v59 = v36;
      v36 = v5;
      v6 = BYTE4(v58) & 1;
      LOBYTE(v5) = v35[3] & 0xFC | BYTE4(v58) & 2;
      BYTE4(v58) = v35[3] & 1 | BYTE4(v58) & 0xFC | v35[3] & 2;
      LOBYTE(v35[3]) = v6 | v5;
      LODWORD(v5) = v60;
      LODWORD(v60) = v37;
      LODWORD(v37) = v5;
      v7 = v61;
      v61 = v38;
      v38 = v7;
      LOBYTE(v7) = BYTE4(v60) & 1 | BYTE4(v37) & 0xFC | BYTE4(v60) & 2;
      BYTE4(v60) = BYTE4(v37) & 1 | BYTE4(v60) & 0xFC | BYTE4(v37) & 2;
      BYTE4(v37) = v7;
      sub_25A130((char *)&v58);
      if ( (v43[0] & 0x100000000LL) != 0 || LODWORD(v43[0]) != 1 || (v44 & 0x100000000LL) != 0 || (_DWORD)v44 != 1 )
      {
        sub_27B620((__int64)&v50, (__int64)&v35[1], (__int64)v43);
        sub_992CA0((__int64)&v54, (__int64)&v50);
        sub_3EBE30((__int64)&v58, (__int64)v43, (__int64)&v54);
        v8 = v58;
        LODWORD(v58) = *(_DWORD *)&v35[1];
        *(_DWORD *)&v35[1] = v8;
        v9 = v59;
        v59 = v36;
        v36 = v9;
        v10 = BYTE4(v58) & 1;
        LOBYTE(v9) = v35[3] & 0xFC | BYTE4(v58) & 2;
        BYTE4(v58) = v35[3] & 1 | BYTE4(v58) & 0xFC | v35[3] & 2;
        LOBYTE(v35[3]) = v10 | v9;
        LODWORD(v9) = v60;
        LODWORD(v60) = v37;
        LODWORD(v37) = v9;
        v11 = v61;
        v61 = v38;
        v38 = v11;
        LOBYTE(v11) = BYTE4(v60) & 1 | BYTE4(v37) & 0xFC | BYTE4(v60) & 2;
        BYTE4(v60) = BYTE4(v37) & 1 | BYTE4(v60) & 0xFC | BYTE4(v37) & 2;
        BYTE4(v37) = v11;
        sub_25A130((char *)&v58);
        sub_25A130((char *)&v54);
        sub_25A130((char *)&v50);
      }
      if ( HIBYTE(v35[0]) )
        goto LABEL_9;
    }
    sub_992C20((__int64)&v58, (__int64)v39);
    v14 = v58;
    LODWORD(v58) = v39[0];
    v39[0] = v14;
    v15 = v59;
    v59 = v40;
    v40 = v15;
    v16 = BYTE4(v58) & 1;
    LOBYTE(v15) = v39[1] & 0xFC | BYTE4(v58) & 2;
    BYTE4(v58) = v39[1] & 1 | BYTE4(v58) & 0xFC | v39[1] & 2;
    LOBYTE(v39[1]) = v16 | v15;
    LODWORD(v15) = v60;
    LODWORD(v60) = v41;
    LODWORD(v41) = v15;
    v17 = v61;
    v61 = v42;
    v42 = v17;
    LOBYTE(v17) = BYTE4(v60) & 1 | BYTE4(v41) & 0xFC | BYTE4(v60) & 2;
    BYTE4(v60) = BYTE4(v41) & 1 | BYTE4(v60) & 0xFC | BYTE4(v41) & 2;
    BYTE4(v41) = v17;
    sub_25A130((char *)&v58);
    if ( (v43[0] & 0x100000000LL) != 0 || LODWORD(v43[0]) != 1 || (v44 & 0x100000000LL) != 0 || (_DWORD)v44 != 1 )
    {
      sub_27B620((__int64)&v50, (__int64)v39, (__int64)v43);
      sub_992C20((__int64)&v54, (__int64)&v50);
      sub_3EBE30((__int64)&v58, (__int64)v43, (__int64)&v54);
      v18 = v58;
      LODWORD(v58) = v39[0];
      v39[0] = v18;
      v19 = v59;
      v59 = v40;
      v40 = v19;
      v20 = BYTE4(v58) & 1;
      LOBYTE(v19) = v39[1] & 0xFC | BYTE4(v58) & 2;
      BYTE4(v58) = v39[1] & 1 | BYTE4(v58) & 0xFC | v39[1] & 2;
      LOBYTE(v39[1]) = v20 | v19;
      LODWORD(v19) = v60;
      LODWORD(v60) = v41;
      LODWORD(v41) = v19;
      v21 = v61;
      v61 = v42;
      v42 = v21;
      LOBYTE(v21) = BYTE4(v60) & 1 | BYTE4(v41) & 0xFC | BYTE4(v60) & 2;
      BYTE4(v60) = BYTE4(v41) & 1 | BYTE4(v60) & 0xFC | BYTE4(v41) & 2;
      BYTE4(v41) = v21;
      sub_25A130((char *)&v58);
      sub_25A130((char *)&v54);
      sub_25A130((char *)&v50);
    }
    if ( !v31 )
      goto LABEL_17;
LABEL_22:
    v50 = 0;
    v51 = 0;
    v25 = 214013 * *(_DWORD *)(a1 + 920);
    v26 = qword_1C7F2C0;
    v52 = 1;
    v53 = 0;
    v25 += 2531011;
    *(_DWORD *)(a1 + 920) = v25;
    LODWORD(v50) = (HIWORD(v25) & 0x7FFF) % 0x2711u;
    sub_182CBA0(v26, &v52);
    BYTE4(v52) &= ~1u;
    LODWORD(v52) = 1;
    sub_3EBE30((__int64)&v58, (__int64)v43, (__int64)&v50);
    sub_3EBB80((__int64)&v54, (__int64)v39, (__int64)&v58);
    sub_25A130((char *)&v58);
    sub_9DAE90((_QWORD *)a1, a2, (__int64)&v54);
    goto LABEL_23;
  }
  return v2;
}

