unsigned __int64 __fastcall sub_3D4E50(__int64 *a1)
{
  int **v2; // r12
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebp
  char **v9; // r13
  __int64 v10; // rax
  unsigned int **v11; // r14
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // r15d
  int encoding_bpu; // eax
  int v17; // edx
  int v18; // ecx
  bool v19; // zf
  int v20; // eax
  int *v21; // rcx
  int *v22; // r15
  int v23; // edx
  unsigned int v24; // r8d
  __int64 v25; // rax
  const char *v26; // rdx
  _DWORD *v27; // rax
  void *v28; // rdi
  char *v29; // r8
  __int64 v30; // r12
  char *v31; // r15
  const char *v32; // rdx
  char *v33; // r12
  char *i; // rbx
  char *v35; // rax
  void *v36; // rdi
  unsigned int *v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rdi
  unsigned int v40; // eax
  unsigned int v42; // eax
  void *v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // eax
  int v48; // eax
  int v49; // esi
  unsigned int v50; // edx
  int v51; // edi
  int v52; // eax
  __int64 v53; // [rsp+8h] [rbp-1C0h]
  unsigned __int8 v54; // [rsp+8h] [rbp-1C0h]
  __int64 v55; // [rsp+8h] [rbp-1C0h]
  int v56; // [rsp+14h] [rbp-1B4h]
  unsigned int v57; // [rsp+18h] [rbp-1B0h]
  unsigned int v58; // [rsp+18h] [rbp-1B0h]
  unsigned int v59; // [rsp+18h] [rbp-1B0h]
  unsigned __int8 v60; // [rsp+1Fh] [rbp-1A9h]
  unsigned int v61; // [rsp+28h] [rbp-1A0h] BYREF
  int v62; // [rsp+2Ch] [rbp-19Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-198h] BYREF
  __int128 v64; // [rsp+38h] [rbp-190h]
  _QWORD v65[6]; // [rsp+50h] [rbp-178h] BYREF
  __int64 *v66; // [rsp+80h] [rbp-148h] BYREF
  void *v67; // [rsp+88h] [rbp-140h]
  __int128 v68; // [rsp+90h] [rbp-138h]
  void *v69; // [rsp+A0h] [rbp-128h]
  __int128 v70; // [rsp+A8h] [rbp-120h]
  __int64 v71; // [rsp+B8h] [rbp-110h]
  int v72; // [rsp+C0h] [rbp-108h]
  char v73; // [rsp+C4h] [rbp-104h]
  void *v74; // [rsp+C8h] [rbp-100h]
  __int128 v75; // [rsp+D0h] [rbp-F8h]
  void *v76; // [rsp+E0h] [rbp-E8h]
  __int128 v77; // [rsp+E8h] [rbp-E0h]
  void *v78; // [rsp+F8h] [rbp-D0h]
  __int128 v79; // [rsp+100h] [rbp-C8h]
  void *v80; // [rsp+110h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+118h] [rbp-B0h]
  void *v82; // [rsp+128h] [rbp-A0h] BYREF
  __int128 v83; // [rsp+130h] [rbp-98h]
  void *v84; // [rsp+140h] [rbp-88h] BYREF
  __int128 v85; // [rsp+148h] [rbp-80h]
  bool v86; // [rsp+158h] [rbp-70h]
  unsigned int v87; // [rsp+160h] [rbp-68h]
  void *v88; // [rsp+168h] [rbp-60h] BYREF
  __int128 v89; // [rsp+170h] [rbp-58h]
  int v90; // [rsp+180h] [rbp-48h]
  unsigned __int64 v91; // [rsp+188h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  if ( (int)sub_78F460(*a1) > 99999 )
    sub_395C70((int)"HIDECANCEL\nInitializing the cache subsystem");
  v2 = nullptr;
  v61 = -1;
  netnode_check(&v61, "$ upgrade 700", 0, 1);
  v3 = netnode_altval(v61, 0, 65);
  v66 = a1;
  v8 = v3;
  v67 = nullptr;
  v69 = nullptr;
  v73 = 0;
  v86 = (v3 & 0x1000) == 0;
  v71 = -1;
  v72 = -1;
  v74 = nullptr;
  v76 = nullptr;
  v78 = nullptr;
  v80 = nullptr;
  v82 = nullptr;
  v84 = nullptr;
  v87 = v3 | 0x100000;
  v88 = nullptr;
  v90 = -1;
  v68 = 0;
  v70 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v85 = 0;
  v89 = 0;
  if ( (v3 & 0x400) == 0 )
  {
    v45 = qalloc_or_throw(24, 0, v4, v5, v6, v7);
    *(_QWORD *)v45 = 0;
    v2 = (int **)v45;
    *(_OWORD *)(v45 + 8) = 0;
  }
  v9 = nullptr;
  if ( (v8 & 0x2000) == 0 )
  {
    v44 = qalloc_or_throw(24, 0, v4, v5, v6, v7);
    *(_QWORD *)v44 = 0;
    v9 = (char **)v44;
    *(_OWORD *)(v44 + 8) = 0;
  }
  if ( (v8 & 0x10000000) != 0 )
  {
    v11 = nullptr;
  }
  else
  {
    v10 = qalloc_or_throw(24, 0, v4, v5, v6, v7);
    *(_QWORD *)v10 = 0;
    v11 = (unsigned int **)v10;
    *(_OWORD *)(v10 + 8) = 0;
  }
  v12 = *a1;
  v65[0] = a1;
  v65[2] = v2;
  v65[1] = &v66;
  v65[3] = v9;
  v65[4] = v11;
  sub_78FE10(v12, 0, sub_3D4B10, v65);
  if ( (unsigned __int64)v68 > 1 )
  {
    v55 = *a1;
    v42 = node2ea((unsigned int)v71);
    v43 = nullptr;
    if ( (unsigned __int64)v70 > 1 )
      v43 = v69;
    sub_676390(v55, v42, HIDWORD(v71), v67, v43);
    *(_QWORD *)&v68 = 0;
    *(_QWORD *)&v70 = 0;
  }
  sub_3D3E00(&v66);
  if ( (dword_2CA24C8 & 0x400000) != 0 && (_QWORD)v79 )
    sub_3D37E0((__int64 *)&v66);
  if ( !v2 )
  {
    v56 = v8;
    goto LABEL_35;
  }
  v13 = v8;
  BYTE1(v13) = BYTE1(v8) | 4;
  v56 = v13;
  v14 = sub_614FB0(*a1, 52);
  v15 = v14;
  if ( (unsigned __int8)v14 > 7u )
  {
    encoding_bpu = get_encoding_bpu(HIBYTE(v14));
    v17 = 0;
    if ( encoding_bpu != 2 )
    {
LABEL_15:
      v18 = (unsigned __int8)v17;
      if ( (unsigned __int8)v17 < 2u )
        v17 = 2;
      v19 = encoding_bpu == 4;
      v20 = v18;
      if ( v19 )
        v20 = v17;
      goto LABEL_19;
    }
    goto LABEL_102;
  }
  v54 = byte_2389918[(unsigned __int8)v14];
  encoding_bpu = get_encoding_bpu(HIBYTE(v14));
  v17 = v54;
  if ( encoding_bpu != 2 )
    goto LABEL_15;
  v20 = 9;
  if ( v54 != 8 )
  {
    if ( v54 <= 8u )
    {
      if ( (v54 & 0xFD) == 0 )
      {
LABEL_102:
        v20 = 1;
        goto LABEL_19;
      }
      goto LABEL_83;
    }
    v20 = 13;
    if ( v54 != 12 )
LABEL_83:
      v20 = v54;
  }
LABEL_19:
  LOBYTE(v15) = 0;
  sub_615AB0(*a1, 52, (int)(v20 | v15));
  v21 = *v2;
  v53 = (__int64)&(*v2)[2 * (_QWORD)v2[1]];
  if ( (int *)v53 == *v2 )
    goto LABEL_32;
  v22 = *v2;
  do
  {
    while ( 1 )
    {
      v23 = v22[1];
      v24 = *v22;
      if ( v23 != -1 )
      {
        sub_3BDEF0(a1, v24, v23);
        goto LABEL_22;
      }
      v25 = *a1;
      ptr = nullptr;
      v64 = 0;
      v57 = v24;
      if ( sub_517EC0(*(_QWORD *)(v25 + 1680), &ptr, v24) <= 0 )
      {
        v28 = ptr;
      }
      else
      {
        v26 = haystack;
        if ( (_QWORD)v64 )
          v26 = (const char *)ptr;
        v27 = (_DWORD *)sub_518080(*(_QWORD *)(*a1 + 1680), 0, v26);
        v28 = ptr;
        if ( v27 )
        {
          if ( *v27 == v57 )
          {
            v46 = v27[3];
            if ( (v46 & 0x600) == 0x400 && (v46 & 0xF0000000) == 0x50000000 )
            {
              if ( ptr )
              {
                *(_QWORD *)&v64 = 0;
                qfree(ptr);
              }
              v47 = sub_3BDDB0(a1, *v22);
              if ( (unsigned __int8)v47 <= 7u )
              {
                v59 = v47;
                v60 = byte_2389918[(unsigned __int8)v47];
                v48 = get_encoding_bpu(HIBYTE(v47));
                v50 = v59;
                v49 = v60;
                if ( v48 != 2 )
                {
LABEL_96:
                  v51 = (unsigned __int8)v49;
                  if ( (unsigned __int8)v49 < 2u )
                    v49 = 2;
                  v19 = v48 == 4;
                  v52 = v51;
                  if ( v19 )
                    v52 = v49;
                  goto LABEL_100;
                }
                v52 = 9;
                if ( v60 != 8 )
                {
                  if ( v60 <= 8u )
                  {
                    if ( (v60 & 0xFD) == 0 )
                      goto LABEL_109;
                  }
                  else
                  {
                    v52 = 13;
                    if ( v60 == 12 )
                      goto LABEL_100;
                  }
                  v52 = v60;
                }
              }
              else
              {
                v58 = v47;
                v48 = get_encoding_bpu(HIBYTE(v47));
                v49 = 0;
                v50 = v58;
                if ( v48 != 2 )
                  goto LABEL_96;
LABEL_109:
                v52 = 1;
              }
LABEL_100:
              LOBYTE(v50) = 0;
              sub_3BDEF0(a1, *v22, v52 | v50);
              goto LABEL_22;
            }
          }
        }
      }
      if ( v28 )
        break;
LABEL_22:
      v22 += 2;
      if ( (int *)v53 == v22 )
        goto LABEL_31;
    }
    *(_QWORD *)&v64 = 0;
    v22 += 2;
    qfree(v28);
  }
  while ( (int *)v53 != v22 );
LABEL_31:
  v21 = *v2;
LABEL_32:
  if ( v21 )
  {
    v2[1] = nullptr;
    qfree(v21);
  }
  qfree(v2);
LABEL_35:
  if ( v9 )
  {
    v29 = *v9;
    v56 |= 0x2000u;
    v30 = (__int64)&(*v9)[32 * (_QWORD)v9[1]];
    if ( (char *)v30 != *v9 )
    {
      v31 = *v9;
      do
      {
        v32 = haystack;
        if ( *((_QWORD *)v31 + 1) )
          v32 = *(const char **)v31;
        sub_3CB5F0(a1, *((unsigned int *)v31 + 6), v32, v31[28]);
        v31 += 32;
      }
      while ( (char *)v30 != v31 );
      v29 = *v9;
    }
    if ( v29 )
    {
      v33 = v9[1];
      if ( v33 )
      {
        for ( i = nullptr; i != v33; ++i )
        {
          v35 = &v29[32 * (_QWORD)i];
          v36 = *(void **)v35;
          if ( *(_QWORD *)v35 )
          {
            *((_QWORD *)v35 + 1) = 0;
            qfree(v36);
            v29 = *v9;
          }
        }
      }
      v9[1] = nullptr;
      qfree(v29);
    }
    qfree(v9);
  }
  if ( v11 )
  {
    v37 = *v11;
    v56 |= 0x10000000u;
    v38 = (__int64)&(*v11)[2 * (_QWORD)v11[1]];
    if ( (unsigned int *)v38 != *v11 )
    {
      do
      {
        v39 = *v37;
        LODWORD(ptr) = v37[1] + 1;
        v40 = ea2node(v39);
        netnode_supset(v40, 20, &ptr, 4, 65);
        v37 += 2;
      }
      while ( (unsigned int *)v38 != v37 );
      v37 = *v11;
    }
    if ( v37 )
    {
      v11[1] = nullptr;
      qfree(v37);
    }
    qfree(v11);
  }
  sub_585390(&v80);
  sub_585450(&v82);
  sub_585510(&v84);
  sub_584B60(*v66, &v88, (v87 >> 19) & 1, (v87 >> 20) & 1);
  if ( v8 != (v56 | 0x81000) )
  {
    v62 = v56 | 0x81000;
    netnode_supset(v61, 0, &v62, 4, 65);
  }
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    qfree(v88);
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69);
  }
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  return v91 - __readfsqword(0x28u);
}

