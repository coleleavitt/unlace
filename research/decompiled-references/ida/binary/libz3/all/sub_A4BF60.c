__int64 __fastcall sub_A4BF60(__int64 a1, int **a2, char a3, __int64 a4, _BYTE *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // eax
  char v9; // r14
  void *v10; // rbx
  void *v11; // rbx
  int *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r8
  void *v16; // rdi
  unsigned int v17; // ebx
  void *v18; // r15
  int v19; // eax
  int v20; // eax
  char v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r8
  void *v25; // rdi
  bool v26; // al
  void *v27; // r15
  void *v28; // r15
  void *v29; // r15
  void *v30; // r15
  int v31; // eax
  int v32; // edx
  __int64 *v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  bool v38; // al
  unsigned int v39; // ebx
  __int64 v41; // rax
  __int64 v42; // rcx
  bool v43; // r13
  unsigned int v44; // [rsp+4h] [rbp-1FCh]
  bool v45; // [rsp+43h] [rbp-1BDh]
  unsigned int v46; // [rsp+44h] [rbp-1BCh]
  signed int v47; // [rsp+48h] [rbp-1B8h]
  __int64 v48; // [rsp+48h] [rbp-1B8h]
  __int64 v49; // [rsp+48h] [rbp-1B8h]
  __int64 v51; // [rsp+78h] [rbp-188h]
  bool v52; // [rsp+78h] [rbp-188h]
  __int64 v53; // [rsp+78h] [rbp-188h]
  void *v54; // [rsp+78h] [rbp-188h]
  void *v55; // [rsp+78h] [rbp-188h]
  __int64 v56; // [rsp+80h] [rbp-180h]
  int *v57; // [rsp+90h] [rbp-170h]
  signed int v58; // [rsp+98h] [rbp-168h]
  unsigned int v60; // [rsp+ACh] [rbp-154h] BYREF
  _QWORD v61[2]; // [rsp+B0h] [rbp-150h] BYREF
  _QWORD v62[2]; // [rsp+C0h] [rbp-140h] BYREF
  _QWORD v63[2]; // [rsp+D0h] [rbp-130h] BYREF
  _QWORD v64[2]; // [rsp+E0h] [rbp-120h] BYREF
  _QWORD v65[2]; // [rsp+F0h] [rbp-110h] BYREF
  _QWORD v66[2]; // [rsp+100h] [rbp-100h] BYREF
  _QWORD v67[2]; // [rsp+110h] [rbp-F0h] BYREF
  _QWORD v68[2]; // [rsp+120h] [rbp-E0h] BYREF
  _QWORD v69[2]; // [rsp+130h] [rbp-D0h] BYREF
  _QWORD v70[2]; // [rsp+140h] [rbp-C0h] BYREF
  _QWORD v71[2]; // [rsp+150h] [rbp-B0h] BYREF
  _QWORD v72[2]; // [rsp+160h] [rbp-A0h] BYREF
  _QWORD v73[2]; // [rsp+170h] [rbp-90h] BYREF
  _QWORD v74[2]; // [rsp+180h] [rbp-80h] BYREF
  _QWORD v75[2]; // [rsp+190h] [rbp-70h] BYREF
  _QWORD v76[2]; // [rsp+1A0h] [rbp-60h] BYREF
  unsigned int v77[20]; // [rsp+1B0h] [rbp-50h] BYREF

  v6 = 0;
  ++*(_DWORD *)(a1 + 276);
  v60 = 0;
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 1;
  v62[1] = 0;
  v63[0] = 0;
  v63[1] = 0;
  v64[0] = 1;
  v64[1] = 0;
  v65[0] = 0;
  v65[1] = 0;
  v66[0] = 1;
  v66[1] = 0;
  v67[0] = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *a5 = 0;
  v8 = 214013 * *(_DWORD *)(v7 + 7504);
  v67[1] = 0;
  v68[0] = 1;
  v68[1] = 0;
  v8 += 2531011;
  v69[0] = 0;
  *(_DWORD *)(v7 + 7504) = v8;
  v69[1] = 0;
  v70[0] = 1;
  v70[1] = 0;
  v71[0] = 0;
  v71[1] = 0;
  v72[0] = 1;
  v72[1] = 0;
  v74[0] = 1;
  v74[1] = 0;
  v75[0] = 0;
  v44 = (HIWORD(v8) & 0x7FFF) % 0x14u + 10;
  v73[0] = 0;
  v73[1] = 0;
  v75[1] = 0;
  v76[0] = 1;
  v76[1] = 0;
  v45 = 0;
  while ( 2 )
  {
    v9 = sub_8E6FA0(v7);
    if ( v9 )
    {
LABEL_127:
      if ( v6 )
        goto LABEL_96;
      v39 = 2;
LABEL_113:
      if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
        goto LABEL_96;
      goto LABEL_97;
    }
    v10 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v71);
    sub_182CBA0(v10, v72);
    LODWORD(v72[0]) = 1;
    BYTE4(v72[0]) &= ~1u;
    v11 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v69);
    sub_182CBA0(v11, v70);
    BYTE4(v70[0]) &= ~1u;
    LODWORD(v70[0]) = 1;
    v12 = *a2;
    if ( !*a2 || (v57 = &v12[10 * *(v12 - 1)], v12 == v57) )
    {
LABEL_112:
      v39 = 0;
      v60 = 0;
      *a5 = 0;
      goto LABEL_113;
    }
    v58 = -1;
    v46 = -1;
    do
    {
      while ( 1 )
      {
        v17 = v12[8];
        if ( v17 == -1 )
          goto LABEL_14;
        v77[0] = -1;
        v18 = qword_1C7F2C0;
        if ( (v12[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v67, v12);
        }
        else
        {
          v19 = *v12;
          BYTE4(v67[0]) &= ~1u;
          LODWORD(v67[0]) = v19;
        }
        if ( (v12[5] & 1) != 0 )
        {
          sub_182C690(v18, v68, v12 + 4);
        }
        else
        {
          v20 = v12[4];
          BYTE4(v68[0]) &= ~1u;
          LODWORD(v68[0]) = v20;
        }
        v56 = 8LL * v17;
        v21 = SLODWORD(v67[0]) > 0;
        if ( SLODWORD(v67[0]) > 0 != a3 )
        {
          v13 = *(_QWORD *)(a1 + 616);
          if ( !*(_QWORD *)(v13 + 8LL * v17) )
            goto LABEL_11;
          v51 = *(_QWORD *)(v13 + 8LL * v17);
          v14 = sub_999800(a1, v17);
          v15 = v51;
          v16 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v14 + 4) & 1) != 0 || (*(_BYTE *)(v51 + 20) & 1) != 0 )
          {
            v36 = v51 + 16;
            v49 = v51;
            v55 = qword_1C7F2C0;
            v37 = sub_182C7B0(qword_1C7F2C0, v14, v36);
            v16 = v55;
            v15 = v49;
            if ( v37 )
              goto LABEL_10;
          }
          else if ( *(_DWORD *)v14 != *(_DWORD *)(v51 + 16) )
          {
LABEL_10:
            v9 = 1;
            goto LABEL_11;
          }
          if ( (*(_BYTE *)(v14 + 20) & 1) != 0 || (*(_BYTE *)(v15 + 36) & 1) != 0 )
            v38 = (unsigned int)sub_182C7B0(v16, v14 + 16, v15 + 32) == 0;
          else
            v38 = *(_DWORD *)(v14 + 16) == *(_DWORD *)(v15 + 32);
          if ( v38 )
            goto LABEL_13;
          goto LABEL_10;
        }
        v22 = *(_QWORD *)(a1 + 624);
        if ( *(_QWORD *)(v22 + 8LL * v17) )
        {
          v53 = *(_QWORD *)(v22 + 8LL * v17);
          v23 = sub_999800(a1, v17);
          v24 = v53;
          v25 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v23 + 4) & 1) != 0 || (*(_BYTE *)(v53 + 20) & 1) != 0 )
          {
            v34 = v53 + 16;
            v48 = v53;
            v54 = qword_1C7F2C0;
            v35 = sub_182C7B0(qword_1C7F2C0, v23, v34);
            v25 = v54;
            v24 = v48;
            v26 = v35 == 0;
          }
          else
          {
            v26 = *(_DWORD *)v23 == *(_DWORD *)(v53 + 16);
          }
          if ( v26 )
          {
            if ( (*(_BYTE *)(v23 + 20) & 1) != 0 || (*(_BYTE *)(v24 + 36) & 1) != 0 )
            {
              if ( !(unsigned int)sub_182C7B0(v25, v23 + 16, v24 + 32) )
                goto LABEL_13;
            }
            else if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(v24 + 32) )
            {
              goto LABEL_13;
            }
          }
          goto LABEL_10;
        }
LABEL_11:
        v52 = v21 == a3;
        if ( (unsigned __int8)sub_9BCB70(
                                (_QWORD *)a1,
                                v17,
                                v21 == a3,
                                (__int64)v63,
                                (__int64)v73,
                                (__int64)v75,
                                a5,
                                v77) )
          break;
        ++v60;
LABEL_13:
        v9 = 1;
LABEL_14:
        v12 += 10;
        if ( v12 == v57 )
          goto LABEL_54;
      }
      v47 = v77[0];
      if ( v77[0] == -1 )
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v69, (int *)v73);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v71, (int *)v75);
        if ( !v9 )
        {
          v46 = v17;
          v45 = v21 == a3;
          goto LABEL_57;
        }
        v31 = v69[0];
        if ( SLODWORD(v69[0]) > 0 )
        {
          v46 = v17;
          v58 = -1;
          v45 = v21 == a3;
          goto LABEL_58;
        }
        v46 = v17;
        v45 = v21 == a3;
        goto LABEL_93;
      }
      if ( (v72[0] & 0x100000000LL) != 0
        || LODWORD(v72[0]) != 1
        || (v76[0] & 0x100000000LL) != 0
        || LODWORD(v76[0]) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v71, v75) )
          goto LABEL_37;
      }
      else if ( (v71[0] & 0x100000000LL) != 0 || (v75[0] & 0x100000000LL) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, v71, v75) < 0 )
          goto LABEL_37;
      }
      else if ( SLODWORD(v71[0]) < SLODWORD(v75[0]) )
      {
        goto LABEL_37;
      }
      if ( LODWORD(v75[0]) || v58 != -1 && v47 >= v58 )
        goto LABEL_14;
LABEL_37:
      v27 = qword_1C7F2C0;
      if ( (v63[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v61, v63);
      }
      else
      {
        BYTE4(v61[0]) &= ~1u;
        LODWORD(v61[0]) = v63[0];
      }
      if ( (v64[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v27, v62, v64);
      }
      else
      {
        BYTE4(v62[0]) &= ~1u;
        LODWORD(v62[0]) = v64[0];
      }
      v28 = qword_1C7F2C0;
      if ( (v67[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v65, v67);
      }
      else
      {
        BYTE4(v65[0]) &= ~1u;
        LODWORD(v65[0]) = v67[0];
      }
      if ( (v68[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v28, v66, v68);
      }
      else
      {
        BYTE4(v66[0]) &= ~1u;
        LODWORD(v66[0]) = v68[0];
      }
      v29 = qword_1C7F2C0;
      if ( (v75[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v71, v75);
      }
      else
      {
        BYTE4(v71[0]) &= ~1u;
        LODWORD(v71[0]) = v75[0];
      }
      if ( (v76[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v29, v72, v76);
      }
      else
      {
        BYTE4(v72[0]) &= ~1u;
        LODWORD(v72[0]) = v76[0];
      }
      v30 = qword_1C7F2C0;
      if ( (v73[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v69, v73);
      }
      else
      {
        BYTE4(v69[0]) &= ~1u;
        LODWORD(v69[0]) = v73[0];
      }
      if ( (v74[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v30, v70, v74);
      }
      else
      {
        BYTE4(v70[0]) &= ~1u;
        LODWORD(v70[0]) = v74[0];
      }
      v12 += 10;
      v46 = v17;
      v58 = v47;
      v45 = v52;
    }
    while ( v12 != v57 );
LABEL_54:
    if ( v9 != 1 && v58 == -1 )
    {
      if ( v46 == -1 )
        goto LABEL_112;
LABEL_57:
      v58 = -1;
      v31 = v69[0];
      if ( SLODWORD(v69[0]) > 0 )
      {
LABEL_58:
        if ( (v69[0] & 0x100000000LL) != 0 || v31 != 1 || (v70[0] & 0x100000000LL) != 0 || LODWORD(v70[0]) != 1 )
          ++v60;
        goto LABEL_61;
      }
      break;
    }
    if ( v46 == -1 )
    {
      v6 = v60;
      goto LABEL_127;
    }
    v31 = v69[0];
    if ( SLODWORD(v69[0]) > 0 )
      goto LABEL_58;
LABEL_61:
    if ( v58 != -1 )
    {
      if ( !sub_99A460(a1, v46) )
      {
        v41 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v46);
        if ( v41 )
        {
          v42 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v46);
          if ( v42 )
          {
            sub_3EBB80((__int64)v77, v42 + 16, v41 + 16);
            v43 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)v77, (__int64)v71);
            sub_25A130((char *)v77);
            if ( v43 )
            {
              if ( !v45 )
                sub_1831620(qword_1C7F2C0, v71);
              goto LABEL_103;
            }
          }
        }
      }
      sub_A49890(a1, v58, v46, (int *)v61, 0);
      if ( v45 )
        v32 = LODWORD(v61[0]) >> 31;
      else
        LOBYTE(v32) = SLODWORD(v61[0]) > 0;
      sub_9DC8C0((_QWORD *)a1, v58, v32, (int *)&v60, a5);
      v33 = (__int64 *)(*(_QWORD *)(a1 + 568) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL * v46) & 0xFFFFFFF));
      sub_1831620(qword_1C7F2C0, v65);
      sub_9C3B20(a1, (__int64)a2, (__int64)v65, v33);
LABEL_104:
      v6 = v60;
      if ( v60 >= v44 )
        goto LABEL_96;
      v7 = *(_QWORD *)(a1 + 16);
      continue;
    }
    break;
  }
  v56 = 8LL * v46;
LABEL_93:
  if ( v45 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 624) + v56) )
      goto LABEL_112;
    if ( !LODWORD(v71[0]) )
      goto LABEL_96;
LABEL_103:
    sub_9DA920((_QWORD *)a1, v46, (__int64)v71);
    goto LABEL_104;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 616) + v56) )
    goto LABEL_112;
  if ( LODWORD(v71[0]) )
  {
    sub_1831620(qword_1C7F2C0, v71);
    sub_9DA920((_QWORD *)a1, v46, (__int64)v71);
    goto LABEL_104;
  }
LABEL_96:
  v39 = 3;
LABEL_97:
  sub_25A130((char *)v75);
  sub_25A130((char *)v73);
  sub_25A130((char *)v71);
  sub_25A130((char *)v69);
  sub_25A130((char *)v67);
  sub_25A130((char *)v65);
  sub_25A130((char *)v63);
  sub_25A130((char *)v61);
  return v39;
}

