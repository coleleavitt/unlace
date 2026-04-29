__int64 __fastcall sub_B680(__int64 a1, __int64 a2, __int64 a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v9; // eax
  bool v10; // zf
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  _QWORD **v18; // rdx
  unsigned int v19; // edx
  __int64 *v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rcx
  char *v23; // rax
  unsigned __int8 *v24; // rdx
  int v25; // eax
  unsigned int v26; // edx
  __int64 *v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx
  _QWORD **v33; // rcx
  __int64 name_ea; // rax
  __int64 qword; // rbx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int *v40; // rdx
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rdx
  _QWORD **v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 *v48; // rcx
  unsigned int v49; // ecx
  __int64 *v50; // rbx
  __int64 *v51; // rbp
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 *v55; // rcx
  unsigned int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rsi
  _QWORD *v59; // rdi
  __int64 v60; // rcx
  unsigned __int8 **v61; // rdx
  unsigned int v62; // edx
  _DWORD *v63; // rcx
  unsigned int v64; // edx
  _DWORD *v65; // rcx
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // rdx
  _QWORD **v69; // rcx
  unsigned int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rdx
  __int64 *v75; // rcx
  __int64 *v76; // rdx
  _QWORD **v77; // rcx
  _QWORD *v78; // rcx
  __int64 v79; // rdx
  _QWORD **v80; // rcx
  __int64 v81; // rax
  __int64 v82; // [rsp+8h] [rbp-190h] BYREF
  __int128 v83; // [rsp+10h] [rbp-188h] BYREF
  __int64 v84; // [rsp+20h] [rbp-178h]
  __int64 v85; // [rsp+28h] [rbp-170h]
  __int64 v86; // [rsp+30h] [rbp-168h]
  char v87; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v88[4]; // [rsp+178h] [rbp-20h] BYREF

  v88[0] = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0LL:
      sub_B270((_QWORD *)a1);
      v53 = getinf(55);
      setinf(55, v53 | 0x10);
      return 0;
    case 1LL:
      v50 = (__int64 *)(a1 + 352);
      v51 = (__int64 *)(a1 + 5232);
      do
      {
        v52 = *v50++;
        qfree(v52);
        *(v50 - 1) = 0;
      }
      while ( v51 != v50 );
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = 0;
      return 0;
    case 2LL:
      v62 = *(_DWORD *)a3;
      if ( v62 > 0x2F )
      {
        v63 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v63 + 2;
      }
      else
      {
        v63 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v62);
        *(_DWORD *)a3 = v62 + 8;
      }
      *(_DWORD *)(a1 + 120) = *v63;
      v64 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v65 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v65 + 2;
      }
      else
      {
        v65 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v64);
        *(_DWORD *)a3 = v64 + 8;
      }
      if ( *v65 )
        return 0;
      v10 = *(_DWORD *)(a1 + 120) == 0;
LABEL_3:
      setinf_flag(3, 32, !v10);
      return 0;
    case 4LL:
      if ( (unsigned int)getinf(5) == 18
        && (netnode_check(&v82, "$ got", 0, 0), (unsigned __int8)netnode_exist(&v82))
        && (v81 = netnode_altval(v82, 0, 65), qword = node2ea(v81 - 1), qword != -1)
        || (name_ea = get_name_ea(-1, "start_ptr"), name_ea != -1) && (qword = get_qword(name_ea + 8), qword != -1) )
      {
        sub_8D70((__int64)"gp=%a\n", a4);
        set_default_sreg_value(0, 609, qword);
      }
      return 0;
    case 10LL:
      v45 = *(_DWORD *)a3;
      if ( v45 > 0x2F )
      {
        v48 = *(__int64 **)(a3 + 8);
        v47 = (__int64)(v48 + 1);
        *(_QWORD *)(a3 + 8) = v48 + 1;
      }
      else
      {
        v46 = v45;
        v47 = v45 + 8;
        v48 = (__int64 *)(*(_QWORD *)(a3 + 16) + v46);
        *(_DWORD *)a3 = v47;
      }
      return (int)sub_89C0(a1, *v48, v47, (__int64)v48);
    case 11LL:
      v41 = *(_DWORD *)a3;
      if ( v41 > 0x2F )
      {
        v44 = *(_QWORD ***)(a3 + 8);
        v43 = (__int64)(v44 + 1);
        *(_QWORD *)(a3 + 8) = v44 + 1;
      }
      else
      {
        v42 = v41;
        v43 = v41 + 8;
        v44 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v42);
        *(_DWORD *)a3 = v43;
      }
      if ( !(unsigned int)sub_9960(a1, *v44, v43, (__int64)v44) )
        return -1;
      return 1;
    case 12LL:
      v28 = *(_DWORD *)a3;
      if ( v28 > 0x2F )
      {
        v29 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v29 + 1;
      }
      else
      {
        v29 = (__int64 *)(*(_QWORD *)(a3 + 16) + v28);
        *(_DWORD *)a3 = v28 + 8;
      }
      sub_ADA0(*v29);
      return 1;
    case 13LL:
      v26 = *(_DWORD *)a3;
      if ( v26 > 0x2F )
      {
        v27 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v27 + 1;
      }
      else
      {
        v27 = (__int64 *)(*(_QWORD *)(a3 + 16) + v26);
        *(_DWORD *)a3 = v26 + 8;
      }
      sub_ADD0(a1, *v27);
      return 1;
    case 14LL:
      v70 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v75 = *(__int64 **)(a3 + 8);
        v74 = v75 + 1;
        *(_QWORD *)(a3 + 8) = v75 + 1;
        v73 = *v75;
      }
      else
      {
        v71 = *(_QWORD *)(a3 + 16);
        v72 = v70 + 8;
        *(_DWORD *)a3 = v72;
        v73 = *(_QWORD *)(v71 + v70);
        if ( (unsigned int)v72 <= 0x2F )
        {
          v74 = (__int64 *)(v72 + v71);
          *(_DWORD *)a3 = v70 + 16;
          goto LABEL_77;
        }
        v74 = *(__int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v74 + 1;
LABEL_77:
      sub_AB40(a1, v73, *v74);
      return 1;
    case 15LL:
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v79 = *(_QWORD *)(a3 + 8) + 8LL;
        *(_QWORD *)(a3 + 8) = v79;
      }
      else
      {
        *(_DWORD *)a3 = v49 + 8;
        if ( v49 + 8 <= 0x2F )
        {
          *(_DWORD *)a3 = v49 + 16;
          goto LABEL_52;
        }
        v79 = *(_QWORD *)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v79 + 8;
LABEL_52:
      nullsub_1();
      return 1;
    case 17LL:
      v66 = *(_DWORD *)a3;
      if ( v66 > 0x2F )
      {
        v69 = *(_QWORD ***)(a3 + 8);
        v68 = (__int64)(v69 + 1);
        *(_QWORD *)(a3 + 8) = v69 + 1;
      }
      else
      {
        v67 = v66;
        v68 = v66 + 8;
        v69 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v67);
        *(_DWORD *)a3 = v68;
      }
      sub_AB30(*v69, a2, v68, (__int64)v69);
      return 1;
    case 18LL:
      v30 = *(_DWORD *)a3;
      if ( v30 > 0x2F )
      {
        v33 = *(_QWORD ***)(a3 + 8);
        v32 = (__int64)(v33 + 1);
        *(_QWORD *)(a3 + 8) = v33 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 8;
        v33 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v31);
        *(_DWORD *)a3 = v32;
      }
      sub_A280(*v33, a2, v32, (__int64)v33);
      return 1;
    case 19LL:
      v56 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v80 = *(_QWORD ***)(a3 + 8);
        v61 = (unsigned __int8 **)(v80 + 1);
        *(_QWORD *)(a3 + 8) = v80 + 1;
        v59 = *v80;
      }
      else
      {
        v57 = *(_QWORD *)(a3 + 16);
        v58 = v56 + 8;
        *(_DWORD *)a3 = v58;
        v59 = *(_QWORD **)(v57 + v56);
        if ( (unsigned int)v58 <= 0x2F )
        {
          v60 = v56 + 16;
          v61 = (unsigned __int8 **)(v58 + v57);
          *(_DWORD *)a3 = v60;
          goto LABEL_63;
        }
        v61 = *(unsigned __int8 ***)(a3 + 8);
      }
      v60 = (__int64)(v61 + 1);
      *(_QWORD *)(a3 + 8) = v61 + 1;
LABEL_63:
      if ( !(unsigned __int8)sub_A200(v59, *v61, (__int64)v61, v60, a6, a7) )
        return -1;
      return 1;
    case 32LL:
      v36 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v78 = *(_QWORD **)(a3 + 8);
        v40 = (unsigned int *)(v78 + 1);
        *(_QWORD *)(a3 + 8) = v78 + 1;
        v39 = *v78;
      }
      else
      {
        v37 = *(_QWORD *)(a3 + 16);
        v38 = v36 + 8;
        *(_DWORD *)a3 = v38;
        v39 = *(_QWORD *)(v37 + v36);
        if ( (unsigned int)v38 <= 0x2F )
        {
          v40 = (unsigned int *)(v38 + v37);
          *(_DWORD *)a3 = v36 + 16;
          goto LABEL_40;
        }
        v40 = *(unsigned int **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v40 + 2;
LABEL_40:
      if ( (unsigned __int8)sub_9B30(v39, *v40) )
        return 1;
      else
        return -1;
    case 36LL:
      v54 = *(_DWORD *)a3;
      if ( v54 > 0x2F )
      {
        v55 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v55 + 1;
      }
      else
      {
        v55 = (__int64 *)(*(_QWORD *)(a3 + 16) + v54);
        *(_DWORD *)a3 = v54 + 8;
      }
      return (int)sub_9B10(*v55);
    case 37LL:
      v21 = *(_DWORD *)a3;
      if ( v21 > 0x2F )
      {
        v22 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v22 + 8;
      }
      else
      {
        v22 = *(_QWORD *)(a3 + 16) + v21;
        *(_DWORD *)a3 = v21 + 8;
      }
      if ( *(_QWORD *)(a1 + 216) != *(_QWORD *)(*(_QWORD *)v22 + 16LL) )
      {
        v84 = -1;
        v23 = &v87;
        v85 = 0;
        v86 = 0;
        v83 = -1;
        do
        {
          *(_WORD *)v23 = 0;
          v23 += 40;
          *((_WORD *)v23 - 19) = 0;
          *((_WORD *)v23 - 18) = 0;
          *((_DWORD *)v23 - 2) = 0;
          *((_WORD *)v23 - 17) = 0;
          *((_OWORD *)v23 - 2) = 0;
          *((_QWORD *)v23 - 2) = 0;
        }
        while ( v88 != (_QWORD *)v23 );
        if ( !(unsigned int)sub_89C0(a1, (__int64)&v83, (__int64)v88, 0) )
          return 0;
      }
      v24 = *(unsigned __int8 **)(a1 + 128);
      v25 = *v24 - 98;
      if ( *v24 == 98 )
      {
        v25 = v24[1] - 114;
        if ( v24[1] == 114 )
          v25 = v24[2] - 46;
      }
      return v25 == 0;
    case 43LL:
      v19 = *(_DWORD *)a3;
      if ( v19 > 0x2F )
      {
        v20 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v20 + 1;
      }
      else
      {
        v20 = (__int64 *)(*(_QWORD *)(a3 + 16) + v19);
        *(_DWORD *)a3 = v19 + 8;
      }
      return (int)sub_9B40(*v20);
    case 55LL:
      v12 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v76 = *(__int64 **)(a3 + 8);
        v77 = (_QWORD **)(v76 + 1);
        *(_QWORD *)(a3 + 8) = v76 + 1;
        v15 = *v76;
LABEL_83:
        v18 = v77 + 1;
        *(_QWORD *)(a3 + 8) = v77 + 1;
        v17 = *v77;
        goto LABEL_84;
      }
      v13 = *(_QWORD *)(a3 + 16);
      v14 = v12 + 8;
      *(_DWORD *)a3 = v14;
      v15 = *(_QWORD *)(v13 + v12);
      if ( (unsigned int)v14 > 0x2F )
      {
        v77 = *(_QWORD ***)(a3 + 8);
        goto LABEL_83;
      }
      v16 = v12 + 16;
      *(_DWORD *)a3 = v16;
      v17 = *(_QWORD **)(v13 + v14);
      if ( (unsigned int)v16 <= 0x2F )
      {
        v18 = (_QWORD **)(v16 + v13);
        *(_DWORD *)a3 = v12 + 24;
        goto LABEL_9;
      }
      v18 = *(_QWORD ***)(a3 + 8);
LABEL_84:
      *(_QWORD *)(a3 + 8) = v18 + 1;
LABEL_9:
      **v18 = -1;
      return (int)sub_9B00(v15, v17);
    case 86LL:
      v9 = sub_B0A0(*(_QWORD *)(a1 + 16));
      *(_DWORD *)(a1 + 120) = v9;
      v10 = v9 == 0;
      goto LABEL_3;
    default:
      return 0;
  }
}
