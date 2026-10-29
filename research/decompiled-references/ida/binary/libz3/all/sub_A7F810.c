__int64 __fastcall sub_A7F810(__int64 *a1, void *a2, __int64 a3, void *a4, int a5, int a6)
{
  __int64 v6; // r13
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  char v12; // al
  void *v13; // r15
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // esi
  int v18; // edi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  void *v22; // rbp
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r13
  _DWORD *v28; // rax
  unsigned int v29; // r12d
  __int64 v30; // r13
  __int64 v31; // rdi
  char v32; // al
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned int *v36; // rax
  int v37; // eax
  void *v38; // rdi
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  void *v42; // r15
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int *v48; // r15
  unsigned int v49; // r14d
  int v50; // eax
  void *v51; // [rsp+0h] [rbp-D8h]
  __int64 *v52; // [rsp+0h] [rbp-D8h]
  __int64 *v53; // [rsp+0h] [rbp-D8h]
  void *v54; // [rsp+0h] [rbp-D8h]
  void *v55; // [rsp+0h] [rbp-D8h]
  void *v56; // [rsp+8h] [rbp-D0h]
  void *v57; // [rsp+8h] [rbp-D0h]
  void *v58; // [rsp+8h] [rbp-D0h]
  void *v59; // [rsp+8h] [rbp-D0h]
  void *v60; // [rsp+10h] [rbp-C8h]
  void *v61; // [rsp+10h] [rbp-C8h]
  void *v62; // [rsp+10h] [rbp-C8h]
  _DWORD *v63; // [rsp+10h] [rbp-C8h]
  char v64; // [rsp+18h] [rbp-C0h]
  char v65; // [rsp+18h] [rbp-C0h]
  char v66; // [rsp+18h] [rbp-C0h]
  unsigned int *v67; // [rsp+18h] [rbp-C0h]
  void *v68; // [rsp+20h] [rbp-B8h]
  void *v69; // [rsp+20h] [rbp-B8h]
  __int64 v70; // [rsp+28h] [rbp-B0h]
  char v71; // [rsp+3Fh] [rbp-99h] BYREF
  int v72[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v73; // [rsp+48h] [rbp-90h]
  _QWORD v74[2]; // [rsp+50h] [rbp-88h] BYREF
  int v75; // [rsp+60h] [rbp-78h] BYREF
  char v76; // [rsp+64h] [rbp-74h]
  __int64 v77; // [rsp+68h] [rbp-70h]
  int v78; // [rsp+70h] [rbp-68h] BYREF
  char v79; // [rsp+74h] [rbp-64h]
  __int64 v80; // [rsp+78h] [rbp-60h]
  __int64 v81; // [rsp+80h] [rbp-58h] BYREF
  __int64 v82; // [rsp+88h] [rbp-50h]
  __int64 v83; // [rsp+90h] [rbp-48h] BYREF
  __int64 v84; // [rsp+98h] [rbp-40h]

  v6 = (__int64)(a1 + 2);
  *(_QWORD *)v72 = 0;
  v73 = 0;
  v74[0] = 1;
  v74[1] = 0;
  if ( (unsigned __int8)sub_16679C0((int)a1 + 16, a3, (int)v72, (int)a4, a5, a6, v51, a4, a2) )
  {
    v81 = 0;
    v52 = &v83;
    v82 = 0;
    v83 = 1;
    v84 = 0;
    sub_182CBA0(qword_1C7F2C0, &v83);
    BYTE4(v83) &= ~1u;
    LODWORD(v83) = 1;
    v12 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v81, (__int64)v72);
    v13 = qword_1C7F2C0;
    v64 = v12;
    sub_182CBA0(qword_1C7F2C0, &v81);
    sub_182CBA0(v13, &v83);
    if ( v64 )
    {
      v33 = a1[1];
      v34 = sub_9934D0(v6, 0);
      v35 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v36 = (unsigned int *)sub_15E1B70(a1[2]);
      v37 = sub_A7A500(a1, v36);
      sub_A7A3B0((__int64)a1, v37 ^ 1);
      sub_A72BE0(v35, v33);
    }
  }
  if ( (unsigned __int8)sub_16679C0(v6, (int)v56, (int)v72, v9, v10, v11, v52, v56, v60) )
  {
    v81 = 0;
    v53 = &v83;
    v82 = 0;
    v83 = 1;
    v84 = 0;
    sub_182CBA0(qword_1C7F2C0, &v83);
    BYTE4(v83) &= ~1u;
    LODWORD(v83) = 1;
    v65 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v81, (__int64)v72);
    v68 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v81);
    sub_182CBA0(v68, &v83);
    if ( v65 )
    {
      v76 &= 0xFCu;
      v38 = qword_1C7F2C0;
      v79 &= 0xFCu;
      v75 = 0;
      v77 = 0;
      v78 = 1;
      v80 = 0;
      if ( (v72[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v75, v72);
      else
        v75 = v72[0];
      sub_182CBA0(v38, &v78);
      v79 &= ~1u;
      v78 = 1;
      if ( (unsigned __int8)sub_753DF0((__int64)&v75, 1u) )
      {
        BYTE4(v81) &= 0xFCu;
        v39 = qword_1C7F2C0;
        BYTE4(v83) &= 0xFCu;
        LODWORD(v81) = 0;
        v82 = 0;
        LODWORD(v83) = 1;
        v84 = 0;
        if ( (v74[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v81, v74);
        else
          LODWORD(v81) = v74[0];
        sub_182CBA0(v39, &v83);
        BYTE4(v83) &= ~1u;
        LODWORD(v83) = 1;
        v66 = sub_7FB2D0((__int64)&v81, 1u);
        sub_25A130((char *)&v81);
        sub_25A130((char *)&v75);
        if ( v66 )
        {
          v69 = (void *)a1[1];
          sub_9934D0(v6, 0);
          v40 = sub_15E1B70(a1[2]);
          v67 = (unsigned int *)v40;
          if ( v40 )
            ++*(_DWORD *)(v40 + 8);
          v41 = a1[1];
          v42 = qword_1C7F2C0;
          LODWORD(v81) = 0;
          BYTE4(v81) &= 0xFCu;
          BYTE4(v83) &= 0xFCu;
          v70 = v41;
          v82 = 0;
          LODWORD(v83) = 1;
          v84 = 0;
          if ( (v74[0] & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v81, v74);
          else
            LODWORD(v81) = v74[0];
          sub_182CBA0(v42, &v83);
          BYTE4(v83) &= ~1u;
          LODWORD(v83) = 1;
          sub_27B900(v6, (int)&v81, 0, v43, v44, v45);
          v46 = sub_15E1B70(a1[2]);
          v47 = sub_A72D10(a1[2], a3, v46);
          v48 = (unsigned int *)v47;
          if ( v47 )
            ++*(_DWORD *)(v47 + 8);
          sub_25A130((char *)&v81);
          v49 = sub_A7A500(a1, v48);
          v50 = sub_A7A500(a1, v67);
          sub_A7A430((__int64)a1, v50 ^ 1, v49);
          sub_A72BE0((__int64)v48, v70);
          sub_A72BE0((__int64)v67, (__int64)v69);
        }
      }
      else
      {
        sub_25A130((char *)&v75);
      }
    }
  }
  if ( !(unsigned __int8)sub_1666AE0(v6, a3, v72, &v71) || !(unsigned __int8)sub_753DF0((__int64)v72, 0) )
  {
    v17 = a3;
    v18 = v6;
    goto LABEL_7;
  }
  if ( (unsigned __int8)sub_1666AE0(v6, v57, v72, &v75) )
  {
    v17 = a3;
    v18 = v6;
    if ( !(unsigned __int8)sub_753DF0((__int64)v72, 0) )
    {
LABEL_7:
      if ( (unsigned __int8)sub_16679C0(v18, v17, (int)v72, v14, v15, v16, v53, v57, v61)
        || (unsigned __int8)sub_16679C0(v6, (int)v58, (int)v72, v19, v20, v21, v54, v58, v62) )
      {
        goto LABEL_8;
      }
      goto LABEL_14;
    }
  }
  if ( !(unsigned __int8)sub_16679C0(v6, a3, (int)v72, v14, v15, v16, v53, v57, v61) )
    sub_16679C0(v6, (int)v59, (int)v72, v24, v25, v26, v55, v59, v63);
LABEL_14:
  v27 = *a1;
  v28 = (_DWORD *)sub_15E1B70(a1[2]);
  v29 = sub_966380(v27, v63, v28);
  v30 = *(_QWORD *)(*a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v30 + 7488) + 48LL))(
    *(_QWORD *)(v30 + 7488),
    *(_QWORD *)(*(_QWORD *)(v30 + 8840) + 8LL * (v29 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 7488) + 64LL))(*(_QWORD *)(v30 + 7488));
  v31 = *(_QWORD *)(*a1 + 16);
  v81 = 2;
  v32 = *(_BYTE *)(*(_QWORD *)(v31 + 8848) + v29);
  if ( v32 == -1 )
  {
    sub_8E8670(v31, &v81, v29 ^ 1);
  }
  else if ( !v32 )
  {
    sub_8F28B0(v31, v29, 2, 0);
  }
LABEL_8:
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v72);
  return sub_182CBA0(v22, v74);
}

