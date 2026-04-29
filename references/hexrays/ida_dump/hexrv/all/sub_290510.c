__int64 __fastcall sub_290510(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
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
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r15
  char v26; // r14
  char *v27; // r15
  __int64 v28; // rax
  __int64 v29; // r13
  int v30; // edx
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  const char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // edi
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // eax
  char v49; // al
  __int64 v50; // rax
  bool v51; // zf
  unsigned __int64 tinfo_size; // rax
  __int64 v53; // rax
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
  __int128 v68; // [rsp+38h] [rbp-100h] BYREF
  int v69; // [rsp+48h] [rbp-F0h]
  unsigned int v70; // [rsp+4Ch] [rbp-ECh]
  int v71; // [rsp+50h] [rbp-E8h]
  _QWORD v72[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v73; // [rsp+78h] [rbp-C0h]
  __int64 v74; // [rsp+88h] [rbp-B0h]
  __int64 v75; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-A0h]
  _QWORD v77[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  int v79; // [rsp+B8h] [rbp-80h]
  __int64 v80; // [rsp+BCh] [rbp-7Ch]
  __int64 v81; // [rsp+E0h] [rbp-58h] BYREF
  int v82; // [rsp+E8h] [rbp-50h]
  char v83; // [rsp+ECh] [rbp-4Ch]
  _QWORD v84[9]; // [rsp+F0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 48);
  v84[1] = __readfsqword(0x28u);
  v5 = a2;
  if ( (get_tinfo_property(v4, 2) & 0xF) != 0xB )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    v68 = 0;
    v2 = sub_289E50(a1, a2, (__int64)&v67, *(_QWORD *)(v8 + 8 * v7 - 8));
    if ( (_BYTE)v2 )
    {
      v9 = (unsigned int)(*(_DWORD *)(v67 + 8) - 51);
      if ( (unsigned int)v9 <= 0xE && (v10 = 25473, _bittest64(&v10, v9)) || (*(_BYTE *)(v67 + 56) & 2) != 0 )
      {
        v65 = v71;
        if ( v71 != 8 )
        {
          switch ( v71 )
          {
            case 1:
              v64 = "%sBYTE%d";
              break;
            case 2:
              v64 = "%sWORD%d";
              break;
            case 4:
              v64 = "%sDWORD%d";
              break;
            default:
              if ( !under_debugger )
                sub_37DDE0(51607);
              BUG();
          }
          if ( v69 > 16 )
            goto LABEL_19;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 145LL) )
          {
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
              v12 = sub_1185C0(v69);
              if ( !v12 || (get_tinfo_property(*((_QWORD *)&v68 + 1), 2) & 0xF) == 9 )
                goto LABEL_19;
              v41 = *(_QWORD *)(a1 + 24);
              v42 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v41 - 8);
              v43 = *(_DWORD *)(v42 + 8);
              if ( v43 != 57 )
              {
                if ( v43 > 0x39 )
                {
                  if ( v43 != 80 || v65 < (int)sub_27F830(a1, a2, 0x7FFFFFFFu, 0) )
                    goto LABEL_19;
LABEL_67:
                  sub_28A410(a1, a2, &v67);
                  goto LABEL_46;
                }
                if ( v43 != 2 )
                {
                  if ( v43 == 21 )
                  {
                    v44 = *(_QWORD *)(v42 + 24);
                    if ( a2 == v44 )
                      v44 = *(_QWORD *)(v42 + 32);
                    if ( (__int16)sub_280D70(v44, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) <= 8 * v65 )
                      goto LABEL_67;
                  }
LABEL_19:
                  v13 = qalloc_or_throw(40);
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
                  v77[0] = 0;
                  v73 = 0;
                  v15 = *(_QWORD *)(v13 + 8);
                  if ( v15 > 1 )
                  {
                    v58 = v2;
                    v61 = a1;
                    v20 = 1;
                    v21 = (__int64 *)v13;
                    v22 = *(_QWORD *)(v13 + 8);
                    do
                    {
                      v23 = 9 * v20++;
                      v24 = *v21 + 8 * v23;
                      clear_tinfo_t(v24 + 64);
                      sub_250A30(v24);
                      clear_tinfo_t(v24 + 48);
                    }
                    while ( v22 != v20 );
                    v2 = v58;
                    v5 = a2;
                    v14 = v21;
                    a1 = v61;
                    v14[1] = 1;
                  }
                  else if ( !v15 )
                  {
                    v16 = *(_QWORD *)v13;
                    v17 = *(_QWORD *)(v13 + 16);
                    if ( (unsigned __int64)v72 < *v14 || (unsigned __int64)v72 >= v16 + 72 * v17 )
                    {
                      if ( v17
                        || (v50 = qvector_reserve(v14, v16, 1, 72), v51 = v14[1] == 0, *v14 = v50, v16 = v50, v51) )
                      {
                        *(_QWORD *)v16 = -1;
                        *(_DWORD *)(v16 + 8) = 0;
                        *(_QWORD *)(v16 + 12) = -1;
                        *(_QWORD *)(v16 + 48) = 0;
                        *(_DWORD *)(v16 + 56) = 0;
                        sub_2563F0(v16, (__int64)v72);
                        v49 = BYTE4(v76);
                        *(_QWORD *)(v16 + 64) = 0;
                        *(_BYTE *)(v16 + 60) = v49;
                        copy_tinfo_t(v16 + 64, v77);
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
                      sub_2563F0((__int64)&tinfo_property, (__int64)v72);
                      v84[0] = 0;
                      v83 = BYTE4(v76);
                      copy_tinfo_t(v84, v77);
                      if ( !v14[2] )
                        *v14 = qvector_reserve(v14, *v14, 1, 72);
                      if ( !v14[1] )
                      {
                        v18 = *v14;
                        *(_QWORD *)v18 = -1;
                        *(_DWORD *)(v18 + 8) = 0;
                        *(_QWORD *)(v18 + 12) = -1;
                        *(_QWORD *)(v18 + 48) = 0;
                        *(_DWORD *)(v18 + 56) = 0;
                        sub_2563F0(v18, (__int64)&tinfo_property);
                        v19 = v83;
                        *(_QWORD *)(v18 + 64) = 0;
                        *(_BYTE *)(v18 + 60) = v19;
                        copy_tinfo_t(v18 + 64, v84);
                      }
                      v14[1] = 1;
                      clear_tinfo_t(v84);
                      sub_250A30((__int64)&tinfo_property);
                      clear_tinfo_t(&v81);
                    }
                  }
                  clear_tinfo_t(v77);
                  sub_250A30((__int64)v72);
                  clear_tinfo_t(&v75);
                  sub_28A410(a1, *v14, &v67);
                  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
                  if ( (_BYTE)v68
                    && ((v68 & 0xE) != 0 || (v68 & 0x30) == 0)
                    && (tinfo_property = 0,
                        tinfo_property = get_tinfo_property(v68, 9),
                        v26 = get_tinfo_property(tinfo_property, 2),
                        clear_tinfo_t(&tinfo_property),
                        (v26 & 0x3F) != 0x30)
                    || (v45 = *(_DWORD *)(v25 + 8), v45 <= 0x45)
                    && (*((_BYTE *)&off_4B2D60 + 16 * (int)v45 + 11) & 8) != 0
                    && v5 != *(_QWORD *)(v25 + 24)
                    || (v46 = sub_250400(v45), (v47 = v46) == 0) )
                  {
                    if ( (get_tinfo_property(v68, 2) & 0xF) != 0xB )
                    {
                      v72[0] = 0;
                      copy_tinfo_t(v72, &v68);
LABEL_37:
                      v27 = (char *)&unk_3F3793;
                      if ( (unsigned int)get_tinfo_property(v72[0], 3) == 1 )
                        v27 = "S";
                      if ( (get_tinfo_property(v72[0], 2) & 0xF) == 0xA )
                      {
                        sub_326FC0(
                          &tinfo_property,
                          *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL) + 84LL));
                      }
                      else
                      {
                        tinfo_property = 0;
                        copy_tinfo_t(&tinfo_property, v72);
                      }
                      v28 = sub_ED180((__int64)&tinfo_property, (__int64)v14, (__int64)v64, v27, v70);
                      *(_DWORD *)(v28 + 56) |= 2u;
                      v29 = v28;
                      v30 = *(_DWORD *)(v28 + 8);
                      *(_QWORD *)v28 = *(_QWORD *)v5;
                      LODWORD(v28) = *(_DWORD *)(v5 + 8);
                      *(_DWORD *)(v5 + 8) = v30;
                      v31 = *(_DWORD *)(v29 + 12);
                      *(_DWORD *)(v29 + 8) = v28;
                      LODWORD(v28) = *(_DWORD *)(v5 + 12);
                      *(_DWORD *)(v5 + 12) = v31;
                      v32 = *(_QWORD *)(v29 + 24);
                      *(_DWORD *)(v29 + 12) = v28;
                      v33 = *(_QWORD *)(v5 + 24);
                      *(_QWORD *)(v5 + 24) = v32;
                      v34 = *(_QWORD *)(v29 + 32);
                      *(_QWORD *)(v29 + 24) = v33;
                      v35 = *(_QWORD *)(v5 + 32);
                      *(_QWORD *)(v5 + 32) = v34;
                      v36 = *(_QWORD *)(v29 + 40);
                      *(_QWORD *)(v29 + 32) = v35;
                      v37 = *(_QWORD *)(v5 + 40);
                      *(_QWORD *)(v5 + 40) = v36;
                      v38 = *(_QWORD *)(v29 + 48);
                      *(_QWORD *)(v29 + 40) = v37;
                      v39 = *(_QWORD *)(v5 + 48);
                      *(_QWORD *)(v5 + 48) = v38;
                      LODWORD(v38) = *(_DWORD *)(v29 + 56);
                      *(_QWORD *)(v29 + 48) = v39;
                      LODWORD(v39) = *(_DWORD *)(v5 + 56);
                      *(_DWORD *)(v5 + 56) = v38;
                      *(_DWORD *)(v29 + 56) = v39;
                      sub_241F40(v5, *(_QWORD *)(a1 + 72), v72);
                      if ( v29 )
                      {
                        sub_250A30(v29);
                        clear_tinfo_t(v29 + 48);
                        j__qfree(v29);
                      }
                      if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
                        *(_DWORD *)(a1 + 8) |= 8u;
                      clear_tinfo_t(&tinfo_property);
                      clear_tinfo_t(v72);
                      goto LABEL_46;
                    }
                    v48 = sub_250400(*(_DWORD *)(v25 + 8));
                    v47 = v48;
                    if ( !v48 )
                      v47 = 2;
                  }
                  sub_327180(v72, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (unsigned int)v65, v47);
                  goto LABEL_37;
                }
                if ( *(_QWORD *)(v42 + 32) != a2 )
                  goto LABEL_19;
                v59 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v41 - 8);
                if ( sub_27A460(*(_QWORD *)(a2 + 48)) )
                  goto LABEL_19;
                tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v59 + 24) + 48LL), 0);
LABEL_89:
                if ( v65 < tinfo_size )
                  goto LABEL_19;
                goto LABEL_67;
              }
              if ( *(_QWORD *)(v42 + 24) == a2 )
                goto LABEL_19;
              v62 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v41 - 8);
              v53 = sub_27F760(v42, a2, nullptr);
              v60 = v53;
              if ( *(_BYTE *)(v53 + 60) )
                goto LABEL_19;
              v66 = v62;
              v63 = sub_27A460(*(_QWORD *)(v53 + 64));
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
              v56 = (char *)(v55 + 5);
              if ( !strncmp((const char *)v55, "DWORD", 5u) )
                goto LABEL_105;
              if ( !strncmp((const char *)v55, "WORD", 4u) || !strncmp((const char *)v55, "BYTE", 4u) )
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
              tinfo_size = get_tinfo_size(0, *(_QWORD *)(v60 + 64), 0);
              goto LABEL_89;
            }
            if ( v69 != v71 * (v70 + 1) )
              goto LABEL_19;
          }
          v64 = "%sHIBYTE";
          if ( v71 != 1 )
          {
            v40 = "%sHIWORD";
            if ( v71 != 2 )
              v40 = "%sHIDWORD";
            v64 = v40;
          }
          goto LABEL_19;
        }
      }
      v2 = 0;
    }
LABEL_46:
    clear_tinfo_t((char *)&v68 + 8);
    clear_tinfo_t(&v68);
  }
  return v2;
}
