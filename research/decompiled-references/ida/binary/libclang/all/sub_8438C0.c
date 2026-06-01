__int64 __fastcall sub_8438C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r14
  char v11; // al
  unsigned int *v12; // r15
  unsigned int *v13; // rsi
  bool v14; // cc
  unsigned int *v15; // rdi
  __int64 v16; // rdx
  char v17; // dl
  unsigned int v18; // eax
  void *v19; // rsi
  __int64 v21; // rax
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rax
  void **v39; // rdx
  void **v40; // rax
  __int64 v41; // rsi
  void **v42; // rdx
  void **v43; // rcx
  void **v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  void **v47; // rdx
  __int64 *v48; // rcx
  __int64 v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rcx
  void **v52; // rdi
  void **v53; // rdx
  __int64 *v54; // rcx
  __int64 v55; // rsi
  __int64 *v56; // rbx
  __int64 v57; // [rsp+0h] [rbp-1B8h]
  __int64 v58; // [rsp+8h] [rbp-1B0h]
  void **v59; // [rsp+8h] [rbp-1B0h]
  void **v60; // [rsp+8h] [rbp-1B0h]
  void *v61; // [rsp+8h] [rbp-1B0h]
  void *v62; // [rsp+8h] [rbp-1B0h]
  char v63; // [rsp+10h] [rbp-1A8h]
  void **v64; // [rsp+20h] [rbp-198h]
  void **v65; // [rsp+20h] [rbp-198h]
  void **v66; // [rsp+20h] [rbp-198h]
  __int64 *v67; // [rsp+20h] [rbp-198h]
  void **v68; // [rsp+20h] [rbp-198h]
  void **v69; // [rsp+28h] [rbp-190h]
  void *v70; // [rsp+28h] [rbp-190h]
  void **v71; // [rsp+28h] [rbp-190h]
  void **v72; // [rsp+28h] [rbp-190h]
  void **v73; // [rsp+30h] [rbp-188h]
  __int64 *v74; // [rsp+30h] [rbp-188h]
  __int64 *v75; // [rsp+38h] [rbp-180h]
  __int64 v76[4]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v77[4]; // [rsp+60h] [rbp-158h] BYREF
  void *v78; // [rsp+80h] [rbp-138h] BYREF
  unsigned int v79; // [rsp+88h] [rbp-130h]
  char v80; // [rsp+8Ch] [rbp-12Ch]
  void *v81; // [rsp+A0h] [rbp-118h] BYREF
  unsigned int v82; // [rsp+A8h] [rbp-110h]
  char v83; // [rsp+ACh] [rbp-10Ch]
  unsigned int v84; // [rsp+C0h] [rbp-F8h] BYREF
  char v85; // [rsp+C4h] [rbp-F4h]
  void *v86; // [rsp+C8h] [rbp-F0h] BYREF
  void **v87; // [rsp+D0h] [rbp-E8h]
  void *v88; // [rsp+D8h] [rbp-E0h]
  void *v89; // [rsp+E0h] [rbp-D8h] BYREF
  void **v90; // [rsp+E8h] [rbp-D0h]
  char v91; // [rsp+F8h] [rbp-C0h]
  _QWORD v92[16]; // [rsp+100h] [rbp-B8h] BYREF
  char v93; // [rsp+180h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(*a2 + 16);
  v9 = *(_QWORD *)(a3 + 32);
  v58 = sub_70E2F0(v8, v9);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(v10 + 16);
  if ( v11 == 13 )
  {
    v63 = (((*(_WORD *)(v10 + 18) >> 3) + 77) & 0x1FFu) <= 0x13;
  }
  else if ( v11 == 46 )
  {
    v21 = sub_B14A40(v10);
    v63 = *(_BYTE *)(v21 + 74) & 1;
    if ( v63 || *(_QWORD *)(v21 + 128) > 7u )
      v63 = (unsigned __int8)~*(_BYTE *)(sub_B14A40(v10) + 76) >> 7;
  }
  else
  {
    v63 = v11 == 10;
  }
  memset(v92, 0, sizeof(v92));
  v12 = (unsigned int *)v92;
  do
  {
    v13 = (unsigned int *)a2;
    sub_8425B0((__int64)&v84, a2, *(_QWORD *)(a3 + 32), a4);
    if ( *((_BYTE *)v12 + 56) )
    {
      if ( v91 )
      {
        v13 = &v84;
        v15 = v12;
        sub_6A01B0((__int64)v12, (__int64)&v84);
      }
      else
      {
        v14 = *v12 <= 1;
        *((_BYTE *)v12 + 56) = 0;
        if ( v14 )
          goto LABEL_34;
        v15 = v12;
        sub_69F740((__int64)v12);
      }
    }
    else
    {
      if ( !v91 )
        goto LABEL_34;
      v13 = &v84;
      v15 = v12;
      sub_69F700((__int64)v12, (int *)&v84);
      *((_BYTE *)v12 + 56) = 1;
    }
    if ( v91 )
    {
      v91 = 0;
      if ( v84 > 1 )
      {
        v15 = &v84;
        sub_69F740((__int64)&v84);
      }
    }
    if ( !*((_BYTE *)v12 + 56) )
    {
LABEL_34:
      *(_BYTE *)(a1 + 56) = 0;
      goto LABEL_26;
    }
    v12 += 16;
    a4 += v58;
  }
  while ( &v93 != (char *)v12 );
  if ( v63 )
  {
    v82 = v92[10];
    if ( LODWORD(v92[10]) > 0x40 )
      sub_2585B30(&v81);
    else
      v81 = (void *)v92[9];
    v17 = BYTE4(v92[10]);
    v18 = v92[2];
    v83 = BYTE4(v92[10]);
    v79 = v92[2];
    if ( LODWORD(v92[2]) > 0x40 )
    {
      sub_2585B30(&v78);
      v17 = v83;
      v18 = v79;
      v19 = v78;
    }
    else
    {
      v19 = (void *)v92[1];
      v78 = (void *)v92[1];
    }
    LODWORD(v87) = v18;
    v86 = v19;
    LODWORD(v89) = v82;
    v85 &= ~1u;
    v80 = BYTE4(v92[2]);
    v84 = 5;
    v82 = 0;
    v79 = 0;
    BYTE4(v87) = BYTE4(v92[2]);
    v88 = v81;
    BYTE4(v89) = v17;
    sub_69F700(a1, (int *)&v84);
    v14 = v84 <= 1;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v14 )
      sub_69F740((__int64)&v84);
    if ( v79 > 0x40 && v78 )
      operator delete[](v78);
    if ( v82 > 0x40 && v81 )
      operator delete[](v81);
    goto LABEL_26;
  }
  v22 = (void *)sub_2575D20(v15, v13, v16);
  if ( (void *)v92[9] == v22 )
    sub_257CF50(v77, &v92[9]);
  else
    sub_25768A0(v77, &v92[9]);
  if ( (void *)v92[1] == v22 )
    sub_257CF50(v76, &v92[1]);
  else
    sub_25768A0(v76, &v92[1]);
  v85 &= ~1u;
  v84 = 0;
  v57 = sub_2575D00(v76, &v92[1], v23);
  sub_2580BE0(&v81, 0.0);
  sub_257EDC0(&v86, &v81, v57);
  sub_25769A0(&v81);
  sub_2580BE0(&v81, 0.0);
  sub_257EDC0(&v89, &v81, v57);
  sub_25769A0(&v81);
  v84 = 6;
  if ( v22 == (void *)v77[0] )
    sub_257D000(&v81, v77, v24, v25);
  else
    sub_2576960(&v81, v77);
  if ( v22 == (void *)v76[0] )
    sub_257D000(&v78, v76, v26, v27);
  else
    sub_2576960(&v78, v76);
  if ( v22 == v86 )
  {
    v42 = v87;
    v69 = v87;
    v43 = v87;
    if ( v78 == v22 )
    {
      if ( v87 )
      {
        v46 = (__int64)*(v87 - 1);
        v47 = &v87[3 * v46];
        if ( v87 != v47 )
        {
          do
          {
            v47 -= 3;
            if ( v22 == *v47 )
            {
              v48 = (__int64 *)v47[1];
              if ( v48 )
              {
                v49 = *(v48 - 1);
                v50 = &v48[3 * v49];
                if ( v48 != v50 )
                {
                  do
                  {
                    v75 = v48;
                    v73 = v47;
                    v67 = v50 - 3;
                    sub_5FF3B0(v50 - 3);
                    v50 = v67;
                    v48 = v75;
                    v47 = v73;
                  }
                  while ( v75 != v67 );
                  v49 = *(v75 - 1);
                }
                v68 = v47;
                operator delete[](v48 - 1, 24 * v49 + 8);
                v47 = v68;
              }
              v47[1] = nullptr;
            }
            else
            {
              v66 = v47;
              sub_25769A0(v47);
              v47 = v66;
            }
          }
          while ( v69 != v47 );
          v46 = (__int64)*(v69 - 1);
        }
        operator delete[](v69 - 1, 24 * v46 + 8);
      }
      v87 = nullptr;
      sub_257D000(&v86, &v78, v42, v43);
      goto LABEL_50;
    }
    if ( !v87 )
      goto LABEL_61;
    v44 = &v87[3 * (_QWORD)*(v87 - 1)];
    if ( v87 == v44 )
    {
      v45 = 0;
    }
    else
    {
      do
      {
        v65 = v44 - 3;
        sub_5FF3B0((__int64 *)v44 - 3);
        v44 = v65;
      }
      while ( v69 != v65 );
      v45 = 24LL * (_QWORD)*(v69 - 1);
    }
    operator delete[](v69 - 1, v45 + 8);
    v35 = v78;
    v87 = nullptr;
  }
  else
  {
    if ( v78 != v22 )
    {
      sub_2576350(&v86, &v78, v28, v29);
      goto LABEL_50;
    }
    sub_25769A0(&v86);
    v35 = v78;
  }
  if ( v22 != v35 )
  {
LABEL_61:
    sub_2576960(&v86, &v78);
    goto LABEL_50;
  }
  sub_257D000(&v86, &v78, v33, v34);
LABEL_50:
  v32 = v81;
  if ( v22 == v89 )
  {
    v39 = v90;
    v64 = v90;
    if ( v22 == v81 )
    {
      if ( v90 )
      {
        v51 = (__int64)*(v90 - 1);
        v52 = v90;
        v53 = &v90[3 * v51];
        if ( v90 != v53 )
        {
          do
          {
            v53 -= 3;
            if ( v32 == *v53 )
            {
              v54 = (__int64 *)v53[1];
              if ( v54 )
              {
                v55 = *(v54 - 1);
                v56 = &v54[3 * v55];
                if ( v54 != v56 )
                {
                  do
                  {
                    v56 -= 3;
                    v74 = v54;
                    v71 = v53;
                    v61 = v32;
                    sub_5FF3B0(v56);
                    v54 = v74;
                    v32 = v61;
                    v53 = v71;
                  }
                  while ( v74 != v56 );
                  v55 = *(v74 - 1);
                }
                v72 = v53;
                v62 = v32;
                operator delete[](v54 - 1, 24 * v55 + 8);
                v32 = v62;
                v53 = v72;
              }
              v53[1] = nullptr;
            }
            else
            {
              v70 = v32;
              v60 = v53;
              sub_25769A0(v53);
              v53 = v60;
              v32 = v70;
            }
          }
          while ( v64 != v53 );
          v51 = (__int64)*(v64 - 1);
          v52 = v64;
        }
        operator delete[](v52 - 1, 24 * v51 + 8);
      }
      v90 = nullptr;
      sub_257D000(&v89, &v81, v39, v31);
      goto LABEL_53;
    }
    if ( !v90 )
    {
LABEL_67:
      sub_2576960(&v89, &v81);
      goto LABEL_53;
    }
    v40 = &v90[3 * (_QWORD)*(v90 - 1)];
    if ( v90 == v40 )
    {
      v41 = 0;
    }
    else
    {
      do
      {
        v59 = v40 - 3;
        sub_5FF3B0((__int64 *)v40 - 3);
        v40 = v59;
      }
      while ( v64 != v59 );
      v41 = 24LL * (_QWORD)*(v64 - 1);
    }
    operator delete[](v64 - 1, v41 + 8);
    v38 = v81;
    v90 = nullptr;
LABEL_66:
    if ( v22 == v38 )
    {
      sub_257D000(&v89, &v81, v36, v37);
      goto LABEL_53;
    }
    goto LABEL_67;
  }
  if ( v22 == v81 )
  {
    sub_25769A0(&v89);
    v38 = v81;
    goto LABEL_66;
  }
  sub_2576350(&v89, &v81, v30, v31);
LABEL_53:
  sub_5FF3B0((__int64 *)&v78);
  sub_5FF3B0((__int64 *)&v81);
  sub_69F700(a1, (int *)&v84);
  v14 = v84 <= 1;
  *(_BYTE *)(a1 + 56) = 1;
  if ( !v14 )
    sub_69F740((__int64)&v84);
  sub_5FF3B0(v76);
  sub_5FF3B0(v77);
LABEL_26:
  if ( LOBYTE(v92[15]) )
  {
    LOBYTE(v92[15]) = 0;
    if ( LODWORD(v92[8]) > 1 )
      sub_69F740((__int64)&v92[8]);
  }
  if ( LOBYTE(v92[7]) )
  {
    LOBYTE(v92[7]) = 0;
    if ( LODWORD(v92[0]) > 1 )
      sub_69F740((__int64)v92);
  }
  return a1;
}

