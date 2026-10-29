__int64 __fastcall sub_BA7530(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 (*v6)(); // rax
  __int64 (*v7)(); // rax
  __int64 (*v8)(); // rax
  __int64 v9; // rax
  __int64 (*v10)(); // rdx
  __int64 v11; // rax
  __int64 (*v12)(); // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // r13
  __int64 v15; // rax
  __int64 (*v16)(); // rdx
  __int64 (*v17)(); // rdx
  __int64 (*v18)(); // rax
  __int64 v19; // rax
  __int64 (*v20)(); // rdx
  __int64 (*v21)(void); // rax
  _QWORD *v22; // rax
  __int64 (*v23)(); // rax
  __int64 v24; // rax
  __int64 (*v25)(); // rdx
  _QWORD *v26; // r12
  _QWORD *v27; // r13
  __int64 v28; // rax
  __int64 (*v29)(); // rdx
  _QWORD *v30; // r12
  _QWORD *v31; // r13
  __int64 (*v32)(); // rdx
  __int64 v33; // rax
  __int64 (*v34)(); // rdx
  __int64 (*v35)(); // rdx
  __int64 (*v36)(); // rax
  _QWORD *v37; // r12
  _QWORD *mm; // r13
  __int64 v39; // rax
  __int64 (*v40)(); // rdx
  __int64 (*v41)(); // rax
  _QWORD *v42; // rax
  __int64 (*v43)(); // rax
  __int64 (*v44)(); // rdx
  __int64 (*v45)(); // rax
  __int64 (*v46)(); // rax
  _QWORD *v47; // r12
  _QWORD *kk; // r13
  __int64 (*v49)(); // rax
  __int64 (*v50)(); // rax
  _QWORD *v51; // rax
  __int64 (*v52)(); // rax
  __int64 v53; // rax
  __int64 (*v54)(); // rdx
  __int64 (*v55)(); // rdx
  __int64 (*v56)(); // rdx
  __int64 v57; // rax
  __int64 (*v58)(); // rdx
  __int64 (*v59)(); // rdx
  __int64 (*v60)(); // rdx
  __int64 (*v61)(void); // rax
  __int64 (*v62)(); // rax
  _QWORD *v63; // r12
  _QWORD *jj; // r13
  __int64 (*v65)(); // rdx
  __int64 v66; // rax
  __int64 (*v67)(); // rdx
  __int64 (*v68)(); // rax
  _QWORD *v69; // r12
  _QWORD *ii; // r13
  __int64 (*v71)(); // rax
  _QWORD *v72; // r12
  _QWORD *j; // r13
  __int64 (*v74)(); // rdx
  __int64 (*v75)(); // rdx
  __int64 (*v76)(); // rax
  __int64 (*v77)(); // rdx
  __int64 (*v78)(); // rax
  _QWORD *v79; // r12
  _QWORD *i; // r13
  __int64 (*v81)(); // rdx
  __int64 (*v82)(); // rdx
  __int64 v83; // rax
  __int64 (*v84)(); // rdx
  __int64 (*v85)(); // rax
  _QWORD *v86; // r12
  _QWORD *m; // r13
  __int64 (*v88)(); // rax
  _QWORD *v89; // r12
  _QWORD *k; // r13
  __int64 v91; // rax
  __int64 (*v92)(); // rdx
  __int64 v93; // rax
  __int64 (*v94)(); // rdx
  __int64 (*v95)(); // rax
  _QWORD *v96; // r12
  _QWORD *n; // r13
  __int64 (*v98)(); // rdx
  __int64 (*v99)(); // rdx
  __int64 (*v100)(); // rdx
  _QWORD *v101; // r12
  _QWORD *v102; // rbp
  _QWORD *v103; // r12
  _QWORD *v104; // rbp
  _QWORD *v105; // r12
  _QWORD *v106; // rbp
  _QWORD *v107; // r12
  _QWORD *v108; // rbp
  _QWORD *v109; // r12
  _QWORD *v110; // rbp
  _QWORD *v111; // r12
  _QWORD *v112; // rbp
  _QWORD *v113; // r12
  _QWORD *v114; // rbp
  _QWORD *v115; // r12
  _QWORD *v116; // rbp
  _QWORD *v117; // r12
  _QWORD *v118; // rbp
  _QWORD *v119; // r12
  _QWORD *v120; // rbp
  _QWORD *v121; // r12
  _QWORD *v122; // r13
  _QWORD *v123; // r12
  _QWORD *v124; // r13
  _QWORD *v125; // r12
  _QWORD *v126; // r13
  _QWORD *v127; // r12
  _QWORD *v128; // rbp
  _QWORD *v129; // r12
  _QWORD *v130; // r13
  _QWORD *v131; // r12
  _QWORD *v132; // rbp

  if ( !a2 )
    return 1;
  switch ( *(_WORD *)(a2 + 36) )
  {
    case 0:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 == sub_BA1B90 )
        return 1;
      return v6();
    case 1:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(__int64 *, __int64))v8)(a1, a2);
      return 1;
    case 2:
      v78 = *(__int64 (**)())(*a1 + 208);
      if ( v78 != sub_BA1B90 && !(unsigned __int8)v78() )
        return 0;
      v79 = *(_QWORD **)(a2 + 64);
      for ( i = &v79[*(unsigned int *)(a2 + 56)]; i != v79; ++v79 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v79) )
          return 0;
      }
      v113 = *(_QWORD **)(a2 + 80);
      v114 = &v113[*(unsigned int *)(a2 + 72)];
      if ( v113 == v114 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v113) )
      {
        if ( v114 == ++v113 )
          return 1;
      }
      return 0;
    case 3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 7:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 8:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 9:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64))v7)(a1, a2, a3, a4);
      return 1;
    case 0xA:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(__int64 *, __int64))v8)(a1, a2);
      return 1;
    case 0xC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xD:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xF:
      v9 = *a1;
      v77 = *(__int64 (**)())(*a1 + 208);
      if ( v77 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v77() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x10:
      v76 = *(__int64 (**)())(*a1 + 208);
      if ( v76 != sub_BA1B90 && !(unsigned __int8)v76() )
        return 0;
      v22 = *(_QWORD **)(a2 + 40);
      if ( !v22 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
    case 0x11:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, __int64))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x12:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x13:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x14:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x15:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64))v7)(a1, a2, a3, a4);
      return 1;
    case 0x16:
      v9 = *a1;
      v75 = *(__int64 (**)())(*a1 + 208);
      if ( v75 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v75() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x17:
      v9 = *a1;
      v74 = *(__int64 (**)())(*a1 + 208);
      if ( v74 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v74() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x18:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x19:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x1A:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x1B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1D:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x1E:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x1F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x20:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x21:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x22:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x23:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x24:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x25:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x26:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x27:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x28:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x29:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x2A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x2B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x2C:
      v9 = *a1;
      v82 = *(__int64 (**)())(*a1 + 208);
      if ( v82 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v82() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x2D:
      v9 = *a1;
      v81 = *(__int64 (**)())(*a1 + 208);
      if ( v81 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      result = v81();
      if ( !(_BYTE)result )
        return result;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x2E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x2F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x30:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x31:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x32:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x33:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x34:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x35:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x36:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x37:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x38:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x39:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x3A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x3B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x3C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x3D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x3E:
      v9 = *a1;
      v55 = *(__int64 (**)())(*a1 + 208);
      if ( v55 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v55() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x3F:
      v9 = *a1;
      v100 = *(__int64 (**)())(*a1 + 208);
      if ( v100 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v100() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x40:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x41:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x42:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x43:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x44:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x45:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x46:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x47:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x48:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x49:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x4A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x4B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x4C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x4D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x4E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x4F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x50:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x51:
      v9 = *a1;
      v99 = *(__int64 (**)())(*a1 + 208);
      if ( v99 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v99() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x52:
      v9 = *a1;
      v98 = *(__int64 (**)())(*a1 + 208);
      if ( v98 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v98() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x53:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x54:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x55:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x56:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x57:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x58:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x59:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x5A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x5B:
      v71 = *(__int64 (**)())(*a1 + 208);
      if ( v71 != sub_BA1B90 && !(unsigned __int8)v71() )
        return 0;
      v72 = *(_QWORD **)(a2 + 64);
      for ( j = &v72[*(unsigned int *)(a2 + 56)]; j != v72; ++v72 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v72) )
          return 0;
      }
      v107 = *(_QWORD **)(a2 + 80);
      v108 = &v107[*(unsigned int *)(a2 + 72)];
      if ( v107 == v108 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v107) )
      {
        if ( v108 == ++v107 )
          return 1;
      }
      return 0;
    case 0x5C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x5D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x5E:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x5F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x60:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x61:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x62:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x63:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x64:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x65:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x66:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x67:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x68:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x69:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x6A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x6B:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x6C:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x6D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x6E:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x6F:
      v93 = *a1;
      v94 = *(__int64 (**)())(*a1 + 208);
      if ( v94 == sub_BA1B90 )
        goto LABEL_896;
      if ( (unsigned __int8)v94() )
      {
        v93 = *a1;
LABEL_896:
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v93 + 96))(a1, *(_QWORD *)(a2 + 40)) )
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48));
      }
      return 0;
    case 0x70:
      v91 = *a1;
      v92 = *(__int64 (**)())(*a1 + 208);
      if ( v92 == sub_BA1B90 )
        goto LABEL_892;
      if ( (unsigned __int8)v92() )
      {
        v91 = *a1;
LABEL_892:
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v91 + 96))(a1, *(_QWORD *)(a2 + 40))
          && (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48)) )
        {
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 56));
        }
      }
      return 0;
    case 0x71:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x72:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x73:
      v83 = *a1;
      v84 = *(__int64 (**)())(*a1 + 208);
      if ( v84 == sub_BA1B90 )
        goto LABEL_875;
      if ( (unsigned __int8)v84() )
      {
        v83 = *a1;
LABEL_875:
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v83 + 96))(a1, *(_QWORD *)(a2 + 40)) )
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48));
      }
      return 0;
    case 0x74:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x75:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x76:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x77:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x78:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x79:
      v88 = *(__int64 (**)())(*a1 + 208);
      if ( v88 != sub_BA1B90 && !(unsigned __int8)v88() )
        return 0;
      v89 = *(_QWORD **)(a2 + 48);
      for ( k = &v89[*(unsigned int *)(a2 + 40)]; k != v89; ++v89 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v89) )
          return 0;
      }
      v117 = *(_QWORD **)(a2 + 64);
      v118 = &v117[*(unsigned int *)(a2 + 56)];
      if ( v117 == v118 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v117) )
      {
        if ( v118 == ++v117 )
          return 1;
      }
      return 0;
    case 0x7A:
      v85 = *(__int64 (**)())(*a1 + 208);
      if ( v85 != sub_BA1B90 && !(unsigned __int8)v85() )
        return 0;
      v86 = *(_QWORD **)(a2 + 48);
      for ( m = &v86[*(unsigned int *)(a2 + 40)]; m != v86; ++v86 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v86) )
          return 0;
      }
      v109 = *(_QWORD **)(a2 + 64);
      v110 = &v109[*(unsigned int *)(a2 + 56)];
      if ( v109 == v110 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v109) )
      {
        if ( v110 == ++v109 )
          return 1;
      }
      return 0;
    case 0x7B:
      v95 = *(__int64 (**)())(*a1 + 208);
      if ( v95 != sub_BA1B90 && !(unsigned __int8)v95() )
        return 0;
      v96 = *(_QWORD **)(a2 + 48);
      for ( n = &v96[*(unsigned int *)(a2 + 40)]; n != v96; ++v96 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v96) )
          return 0;
      }
      v111 = *(_QWORD **)(a2 + 64);
      v112 = &v111[*(unsigned int *)(a2 + 56)];
      if ( v111 == v112 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v111) )
      {
        if ( v112 == ++v111 )
          return 1;
      }
      return 0;
    case 0x7C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x7D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x7E:
      v52 = *(__int64 (**)())(*a1 + 208);
      if ( v52 != sub_BA1B90 && !(unsigned __int8)v52() )
        return 0;
      v51 = *(_QWORD **)(a2 + 40);
      if ( *(_BYTE *)(a2 + 39) )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( v51 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *, __int64, __int64))(*a1 + 136))(
                 a1,
                 *v51,
                 v51 + 1,
                 a4,
                 a5);
      return 1;
    case 0x7F:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x80:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x81:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x82:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x83:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x84:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x85:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x86:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x87:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x88:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x89:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x8A:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x8B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x8C:
      v68 = *(__int64 (**)())(*a1 + 208);
      if ( v68 != sub_BA1B90 && !(unsigned __int8)v68() )
        return 0;
      v69 = *(_QWORD **)(a2 + 48);
      for ( ii = &v69[*(unsigned int *)(a2 + 40)]; ii != v69; ++v69 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v69) )
          return 0;
      }
      v115 = *(_QWORD **)(a2 + 64);
      v116 = &v115[*(unsigned int *)(a2 + 56)];
      if ( v115 == v116 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v115) )
      {
        if ( v116 == ++v115 )
          return 1;
      }
      return 0;
    case 0x8D:
      v66 = *a1;
      v67 = *(__int64 (**)())(*a1 + 208);
      if ( v67 == sub_BA1B90 )
        goto LABEL_643;
      if ( !(unsigned __int8)v67() )
        return 0;
      v66 = *a1;
LABEL_643:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v66 + 96))(a1, *(_QWORD *)(a2 + 40)) )
        return 0;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48));
    case 0x8E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x8F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x90:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x91:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x92:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x93:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x94:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x95:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x96:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x97:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x98:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x99:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x9A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x9B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x9C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x9D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x9E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x9F:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xA0:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xA1:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xA2:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xA3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xA4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xA5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xA6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xA7:
      v53 = *a1;
      v54 = *(__int64 (**)())(*a1 + 208);
      if ( v54 == sub_BA1B90 )
        goto LABEL_468;
      if ( (unsigned __int8)v54() )
      {
        v53 = *a1;
LABEL_468:
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v53 + 96))(a1, *(_QWORD *)(a2 + 40))
          && (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48)) )
        {
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 56));
        }
      }
      return 0;
    case 0xA8:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xA9:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xAA:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xAB:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xAC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xAD:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xAE:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xAF:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB0:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xB1:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xB2:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB3:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xB4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB7:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB8:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xB9:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xBA:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xBB:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xBC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xBD:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xBE:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xBF:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC0:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC1:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC2:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC4:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xC5:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xC6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC7:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xC8:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xC9:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xCA:
      v9 = *a1;
      v60 = *(__int64 (**)())(*a1 + 208);
      if ( v60 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v60() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0xCB:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xCC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xCD:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xCE:
      v9 = *a1;
      v59 = *(__int64 (**)())(*a1 + 208);
      if ( v59 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v59() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0xCF:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xD0:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xD1:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xD2:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xD3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xD4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xD5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xD6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xD7:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xD8:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xD9:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xDA:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xDB:
      v57 = *a1;
      v58 = *(__int64 (**)())(*a1 + 208);
      if ( v58 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v57 + 96))(a1, *(_QWORD *)(a2 + 56));
      if ( !(unsigned __int8)v58() )
        return 0;
      v57 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v57 + 96))(a1, *(_QWORD *)(a2 + 56));
    case 0xDC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xDD:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xDE:
      v9 = *a1;
      v56 = *(__int64 (**)())(*a1 + 208);
      if ( v56 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v56() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0xDF:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE0:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE1:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE2:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE7:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE8:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xE9:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xEA:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xEB:
      v61 = *(__int64 (**)(void))(*a1 + 208);
      if ( v61 != sub_BA1B90 )
      {
        result = v61();
        if ( !(_BYTE)result )
          return result;
      }
      v22 = *(_QWORD **)(a2 + 40);
      if ( v22 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
      return 1;
    case 0xEC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xED:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xEE:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xEF:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xF0:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xF1:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xF2:
      v9 = *a1;
      v65 = *(__int64 (**)())(*a1 + 208);
      if ( v65 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v65() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0xF3:
      v62 = *(__int64 (**)())(*a1 + 208);
      if ( v62 != sub_BA1B90 && !(unsigned __int8)v62() )
        return 0;
      v63 = *(_QWORD **)(a2 + 48);
      for ( jj = &v63[*(unsigned int *)(a2 + 40)]; jj != v63; ++v63 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v63) )
          return 0;
      }
      v103 = *(_QWORD **)(a2 + 64);
      v104 = &v103[*(unsigned int *)(a2 + 56)];
      if ( v103 == v104 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v103) )
      {
        if ( v104 == ++v103 )
          return 1;
      }
      return 0;
    case 0xF4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xF5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xF6:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0xF7:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0xF8:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xF9:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0xFA:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xFB:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xFC:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xFD:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xFE:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0xFF:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x100:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x101:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x102:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x103:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x104:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x105:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x106:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x107:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x108:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x109:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x10A:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x10B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x10C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x10D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x10E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x10F:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x110:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x111:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x112:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x113:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x114:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x115:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x116:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x117:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x118:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x119:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x11A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x11B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x11C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x11D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x11E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x11F:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x120:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x121:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x122:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x123:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x124:
      v33 = *a1;
      v34 = *(__int64 (**)())(*a1 + 208);
      if ( v34 == sub_BA1B90 )
        goto LABEL_205;
      if ( (unsigned __int8)v34() )
      {
        v33 = *a1;
LABEL_205:
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v33 + 96))(a1, *(_QWORD *)(a2 + 48)) )
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 56));
      }
      return 0;
    case 0x125:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x126:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x127:
      v15 = *a1;
      v32 = *(__int64 (**)())(*a1 + 208);
      if ( v32 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v15 + 96))(a1, *(_QWORD *)(a2 + 48));
      if ( !(unsigned __int8)v32() )
        return 0;
      v15 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v15 + 96))(a1, *(_QWORD *)(a2 + 48));
    case 0x128:
      v28 = *a1;
      v29 = *(__int64 (**)())(*a1 + 208);
      if ( v29 == sub_BA1B90 )
        goto LABEL_186;
      if ( !(unsigned __int8)v29() )
        return 0;
      v28 = *a1;
LABEL_186:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v28 + 96))(a1, *(_QWORD *)(a2 + 40)) )
        return 0;
      v30 = *(_QWORD **)(a2 + 64);
      v31 = &v30[*(unsigned int *)(a2 + 56)];
      if ( v30 == v31 )
        goto LABEL_1116;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v30) )
          return 0;
        ++v30;
      }
      while ( v31 != v30 );
LABEL_1116:
      v123 = *(_QWORD **)(a2 + 80);
      v124 = &v123[*(unsigned int *)(a2 + 72)];
      if ( v123 == v124 )
      {
LABEL_1132:
        v127 = *(_QWORD **)(a2 + 96);
        v128 = &v127[*(unsigned int *)(a2 + 88)];
        if ( v127 == v128 )
          return 1;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v127) )
        {
          if ( v128 == ++v127 )
            return 1;
        }
        return 0;
      }
      else
      {
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v123) )
        {
          if ( v124 == ++v123 )
            goto LABEL_1132;
        }
        return 0;
      }
    case 0x129:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x12A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x12B:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x12C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x12D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x12E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x12F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x130:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x131:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x132:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x133:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x134:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x135:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x136:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x137:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x138:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x139:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x13A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x13B:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x13C:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x13D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x13E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x13F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x140:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x141:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x142:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x143:
      v50 = *(__int64 (**)())(*a1 + 208);
      if ( v50 != sub_BA1B90 && !(unsigned __int8)v50() )
        return 0;
      v51 = *(_QWORD **)(a2 + 40);
      if ( !v51 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *, __int64, __int64))(*a1 + 136))(
               a1,
               *v51,
               v51 + 1,
               a4,
               a5);
    case 0x144:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x145:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x146:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x147:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x148:
      v49 = *(__int64 (**)())(*a1 + 208);
      if ( v49 != sub_BA1B90 && !(unsigned __int8)v49() )
        return 0;
      v22 = *(_QWORD **)(a2 + 40);
      if ( !v22 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
    case 0x149:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x14A:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x14B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x14C:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x14D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x14E:
      v43 = *(__int64 (**)())(*a1 + 208);
      if ( v43 != sub_BA1B90 && !(unsigned __int8)v43() )
        return 0;
      v22 = *(_QWORD **)(a2 + 40);
      if ( !v22 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
    case 0x14F:
      v45 = *(__int64 (**)())(*a1 + 208);
      if ( v45 != sub_BA1B90 && !(unsigned __int8)v45() )
        return 0;
      v22 = *(_QWORD **)(a2 + 40);
      if ( !v22 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
    case 0x150:
      v9 = *a1;
      v44 = *(__int64 (**)())(*a1 + 208);
      if ( v44 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v44() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x151:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x152:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x153:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x154:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x155:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x156:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x157:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x158:
      v46 = *(__int64 (**)())(*a1 + 208);
      if ( v46 != sub_BA1B90 && !(unsigned __int8)v46() )
        return 0;
      v47 = *(_QWORD **)(a2 + 48);
      for ( kk = &v47[*(unsigned int *)(a2 + 40)]; kk != v47; ++v47 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v47) )
          return 0;
      }
      v105 = *(_QWORD **)(a2 + 64);
      v106 = &v105[*(unsigned int *)(a2 + 56)];
      if ( v105 == v106 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v105) )
      {
        if ( v106 == ++v105 )
          return 1;
      }
      return 0;
    case 0x159:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x15A:
      v39 = *a1;
      v40 = *(__int64 (**)())(*a1 + 208);
      if ( v40 == sub_BA1B90 )
        goto LABEL_288;
      if ( (unsigned __int8)v40() )
      {
        v39 = *a1;
LABEL_288:
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v39 + 96))(a1, *(_QWORD *)(a2 + 40))
          && (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48)) )
        {
          return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 56));
        }
      }
      return 0;
    case 0x15B:
      v36 = *(__int64 (**)())(*a1 + 208);
      if ( v36 != sub_BA1B90 && !(unsigned __int8)v36() )
        return 0;
      v37 = *(_QWORD **)(a2 + 48);
      for ( mm = &v37[*(unsigned int *)(a2 + 40)]; mm != v37; ++v37 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v37) )
          return 0;
      }
      v101 = *(_QWORD **)(a2 + 64);
      v102 = &v101[*(unsigned int *)(a2 + 56)];
      if ( v101 == v102 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v101) )
      {
        if ( v102 == ++v101 )
          return 1;
      }
      return 0;
    case 0x15C:
      v9 = *a1;
      v35 = *(__int64 (**)())(*a1 + 208);
      if ( v35 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v35() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x15D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x15E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x15F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x160:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x161:
      v41 = *(__int64 (**)())(*a1 + 208);
      if ( v41 != sub_BA1B90 && !(unsigned __int8)v41() )
        return 0;
      v42 = *(_QWORD **)(a2 + 40);
      if ( !v42 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *, __int64))(*a1 + 136))(a1, *v42, v42 + 1, a4);
    case 0x162:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x163:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x164:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x165:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x166:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x167:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x168:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x169:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x16A:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x16B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x16C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x16D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x16E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x16F:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x170:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x171:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x172:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x173:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x174:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x175:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x176:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x177:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x178:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x179:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x17A:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x17B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x17C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x17D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x17E:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x17F:
      v24 = *a1;
      v25 = *(__int64 (**)())(*a1 + 208);
      if ( v25 == sub_BA1B90 )
        goto LABEL_131;
      if ( !(unsigned __int8)v25() )
        return 0;
      v24 = *a1;
LABEL_131:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v24 + 96))(a1, *(_QWORD *)(a2 + 40)) )
        return 0;
      v26 = *(_QWORD **)(a2 + 56);
      v27 = &v26[*(unsigned int *)(a2 + 48)];
      if ( v26 == v27 )
        goto LABEL_1039;
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v26) )
          return 0;
        ++v26;
      }
      while ( v27 != v26 );
LABEL_1039:
      v119 = *(_QWORD **)(a2 + 72);
      v120 = &v119[*(unsigned int *)(a2 + 64)];
      if ( v119 == v120 )
        return 1;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v119) )
      {
        if ( v120 == ++v119 )
          return 1;
      }
      return 0;
    case 0x180:
      v23 = *(__int64 (**)())(*a1 + 208);
      if ( v23 != sub_BA1B90 && !(unsigned __int8)v23() )
        return 0;
      v22 = *(_QWORD **)(a2 + 48);
      if ( !v22 )
        return 1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
    case 0x181:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x182:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x183:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x184:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x185:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x186:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x187:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x188:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x189:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x18A:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x18B:
      v21 = *(__int64 (**)(void))(*a1 + 208);
      if ( v21 != sub_BA1B90 )
      {
        result = v21();
        if ( !(_BYTE)result )
          return result;
      }
      v22 = *(_QWORD **)(a2 + 40);
      if ( v22 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v22, v22 + 1);
      return 1;
    case 0x18C:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x18D:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
      return 1;
    case 0x18E:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x18F:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x190:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x191:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x192:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x193:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x194:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x195:
      v19 = *a1;
      v20 = *(__int64 (**)())(*a1 + 208);
      if ( v20 == sub_BA1B90 )
        goto LABEL_83;
      if ( !(unsigned __int8)v20() )
        return 0;
      v19 = *a1;
LABEL_83:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v19 + 96))(a1, *(_QWORD *)(a2 + 40))
        || !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 48)) )
      {
        return 0;
      }
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *(_QWORD *)(a2 + 56));
    case 0x196:
      v18 = *(__int64 (**)())(*a1 + 208);
      if ( v18 == sub_BA1B90 )
        return 1;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18)(a1, a2, a3, a4, a5);
    case 0x197:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x198:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x199:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x19A:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x19B:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x19C:
      v9 = *a1;
      v17 = *(__int64 (**)())(*a1 + 208);
      if ( v17 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v17() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x19D:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x19E:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x19F:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x1A0:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1A1:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1A2:
      v15 = *a1;
      v16 = *(__int64 (**)())(*a1 + 208);
      if ( v16 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v15 + 96))(a1, *(_QWORD *)(a2 + 48));
      if ( !(unsigned __int8)v16() )
        return 0;
      v15 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v15 + 96))(a1, *(_QWORD *)(a2 + 48));
    case 0x1A3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1A4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1A5:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1A6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1A7:
      v11 = *a1;
      v12 = *(__int64 (**)())(*a1 + 208);
      if ( v12 == sub_BA1B90 )
        goto LABEL_42;
      if ( !(unsigned __int8)v12() )
        return 0;
      v11 = *a1;
LABEL_42:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v11 + 96))(a1, *(_QWORD *)(a2 + 48)) )
        return 0;
      v13 = *(_QWORD **)(a2 + 64);
      v14 = &v13[*(unsigned int *)(a2 + 56)];
      if ( v13 == v14 )
        goto LABEL_1080;
      break;
    case 0x1A8:
      v9 = *a1;
      v10 = *(__int64 (**)())(*a1 + 208);
      if ( v10 == sub_BA1B90 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
      if ( !(unsigned __int8)v10() )
        return 0;
      v9 = *a1;
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v9 + 96))(a1, *(_QWORD *)(a2 + 40));
    case 0x1A9:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1AA:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
      return 1;
    case 0x1AB:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1AC:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 != sub_BA1B90 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
      return 1;
    case 0x1AD:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1AE:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1AF:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B0:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B1:
      v8 = *(__int64 (**)())(*a1 + 208);
      if ( v8 == sub_BA1B90 )
        return 1;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))v8)(a1, a2);
    case 0x1B2:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B3:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B4:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B5:
      v7 = *(__int64 (**)())(*a1 + 208);
      if ( v7 == sub_BA1B90 )
        return 1;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(a1, a2, a3, a4);
    case 0x1B6:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B7:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B8:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 != sub_BA1B90 )
        return v6();
      return 1;
    case 0x1B9:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 == sub_BA1B90 )
        return 1;
      return v6();
    case 0x1BA:
      v6 = *(__int64 (**)())(*a1 + 208);
      if ( v6 == sub_BA1B90 )
        return 1;
      return v6();
  }
  do
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v13) )
      return 0;
    ++v13;
  }
  while ( v14 != v13 );
LABEL_1080:
  v121 = *(_QWORD **)(a2 + 80);
  v122 = &v121[*(unsigned int *)(a2 + 72)];
  if ( v121 == v122 )
  {
LABEL_1127:
    v125 = *(_QWORD **)(a2 + 96);
    v126 = &v125[*(unsigned int *)(a2 + 88)];
    if ( v125 == v126 )
    {
LABEL_1137:
      v129 = *(_QWORD **)(a2 + 112);
      v130 = &v129[*(unsigned int *)(a2 + 104)];
      if ( v129 == v130 )
      {
LABEL_1142:
        v131 = *(_QWORD **)(a2 + 144);
        v132 = &v131[*(unsigned int *)(a2 + 136)];
        while ( 1 )
        {
          if ( v132 == v131 )
            return 1;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v131) )
            break;
          ++v131;
        }
        return 0;
      }
      else
      {
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v129) )
        {
          if ( v130 == ++v129 )
            goto LABEL_1142;
        }
        return 0;
      }
    }
    else
    {
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v125) )
      {
        if ( v126 == ++v125 )
          goto LABEL_1137;
      }
      return 0;
    }
  }
  else
  {
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 96))(a1, *v121) )
    {
      if ( v122 == ++v121 )
        goto LABEL_1127;
    }
    return 0;
  }
}

