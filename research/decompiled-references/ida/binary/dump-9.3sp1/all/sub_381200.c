__int64 __fastcall sub_381200(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rsi
  unsigned int v17; // r14d
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22; // r12
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  int v26; // eax
  unsigned int v27; // eax
  char *v28; // rax
  unsigned __int64 *v29; // rax
  unsigned int v30; // eax
  int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  unsigned int v36; // r13d
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  char v40; // [rsp+8h] [rbp-3E0h]
  __int64 v41; // [rsp+8h] [rbp-3E0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-3D8h]
  char v43; // [rsp+1Ch] [rbp-3CCh]
  int v44; // [rsp+1Ch] [rbp-3CCh]
  int v45; // [rsp+24h] [rbp-3C4h] BYREF
  __int64 v46; // [rsp+28h] [rbp-3C0h] BYREF
  __int64 v47; // [rsp+30h] [rbp-3B8h]
  __int128 v48; // [rsp+38h] [rbp-3B0h]
  _BYTE *v49; // [rsp+50h] [rbp-398h] BYREF
  __int128 v50; // [rsp+58h] [rbp-390h]
  __int64 v51; // [rsp+70h] [rbp-378h]
  __int128 v52; // [rsp+78h] [rbp-370h]
  __int64 v53; // [rsp+88h] [rbp-360h]
  __int64 v54; // [rsp+90h] [rbp-358h]
  __int64 v55; // [rsp+98h] [rbp-350h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-348h]
  __int64 v57; // [rsp+B0h] [rbp-338h]
  __int128 v58; // [rsp+B8h] [rbp-330h]
  char v59; // [rsp+C8h] [rbp-320h]
  __int128 v60; // [rsp+D0h] [rbp-318h]
  __int64 v61; // [rsp+E0h] [rbp-308h]
  __int64 v62; // [rsp+E8h] [rbp-300h]
  __int64 v63; // [rsp+F0h] [rbp-2F8h]
  char v64; // [rsp+F8h] [rbp-2F0h] BYREF
  char v65; // [rsp+F9h] [rbp-2EFh]
  char v66; // [rsp+238h] [rbp-1B0h] BYREF
  __int128 v67; // [rsp+240h] [rbp-1A8h]
  __int64 v68; // [rsp+250h] [rbp-198h]
  __int64 v69; // [rsp+258h] [rbp-190h]
  __int64 v70; // [rsp+260h] [rbp-188h]
  char v71; // [rsp+268h] [rbp-180h] BYREF
  unsigned __int64 v72; // [rsp+3A8h] [rbp-40h] BYREF

  v72 = __readfsqword(0x28u);
  v4 = sub_1CF000(a1, a2, a3, nullptr);
  if ( v4 )
    return v4;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = sub_2B8140(*(_QWORD *)(a1 + 1496), v6);
  *(_QWORD *)(a1 + 1344) = v7;
  if ( !v7 )
  {
    v34 = (_QWORD *)qalloc();
    if ( !v34 )
      sub_55A7A(16);
    *v34 = 0;
    v34[1] = 0;
    *(_QWORD *)(a1 + 1344) = v34;
  }
  v8 = sub_2B8580(*(_QWORD *)(a1 + 1496), a1);
  *(_QWORD *)(a1 + 1336) = v8;
  if ( !v8 )
  {
    v33 = qalloc_or_throw(24, a1, v9, v10);
    *(_QWORD *)v33 = 0;
    *(_OWORD *)(v33 + 8) = 0;
    *(_QWORD *)(a1 + 1336) = v33;
  }
  v11 = sub_2B6820(*(_QWORD *)(a1 + 1504), v6);
  *(_QWORD *)(a1 + 1328) = v11;
  if ( !v11 )
  {
    v32 = (_QWORD *)qalloc();
    if ( !v32 )
      sub_55A7A(16);
    *v32 = 0;
    v32[1] = 0;
    *(_QWORD *)(a1 + 1328) = v32;
  }
  sub_216840(a1);
  sub_2B7DE0(*(_QWORD *)(a1 + 1504), a1 + 1312, v6);
  v45 = 1;
  v46 = 0;
  v12 = sub_1CE9E0(a1);
  v13 = v12;
  if ( v12 )
  {
    if ( *((char *)v12 + 16) < 0 )
      goto LABEL_9;
    v61 = -1;
    v28 = &v64;
    v62 = 0;
    v63 = 0;
    v60 = -1;
    do
    {
      *(_WORD *)v28 = 0;
      v28 += 40;
      *((_WORD *)v28 - 19) = 0;
      *((_WORD *)v28 - 18) = 0;
      *((_DWORD *)v28 - 2) = 0;
      *((_WORD *)v28 - 17) = 0;
      *((_OWORD *)v28 - 2) = 0;
      *((_QWORD *)v28 - 2) = 0;
    }
    while ( &v66 != v28 );
    if ( (unsigned __int64)(v13[1] - *v13) <= 0xF
      && (int)decode_insn() > 0
      && ((unsigned __int8)(v65 - 6) <= 1u || v65 == 2) )
    {
      if ( get_item_end() == v13[1] )
        goto LABEL_9;
      if ( (unsigned __int8)is_call_insn() )
      {
        v68 = -1;
        v29 = (unsigned __int64 *)&v71;
        v69 = 0;
        v70 = 0;
        v67 = -1;
        do
        {
          *(_WORD *)v29 = 0;
          v29 += 5;
          *((_WORD *)v29 - 19) = 0;
          *((_WORD *)v29 - 18) = 0;
          *((_DWORD *)v29 - 2) = 0;
          *((_WORD *)v29 - 17) = 0;
          *((_OWORD *)v29 - 2) = 0;
          *(v29 - 2) = 0;
        }
        while ( v29 != &v72 );
        if ( (int)decode_insn() > 0 && (unsigned __int8)is_ret_insn() && get_item_end() == v13[1] )
        {
LABEL_9:
          *(_DWORD *)a1 |= 0x80u;
          sub_374C40(*(_QWORD *)(a1 + 1496), v6, &v45);
        }
      }
    }
  }
  v14 = sub_1CFC10();
  v15 = *(_QWORD *)(a1 + 1496);
  v42 = v14;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 16;
  v52 = 0;
  v56 = 0;
  v58 = 0;
  if ( (unsigned __int8)sub_3810A0(v15, v6, (__int64)&v46, 2) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v44 = v45;
      v41 = *(_QWORD *)(a1 + 1496);
      v26 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v26 == 64 || v26 == 208 || (unsigned __int8)sub_374C40(v41, v6, &v49) && (int)v49 <= v44 )
      {
        get_tinfo_details();
        if ( *(_DWORD *)(a1 + 72) == 16 )
        {
          v35 = v59 & 0xF0;
          if ( (v59 & 0xF0) == 0xC0 )
            v35 = HIDWORD(v53);
          if ( v35 )
            *(_DWORD *)(a1 + 72) = v35;
        }
        copy_tinfo_t();
        v27 = get_aflags() & 0x2000000;
        *(_BYTE *)(a1 + 320) = v27 >> 25;
        if ( v27 )
        {
          if ( *(_DWORD *)(a1 + 68) == -1 )
            *(_DWORD *)(a1 + 68) = get_tinfo_property();
          if ( v42 != sub_1CFC10() )
          {
            v19 = sub_1CEB10(a1, v13);
            if ( v19 )
              goto LABEL_53;
          }
          v43 = 3;
LABEL_52:
          v40 = sub_32CB80(&v46, *(_QWORD *)(a1 + 1496));
LABEL_26:
          if ( !(unsigned __int8)get_tinfo_details() )
            goto LABEL_27;
          if ( (get_tinfo_property() & 0x3F) == 1 )
            goto LABEL_27;
          if ( !(unsigned __int8)sub_1C3400(nullptr, nullptr, (__int64)&v55, 1) )
            goto LABEL_27;
          *(_DWORD *)(a1 + 4) |= 0x1000u;
          if ( *(_BYTE *)(a1 + 320) )
            goto LABEL_27;
          v30 = v59 & 0xF0;
          if ( (v59 & 0xF0) == 0xC0 )
            v30 = HIDWORD(v53);
          if ( v30 <= 0x10 )
            v30 = getinf();
          if ( v30 == 176 || v30 == 256 )
            goto LABEL_27;
          v31 = getinf();
          if ( v31 == 176 )
          {
            if ( (unsigned __int64)getinf() > 0x397 )
              goto LABEL_27;
            if ( (unsigned __int8)getinf_flag() )
            {
              netnode_check();
              v36 = netnode_altval();
              if ( v36 > 0x74 )
              {
                v37 = *(_DWORD *)(get_ph() + 4);
                if ( !v37 )
                  goto LABEL_27;
                v38 = (unsigned int)(v37 - 13);
                if ( (unsigned int)v38 <= 0x3B )
                {
                  v39 = 0x800000000000005LL;
                  if ( _bittest64(&v39, v38) )
                  {
                    if ( v36 != 117 )
                      goto LABEL_27;
                  }
                }
              }
            }
          }
          else if ( v31 != 256 )
          {
LABEL_27:
            v49 = nullptr;
            if ( v40 )
            {
              copy_tinfo_t();
              sub_263730((__int64 *)(a1 + 408));
              clear_tinfo_t();
              sub_3780C0(a1, (__int64)&v46, v43);
            }
            else
            {
              sub_263730((__int64 *)(a1 + 408));
              clear_tinfo_t();
              if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
                *(_DWORD *)(a1 + 400) |= 2u;
            }
            sub_3332B0(a1);
            goto LABEL_31;
          }
          *(_DWORD *)(a1 + 72) = 16;
          goto LABEL_27;
        }
        if ( *(_DWORD *)(a1 + 72) != 48 || (*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) != 0 )
        {
          if ( v42 != sub_1CFC10() )
            goto LABEL_96;
        }
        else
        {
          *(_DWORD *)(a1 + 72) = 112;
          if ( sub_1CFC10() != v42 )
          {
LABEL_96:
            v19 = sub_1CEB10(a1, v13);
            if ( v19 )
              goto LABEL_53;
          }
        }
        v43 = 1;
        goto LABEL_52;
      }
    }
  }
  if ( (get_aflags() & 0x2000000) != 0 )
  {
    v49 = nullptr;
    v50 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      v16 = v49;
      if ( *((_QWORD *)&v50 + 1) <= 1u )
      {
        v49 = (_BYTE *)qvector_reserve((__int64)&v49, (__int64)v49, 2, 1);
        v16 = v49;
      }
      *(_QWORD *)&v50 = 2;
      *v16 = 63;
      v49[1] = 0;
    }
    sub_3311F0((_QWORD *)a1, v6, 2u, v49);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree((__int64)v49);
    }
  }
  v47 = 0;
  v48 = 0;
  v17 = (unsigned __int8)getinf();
  v18 = getinf();
  v49 = (_BYTE *)qword_18;
  LODWORD(v50) = v18;
  *(_QWORD *)((char *)&v50 + 4) = v17;
  if ( get_ea_name() <= 0 || (v40 = parse_decl(), v43 = 3, !v40) )
  {
    v43 = 1;
    v40 = (unsigned int)sub_338DC0(*(_QWORD *)(a1 + 1496), v6, &v46) != 0;
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  if ( v42 == sub_1CFC10() || (v19 = sub_1CEB10(a1, v13)) == 0 )
  {
    if ( !v40 )
      goto LABEL_26;
    goto LABEL_52;
  }
LABEL_53:
  v4 = v19;
LABEL_31:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v20 = v51;
  if ( v51 )
  {
    v21 = v52;
    if ( (_QWORD)v52 )
    {
      v22 = 0;
      do
      {
        v23 = (_QWORD *)(v20 + 80 * v22);
        clear_tinfo_t();
        v24 = v23[5];
        if ( v24 )
        {
          v23[6] = 0;
          qfree(v24);
        }
        v25 = v23[2];
        if ( v25 )
        {
          v23[3] = 0;
          qfree(v25);
        }
        ++v22;
        cleanup_argloc();
        v20 = v51;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v52 = 0;
    qfree(v20);
  }
  clear_tinfo_t();
  return v4;
}
