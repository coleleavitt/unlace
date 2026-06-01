__int64 __fastcall sub_E6EA70(__int64 a1, int *a2, __int64 a3, unsigned int a4, _BYTE *a5, int a6)
{
  __int64 v8; // rax
  unsigned int v9; // ebp
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // r15
  int v20; // eax
  int v21; // edx
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rax
  void *v25; // r15
  __int64 v26; // r15
  void *v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rsi
  int v30; // edx
  __int64 v31; // r12
  unsigned int **v32; // rbp
  unsigned int *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r12
  void *v39; // rcx
  unsigned int v40; // r13d
  __int64 v41; // rdx
  _DWORD *v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  int v46; // ecx
  unsigned int v47; // edx
  char *v48; // rsi
  __int64 v49; // rdx
  char *v50; // rdi
  char *v51; // [rsp+0h] [rbp-B8h]
  void *v52; // [rsp+0h] [rbp-B8h]
  void *v53; // [rsp+8h] [rbp-B0h]
  void *v54; // [rsp+10h] [rbp-A8h]
  void *v55; // [rsp+10h] [rbp-A8h]
  __int64 v56; // [rsp+10h] [rbp-A8h]
  int *v57; // [rsp+18h] [rbp-A0h]
  __int64 v58; // [rsp+20h] [rbp-98h] BYREF
  __int64 v59; // [rsp+28h] [rbp-90h]
  __int64 v60; // [rsp+30h] [rbp-88h] BYREF
  __int64 v61; // [rsp+38h] [rbp-80h]
  int v62; // [rsp+40h] [rbp-78h] BYREF
  char v63; // [rsp+44h] [rbp-74h]
  __int64 v64; // [rsp+48h] [rbp-70h]
  int v65; // [rsp+50h] [rbp-68h] BYREF
  char v66; // [rsp+54h] [rbp-64h]
  __int64 v67; // [rsp+58h] [rbp-60h]
  __int64 v68; // [rsp+60h] [rbp-58h] BYREF
  __int64 v69; // [rsp+68h] [rbp-50h]
  int v70; // [rsp+70h] [rbp-48h] BYREF
  char v71; // [rsp+74h] [rbp-44h]
  __int64 v72; // [rsp+78h] [rbp-40h]

  if ( !a2[2] )
  {
    if ( (a2[1] & 0x1FFFFFFF) != 0 )
      goto LABEL_3;
    goto LABEL_8;
  }
  v58 = 0;
  v57 = a2 + 10;
  v59 = 0;
  v60 = 1;
  v61 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, a2 + 10);
  if ( (int)v58 < 0 )
    sub_1831620(qword_1C7F2C0, &v58);
  v12 = 0;
  if ( a2[2] )
  {
    while ( (v58 & 0x100000000LL) != 0 || (_DWORD)v58 != 1 || (v60 & 0x100000000LL) != 0 || (_DWORD)v60 != 1 )
    {
      v18 = qword_1C7F2C0;
      v19 = *((_QWORD *)a2 + 4) + 32 * v12;
      if ( *(int *)v19 > 0 )
      {
        v13 = *((_QWORD *)a2 + 4) + 32 * v12;
        BYTE4(v68) &= 0xFCu;
        v71 &= 0xFCu;
        LODWORD(v68) = 0;
        v69 = 0;
        v70 = 1;
        v72 = 0;
        sub_1832C70(qword_1C7F2C0, v13, &v58, &v68);
        sub_182CBA0(v18, &v70);
        v14 = v68;
        ++v12;
        LODWORD(v68) = v58;
        LODWORD(v58) = v14;
        v15 = v69;
        v69 = v59;
        v59 = v15;
        v53 = qword_1C7F2C0;
        v16 = BYTE4(v68) & 1;
        LOBYTE(v15) = BYTE4(v58) & 0xFC | BYTE4(v68) & 2;
        BYTE4(v68) = BYTE4(v58) & 1 | BYTE4(v68) & 0xFC | BYTE4(v58) & 2;
        BYTE4(v58) = v16 | v15;
        v70 = v60;
        v17 = v61;
        v61 = v72;
        v72 = v17;
        LODWORD(v60) = 1;
        LOBYTE(v17) = BYTE4(v60) & 1 | BYTE4(v60) & 2 | v71 & 0xFC;
        BYTE4(v60) = BYTE4(v60) & 0xFC | v71 & 2;
        v71 = v17;
        sub_182CBA0(qword_1C7F2C0, &v68);
        sub_182CBA0(v53, &v70);
        if ( (unsigned int)v12 >= a2[2] )
          goto LABEL_25;
      }
      else
      {
        BYTE4(v68) &= 0xFCu;
        v71 &= 0xFCu;
        LODWORD(v68) = 0;
        v69 = 0;
        v70 = 1;
        v72 = 0;
        if ( (*(_BYTE *)(v19 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v68, v19);
        else
          LODWORD(v68) = *(_DWORD *)v19;
        if ( (*(_BYTE *)(v19 + 20) & 1) != 0 )
        {
          sub_182C690(v18, &v70, v19 + 16);
        }
        else
        {
          v20 = *(_DWORD *)(v19 + 16);
          v71 &= ~1u;
          v70 = v20;
        }
        sub_1831620(qword_1C7F2C0, &v68);
        v63 &= 0xFCu;
        v66 &= 0xFCu;
        v62 = 0;
        v64 = 0;
        v65 = 1;
        v67 = 0;
        v54 = qword_1C7F2C0;
        sub_1832C70(qword_1C7F2C0, &v68, &v58, &v62);
        sub_182CBA0(v54, &v65);
        v21 = v62;
        ++v12;
        v62 = v58;
        LODWORD(v58) = v21;
        v22 = v64;
        v64 = v59;
        v59 = v22;
        v23 = v63 & 1;
        LOBYTE(v22) = BYTE4(v58) & 0xFC | v63 & 2;
        v55 = qword_1C7F2C0;
        v63 = BYTE4(v58) & 1 | v63 & 0xFC | BYTE4(v58) & 2;
        BYTE4(v58) = v23 | v22;
        v65 = v60;
        v24 = v61;
        v61 = v67;
        v67 = v24;
        LODWORD(v60) = 1;
        LOBYTE(v24) = BYTE4(v60) & 1 | BYTE4(v60) & 2 | v66 & 0xFC;
        BYTE4(v60) = BYTE4(v60) & 0xFC | v66 & 2;
        v66 = v24;
        sub_182CBA0(qword_1C7F2C0, &v62);
        sub_182CBA0(v55, &v65);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v68);
        sub_182CBA0(v25, &v70);
        if ( (unsigned int)v12 >= a2[2] )
          goto LABEL_25;
      }
    }
  }
  else
  {
LABEL_25:
    if ( (v58 & 0x100000000LL) != 0 )
      goto LABEL_26;
  }
  if ( (_DWORD)v58 == 1 && (v60 & 0x100000000LL) == 0 && (_DWORD)v60 == 1 )
    goto LABEL_46;
LABEL_26:
  sub_3ED4D0((__int64)qword_1C7F2C0, v57, (__int64)&v58, (__int64)v57);
  v26 = 0;
  if ( a2[2] )
  {
    while ( 1 )
    {
      v27 = qword_1C7F2C0;
      v28 = *((_QWORD *)a2 + 4) + 32 * v26;
      if ( *(_DWORD *)v28 )
      {
        if ( (v58 & 0x100000000LL) != 0 || (_DWORD)v58 != 1 || (v60 & 0x100000000LL) != 0 || (_DWORD)v60 != 1 )
          break;
      }
      sub_27B950((__int64)qword_1C7F2C0, *((_QWORD *)a2 + 4) + 32 * v26, (int *)(*((_QWORD *)a2 + 4) + 32 * v26));
LABEL_32:
      if ( (unsigned int)++v26 >= a2[2] )
        goto LABEL_46;
    }
    if ( (__int64 *)v28 == &v58 )
    {
      v29 = *((_QWORD *)a2 + 4) + 32 * v26;
      v68 = 0;
      v69 = 0;
      sub_1831650(qword_1C7F2C0, v29, &v60);
      v56 = v28 + 16;
      sub_1831650(v27, v28 + 16, &v58);
      if ( (v68 & 0x100000000LL) != 0 )
      {
        sub_182C690(v27, &v58, &v68);
      }
      else
      {
        v30 = v68;
        *(_BYTE *)(v28 + 4) &= ~1u;
        *(_DWORD *)v28 = v30;
      }
      sub_182CBA0(v27, &v68);
      if ( *(int *)(v28 + 16) >= 0 )
        goto LABEL_29;
    }
    else
    {
      sub_1831650(qword_1C7F2C0, *((_QWORD *)a2 + 4) + 32 * v26, &v60);
      v56 = v28 + 16;
      sub_1831650(v27, v28 + 16, &v58);
      if ( *(int *)(v28 + 16) >= 0 )
      {
LABEL_29:
        v68 = 0;
        v69 = 0;
        sub_1832C70(v27, v28, v56, &v68);
        if ( (v68 & 0x100000000LL) == 0 && (_DWORD)v68 == 1 )
        {
          sub_182CBA0(v27, &v68);
        }
        else
        {
          sub_1833EB0(v27, v28, &v68, v28);
          sub_1833EB0(v27, v56, &v68, v56);
          sub_182CBA0(v27, &v68);
        }
        goto LABEL_32;
      }
    }
    sub_1831620(v27, v28);
    sub_1831620(v27, v56);
    goto LABEL_29;
  }
LABEL_46:
  sub_25A130((char *)&v58);
  a4 = a2[2];
  if ( !(a4 | a2[1] & 0x1FFFFFFF) )
  {
LABEL_8:
    v11 = a2[10];
    if ( v11 < 0 || (*((_BYTE *)a2 + 7) & 0x20) != 0 && !v11 )
    {
      sub_E6B480((__int64 *)a1, a2);
      *(_BYTE *)(a1 + 756) = 1;
      return 0;
    }
LABEL_3:
    v8 = sub_E691A0((_QWORD *)a1, (__int64)a2, a3, a4, a5, a6);
    v68 = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    sub_E67160((unsigned int **)(a1 + 704), &v68);
    sub_E6B480((__int64 *)a1, a2);
    return 0;
  }
  if ( !a4 )
    goto LABEL_3;
  v31 = 0;
  v9 = 0;
  do
  {
    a3 = *(_QWORD *)(a1 + 616);
    v36 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 4 * v31);
    if ( !*(_BYTE *)(a3 + v36) )
    {
      v37 = 8 * v36;
      if ( *(int *)(*((_QWORD *)a2 + 4) + 32 * v31) >= 0 )
      {
        v32 = (unsigned int **)(*(_QWORD *)(a1 + 680) + v37);
        v33 = *v32;
        if ( !*v32 )
          goto LABEL_56;
      }
      else
      {
        v32 = (unsigned int **)(*(_QWORD *)(a1 + 672) + v37);
        v33 = *v32;
        if ( !*v32 )
          goto LABEL_56;
      }
      v34 = *(v33 - 1);
      if ( v34 != *(v33 - 2) )
      {
LABEL_51:
        v35 = v34;
        LODWORD(a3) = v34 + 1;
        v9 = 1;
        *(_QWORD *)&v33[2 * v35] = a2;
        *(v33 - 1) = a3;
        a4 = a2[2];
        goto LABEL_52;
      }
LABEL_56:
      sub_E6E990(v32);
      v33 = *v32;
      v34 = *(*v32 - 1);
      goto LABEL_51;
    }
LABEL_52:
    ++v31;
  }
  while ( (unsigned int)v31 < a4 );
  if ( !(_BYTE)v9 )
    goto LABEL_3;
  v38 = (unsigned int)*a2;
  v39 = *(void **)(a1 + 776);
  v40 = v38 + 1;
  if ( v39 )
  {
    v41 = *((unsigned int *)v39 - 1);
    if ( (unsigned int)v41 >= v40 )
      goto LABEL_66;
    v51 = (char *)(4 * v41);
LABEL_77:
    while ( !v39 || *((_DWORD *)v39 - 2) < v40 )
    {
      sub_2FD3F0((unsigned int **)(a1 + 776));
      v39 = *(void **)(a1 + 776);
    }
    v48 = v51;
    *((_DWORD *)v39 - 1) = v40;
    v49 = 4LL * v40;
    v50 = &v51[(_QWORD)v39];
    if ( (char *)v49 != v51 )
    {
      v52 = v39;
      memset(v50, 255, v49 - (_QWORD)v48);
      v39 = v52;
    }
  }
  else if ( (_DWORD)v38 != -1 )
  {
    v51 = nullptr;
    goto LABEL_77;
  }
LABEL_66:
  v42 = (char *)v39 + 4 * v38;
  if ( *v42 == -1 )
  {
    v45 = *(_QWORD *)(a1 + 784);
    if ( v45 )
    {
      v46 = *(_DWORD *)(v45 - 4);
      *v42 = v46;
      if ( v46 != *(_DWORD *)(v45 - 8) )
      {
LABEL_73:
        v47 = *(_DWORD *)(v45 - 4);
        *(_QWORD *)(v45 + 8LL * v47) = a2;
        *(_DWORD *)(v45 - 4) = v47 + 1;
        goto LABEL_67;
      }
    }
    else
    {
      *v42 = 0;
    }
    sub_E6E990((unsigned int **)(a1 + 784));
    v45 = *(_QWORD *)(a1 + 784);
    goto LABEL_73;
  }
LABEL_67:
  v43 = *(_QWORD *)(a1 + 552);
  if ( !v43 || (v44 = *(_DWORD *)(v43 - 4), v44 == *(_DWORD *)(v43 - 8)) )
  {
    sub_E6E990((unsigned int **)(a1 + 552));
    v43 = *(_QWORD *)(a1 + 552);
    v44 = *(_DWORD *)(v43 - 4);
  }
  *(_QWORD *)(v43 + 8LL * v44) = a2;
  *(_DWORD *)(v43 - 4) = v44 + 1;
  return v9;
}

