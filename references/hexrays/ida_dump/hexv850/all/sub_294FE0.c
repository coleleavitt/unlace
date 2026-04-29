__int64 __fastcall sub_294FE0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int tinfo_details; // ebp
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  int tinfo_property; // r15d
  int v21; // r15d
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // edx
  __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rax
  char v34; // r15
  __int64 v35; // r15
  char v36; // r15
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // [rsp+8h] [rbp-190h]
  __int64 v40; // [rsp+10h] [rbp-188h]
  unsigned __int64 v42; // [rsp+28h] [rbp-170h]
  unsigned __int64 v43; // [rsp+30h] [rbp-168h]
  __int64 v44; // [rsp+38h] [rbp-160h]
  int v45; // [rsp+60h] [rbp-138h]
  int v46; // [rsp+64h] [rbp-134h]
  __int64 v47; // [rsp+70h] [rbp-128h] BYREF
  __int64 v48; // [rsp+78h] [rbp-120h] BYREF
  __int64 v49; // [rsp+80h] [rbp-118h] BYREF
  __int64 v50; // [rsp+88h] [rbp-110h] BYREF
  __int64 v51; // [rsp+90h] [rbp-108h] BYREF
  __int128 v52; // [rsp+98h] [rbp-100h]
  __int64 v53; // [rsp+A8h] [rbp-F0h]
  __int64 v54; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-E0h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-D8h]
  __int64 v57; // [rsp+D0h] [rbp-C8h]
  __int128 v58; // [rsp+D8h] [rbp-C0h]
  char v59; // [rsp+E8h] [rbp-B0h]
  __int64 v60; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+F8h] [rbp-A0h]
  __int64 v62; // [rsp+108h] [rbp-90h]
  __int64 v63; // [rsp+110h] [rbp-88h] BYREF
  __int64 v64; // [rsp+118h] [rbp-80h] BYREF
  __int128 v65; // [rsp+120h] [rbp-78h]
  __int64 v66; // [rsp+130h] [rbp-68h]
  __int128 v67; // [rsp+138h] [rbp-60h]
  char v68; // [rsp+148h] [rbp-50h]
  unsigned __int64 v69; // [rsp+158h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v60 = 0;
  copy_tinfo_t(&v60, a3);
  sub_2940B0(&v47, &v60);
  clear_tinfo_t(&v60);
  tinfo_details = sub_327100(&v47, a1, -1);
  if ( (_BYTE)tinfo_details )
  {
    v60 = 0;
    copy_tinfo_t(&v60, a2);
    sub_2940B0(&v48, &v60);
    clear_tinfo_t(&v60);
    if ( a4 )
    {
      if ( (get_tinfo_property(v47, 2) & 0xF) != 0xC
        || (get_tinfo_property(v48, 2) & 0xF) != 0xC
        || (tinfo_property = get_tinfo_property(v48, 20), tinfo_property != (unsigned int)get_tinfo_property(v47, 20))
        || (v21 = get_tinfo_property(v48, 23), v21 != (unsigned int)get_tinfo_property(v47, 23)) )
      {
        tinfo_details = 0;
LABEL_32:
        clear_tinfo_t(&v48);
        goto LABEL_2;
      }
    }
    if ( (get_tinfo_property(v48, 2) & 0xF) == 0xC && (get_tinfo_property(v47, 2) & 0xF) == 0xC )
    {
      if ( !a4 && !(unsigned __int8)compare_tinfo(v47, v48, 8) )
        goto LABEL_32;
      v46 = sub_3288C0(a2);
      v45 = sub_3288C0(a3);
      v51 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v57 = 0;
      v59 = 16;
      v60 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v66 = 0;
      v68 = 16;
      v52 = 0;
      v56 = 0;
      v58 = 0;
      v61 = 0;
      v65 = 0;
      v67 = 0;
      tinfo_details = get_tinfo_details(v48, 12, &v51);
      if ( !(_BYTE)tinfo_details )
      {
LABEL_8:
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree(v66);
        }
        cleanup_argloc(&v64);
        clear_tinfo_t(&v63);
        v8 = v60;
        if ( v60 )
        {
          v9 = v61;
          if ( (_QWORD)v61 )
          {
            v10 = 0;
            do
            {
              v11 = (_QWORD *)(v8 + 80 * v10);
              clear_tinfo_t(v11 + 8);
              v12 = v11[5];
              if ( v12 )
              {
                v11[6] = 0;
                qfree(v12);
              }
              v13 = v11[2];
              if ( v13 )
              {
                v11[3] = 0;
                qfree(v13);
              }
              ++v10;
              cleanup_argloc(v11);
              v8 = v60;
            }
            while ( v9 != v10 );
          }
          *(_QWORD *)&v61 = 0;
          qfree(v8);
        }
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57);
        }
        cleanup_argloc(&v55);
        clear_tinfo_t(&v54);
        v14 = v51;
        if ( v51 )
        {
          v15 = v52;
          if ( (_QWORD)v52 )
          {
            v16 = 0;
            do
            {
              v17 = (_QWORD *)(v14 + 80 * v16);
              clear_tinfo_t(v17 + 8);
              v18 = v17[5];
              if ( v18 )
              {
                v17[6] = 0;
                qfree(v18);
              }
              v19 = v17[2];
              if ( v19 )
              {
                v17[3] = 0;
                qfree(v19);
              }
              ++v16;
              cleanup_argloc(v17);
              v14 = v51;
            }
            while ( v15 != v16 );
          }
          *(_QWORD *)&v52 = 0;
          qfree(v14);
        }
        goto LABEL_32;
      }
      tinfo_details = get_tinfo_details(v47, 12, &v60);
      if ( (_BYTE)tinfo_details )
      {
        v43 = (unsigned int)score_tinfo(&v54);
        v22 = (unsigned int)score_tinfo(&v63);
        v42 = v22;
        if ( (unsigned __int8)compare_tinfo(v63, v54, 0) && ((v63 & 0x3F) == 61) != ((v54 & 0x3F) == 61) )
        {
          v23 = v22 + 1;
          if ( (v63 & 0x3F) != 0x3D )
            v23 = v22 - 1;
          v42 = v23;
        }
        v24 = (int)v52;
        if ( (unsigned __int64)v61 >= (int)v52 )
          goto LABEL_46;
        v37 = v68 & 0xF0;
        if ( (v68 & 0xF0) == 0xC0 )
          v37 = HIDWORD(v62);
        if ( v37 <= 0x10 )
          v37 = getinf(99);
        v38 = v37 & 0xFFFFFFF0;
        if ( v38 == 64 || v38 == 208 )
        {
          ++v42;
          v24 = (int)v61;
LABEL_46:
          if ( (int)v24 <= 0 )
          {
LABEL_63:
            if ( v46 <= v45 )
            {
              LOBYTE(tinfo_details) = v46 == v45;
              LOBYTE(v24) = v43 < v42;
              tinfo_details &= v24;
            }
            goto LABEL_8;
          }
          v25 = 0;
          v44 = 80 * v24;
          while ( 1 )
          {
            v29 = v25 + v51;
            v30 = v25 + v60;
            v39 = v25 + v51 + 64;
            v40 = v25 + v60 + 64;
            if ( !a4 )
              break;
            v26 = *(_QWORD *)(v29 + 64);
            if ( (*(_BYTE *)(v29 + 64) & 0xF) == 0xA )
              goto LABEL_59;
LABEL_49:
            v27 = *(_QWORD *)(v30 + 64);
            if ( (*(_BYTE *)(v30 + 64) & 0xF) == 0xA )
            {
              v50 = 0;
              v50 = get_tinfo_property(v27, 9);
              v35 = get_tinfo_property(v50, 2) & 0x3F;
              clear_tinfo_t(&v50);
              if ( (_BYTE)v35 != 1 )
              {
                v50 = 0;
                v50 = get_tinfo_property(*(_QWORD *)(v30 + 64), 9);
                v36 = v50 & 0x3F;
                clear_tinfo_t(&v50);
                v45 -= v36 != 48;
              }
            }
            v43 += (unsigned int)score_tinfo(v39);
            v42 += (unsigned int)score_tinfo(v40);
            LODWORD(v24) = compare_tinfo(*(_QWORD *)(v30 + 64), *(_QWORD *)(v29 + 64), 0);
            if ( (_BYTE)v24 )
            {
              v24 = *(_QWORD *)(v30 + 64) & 0x3FLL;
              if ( ((_BYTE)v24 == 61) != ((*(_BYTE *)(v29 + 64) & 0x3F) == 61) )
              {
                v28 = v45 - 1;
                if ( (_BYTE)v24 != 61 )
                  v28 = v45 + 1;
                v45 = v28;
              }
            }
            v25 += 80;
            if ( v44 == v25 )
              goto LABEL_63;
          }
          if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(v30 + 64), *(_QWORD *)(v29 + 64), 2) )
            goto LABEL_8;
          v26 = *(_QWORD *)(v29 + 64);
          if ( (*(_BYTE *)(v29 + 64) & 0xF) != 0xA )
            goto LABEL_49;
LABEL_59:
          v50 = 0;
          v50 = get_tinfo_property(v26, 9);
          v31 = get_tinfo_property(v50, 2) & 0x3F;
          clear_tinfo_t(&v50);
          if ( (_BYTE)v31 != 1 )
          {
            v32 = *(_QWORD *)(v29 + 64);
            v49 = 0;
            v33 = get_tinfo_property(v32, 9);
            v34 = v33;
            v49 = v33;
            clear_tinfo_t(&v49);
            v46 -= (v34 & 0x3F) != 48;
          }
          goto LABEL_49;
        }
        if ( !under_debugger )
          sub_37CFE0(52458);
      }
      else if ( !under_debugger )
      {
        sub_37CFE0(51273);
      }
    }
    else if ( !under_debugger )
    {
      sub_37CFE0(51272);
    }
    BUG();
  }
LABEL_2:
  clear_tinfo_t(&v47);
  return tinfo_details;
}
