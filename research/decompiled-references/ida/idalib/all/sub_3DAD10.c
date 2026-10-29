unsigned __int64 __fastcall sub_3DAD10(__int64 *a1)
{
  void **v2; // r15
  int v3; // eax
  int v4; // ebp
  char **v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // r14d
  int encoding_bpu; // eax
  int v13; // edx
  int v14; // ecx
  bool v15; // zf
  int v16; // eax
  void *v17; // rcx
  _DWORD *v18; // r14
  int v19; // edx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  const char *v23; // rdx
  __int64 v24; // rax
  void *v25; // rdi
  char *v26; // r8
  __int64 v27; // r14
  char *v28; // r15
  const char *v29; // rdx
  char *v30; // r14
  char *i; // rbx
  char *v32; // rdx
  void *v33; // rdi
  _DWORD *v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r9
  __int64 v41; // rax
  void *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // eax
  int v47; // eax
  int v48; // esi
  unsigned int v49; // edx
  int v50; // edi
  int v51; // eax
  __int64 v52; // [rsp+8h] [rbp-1D0h]
  unsigned __int8 v53; // [rsp+8h] [rbp-1D0h]
  __int64 v54; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v55; // [rsp+10h] [rbp-1C8h]
  unsigned int v56; // [rsp+10h] [rbp-1C8h]
  unsigned int v57; // [rsp+10h] [rbp-1C8h]
  int v58; // [rsp+18h] [rbp-1C0h]
  unsigned __int8 v59; // [rsp+1Fh] [rbp-1B9h]
  int v60; // [rsp+24h] [rbp-1B4h] BYREF
  __int64 v61; // [rsp+28h] [rbp-1B0h] BYREF
  void *ptr; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v63; // [rsp+38h] [rbp-1A0h]
  _QWORD v64[6]; // [rsp+50h] [rbp-188h] BYREF
  __int64 *v65; // [rsp+80h] [rbp-158h] BYREF
  void *v66; // [rsp+88h] [rbp-150h]
  __int128 v67; // [rsp+90h] [rbp-148h]
  void *v68; // [rsp+A0h] [rbp-138h]
  __int128 v69; // [rsp+A8h] [rbp-130h]
  __int64 v70; // [rsp+B8h] [rbp-120h]
  unsigned int v71; // [rsp+C0h] [rbp-118h]
  __int64 v72; // [rsp+C8h] [rbp-110h]
  char v73; // [rsp+D0h] [rbp-108h]
  void *v74; // [rsp+D8h] [rbp-100h]
  __int128 v75; // [rsp+E0h] [rbp-F8h]
  void *v76; // [rsp+F0h] [rbp-E8h]
  __int128 v77; // [rsp+F8h] [rbp-E0h]
  void *v78; // [rsp+108h] [rbp-D0h]
  __int128 v79; // [rsp+110h] [rbp-C8h]
  void *v80; // [rsp+120h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+128h] [rbp-B0h]
  void *v82; // [rsp+138h] [rbp-A0h] BYREF
  __int128 v83; // [rsp+140h] [rbp-98h]
  void *v84; // [rsp+150h] [rbp-88h] BYREF
  __int128 v85; // [rsp+158h] [rbp-80h]
  bool v86; // [rsp+168h] [rbp-70h]
  unsigned int v87; // [rsp+170h] [rbp-68h]
  void *v88; // [rsp+178h] [rbp-60h] BYREF
  __int128 v89; // [rsp+180h] [rbp-58h]
  __int64 v90; // [rsp+190h] [rbp-48h]
  unsigned __int64 v91; // [rsp+198h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  if ( (int)sub_7B01C0(*a1) > 99999 )
    sub_387AC0();
  v2 = nullptr;
  v61 = -1;
  netnode_check(&v61, "$ upgrade 700", 0, 1);
  v3 = netnode_altval(v61, 0, 65);
  v65 = a1;
  v4 = v3;
  v66 = nullptr;
  v68 = nullptr;
  v70 = -1;
  v86 = (v3 & 0x1000) == 0;
  v73 = 0;
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
  v67 = 0;
  v69 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v85 = 0;
  v89 = 0;
  if ( (v3 & 0x400) == 0 )
  {
    v44 = qalloc_or_throw(24);
    *(_QWORD *)v44 = 0;
    v2 = (void **)v44;
    *(_OWORD *)(v44 + 8) = 0;
  }
  v5 = nullptr;
  if ( (v4 & 0x2000) == 0 )
  {
    v43 = qalloc_or_throw(24);
    *(_QWORD *)v43 = 0;
    v5 = (char **)v43;
    *(_OWORD *)(v43 + 8) = 0;
  }
  if ( (v4 & 0x10000000) != 0 )
  {
    v7 = nullptr;
  }
  else
  {
    v6 = qalloc_or_throw(24);
    *(_QWORD *)v6 = 0;
    v7 = (_QWORD *)v6;
    *(_OWORD *)(v6 + 8) = 0;
  }
  v8 = *a1;
  v64[0] = a1;
  v64[2] = v2;
  v64[1] = &v65;
  v64[3] = v5;
  v64[4] = v7;
  sub_7B0B60(v8, 0, sub_3DA9C0, v64);
  if ( (unsigned __int64)v67 > 1 )
  {
    v54 = *a1;
    v41 = node2ea(v70);
    v42 = nullptr;
    if ( (unsigned __int64)v69 > 1 )
      v42 = v68;
    sub_696100(v54, v41, v71, v66, v42);
    *(_QWORD *)&v67 = 0;
    *(_QWORD *)&v69 = 0;
  }
  sub_3D9BA0(&v65);
  if ( (dword_2CCC3C8 & 0x400000) != 0 && (_QWORD)v79 )
    sub_3D9520((__int64 *)&v65);
  if ( !v2 )
  {
    v58 = v4;
    goto LABEL_35;
  }
  v9 = v4;
  BYTE1(v9) = BYTE1(v4) | 4;
  v58 = v9;
  v10 = sub_631AD0(*a1, 52);
  v11 = v10;
  if ( (unsigned __int8)v10 > 7u )
  {
    encoding_bpu = get_encoding_bpu(HIBYTE(v10));
    v13 = 0;
    if ( encoding_bpu != 2 )
    {
LABEL_15:
      v14 = (unsigned __int8)v13;
      if ( (unsigned __int8)v13 < 2u )
        v13 = 2;
      v15 = encoding_bpu == 4;
      v16 = v14;
      if ( v15 )
        v16 = v13;
      goto LABEL_19;
    }
    goto LABEL_102;
  }
  v53 = byte_23AD958[(unsigned __int8)v10];
  encoding_bpu = get_encoding_bpu(HIBYTE(v10));
  v13 = v53;
  if ( encoding_bpu != 2 )
    goto LABEL_15;
  v16 = 9;
  if ( v53 != 8 )
  {
    if ( v53 <= 8u )
    {
      if ( (v53 & 0xFD) == 0 )
      {
LABEL_102:
        v16 = 1;
        goto LABEL_19;
      }
      goto LABEL_83;
    }
    v16 = 13;
    if ( v53 != 12 )
LABEL_83:
      v16 = v53;
  }
LABEL_19:
  LOBYTE(v11) = 0;
  sub_632610(*a1, 52, (int)(v16 | v11));
  v17 = *v2;
  v52 = (__int64)*v2 + 16 * (_QWORD)v2[1];
  if ( (void *)v52 == *v2 )
    goto LABEL_32;
  v18 = *v2;
  do
  {
    while ( 1 )
    {
      v19 = v18[2];
      v20 = *(_QWORD *)v18;
      if ( v19 != -1 )
      {
        sub_3C2FE0(a1, *(_QWORD *)v18, v19);
        goto LABEL_22;
      }
      v21 = *a1;
      v22 = *(_QWORD *)v18;
      ptr = nullptr;
      v63 = 0;
      v55 = v20;
      if ( sub_5302B0(*(_QWORD *)(v21 + 1872), &ptr, v22) <= 0 )
      {
        v25 = ptr;
      }
      else
      {
        v23 = haystack;
        if ( (_QWORD)v63 )
          v23 = (const char *)ptr;
        v24 = sub_530470(*(_QWORD *)(*a1 + 1872), 0, v23);
        v25 = ptr;
        if ( v24 )
        {
          if ( *(_QWORD *)v24 == v55 )
          {
            v45 = *(_DWORD *)(v24 + 24);
            if ( (v45 & 0x600) == 0x400 && (v45 & 0xF0000000) == 0x50000000 )
            {
              if ( ptr )
              {
                *(_QWORD *)&v63 = 0;
                qfree(ptr);
              }
              v46 = sub_3C2EB0(a1, *(_QWORD *)v18);
              if ( (unsigned __int8)v46 <= 7u )
              {
                v57 = v46;
                v59 = byte_23AD958[(unsigned __int8)v46];
                v47 = get_encoding_bpu(HIBYTE(v46));
                v49 = v57;
                v48 = v59;
                if ( v47 != 2 )
                {
LABEL_96:
                  v50 = (unsigned __int8)v48;
                  if ( (unsigned __int8)v48 < 2u )
                    v48 = 2;
                  v15 = v47 == 4;
                  v51 = v50;
                  if ( v15 )
                    v51 = v48;
                  goto LABEL_100;
                }
                v51 = 9;
                if ( v59 != 8 )
                {
                  if ( v59 <= 8u )
                  {
                    if ( (v59 & 0xFD) == 0 )
                      goto LABEL_109;
                  }
                  else
                  {
                    v51 = 13;
                    if ( v59 == 12 )
                      goto LABEL_100;
                  }
                  v51 = v59;
                }
              }
              else
              {
                v56 = v46;
                v47 = get_encoding_bpu(HIBYTE(v46));
                v48 = 0;
                v49 = v56;
                if ( v47 != 2 )
                  goto LABEL_96;
LABEL_109:
                v51 = 1;
              }
LABEL_100:
              LOBYTE(v49) = 0;
              sub_3C2FE0(a1, *(_QWORD *)v18, v51 | v49);
              goto LABEL_22;
            }
          }
        }
      }
      if ( v25 )
        break;
LABEL_22:
      v18 += 4;
      if ( (_DWORD *)v52 == v18 )
        goto LABEL_31;
    }
    *(_QWORD *)&v63 = 0;
    v18 += 4;
    qfree(v25);
  }
  while ( (_DWORD *)v52 != v18 );
LABEL_31:
  v17 = *v2;
LABEL_32:
  if ( v17 )
  {
    v2[1] = nullptr;
    qfree(v17);
  }
  qfree(v2);
LABEL_35:
  if ( v5 )
  {
    v26 = *v5;
    v58 |= 0x2000u;
    v27 = (__int64)&(*v5)[40 * (_QWORD)v5[1]];
    if ( (char *)v27 != *v5 )
    {
      v28 = *v5;
      do
      {
        v29 = haystack;
        if ( *((_QWORD *)v28 + 1) )
          v29 = *(const char **)v28;
        sub_3D0F60(a1, *((void **)v28 + 3), v29, v28[32]);
        v28 += 40;
      }
      while ( (char *)v27 != v28 );
      v26 = *v5;
    }
    if ( v26 )
    {
      v30 = v5[1];
      if ( v30 )
      {
        for ( i = nullptr; i != v30; ++i )
        {
          v32 = &v26[40 * (_QWORD)i];
          v33 = *(void **)v32;
          if ( *(_QWORD *)v32 )
          {
            *((_QWORD *)v32 + 1) = 0;
            qfree(v33);
            v26 = *v5;
          }
        }
      }
      v5[1] = nullptr;
      qfree(v26);
    }
    qfree(v5);
  }
  if ( v7 )
  {
    v34 = (_DWORD *)*v7;
    v58 |= 0x10000000u;
    v35 = *v7 + 16LL * v7[1];
    if ( v35 != *v7 )
    {
      do
      {
        v36 = *(_QWORD *)v34;
        v60 = v34[2] + 1;
        v37 = ea2node(v36);
        netnode_supset(v37, 20, &v60, 4, 65, v38);
        v34 += 4;
      }
      while ( (_DWORD *)v35 != v34 );
      v34 = (_DWORD *)*v7;
    }
    if ( v34 )
    {
      v7[1] = 0;
      qfree(v34);
    }
    qfree(v7);
  }
  sub_59F430(&v80);
  sub_59F4F0(&v82);
  sub_59F5C0(&v84);
  sub_59EB20(*v65, &v88, (v87 >> 19) & 1, (v87 >> 20) & 1);
  if ( v4 != (v58 | 0x81000) )
  {
    ptr = (void *)(v58 | 0x81000);
    netnode_supset(v61, 0, &ptr, 8, 65, v39);
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
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  return v91 - __readfsqword(0x28u);
}
