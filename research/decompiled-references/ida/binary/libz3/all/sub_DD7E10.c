__int64 __fastcall sub_DD7E10(__int64 a1)
{
  int v2; // eax
  void *v3; // r13
  int v4; // edx
  char v5; // cl
  __int64 v6; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  char v9; // si
  __int64 v10; // rax
  char v11; // r13
  int v12; // eax
  void *v13; // rdi
  __int64 v14; // rdx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  int v19; // edx
  char v20; // cl
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // si
  __int64 v25; // rax
  char v26; // cl
  __int64 v27; // rdx
  void *v28; // r15
  void *v29; // rdi
  void *v30; // r15
  unsigned int v31; // r12d
  void *v32; // rbx
  void *v34; // r13
  char v35; // al
  char v36; // al
  void *v37; // [rsp+0h] [rbp-138h]
  void *v38; // [rsp+0h] [rbp-138h]
  void *v39; // [rsp+10h] [rbp-128h]
  void *v40; // [rsp+18h] [rbp-120h]
  void *v41; // [rsp+20h] [rbp-118h]
  void *v42; // [rsp+20h] [rbp-118h]
  void *v43; // [rsp+20h] [rbp-118h]
  _QWORD v44[2]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v46[2]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-C8h] BYREF
  int v48; // [rsp+80h] [rbp-B8h] BYREF
  char v49; // [rsp+84h] [rbp-B4h]
  __int64 v50; // [rsp+88h] [rbp-B0h]
  int v51; // [rsp+90h] [rbp-A8h] BYREF
  char v52; // [rsp+94h] [rbp-A4h]
  __int64 v53; // [rsp+98h] [rbp-A0h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v55[2]; // [rsp+B0h] [rbp-88h] BYREF
  int v56; // [rsp+C0h] [rbp-78h] BYREF
  char v57; // [rsp+C4h] [rbp-74h]
  __int64 v58; // [rsp+C8h] [rbp-70h]
  int v59; // [rsp+D0h] [rbp-68h] BYREF
  char v60; // [rsp+D4h] [rbp-64h]
  __int64 v61; // [rsp+D8h] [rbp-60h]
  __int64 v62; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-50h]
  __int64 v64; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-40h]

  v44[0] = 1;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v45);
  v2 = *(char *)(a1 + 16);
  BYTE4(v45[0]) &= ~1u;
  v62 = (unsigned int)(v2 - 48);
  LODWORD(v45[0]) = 1;
  v63 = 0;
  v64 = 1;
  v65 = 0;
  sub_182CBA0(qword_1C7F2C0, &v64);
  v3 = qword_1C7F2C0;
  v4 = v62;
  v5 = BYTE4(v62);
  LODWORD(v62) = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 40) = v4;
  v8 = v63;
  v63 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 44);
  *(_QWORD *)(a1 + 48) = v8;
  LOBYTE(v8) = v5;
  v5 &= ~2u;
  LOBYTE(v8) = v6 & 0xFC | v8 & 2;
  v9 = *(_BYTE *)(a1 + 60);
  BYTE4(v62) = v6 & 1 | v5 & 0xFE | v6 & 2;
  LODWORD(v6) = *(_DWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 44) = v5 & 1 | v8;
  LODWORD(v64) = v6;
  v10 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v65;
  v65 = v10;
  LOBYTE(v10) = BYTE4(v64);
  *(_DWORD *)(a1 + 56) = 1;
  *(_BYTE *)(a1 + 60) = v9 & 0xFC | v10 & 2;
  BYTE4(v64) = v9 & 1 | v9 & 2 | v10 & 0xFC;
  sub_182CBA0(v7, &v62);
  sub_182CBA0(v3, &v64);
  sub_DD7C60(a1);
  v11 = *(_BYTE *)(a1 + 17);
  if ( v11 )
  {
LABEL_38:
    v31 = 6;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v12 = *(char *)(a1 + 16);
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 16) - 48) > 9u )
          break;
        v54[0] = (unsigned int)(v12 - 48);
        v54[1] = 0;
        v55[0] = 1;
        v55[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v55);
        BYTE4(v55[0]) &= ~1u;
        LODWORD(v55[0]) = 1;
        v46[0] = 10;
        v46[1] = 0;
        v47[0] = 1;
        v47[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v47);
        BYTE4(v47[0]) &= ~1u;
        v13 = qword_1C7F2C0;
        LODWORD(v47[0]) = 1;
        v62 = 0;
        v63 = 0;
        v64 = 1;
        v65 = 0;
        if ( (v46[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v62, v46);
        else
          LODWORD(v62) = v46[0];
        if ( (v47[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v13, &v64, v47);
        }
        else
        {
          BYTE4(v64) &= ~1u;
          LODWORD(v64) = v47[0];
        }
        v14 = a1 + 40;
        if ( (v64 & 0x100000000LL) != 0
          || (_DWORD)v64 != 1
          || (*(_BYTE *)(a1 + 60) & 1) != 0
          || *(_DWORD *)(a1 + 56) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v62, v14);
        }
        else
        {
          v38 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, &v62, v14);
          sub_182CBA0(v38, &v64);
          BYTE4(v64) &= ~1u;
          LODWORD(v64) = 1;
        }
        v49 &= 0xFCu;
        v15 = qword_1C7F2C0;
        v52 &= 0xFCu;
        v48 = 0;
        v50 = 0;
        v51 = 1;
        v53 = 0;
        if ( (v62 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v48, &v62);
        else
          v48 = v62;
        if ( (v64 & 0x100000000LL) != 0 )
        {
          sub_182C690(v15, &v51, &v64);
        }
        else
        {
          v52 &= ~1u;
          v51 = v64;
        }
        v37 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v62);
        sub_182CBA0(v37, &v64);
        v16 = qword_1C7F2C0;
        v62 = 0;
        v63 = 0;
        v64 = 1;
        v65 = 0;
        if ( (v49 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v62, &v48);
        else
          LODWORD(v62) = v48;
        if ( (v52 & 1) != 0 )
        {
          sub_182C690(v16, &v64, &v51);
        }
        else
        {
          BYTE4(v64) &= ~1u;
          LODWORD(v64) = v51;
        }
        v17 = qword_1C7F2C0;
        if ( LODWORD(v54[0]) )
        {
          if ( (_DWORD)v62 )
          {
            if ( (v64 & 0x100000000LL) != 0 || (_DWORD)v64 != 1 || (v55[0] & 0x100000000LL) != 0 || LODWORD(v55[0]) != 1 )
            {
              sub_1851D20(qword_1C7F2C0, &v62, v54, &v62);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, &v62, v54, &v62);
              sub_182CBA0(v17, &v64);
              BYTE4(v64) &= ~1u;
              LODWORD(v64) = 1;
            }
          }
          else
          {
            if ( (v54[0] & 0x100000000LL) != 0 )
            {
              v43 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v62, v54);
              v17 = v43;
            }
            else
            {
              LODWORD(v62) = v54[0];
              BYTE4(v62) &= ~1u;
            }
            if ( (v55[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v17, &v64, v55);
            }
            else
            {
              BYTE4(v64) &= ~1u;
              LODWORD(v64) = v55[0];
            }
          }
        }
        else
        {
          if ( (v62 & 0x100000000LL) != 0 )
          {
            v42 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v62, &v62);
            v17 = v42;
          }
          else
          {
            BYTE4(v62) &= ~1u;
          }
          if ( (v64 & 0x100000000LL) != 0 )
            sub_182C690(v17, &v64, &v64);
          else
            BYTE4(v64) &= ~1u;
        }
        v57 &= 0xFCu;
        v18 = qword_1C7F2C0;
        v60 &= 0xFCu;
        v56 = 0;
        v58 = 0;
        v59 = 1;
        v61 = 0;
        if ( (v62 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v56, &v62);
        else
          v56 = v62;
        if ( (v64 & 0x100000000LL) != 0 )
        {
          sub_182C690(v18, &v59, &v64);
        }
        else
        {
          v60 &= ~1u;
          v59 = v64;
        }
        v41 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v62);
        sub_182CBA0(v41, &v64);
        v19 = v56;
        v20 = v57;
        v21 = qword_1C7F2C0;
        v56 = *(_DWORD *)(a1 + 40);
        v22 = *(_QWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 40) = v19;
        v23 = v58;
        v58 = v22;
        LOBYTE(v22) = *(_BYTE *)(a1 + 44);
        *(_QWORD *)(a1 + 48) = v23;
        LOBYTE(v23) = v20;
        v20 &= ~2u;
        v24 = v22 & 0xFD;
        v57 = v22 & 1 | v20 & 0xFE | v22 & 2;
        LODWORD(v22) = *(_DWORD *)(a1 + 56);
        *(_BYTE *)(a1 + 44) = v20 & 1 | v24 & 0xFE | v23 & 2;
        LODWORD(v23) = v59;
        v59 = v22;
        v25 = *(_QWORD *)(a1 + 64);
        v26 = v60;
        *(_DWORD *)(a1 + 56) = v23;
        v27 = v61;
        v61 = v25;
        LOBYTE(v25) = *(_BYTE *)(a1 + 60);
        *(_QWORD *)(a1 + 64) = v27;
        LOBYTE(v27) = v26;
        v26 &= ~2u;
        v60 = v25 & 1 | v26 & 0xFE | v25 & 2;
        *(_BYTE *)(a1 + 60) = v26 & 1 | v25 & 0xFC | v27 & 2;
        sub_182CBA0(v21, &v56);
        sub_182CBA0(v21, &v59);
        v40 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v48);
        sub_182CBA0(v40, &v51);
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v46);
        sub_182CBA0(v39, v47);
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v54);
        sub_182CBA0(v28, v55);
        if ( v11 )
        {
          v62 = 10;
          v63 = 0;
          v64 = 1;
          v65 = 0;
          sub_182CBA0(qword_1C7F2C0, &v64);
          LODWORD(v64) = 1;
          v29 = qword_1C7F2C0;
          BYTE4(v64) &= ~1u;
          if ( (v45[0] & 0x100000000LL) == 0 && LODWORD(v45[0]) == 1 )
          {
            sub_1831650(qword_1C7F2C0, v44, &v62);
            sub_182CBA0(v29, v45);
            BYTE4(v45[0]) &= ~1u;
            LODWORD(v45[0]) = 1;
          }
          else
          {
            sub_1848FF0(qword_1C7F2C0, v44, &v62);
          }
          v30 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v62);
          sub_182CBA0(v30, &v64);
        }
        sub_DD7C60(a1);
        if ( *(_BYTE *)(a1 + 17) )
          goto LABEL_37;
      }
      if ( (_BYTE)v12 != 46 )
        break;
      if ( v11 )
        goto LABEL_56;
      sub_DD7C60(a1);
      v11 = 1;
    }
    while ( !*(_BYTE *)(a1 + 17) );
LABEL_37:
    if ( !v11 )
      goto LABEL_38;
LABEL_56:
    v34 = qword_1C7F2C0;
    if ( *(_DWORD *)(a1 + 40)
      && ((v44[0] & 0x100000000LL) != 0 || LODWORD(v44[0]) != 1 || (v45[0] & 0x100000000LL) != 0 || LODWORD(v45[0]) != 1) )
    {
      sub_1831650(qword_1C7F2C0, a1 + 40, v45);
      sub_1831650(v34, a1 + 56, v44);
      if ( *(int *)(a1 + 56) < 0 )
      {
        sub_1831620(v34, a1 + 40);
        sub_1831620(v34, a1 + 56);
      }
      v62 = 0;
      v63 = 0;
      sub_1832C70(v34, a1 + 40, a1 + 56, &v62);
      if ( (v62 & 0x100000000LL) != 0 || (_DWORD)v62 != 1 )
      {
        sub_1833EB0(v34, a1 + 40, &v62, a1 + 40);
        sub_1833EB0(v34, a1 + 56, &v62, a1 + 56);
      }
      sub_182CBA0(v34, &v62);
    }
    else
    {
      v35 = *(_BYTE *)(a1 + 44);
      if ( (v35 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, a1 + 40, a1 + 40);
      else
        *(_BYTE *)(a1 + 44) = v35 & 0xFE;
      v36 = *(_BYTE *)(a1 + 60);
      if ( (v36 & 1) != 0 )
        sub_182C690(v34, a1 + 56, a1 + 56);
      else
        *(_BYTE *)(a1 + 60) = v36 & 0xFE;
    }
    v31 = 8;
  }
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v44);
  sub_182CBA0(v32, v45);
  return v31;
}

