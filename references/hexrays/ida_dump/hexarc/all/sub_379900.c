__int64 __fastcall sub_379900(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  _BYTE *v17; // rsi
  unsigned int v18; // r14d
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  int v27; // eax
  unsigned int v28; // eax
  char *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 item_end; // r15
  __int64 v36; // r9
  char *v37; // rax
  unsigned int v38; // eax
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  int v43; // eax
  unsigned int v44; // edi
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  unsigned int v47; // r13d
  int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  char v51; // [rsp+8h] [rbp-3E0h]
  __int64 v52; // [rsp+8h] [rbp-3E0h]
  unsigned __int64 v53; // [rsp+10h] [rbp-3D8h]
  char v54; // [rsp+1Ch] [rbp-3CCh]
  int v55; // [rsp+1Ch] [rbp-3CCh]
  int v56; // [rsp+24h] [rbp-3C4h] BYREF
  __int64 v57; // [rsp+28h] [rbp-3C0h] BYREF
  __int64 v58; // [rsp+30h] [rbp-3B8h] BYREF
  __int128 v59; // [rsp+38h] [rbp-3B0h]
  __int64 v60; // [rsp+50h] [rbp-398h] BYREF
  __int128 v61; // [rsp+58h] [rbp-390h]
  __int64 v62; // [rsp+70h] [rbp-378h] BYREF
  __int128 v63; // [rsp+78h] [rbp-370h]
  __int64 v64; // [rsp+88h] [rbp-360h]
  __int64 v65; // [rsp+90h] [rbp-358h] BYREF
  __int64 v66; // [rsp+98h] [rbp-350h] BYREF
  __int128 v67; // [rsp+A0h] [rbp-348h]
  __int64 v68; // [rsp+B0h] [rbp-338h]
  __int128 v69; // [rsp+B8h] [rbp-330h]
  char v70; // [rsp+C8h] [rbp-320h]
  __int128 v71; // [rsp+D0h] [rbp-318h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-308h]
  __int64 v73; // [rsp+E8h] [rbp-300h]
  __int64 v74; // [rsp+F0h] [rbp-2F8h]
  char v75; // [rsp+F8h] [rbp-2F0h] BYREF
  char v76; // [rsp+F9h] [rbp-2EFh]
  _BYTE v77[8]; // [rsp+238h] [rbp-1B0h] BYREF
  __int128 v78; // [rsp+240h] [rbp-1A8h] BYREF
  __int64 v79; // [rsp+250h] [rbp-198h]
  __int64 v80; // [rsp+258h] [rbp-190h]
  __int64 v81; // [rsp+260h] [rbp-188h]
  char v82; // [rsp+268h] [rbp-180h] BYREF
  _QWORD v83[8]; // [rsp+3A8h] [rbp-40h] BYREF

  v83[0] = __readfsqword(0x28u);
  v4 = sub_1C8680(a1, a2, a3, nullptr);
  if ( v4 )
    return v4;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = sub_2B0DC0(*(_QWORD *)(a1 + 1496), v6);
  *(_QWORD *)(a1 + 1344) = v7;
  if ( !v7 )
  {
    v42 = (_QWORD *)qalloc(16);
    if ( !v42 )
      sub_53734();
    *v42 = 0;
    v42[1] = 0;
    *(_QWORD *)(a1 + 1344) = v42;
  }
  v8 = sub_2B1200(*(_QWORD *)(a1 + 1496), a1);
  *(_QWORD *)(a1 + 1336) = v8;
  if ( !v8 )
  {
    v41 = qalloc_or_throw(24);
    *(_QWORD *)v41 = 0;
    *(_OWORD *)(v41 + 8) = 0;
    *(_QWORD *)(a1 + 1336) = v41;
  }
  v9 = sub_2AF4A0(*(_QWORD *)(a1 + 1504), v6);
  *(_QWORD *)(a1 + 1328) = v9;
  if ( !v9 )
  {
    v40 = (_QWORD *)qalloc(16);
    if ( !v40 )
      sub_53734();
    *v40 = 0;
    v40[1] = 0;
    *(_QWORD *)(a1 + 1328) = v40;
  }
  sub_20F4C0(a1);
  sub_2B0A60(*(_QWORD *)(a1 + 1504), a1 + 1312, v6);
  v56 = 1;
  v57 = 0;
  v10 = sub_1C8060(a1);
  v13 = v10;
  if ( v10 )
  {
    if ( *((char *)v10 + 16) < 0 )
      goto LABEL_9;
    v72 = -1;
    v29 = &v75;
    v73 = 0;
    v74 = 0;
    v71 = -1;
    do
    {
      *(_WORD *)v29 = 0;
      v29 += 40;
      *((_WORD *)v29 - 19) = 0;
      *((_WORD *)v29 - 18) = 0;
      *((_DWORD *)v29 - 2) = 0;
      *((_WORD *)v29 - 17) = 0;
      *((_OWORD *)v29 - 2) = 0;
      *((_QWORD *)v29 - 2) = 0;
    }
    while ( v77 != v29 );
    v30 = *v13;
    if ( (unsigned __int64)(v13[1] - *v13) <= 0xF
      && (int)decode_insn(&v71, v30, v77, v11, v12, 0, 0.0) > 0
      && ((unsigned __int8)(v76 - 6) <= 1u || v76 == 2) )
    {
      item_end = get_item_end(*v13);
      if ( item_end == v13[1] )
        goto LABEL_9;
      if ( (unsigned __int8)is_call_insn(&v71, v30, v31, v32, v33, v34) )
      {
        v79 = -1;
        v37 = &v82;
        v80 = 0;
        v81 = 0;
        v78 = -1;
        do
        {
          *(_WORD *)v37 = 0;
          v37 += 40;
          *((_WORD *)v37 - 19) = 0;
          *((_WORD *)v37 - 18) = 0;
          *((_DWORD *)v37 - 2) = 0;
          *((_WORD *)v37 - 17) = 0;
          *((_OWORD *)v37 - 2) = 0;
          *((_QWORD *)v37 - 2) = 0;
        }
        while ( v37 != (char *)v83 );
        if ( (int)decode_insn(&v78, item_end, v83, 0, 0, v36, 0.0) > 0
          && (unsigned __int8)is_ret_insn(&v78, 3)
          && get_item_end(item_end) == v13[1] )
        {
LABEL_9:
          *(_DWORD *)a1 |= 0x80u;
          sub_36D340(*(_QWORD *)(a1 + 1496), v6, &v56);
        }
      }
    }
  }
  v14 = sub_1C8CF0(*(_DWORD *)(a1 + 72));
  v15 = *(_QWORD *)(a1 + 1496);
  v53 = v14;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v70 = 16;
  v63 = 0;
  v67 = 0;
  v69 = 0;
  if ( (unsigned __int8)sub_3797A0(v15, v6, (unsigned __int64)&v57, 2, v16) )
  {
    if ( (get_tinfo_property(v57, 2) & 0xF) == 0xC )
    {
      v55 = v56;
      v52 = *(_QWORD *)(a1 + 1496);
      v27 = get_tinfo_property(v57, 20) & 0xFFFFFFF0;
      if ( v27 == 64 || v27 == 208 || (unsigned __int8)sub_36D340(v52, v6, &v60) && (int)v60 <= v55 )
      {
        get_tinfo_details(v57, 12, &v62);
        if ( *(_DWORD *)(a1 + 72) == 16 )
        {
          v43 = v70 & 0xF0;
          if ( (v70 & 0xF0) == 0xC0 )
            v43 = HIDWORD(v64);
          if ( v43 )
            *(_DWORD *)(a1 + 72) = v43;
        }
        copy_tinfo_t(a1 + 328, &v57);
        v28 = get_aflags(v6) & 0x2000000;
        *(_BYTE *)(a1 + 320) = v28 >> 25;
        if ( v28 )
        {
          if ( *(_DWORD *)(a1 + 68) == -1 )
            *(_DWORD *)(a1 + 68) = get_tinfo_property(*(_QWORD *)(a1 + 328), 21);
          if ( v53 != sub_1C8CF0(*(_DWORD *)(a1 + 72)) )
          {
            v20 = sub_1C8190(a1, v13);
            if ( v20 )
              goto LABEL_53;
          }
          v54 = 3;
LABEL_52:
          v51 = sub_325640(&v57, *(_QWORD *)(a1 + 1496), v6);
LABEL_26:
          if ( !(unsigned __int8)get_tinfo_details(v57, 12, &v62) )
            goto LABEL_27;
          if ( (get_tinfo_property(v65, 2) & 0x3F) == 1 )
            goto LABEL_27;
          if ( !(unsigned __int8)sub_1BCB80(nullptr, nullptr, (__int64)&v66, 1) )
            goto LABEL_27;
          *(_DWORD *)(a1 + 4) |= 0x1000u;
          if ( *(_BYTE *)(a1 + 320) )
            goto LABEL_27;
          v38 = v70 & 0xF0;
          if ( (v70 & 0xF0) == 0xC0 )
            v38 = HIDWORD(v64);
          if ( v38 <= 0x10 )
            v38 = getinf(99);
          if ( v38 == 176 || v38 == 256 )
            goto LABEL_27;
          v39 = getinf(99);
          if ( v39 == 176 )
          {
            if ( (unsigned __int64)getinf(88) > 0x397 )
              goto LABEL_27;
            if ( (unsigned __int8)getinf_flag(3, 4) )
            {
              netnode_check(&v58, "$ golang", 0, 0);
              v46 = v58;
              v47 = netnode_altval(v58, 0, 65);
              if ( v47 > 0x74 )
              {
                v48 = *(_DWORD *)(get_ph(v46) + 4);
                if ( !v48 )
                  goto LABEL_27;
                v49 = (unsigned int)(v48 - 13);
                if ( (unsigned int)v49 <= 0x3B )
                {
                  v50 = 0x800000000000005LL;
                  if ( _bittest64(&v50, v49) )
                  {
                    if ( v47 != 117 )
                      goto LABEL_27;
                  }
                }
              }
            }
          }
          else if ( v39 != 256 )
          {
LABEL_27:
            v60 = 0;
            if ( v51 )
            {
              copy_tinfo_t(&v60, &v57);
              sub_25C3B0((__int64 *)(a1 + 408), v6, (__int64)&v60, 0.0);
              clear_tinfo_t(&v60);
              sub_3707C0(a1, &v57, v54);
            }
            else
            {
              sub_25C3B0((__int64 *)(a1 + 408), v6, (__int64)&v60, 0.0);
              clear_tinfo_t(&v60);
              if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
                *(_DWORD *)(a1 + 400) |= 2u;
            }
            sub_32BA90(a1);
            goto LABEL_31;
          }
          *(_DWORD *)(a1 + 72) = 16;
          goto LABEL_27;
        }
        v44 = *(_DWORD *)(a1 + 72);
        if ( v44 == 48 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) == 0 )
          {
            *(_DWORD *)(a1 + 72) = 112;
            if ( sub_1C8CF0(0x70u) != v53 )
            {
LABEL_97:
              v20 = sub_1C8190(a1, v13);
              if ( v20 )
                goto LABEL_53;
            }
LABEL_98:
            v54 = 1;
            goto LABEL_52;
          }
          v45 = sub_1C8CF0(0x30u);
        }
        else
        {
          v45 = sub_1C8CF0(v44);
        }
        if ( v53 != v45 )
          goto LABEL_97;
        goto LABEL_98;
      }
    }
  }
  if ( (get_aflags(v6) & 0x2000000) != 0 )
  {
    v60 = 0;
    v61 = 0;
    if ( !(unsigned __int8)print_type(&v60, v6, 0) )
    {
      v17 = (_BYTE *)v60;
      if ( *((_QWORD *)&v61 + 1) <= 1u )
      {
        v60 = qvector_reserve(&v60, v60, 2, 1);
        v17 = (_BYTE *)v60;
      }
      *(_QWORD *)&v61 = 2;
      *v17 = 63;
      *(_BYTE *)(v60 + 1) = 0;
    }
    sub_329B90((_QWORD *)a1, v6, 2u, v60);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60);
    }
  }
  v58 = 0;
  v59 = 0;
  v18 = (unsigned __int8)getinf(38);
  v19 = getinf(36);
  v60 = 24;
  LODWORD(v61) = v19;
  *(_QWORD *)((char *)&v61 + 4) = v18;
  if ( get_ea_name(&v58, v6, 13, &v60) <= 0 || (v51 = parse_decl(&v57, 0, 0, v58, 16769), v54 = 3, !v51) )
  {
    v54 = 1;
    v51 = (unsigned int)sub_331840(*(_QWORD *)(a1 + 1496), v6, &v57) != 0;
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  if ( v53 == sub_1C8CF0(*(_DWORD *)(a1 + 72)) || (v20 = sub_1C8190(a1, v13)) == 0 )
  {
    if ( !v51 )
      goto LABEL_26;
    goto LABEL_52;
  }
LABEL_53:
  v4 = v20;
LABEL_31:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  cleanup_argloc(&v66);
  clear_tinfo_t(&v65);
  v21 = v62;
  if ( v62 )
  {
    v22 = v63;
    if ( (_QWORD)v63 )
    {
      v23 = 0;
      do
      {
        v24 = (_QWORD *)(v21 + 80 * v23);
        clear_tinfo_t(v24 + 8);
        v25 = v24[5];
        if ( v25 )
        {
          v24[6] = 0;
          qfree(v25);
        }
        v26 = v24[2];
        if ( v26 )
        {
          v24[3] = 0;
          qfree(v26);
        }
        ++v23;
        cleanup_argloc(v24);
        v21 = v62;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v21);
  }
  clear_tinfo_t(&v57);
  return v4;
}
