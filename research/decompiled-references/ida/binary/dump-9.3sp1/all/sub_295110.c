__int64 __fastcall sub_295110(_QWORD *a1, char *a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  const char *v11; // rax
  bool v12; // r13
  __int64 v13; // rax
  __int64 *v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  char v19; // al
  __int64 v20; // r12
  __int64 *v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r15
  char v27; // r14
  char *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // edx
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  const char *v41; // rax
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rdi
  __int16 v45; // ax
  unsigned int v46; // edi
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // eax
  char v50; // al
  __int64 v51; // rax
  bool v52; // zf
  unsigned __int64 tinfo_size; // rax
  __int64 v54; // rax
  __int64 v55; // r14
  char *v56; // rdi
  char v57; // al
  unsigned __int8 v58; // [rsp+0h] [rbp-138h]
  __int64 v59; // [rsp+0h] [rbp-138h]
  __int64 v60; // [rsp+0h] [rbp-138h]
  __int64 v61; // [rsp+8h] [rbp-130h]
  __int64 v62; // [rsp+8h] [rbp-130h]
  bool v63; // [rsp+8h] [rbp-130h]
  const char *v64; // [rsp+10h] [rbp-128h]
  int v65; // [rsp+1Ch] [rbp-11Ch]
  __int64 v66; // [rsp+20h] [rbp-118h]
  __int64 v67; // [rsp+30h] [rbp-108h] BYREF
  __int128 v68; // [rsp+38h] [rbp-100h]
  int v69; // [rsp+48h] [rbp-F0h]
  unsigned int v70; // [rsp+4Ch] [rbp-ECh]
  unsigned int v71; // [rsp+50h] [rbp-E8h]
  _QWORD v72[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v73; // [rsp+78h] [rbp-C0h]
  __int64 v74; // [rsp+88h] [rbp-B0h]
  __int64 v75; // [rsp+90h] [rbp-A8h]
  __int64 v76; // [rsp+98h] [rbp-A0h]
  __int64 v77; // [rsp+A0h] [rbp-98h]
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  int v79; // [rsp+B8h] [rbp-80h]
  __int64 v80; // [rsp+BCh] [rbp-7Ch]
  __int64 v81; // [rsp+E0h] [rbp-58h]
  int v82; // [rsp+E8h] [rbp-50h]
  char v83; // [rsp+ECh] [rbp-4Ch]
  __int64 v84; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v85; // [rsp+F8h] [rbp-40h]

  v2 = 0;
  v3 = (__int64)a1;
  v85 = __readfsqword(0x28u);
  v4 = (__int64)a2;
  if ( (get_tinfo_property() & 0xF) != 0xB )
  {
    v6 = a1[3];
    v7 = a1[2];
    v68 = 0;
    v2 = sub_28EA50((__int64)a1, (__int64)a2, (__int64)&v67, *(_QWORD *)(v7 + 8 * v6 - 8));
    if ( (_BYTE)v2 )
    {
      v9 = v67;
      v10 = (unsigned int)(*(_DWORD *)(v67 + 8) - 51);
      if ( (unsigned int)v10 <= 0xE && (v8 = 25473, _bittest64(&v8, v10)) || (*(_BYTE *)(v67 + 56) & 2) != 0 )
      {
        v65 = v71;
        if ( v71 != 8 )
        {
          switch ( v71 )
          {
            case 1u:
              v64 = "%sBYTE%d";
              break;
            case 2u:
              v64 = "%sWORD%d";
              break;
            case 4u:
              v64 = "%sDWORD%d";
              break;
            default:
              if ( !under_debugger )
                sub_383060(51607);
              BUG();
          }
          if ( v69 > 16 )
            goto LABEL_19;
          if ( *(_BYTE *)(a1[9] + 145LL) )
          {
            v9 = v70;
            v8 = v71;
            if ( v69 == v71 * (v70 + 1) )
              goto LABEL_14;
            if ( v70 )
              goto LABEL_19;
          }
          else
          {
            if ( !v70 )
            {
LABEL_14:
              v64 = "%sLOBYTE";
              if ( v71 != 1 )
              {
                v11 = "%sLOWORD";
                if ( v71 != 2 )
                  v11 = "%sLODWORD";
                v64 = v11;
              }
              v12 = sub_11CA80(v69);
              if ( !v12 )
                goto LABEL_19;
              a2 = (char *)&word_2;
              if ( (get_tinfo_property() & 0xF) == 9 )
                goto LABEL_19;
              v9 = a1[3];
              v42 = *(_QWORD *)(a1[2] + 8 * v9 - 8);
              v43 = *(_DWORD *)(v42 + 8);
              if ( v43 != 57 )
              {
                if ( v43 > 0x39 )
                {
                  if ( v43 != 80 )
                    goto LABEL_19;
                  a2 = (char *)v4;
                  if ( v65 < (int)sub_284430((__int64)a1, v4, 0x7FFFFFFFu, 0) )
                    goto LABEL_19;
LABEL_67:
                  sub_28F010(v3, v4, &v67);
                  goto LABEL_46;
                }
                if ( v43 != 2 )
                {
                  if ( v43 == 21 )
                  {
                    v44 = *(_QWORD *)(v42 + 24);
                    if ( v4 == v44 )
                      v44 = *(_QWORD *)(v42 + 32);
                    a2 = *(char **)(*(_QWORD *)(v3 + 72) + 112LL);
                    v45 = sub_285970(v44, (__int64)a2);
                    v8 = (unsigned int)v65;
                    v9 = (unsigned int)(8 * v65);
                    if ( v45 <= (int)v9 )
                      goto LABEL_67;
                  }
LABEL_19:
                  v13 = qalloc_or_throw(40, (__int64)a2, v9, v8);
                  *(_QWORD *)v13 = 0;
                  v14 = (__int64 *)v13;
                  *(_QWORD *)(v13 + 24) = 0;
                  *(_DWORD *)(v13 + 32) = 0;
                  *(_OWORD *)(v13 + 8) = 0;
                  v72[1] = 0xFFFFFFFF00000000LL;
                  v72[0] = -1;
                  v72[2] = 0xFFFFFFFFLL;
                  v74 = 0;
                  v75 = 0;
                  v76 = 0;
                  v77 = 0;
                  v73 = 0;
                  v15 = *(_QWORD *)(v13 + 8);
                  if ( v15 > 1 )
                  {
                    v58 = v2;
                    v61 = v3;
                    v20 = 1;
                    v21 = (__int64 *)v13;
                    v22 = v4;
                    v23 = *(_QWORD *)(v13 + 8);
                    do
                    {
                      v24 = 9 * v20++;
                      v25 = *v21 + 8 * v24;
                      clear_tinfo_t();
                      sub_255630(v25);
                      clear_tinfo_t();
                    }
                    while ( v23 != v20 );
                    v2 = v58;
                    v4 = v22;
                    v14 = v21;
                    v3 = v61;
                    v14[1] = 1;
                  }
                  else if ( !v15 )
                  {
                    v16 = *(_QWORD *)v13;
                    v17 = *(_QWORD *)(v13 + 16);
                    if ( (unsigned __int64)v72 < *v14 || (unsigned __int64)v72 >= v16 + 72 * v17 )
                    {
                      if ( v17
                        || (v51 = qvector_reserve((__int64)v14, v16, 1, 72),
                            v52 = v14[1] == 0,
                            *v14 = v51,
                            v16 = v51,
                            v52) )
                      {
                        *(_QWORD *)v16 = -1;
                        *(_DWORD *)(v16 + 8) = 0;
                        *(_QWORD *)(v16 + 12) = -1;
                        *(_QWORD *)(v16 + 48) = 0;
                        *(_DWORD *)(v16 + 56) = 0;
                        sub_25AFF0(v16, (__int64)v72);
                        v50 = BYTE4(v76);
                        *(_QWORD *)(v16 + 64) = 0;
                        *(_BYTE *)(v16 + 60) = v50;
                        copy_tinfo_t();
                      }
                      v14[1] = 1;
                    }
                    else
                    {
                      tinfo_property = -1;
                      v79 = 0;
                      v80 = -1;
                      v81 = 0;
                      v82 = 0;
                      sub_25AFF0((__int64)&tinfo_property, (__int64)v72);
                      v84 = 0;
                      v83 = BYTE4(v76);
                      copy_tinfo_t();
                      if ( !v14[2] )
                        *v14 = qvector_reserve((__int64)v14, *v14, 1, 72);
                      if ( !v14[1] )
                      {
                        v18 = *v14;
                        *(_QWORD *)v18 = -1;
                        *(_DWORD *)(v18 + 8) = 0;
                        *(_QWORD *)(v18 + 12) = -1;
                        *(_QWORD *)(v18 + 48) = 0;
                        *(_DWORD *)(v18 + 56) = 0;
                        sub_25AFF0(v18, (__int64)&tinfo_property);
                        v19 = v83;
                        *(_QWORD *)(v18 + 64) = 0;
                        *(_BYTE *)(v18 + 60) = v19;
                        copy_tinfo_t();
                      }
                      v14[1] = 1;
                      clear_tinfo_t();
                      sub_255630((__int64)&tinfo_property);
                      clear_tinfo_t();
                    }
                  }
                  clear_tinfo_t();
                  sub_255630((__int64)v72);
                  clear_tinfo_t();
                  sub_28F010(v3, *v14, &v67);
                  v26 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL * *(_QWORD *)(v3 + 24) - 8);
                  if ( (_BYTE)v68
                    && ((v68 & 0xE) != 0 || (v68 & 0x30) == 0)
                    && (tinfo_property = 0,
                        tinfo_property = get_tinfo_property(),
                        v27 = get_tinfo_property(),
                        clear_tinfo_t(),
                        (v27 & 0x3F) != 0x30)
                    || (v46 = *(_DWORD *)(v26 + 8), v46 <= 0x45)
                    && (*((_BYTE *)&off_4E0320 + 16 * (int)v46 + 11) & 8) != 0
                    && v4 != *(_QWORD *)(v26 + 24)
                    || (v47 = sub_255000(v46), (v48 = v47) == 0) )
                  {
                    if ( (get_tinfo_property() & 0xF) != 0xB )
                    {
                      v72[0] = 0;
                      copy_tinfo_t();
LABEL_37:
                      v28 = (char *)&unk_418793;
                      if ( (unsigned int)get_tinfo_property() == 1 )
                        v28 = "S";
                      if ( (get_tinfo_property() & 0xF) == 0xA )
                      {
                        sub_32C270(
                          &tinfo_property,
                          *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL) + 84LL));
                      }
                      else
                      {
                        tinfo_property = 0;
                        copy_tinfo_t();
                      }
                      v29 = sub_F1640((__int64)&tinfo_property, (__int64)v14, (__int64)v64, v28, v70);
                      *(_DWORD *)(v29 + 56) |= 2u;
                      v30 = v29;
                      v31 = *(_DWORD *)(v29 + 8);
                      *(_QWORD *)v29 = *(_QWORD *)v4;
                      LODWORD(v29) = *(_DWORD *)(v4 + 8);
                      *(_DWORD *)(v4 + 8) = v31;
                      v32 = *(_DWORD *)(v30 + 12);
                      *(_DWORD *)(v30 + 8) = v29;
                      LODWORD(v29) = *(_DWORD *)(v4 + 12);
                      *(_DWORD *)(v4 + 12) = v32;
                      v33 = *(_QWORD *)(v30 + 24);
                      *(_DWORD *)(v30 + 12) = v29;
                      v34 = *(_QWORD *)(v4 + 24);
                      *(_QWORD *)(v4 + 24) = v33;
                      v35 = *(_QWORD *)(v30 + 32);
                      *(_QWORD *)(v30 + 24) = v34;
                      v36 = *(_QWORD *)(v4 + 32);
                      *(_QWORD *)(v4 + 32) = v35;
                      v37 = *(_QWORD *)(v30 + 40);
                      *(_QWORD *)(v30 + 32) = v36;
                      v38 = *(_QWORD *)(v4 + 40);
                      *(_QWORD *)(v4 + 40) = v37;
                      v39 = *(_QWORD *)(v30 + 48);
                      *(_QWORD *)(v30 + 40) = v38;
                      v40 = *(_QWORD *)(v4 + 48);
                      *(_QWORD *)(v4 + 48) = v39;
                      LODWORD(v39) = *(_DWORD *)(v30 + 56);
                      *(_QWORD *)(v30 + 48) = v40;
                      LODWORD(v40) = *(_DWORD *)(v4 + 56);
                      *(_DWORD *)(v4 + 56) = v39;
                      *(_DWORD *)(v30 + 56) = v40;
                      sub_246B40(v4, *(_QWORD *)(v3 + 72), v72);
                      if ( v30 )
                      {
                        sub_255630(v30);
                        clear_tinfo_t();
                        j__qfree(v30);
                      }
                      if ( (unsigned __int8)sub_283B00(v3, *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL)) )
                        *(_DWORD *)(v3 + 8) |= 8u;
                      clear_tinfo_t();
                      clear_tinfo_t();
                      goto LABEL_46;
                    }
                    v49 = sub_255000(*(_DWORD *)(v26 + 8));
                    v48 = v49;
                    if ( !v49 )
                      v48 = 2;
                  }
                  sub_32C430(v72, *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL), (unsigned int)v65, v48);
                  goto LABEL_37;
                }
                if ( *(_QWORD *)(v42 + 32) != v4 )
                  goto LABEL_19;
                v59 = *(_QWORD *)(a1[2] + 8 * v9 - 8);
                if ( sub_27F060() )
                  goto LABEL_19;
                a2 = *(char **)(*(_QWORD *)(v59 + 24) + 48LL);
                tinfo_size = get_tinfo_size();
LABEL_89:
                v9 = v65;
                if ( v65 < tinfo_size )
                  goto LABEL_19;
                goto LABEL_67;
              }
              if ( *(_QWORD *)(v42 + 24) == v4 )
                goto LABEL_19;
              a2 = (char *)v4;
              v62 = *(_QWORD *)(a1[2] + 8 * v9 - 8);
              v60 = sub_284360(v42, v4, nullptr);
              if ( *(_BYTE *)(v60 + 60) )
                goto LABEL_19;
              v66 = v62;
              v63 = sub_27F060();
              if ( v63 )
                goto LABEL_19;
              if ( *(_DWORD *)(v66 + 8) != 57 )
                goto LABEL_95;
              v54 = *(_QWORD *)(v66 + 24);
              if ( *(_DWORD *)(v54 + 8) != 68 )
                goto LABEL_95;
              v55 = *(_QWORD *)(v54 + 24);
              if ( *(_BYTE *)v55 == 83 )
                ++v55;
              if ( *(_BYTE *)v55 == 72 )
              {
                if ( *(_BYTE *)(v55 + 1) != 73 )
                  goto LABEL_101;
              }
              else if ( *(_BYTE *)v55 != 76 || *(_BYTE *)(v55 + 1) != 79 )
              {
                goto LABEL_101;
              }
              v63 = v12;
              v55 += 2;
LABEL_101:
              a2 = "DWORD";
              v56 = (char *)(v55 + 5);
              if ( !strncmp((const char *)v55, "DWORD", 5u) )
                goto LABEL_105;
              a2 = "WORD";
              if ( !strncmp((const char *)v55, "WORD", 4u) || (a2 = "BYTE", !strncmp((const char *)v55, "BYTE", 4u)) )
              {
                v56 = (char *)(v55 + 4);
LABEL_105:
                v57 = *v56;
                if ( v63 )
                {
                  if ( !v57 )
                    goto LABEL_19;
                }
                else if ( (unsigned __int8)(v57 - 48) <= 9u && !v56[1] )
                {
                  goto LABEL_19;
                }
              }
LABEL_95:
              a2 = *(char **)(v60 + 64);
              tinfo_size = get_tinfo_size();
              goto LABEL_89;
            }
            v8 = v71;
            if ( v69 != v71 * (v70 + 1) )
              goto LABEL_19;
          }
          v64 = "%sHIBYTE";
          if ( v71 != 1 )
          {
            v9 = (__int64)"%sHIDWORD";
            v41 = "%sHIWORD";
            if ( v71 != 2 )
              v41 = "%sHIDWORD";
            v64 = v41;
          }
          goto LABEL_19;
        }
      }
      v2 = 0;
    }
LABEL_46:
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v2;
}
