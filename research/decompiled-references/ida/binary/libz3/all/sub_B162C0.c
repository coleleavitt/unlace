void __fastcall sub_B162C0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  _DWORD *i; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  _DWORD *v13; // r13
  _DWORD *v14; // rsi
  unsigned int v15; // ecx
  unsigned int j; // edx
  unsigned __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // si
  char v22; // si
  __int64 v23; // rcx
  __int64 v24; // rdx
  char v25; // si
  char v26; // si
  __int64 v27; // r15
  __int64 v28; // r14
  char v29; // cl
  int v30; // r9d
  char v31; // dl
  char v32; // r8
  __int64 v33; // r11
  char v34; // si
  int v35; // edi
  int v36; // r10d
  char v37; // al
  char v38; // r8
  __int64 v39; // rax
  char v40; // cl
  void *v41; // rbp
  _DWORD *v42; // rbp
  char v43; // si
  int v44; // r11d
  char v45; // r10
  int v46; // edi
  char v47; // cl
  __int64 v48; // r14
  char v49; // r8
  __int64 v50; // r12
  int v51; // r9d
  char v52; // al
  char v53; // al
  __int64 v54; // rax
  char v55; // r15
  char v56; // dl
  char v57; // r15
  int v58; // edx
  __int64 v59; // rdx
  __int64 v60; // rax
  char v61; // r15
  char v62; // r15
  void *v63; // r14
  void *v64; // r14
  _DWORD *v65; // [rsp+28h] [rbp-A0h]
  int v66; // [rsp+38h] [rbp-90h] BYREF
  char v67; // [rsp+3Ch] [rbp-8Ch]
  __int64 v68; // [rsp+40h] [rbp-88h]
  int v69; // [rsp+48h] [rbp-80h] BYREF
  char v70; // [rsp+4Ch] [rbp-7Ch]
  __int64 v71; // [rsp+50h] [rbp-78h]
  int v72; // [rsp+60h] [rbp-68h] BYREF
  int v73; // [rsp+68h] [rbp-60h] BYREF
  char v74; // [rsp+6Ch] [rbp-5Ch]
  __int64 v75; // [rsp+70h] [rbp-58h]
  int v76; // [rsp+78h] [rbp-50h] BYREF
  char v77; // [rsp+7Ch] [rbp-4Ch]
  __int64 v78; // [rsp+80h] [rbp-48h]

  v3 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 <= 640 )
    return;
  for ( i = a2; ; i = v13 )
  {
    v7 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 3);
    v8 = v7 >> 1;
    if ( !a3 )
      break;
    v9 = *(_DWORD *)(a1 + 40);
    v10 = *(i - 10);
    --a3;
    v11 = (unsigned int *)(a1 + 40 * v8);
    v12 = *v11;
    v13 = (_DWORD *)(a1 + 40);
    if ( v9 >= *v11 )
    {
      if ( v9 < v10 )
      {
LABEL_20:
        sub_B16010((int *)a1, (_DWORD *)(a1 + 40));
        goto LABEL_8;
      }
      if ( v12 >= v10 )
      {
LABEL_19:
        sub_B16010((int *)a1, v11);
        goto LABEL_8;
      }
    }
    else
    {
      if ( v12 < v10 )
        goto LABEL_19;
      if ( v9 >= v10 )
        goto LABEL_20;
    }
    sub_B16010((int *)a1, i - 10);
LABEL_8:
    v14 = i;
    while ( 1 )
    {
      v15 = *v13;
      for ( j = *(_DWORD *)a1; v15 < j; v13 += 10 )
        v15 = v13[10];
      v17 = (unsigned __int64)(v14 - 10);
      if ( j < *(v14 - 10) )
      {
        do
          v17 -= 40LL;
        while ( j < *(_DWORD *)v17 );
      }
      if ( (unsigned __int64)v13 >= v17 )
        break;
      v13 += 10;
      *(v13 - 10) = *(_DWORD *)v17;
      *(_DWORD *)v17 = v15;
      v18 = *(v13 - 8);
      *(v13 - 8) = *(_DWORD *)(v17 + 8);
      v19 = *(_QWORD *)(v17 + 16);
      *(_DWORD *)(v17 + 8) = v18;
      v20 = *((_QWORD *)v13 - 3);
      *((_QWORD *)v13 - 3) = v19;
      v21 = *(_BYTE *)(v17 + 12);
      *(_QWORD *)(v17 + 16) = v20;
      LOBYTE(v20) = *((_BYTE *)v13 - 28);
      *((_BYTE *)v13 - 28) = v21 & 2 | v20 & 0xFD;
      LOBYTE(v20) = v20 & 2 | *(_BYTE *)(v17 + 12) & 0xFD;
      *(_BYTE *)(v17 + 12) = v20;
      v22 = *((_BYTE *)v13 - 28);
      *((_BYTE *)v13 - 28) = v20 & 1 | v22 & 0xFE;
      LODWORD(v19) = *(_DWORD *)(v17 + 24);
      *(_BYTE *)(v17 + 12) = v22 & 1 | *(_BYTE *)(v17 + 12) & 0xFE;
      LODWORD(v20) = *(v13 - 4);
      *(v13 - 4) = v19;
      v23 = *(_QWORD *)(v17 + 32);
      *(_DWORD *)(v17 + 24) = v20;
      v24 = *((_QWORD *)v13 - 1);
      *((_QWORD *)v13 - 1) = v23;
      v25 = *(_BYTE *)(v17 + 28);
      *(_QWORD *)(v17 + 32) = v24;
      LOBYTE(v24) = *((_BYTE *)v13 - 12);
      *((_BYTE *)v13 - 12) = v25 & 2 | v24 & 0xFD;
      LOBYTE(v24) = v24 & 2 | *(_BYTE *)(v17 + 28) & 0xFD;
      *(_BYTE *)(v17 + 28) = v24;
      v26 = *(_BYTE *)(v13 - 3) & 1;
      *((_BYTE *)v13 - 12) = v24 & 1 | *(_BYTE *)(v13 - 3) & 0xFE;
      LOBYTE(v24) = v26 | *(_BYTE *)(v17 + 28) & 0xFE;
      v14 = (_DWORD *)v17;
      *(_BYTE *)(v17 + 28) = v24;
    }
    sub_B162C0(v13, i, a3);
    v3 = (__int64)v13 - a1;
    if ( (__int64)v13 - a1 <= 640 )
      return;
  }
  v27 = v8 - 1;
  v65 = i;
  v28 = a1 + 40 * v8 - 40;
  while ( 1 )
  {
    v29 = *(_BYTE *)(v28 + 12);
    v30 = *(_DWORD *)(v28 + 8);
    v28 -= 40;
    v68 = 0;
    v31 = *(_BYTE *)(v28 + 68);
    v71 = 0;
    v32 = v29;
    v66 = v30;
    v29 &= 2u;
    v33 = *(_QWORD *)(v28 + 56);
    v73 = v30;
    v32 &= 1u;
    v34 = v31 & 1;
    v31 &= 2u;
    v35 = *(_DWORD *)(v28 + 64);
    v36 = *(_DWORD *)(v28 + 40);
    v75 = v33;
    v67 = v29 | v32 | v67 & 0xFC;
    v37 = v70;
    v38 = v74 & 0xFC | v32;
    *(_QWORD *)(v28 + 56) = 0;
    v69 = v35;
    v74 = v38 | v29;
    v76 = v35;
    v70 = v31 | v34 | v37 & 0xFC;
    v39 = *(_QWORD *)(v28 + 72);
    v40 = v34 | v77 & 0xFC;
    *(_QWORD *)(v28 + 72) = 0;
    v77 = v40 | v31;
    v72 = v36;
    v78 = v39;
    sub_B14750(a1, v27, v7, &v72);
    v41 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v73);
    sub_182CBA0(v41, &v76);
    if ( !v27 )
      break;
    --v27;
    sub_25A130((char *)&v66);
  }
  v42 = v65;
  sub_25A130((char *)&v66);
  if ( (__int64)v65 - a1 > 40 )
  {
    do
    {
      v43 = *((_BYTE *)v42 - 28);
      v42 -= 10;
      v44 = *v42;
      v45 = v43;
      v43 &= 2u;
      v46 = v42[2];
      v45 &= 1u;
      v47 = v42[7] & 2;
      v48 = *((_QWORD *)v42 + 2);
      v49 = v42[7] & 1;
      v50 = *((_QWORD *)v42 + 4);
      v51 = v42[6];
      v52 = v43 | v45 | v67 & 0xFC;
      *((_QWORD *)v42 + 2) = 0;
      v67 = v52;
      v53 = v70;
      *((_QWORD *)v42 + 4) = 0;
      v69 = v51;
      v66 = v46;
      v70 = v47 | v49 | v53 & 0xFC;
      *v42 = *(_DWORD *)a1;
      v42[2] = *(_DWORD *)(a1 + 8);
      v54 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 8) = v46;
      *((_QWORD *)v42 + 2) = v54;
      v55 = *(_BYTE *)(a1 + 12);
      *(_QWORD *)(a1 + 16) = 0;
      v56 = *((_BYTE *)v42 + 12);
      *((_BYTE *)v42 + 12) = v55 & 2 | v56 & 0xFD;
      LOBYTE(v54) = v56 & 2 | *(_BYTE *)(a1 + 12) & 0xFD;
      *(_BYTE *)(a1 + 12) = v54;
      v57 = *((_BYTE *)v42 + 12);
      *((_BYTE *)v42 + 12) = v54 & 1 | v57 & 0xFE;
      *(_BYTE *)(a1 + 12) = v57 & 1 | *(_BYTE *)(a1 + 12) & 0xFE;
      LODWORD(v54) = v42[6];
      v58 = *(_DWORD *)(a1 + 24);
      v78 = v50;
      v73 = v46;
      v42[6] = v58;
      v59 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 24) = v54;
      v60 = *((_QWORD *)v42 + 4);
      *((_QWORD *)v42 + 4) = v59;
      v61 = *(_BYTE *)(a1 + 28);
      *(_QWORD *)(a1 + 32) = v60;
      LOBYTE(v60) = *((_BYTE *)v42 + 28);
      v72 = v44;
      v76 = v51;
      v75 = v48;
      v68 = 0;
      *((_BYTE *)v42 + 28) = v61 & 2 | v60 & 0xFD;
      LOBYTE(v59) = v60 & 2;
      LOBYTE(v60) = *(_BYTE *)(a1 + 28);
      v71 = 0;
      LOBYTE(v60) = v59 | v60 & 0xFD;
      *(_BYTE *)(a1 + 28) = v60;
      v62 = v42[7] & 1;
      *((_BYTE *)v42 + 28) = v60 & 1 | v42[7] & 0xFE;
      *(_BYTE *)(a1 + 28) = v62 | *(_BYTE *)(a1 + 28) & 0xFE;
      v74 = v43 | v45 | v74 & 0xFC;
      v77 = v47 | v49 | v77 & 0xFC;
      sub_B14750(a1, 0, 0xCCCCCCCCCCCCCCCDLL * (((__int64)v42 - a1) >> 3), &v72);
      v63 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v73);
      sub_182CBA0(v63, &v76);
      v64 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v66);
      sub_182CBA0(v64, &v69);
    }
    while ( (__int64)v42 - a1 > 40 );
  }
}

