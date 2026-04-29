__int64 __fastcall sub_44E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v10; // eax
  unsigned __int64 **v11; // rcx
  unsigned int v12; // eax
  int *v13; // rcx
  __int64 v14; // r12
  int flags; // eax
  __int64 v16; // r12
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  unsigned int v22; // ecx
  __int64 *v23; // rax
  const char **v24; // rcx
  __int64 v25; // r8
  _DWORD *v26; // rax
  const char *v27; // rdi
  unsigned int v28; // eax
  __int64 *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r8
  _QWORD *v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r12
  int *v39; // rax
  __int64 v40; // rbp
  _QWORD *v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // rbp
  __int64 v45; // rsi
  _DWORD *v46; // rax
  char v47; // r12
  __int64 *v48; // rdx
  __int64 v49; // rbx
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  int v54; // r8d
  __int64 v55; // rsi
  __int64 v56; // rdi
  _QWORD *v57; // rax
  __int64 v58; // r12
  __int64 v59; // r13
  __int64 v60; // rax
  _QWORD *v61; // rdx
  __int16 v62; // cx
  unsigned __int64 *v63; // rax
  unsigned __int64 *v64; // rcx
  unsigned __int64 *v65; // rax
  __int64 *v66; // rcx
  __int64 *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 name_ea; // rdi
  __int64 dword; // rbp
  __int64 v73; // rcx
  _DWORD *v74; // rax
  __int64 *v75; // rcx
  __int64 v76; // [rsp+0h] [rbp-1D8h]
  int *v77; // [rsp+8h] [rbp-1D0h]
  __int64 v78; // [rsp+10h] [rbp-1C8h]
  __int64 v79; // [rsp+10h] [rbp-1C8h]
  __int64 v80; // [rsp+18h] [rbp-1C0h]
  __int128 v81; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v82; // [rsp+40h] [rbp-198h]
  __int64 v83; // [rsp+48h] [rbp-190h]
  __int64 v84; // [rsp+50h] [rbp-188h]
  _BYTE v85[320]; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v86[8]; // [rsp+198h] [rbp-40h] BYREF

  v86[0] = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      netnode_supset();
      sub_55330(*(_QWORD *)(a1 + 16) + 192LL);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + 516LL) = 0;
      sub_7D050(*(_QWORD *)(a1 + 16));
      return 0;
    case 2LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v13 = *(int **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v13 + 2;
      }
      else
      {
        v13 = (int *)(*(_QWORD *)(a3 + 16) + v12);
        *(_DWORD *)a3 = v12 + 8;
      }
      if ( *v13 <= 699 && (unsigned __int16)getinf(0) > 0x2BBu )
      {
        netnode_supdel_all();
        netnode_supdel_all();
        sub_44D70(*(_QWORD *)(a1 + 16), 66);
      }
      return 0;
    case 3LL:
      if ( netnode_supfirst() != -1 )
      {
        do
        {
          v14 = node2ea();
          flags = get_flags_ex(v14, 4);
          if ( (flags & 0xF00000) != 0
            || (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000
            || netnode_altval() == 2
            || !(unsigned __int8)sub_36530(*(_QWORD *)(a1 + 16), v14) )
          {
            netnode_supdel();
          }
          else
          {
            netnode_supset();
          }
        }
        while ( netnode_supnext() != -1 );
      }
      if ( netnode_supfirst() != -1 )
      {
        do
        {
          v58 = node2ea();
          v59 = (unsigned __int8)netnode_charval();
          v60 = get_flags_ex(v58, 4);
          v61 = v85;
          v82 = -1;
          v83 = 0;
          v84 = 0;
          v81 = -1;
          do
          {
            *(_WORD *)v61 = 0;
            v61 += 5;
            *((_WORD *)v61 - 19) = 0;
            *((_WORD *)v61 - 18) = 0;
            *((_DWORD *)v61 - 2) = 0;
            *((_WORD *)v61 - 17) = 0;
            *((_OWORD *)v61 - 2) = 0;
            *(v61 - 2) = 0;
          }
          while ( v61 != v86 );
          if ( (~BYTE1(v60) & 6) == 0
            && (unsigned __int8)(v59 - 1) <= 6u
            && (int)decode_insn() > 0
            && (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 184LL) & 2) == 0
            && v85[40 * (unsigned __int8)v59 + 1] == 2 )
          {
            HIBYTE(v62) = BYTE1(v83);
            if ( (_WORD)v83 == 480
              || (unsigned __int16)(v83 - 113) <= 1u
              || (unsigned __int16)(v83 - 30) <= 1u
              || (LOBYTE(v62) = v83 & 0x7F, v62 == 344) )
            {
              v79 = *(_QWORD *)&v85[40 * (unsigned __int8)v59 + 16];
              v80 = v81;
              netnode_supset();
              sub_34AC0(*(_QWORD *)(a1 + 16), (__int64)&v81, (_BYTE *)&v81 + 40 * v59 + 40, v79 + 16 * v80, 0);
            }
          }
          netnode_supdel();
        }
        while ( netnode_supnext() != -1 );
      }
      return 0;
    case 9LL:
      invalidate_regfinder_cache();
      v16 = *(_QWORD *)(a1 + 16);
      netnode_check();
      v17 = netnode_exist();
      v18 = -1;
      if ( v17 )
      {
        netnode_altval();
        v18 = node2ea();
      }
      *(_QWORD *)(v16 + 504) = v18;
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL);
      if ( v19 == -1 )
      {
        name_ea = get_name_ea();
        dword = name_ea;
        if ( (unsigned __int8)segtype() == 10 )
        {
          dword = (unsigned int)get_dword(name_ea);
        }
        else if ( name_ea == -1 )
        {
          dword = sub_43CA0(-1, "_GLOBAL_OFFSET_TABLE_");
          if ( dword == -1 )
            return 0;
        }
        sub_43C00(*(_QWORD *)(a1 + 16), dword);
        return 0;
      }
      if ( (get_flags_ex(v19, 4) & 0x4000) == 0 )
        set_name(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL), (__int64)"_GLOBAL_OFFSET_TABLE_", 4385);
      return 0;
    case 11LL:
      v20 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v21 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v21 + 2;
      }
      else
      {
        v21 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v20);
        *(_DWORD *)a3 = v20 + 8;
      }
      sub_445D0(*(_QWORD *)(a1 + 16), *v21 != 0);
      invalidate_regfinder_cache();
      return 0;
    case 17LL:
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v66 = *(__int64 **)(a3 + 8);
        v39 = (int *)(v66 + 1);
        *(_QWORD *)(a3 + 8) = v66 + 1;
        v38 = *v66;
      }
      else
      {
        v36 = *(_QWORD *)(a3 + 16);
        v37 = v35 + 8;
        *(_DWORD *)a3 = v37;
        v38 = *(_QWORD *)(v36 + v35);
        if ( (unsigned int)v37 <= 0x2F )
        {
          v39 = (int *)(v37 + v36);
          *(_DWORD *)a3 = v35 + 16;
          goto LABEL_47;
        }
        v39 = *(int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v39 + 2;
LABEL_47:
      v40 = *v39;
      if ( (unsigned int)v40 <= 7 && (~((unsigned __int16)get_flags_ex(v38, 4) >> 8) & 6) == 0 )
      {
        v82 = -1;
        v41 = v85;
        v83 = 0;
        v84 = 0;
        v81 = -1;
        do
        {
          *(_WORD *)v41 = 0;
          v41 += 5;
          *((_WORD *)v41 - 19) = 0;
          *((_WORD *)v41 - 18) = 0;
          *((_DWORD *)v41 - 2) = 0;
          *((_WORD *)v41 - 17) = 0;
          *((_OWORD *)v41 - 2) = 0;
          *(v41 - 2) = 0;
        }
        while ( v41 != v86 );
        decode_insn();
        if ( v85[40 * v40 + 1] == 2 )
          sub_34AC0(
            *(_QWORD *)(a1 + 16),
            (__int64)&v81,
            (_BYTE *)&v81 + 40 * v40 + 40,
            *(_QWORD *)&v85[40 * v40 + 16] + 16 * v81,
            1);
      }
      return 0;
    case 30LL:
      v42 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v63 = *(unsigned __int64 **)(a3 + 8);
        v64 = v63 + 1;
        *(_QWORD *)(a3 + 8) = v63 + 1;
        v44 = *v63;
      }
      else
      {
        v43 = *(_QWORD *)(a3 + 16);
        *(_DWORD *)a3 = v42 + 8;
        v44 = *(_QWORD *)(v43 + v42);
        if ( v42 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v42 + 16;
          if ( v42 + 16 <= 0x2F )
          {
            v45 = v42 + 24;
            *(_DWORD *)a3 = v45;
            if ( (unsigned int)v45 <= 0x2F )
            {
              v46 = (_DWORD *)(v45 + v43);
              *(_DWORD *)a3 = v42 + 32;
              goto LABEL_58;
            }
            while ( 1 )
            {
              v46 = *(_DWORD **)(a3 + 8);
LABEL_91:
              *(_QWORD *)(a3 + 8) = v46 + 2;
LABEL_58:
              v47 = *v46 != 0;
              v48 = (__int64 *)getseg();
              if ( v48 )
                break;
              if ( under_debugger )
                BUG();
              interr(10266);
            }
            sub_33480(*(_QWORD *)(a1 + 16), v44, v48, v47);
            return 0;
          }
          v65 = *(unsigned __int64 **)(a3 + 8);
LABEL_90:
          v46 = v65 + 1;
          goto LABEL_91;
        }
        v64 = *(unsigned __int64 **)(a3 + 8);
      }
      v65 = v64 + 1;
      *(_QWORD *)(a3 + 8) = v64 + 1;
      goto LABEL_90;
    case 34LL:
    case 36LL:
    case 37LL:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v11 = *(unsigned __int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v11 + 1;
      }
      else
      {
        v11 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v10);
        *(_DWORD *)a3 = v10 + 8;
      }
      v7 = a2 - 32;
      sub_43D00(*(_QWORD *)(a1 + 16), *v11);
      netnode_delblob();
      goto LABEL_3;
    case 48LL:
      if ( (unsigned __int8)getinf_flag(2, 4, a3, a4, a5, a6, v76, a3, v78) )
        return 0;
      v50 = *v77;
      if ( (unsigned int)*v77 > 0x2F )
      {
        v73 = *((_QWORD *)v77 + 1) + 8LL;
        *((_QWORD *)v77 + 1) = v73;
      }
      else
      {
        v51 = *((_QWORD *)v77 + 2);
        *v77 = v50 + 8;
        if ( (unsigned int)(v50 + 8) <= 0x2F )
        {
          v52 = (unsigned int)(v50 + 16);
          *v77 = v52;
          if ( (unsigned int)v52 <= 0x2F )
          {
            v53 = (unsigned int)(v50 + 24);
            *v77 = v53;
            v54 = *(_DWORD *)(v51 + v52);
            if ( (unsigned int)v53 <= 0x2F )
            {
              v55 = (unsigned int)(v50 + 32);
              *v77 = v55;
              v56 = *(_QWORD *)(v51 + v53);
              if ( (unsigned int)v55 <= 0x2F )
              {
                v57 = (_QWORD *)(v55 + v51);
                *v77 = v50 + 40;
                goto LABEL_68;
              }
              v57 = (_QWORD *)*((_QWORD *)v77 + 1);
LABEL_108:
              *((_QWORD *)v77 + 1) = v57 + 1;
LABEL_68:
              if ( *v57 != v56 && v54 == 20 )
              {
                revert_ida_decisions();
                auto_mark_range();
              }
              return 0;
            }
            v75 = (__int64 *)*((_QWORD *)v77 + 1);
LABEL_107:
            v57 = v75 + 1;
            *((_QWORD *)v77 + 1) = v75 + 1;
            v56 = *v75;
            goto LABEL_108;
          }
          v74 = (_DWORD *)*((_QWORD *)v77 + 1);
LABEL_106:
          v75 = (__int64 *)(v74 + 2);
          *((_QWORD *)v77 + 1) = v74 + 2;
          v54 = *v74;
          goto LABEL_107;
        }
        v73 = *((_QWORD *)v77 + 1);
      }
      v74 = (_DWORD *)(v73 + 8);
      *((_QWORD *)v77 + 1) = v73 + 8;
      goto LABEL_106;
    case 49LL:
      v28 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v29 = (__int64 *)(*(_QWORD *)(a3 + 16) + v28);
        *(_DWORD *)a3 = v28 + 8;
      }
      else
      {
        v29 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v29 + 1;
      }
      sub_21740(*(_QWORD *)(a1 + 16), *v29);
      return 0;
    case 51LL:
      v30 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v67 = *(__int64 **)(a3 + 8);
        v34 = v67 + 1;
        *(_QWORD *)(a3 + 8) = v67 + 1;
        v33 = *v67;
      }
      else
      {
        v31 = *(_QWORD *)(a3 + 16);
        v32 = v30 + 8;
        *(_DWORD *)a3 = v32;
        v33 = *(_QWORD *)(v31 + v30);
        if ( (unsigned int)v32 <= 0x2F )
        {
          v34 = (_QWORD *)(v32 + v31);
          *(_DWORD *)a3 = v30 + 16;
          goto LABEL_43;
        }
        v34 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v34 + 1;
LABEL_43:
      sub_33880(*(_QWORD *)(a1 + 16), v33, *v34);
      return 0;
    case 52LL:
      v22 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v23 = *(__int64 **)(a3 + 8);
        v24 = (const char **)(v23 + 1);
        *(_QWORD *)(a3 + 8) = v23 + 1;
        v25 = *v23;
LABEL_34:
        v26 = v24 + 1;
        *(_QWORD *)(a3 + 8) = v24 + 1;
        v27 = *v24;
LABEL_35:
        *(_QWORD *)(a3 + 8) = v26 + 2;
        goto LABEL_36;
      }
      v68 = *(_QWORD *)(a3 + 16);
      v69 = v22 + 8;
      *(_DWORD *)a3 = v69;
      v25 = *(_QWORD *)(v68 + v22);
      if ( (unsigned int)v69 > 0x2F )
      {
        v24 = *(const char ***)(a3 + 8);
        goto LABEL_34;
      }
      v70 = v22 + 16;
      *(_DWORD *)a3 = v70;
      v27 = *(const char **)(v68 + v69);
      if ( (unsigned int)v70 > 0x2F )
      {
        v26 = *(_DWORD **)(a3 + 8);
        goto LABEL_35;
      }
      v26 = (_DWORD *)(v70 + v68);
      *(_DWORD *)a3 = v22 + 24;
LABEL_36:
      sub_25180(v25, v27, *v26 != 0, 0);
      return 0;
    case 53LL:
      v49 = *(_QWORD *)(a1 + 16);
      sub_42ED0(*(_QWORD **)(v49 + 584));
      *(_QWORD *)(v49 + 584) = 0;
      *(_QWORD *)(v49 + 592) = v49 + 576;
      *(_QWORD *)(v49 + 600) = v49 + 576;
      *(_QWORD *)(v49 + 608) = 0;
      return 0;
    default:
      v7 = a2 - 32;
      if ( (unsigned __int64)(a2 - 32) <= 0x20 )
      {
LABEL_3:
        v8 = 0x1000006ADLL;
        if ( _bittest64(&v8, v7) )
          invalidate_regfinder_cache();
      }
      return 0;
  }
}
