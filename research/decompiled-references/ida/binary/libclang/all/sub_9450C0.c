__int64 __fastcall sub_9450C0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  void *v10; // r15
  bool v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // r12
  __int64 v14; // rbp
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int8 v19; // al
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r12
  __int16 v26; // ax
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r12
  __int16 v31; // ax
  __int64 v32; // rdi
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r12
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // r12
  void *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // r12
  void *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // r13
  __int64 v56; // rbp
  __int64 v57; // r12
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // rbx
  int v61; // eax
  unsigned int v62; // r13d
  bool v63; // al
  unsigned __int8 v64; // al
  __int64 v65; // r13
  __int64 v66; // r12
  __int64 v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rbx
  int v70; // eax
  unsigned int v71; // r13d
  bool v72; // al
  __int64 v73; // rdi
  __int64 v74; // r12
  char v75; // al
  __int64 v76; // rdi
  __int64 v77; // rcx
  int v78; // eax
  char v79; // r13
  char v80; // al
  char v81; // al
  char v82; // al
  char v83; // al
  char v84; // al
  char v85; // al
  char v86; // al
  char v87; // al
  char v88; // al
  unsigned __int8 v89; // [rsp+8h] [rbp-80h]
  unsigned __int8 v90; // [rsp+8h] [rbp-80h]
  unsigned __int8 v91; // [rsp+8h] [rbp-80h]
  unsigned __int8 v92; // [rsp+8h] [rbp-80h]
  unsigned int v93; // [rsp+8h] [rbp-80h]
  __int64 v94; // [rsp+8h] [rbp-80h]
  __int64 v95; // [rsp+8h] [rbp-80h]
  __int64 v96; // [rsp+8h] [rbp-80h]
  __int64 v97; // [rsp+8h] [rbp-80h]
  __int64 v98; // [rsp+8h] [rbp-80h]
  __int64 v99; // [rsp+8h] [rbp-80h]
  __int64 v100; // [rsp+8h] [rbp-80h]
  __int64 v101; // [rsp+8h] [rbp-80h]
  __int64 v102; // [rsp+8h] [rbp-80h]
  void *v103; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v104; // [rsp+18h] [rbp-70h]
  bool v105; // [rsp+1Ch] [rbp-6Ch]
  void *v106; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v107; // [rsp+28h] [rbp-60h]
  void *v108; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v109; // [rsp+38h] [rbp-50h]
  unsigned __int8 v110; // [rsp+43h] [rbp-45h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v13 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v15 = sub_915550(*(_QWORD *)(a1 + 568));
      v16 = *(_QWORD *)(a1 + 568);
      LOBYTE(v108) = v15;
      v17 = sub_A1A5A0(v16, 56);
      v18 = *(_DWORD *)(v17 + 48);
      if ( !v18 || v18 == 2 )
      {
        if ( !*(_QWORD *)(v17 + 24) )
          goto LABEL_23;
      }
      else if ( v18 != 3 && !*(_QWORD *)(v17 + 32) && !*(_QWORD *)v17 )
      {
        goto LABEL_23;
      }
      if ( (_BYTE)v108 )
      {
        v98 = v17;
        v84 = sub_9D4C70(v14, v13, v17);
        v17 = v98;
        if ( !v84 )
          return 0;
      }
LABEL_23:
      v19 = sub_93FBD0(v14, v13, (unsigned __int8 *)&v108, v17, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v20 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v21 = sub_915900(*(_QWORD *)(a1 + 568));
      v22 = *(_QWORD *)(a1 + 568);
      LOBYTE(v108) = v21;
      v23 = sub_A1A5A0(v22, 56);
      v24 = *(_DWORD *)(v23 + 48);
      if ( !v24 || v24 == 2 )
      {
        if ( !*(_QWORD *)(v23 + 24) )
          goto LABEL_32;
      }
      else if ( v24 != 3 && !*(_QWORD *)(v23 + 32) && !*(_QWORD *)v23 )
      {
        goto LABEL_32;
      }
      if ( (_BYTE)v108 )
      {
        v97 = v23;
        v83 = sub_9D4C70(v14, v20, v23);
        v23 = v97;
        if ( !v83 )
          return 0;
      }
LABEL_32:
      v19 = sub_93FF70(v14, v20, &v108, v23, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v25 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v26 = sub_915930(*(_QWORD *)(a1 + 568));
      v27 = *(_QWORD *)(a1 + 568);
      LOWORD(v108) = v26;
      v28 = sub_A1A5A0(v27, 56);
      v29 = *(_DWORD *)(v28 + 48);
      if ( !v29 || v29 == 2 )
      {
        if ( !*(_QWORD *)(v28 + 24) )
          goto LABEL_41;
      }
      else if ( v29 != 3 && !*(_QWORD *)(v28 + 32) && !*(_QWORD *)v28 )
      {
        goto LABEL_41;
      }
      if ( (_WORD)v108 )
      {
        v100 = v28;
        v86 = sub_9D4C70(v14, v25, v28);
        v28 = v100;
        if ( !v86 )
          return 0;
      }
LABEL_41:
      v19 = sub_9409F0(v14, v25, (unsigned __int16 *)&v108, v28, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v30 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v31 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v32 = *(_QWORD *)(a1 + 568);
      LOWORD(v108) = v31;
      v33 = sub_A1A5A0(v32, 56);
      v34 = *(_DWORD *)(v33 + 48);
      if ( !v34 || v34 == 2 )
      {
        if ( !*(_QWORD *)(v33 + 24) )
          goto LABEL_50;
      }
      else if ( v34 != 3 && !*(_QWORD *)(v33 + 32) && !*(_QWORD *)v33 )
      {
        goto LABEL_50;
      }
      if ( (_WORD)v108 )
      {
        v101 = v33;
        v87 = sub_9D4C70(v14, v30, v33);
        v33 = v101;
        if ( !v87 )
          return 0;
      }
LABEL_50:
      v19 = sub_940DB0(v14, v30, &v108, v33, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v35 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v36 = sub_915D10(*(_QWORD *)(a1 + 568));
      v37 = *(_QWORD *)(a1 + 568);
      LODWORD(v108) = v36;
      v38 = sub_A1A5A0(v37, 56);
      v39 = *(_DWORD *)(v38 + 48);
      if ( !v39 || v39 == 2 )
      {
        if ( !*(_QWORD *)(v38 + 24) )
          goto LABEL_59;
      }
      else if ( v39 != 3 && !*(_QWORD *)(v38 + 32) && !*(_QWORD *)v38 )
      {
        goto LABEL_59;
      }
      if ( (_DWORD)v108 )
      {
        v96 = v38;
        v82 = sub_9D4C70(v14, v35, v38);
        v38 = v96;
        if ( !v82 )
          return 0;
      }
LABEL_59:
      v19 = sub_941420(v14, v35, (unsigned int *)&v108, v38, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v40 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v41 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v42 = *(_QWORD *)(a1 + 568);
      LODWORD(v108) = v41;
      v43 = sub_A1A5A0(v42, 56);
      v44 = *(_DWORD *)(v43 + 48);
      if ( !v44 || v44 == 2 )
      {
        if ( !*(_QWORD *)(v43 + 24) )
          goto LABEL_68;
      }
      else if ( v44 != 3 && !*(_QWORD *)(v43 + 32) && !*(_QWORD *)v43 )
      {
        goto LABEL_68;
      }
      if ( (_DWORD)v108 )
      {
        v102 = v43;
        v88 = sub_9D4C70(v14, v40, v43);
        v43 = v102;
        if ( !v88 )
          return 0;
      }
LABEL_68:
      v19 = sub_9417C0(v14, v40, &v108, v43, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v45 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v46 = (void *)sub_9160F0(*(_QWORD *)(a1 + 568));
      v47 = *(_QWORD *)(a1 + 568);
      v108 = v46;
      v48 = sub_A1A5A0(v47, 56);
      v49 = *(_DWORD *)(v48 + 48);
      if ( !v49 || v49 == 2 )
      {
        if ( !*(_QWORD *)(v48 + 24) )
          goto LABEL_77;
      }
      else if ( v49 != 3 && !*(_QWORD *)(v48 + 32) && !*(_QWORD *)v48 )
      {
        goto LABEL_77;
      }
      if ( v108 )
      {
        v94 = v48;
        v80 = sub_9D4C70(v14, v45, v48);
        v48 = v94;
        if ( !v80 )
          return 0;
      }
LABEL_77:
      v19 = sub_9420E0(v14, v45, (__int64 *)&v108, v48, 0);
      if ( v19 )
        goto LABEL_87;
      return 0;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v50 = *(_QWORD *)(a1 + 792);
      v14 = a1 + 384;
      *(_QWORD *)(a1 + 800) = *a3;
      v51 = (void *)sub_9164A0(*(_QWORD *)(a1 + 568));
      v52 = *(_QWORD *)(a1 + 568);
      v108 = v51;
      v53 = sub_A1A5A0(v52, 56);
      v54 = *(_DWORD *)(v53 + 48);
      if ( !v54 || v54 == 2 )
      {
        if ( !*(_QWORD *)(v53 + 24) )
          goto LABEL_86;
      }
      else if ( v54 != 3 && !*(_QWORD *)(v53 + 32) && !*(_QWORD *)v53 )
      {
        goto LABEL_86;
      }
      if ( v108 )
      {
        v95 = v53;
        v81 = sub_9D4C70(v14, v50, v53);
        v53 = v95;
        if ( !v81 )
          return 0;
      }
LABEL_86:
      v19 = sub_942480(v14, v50, (unsigned __int64 *)&v108, v53, 0);
      if ( !v19 )
        return 0;
      goto LABEL_87;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v55 = *(_QWORD *)(a1 + 568);
      v56 = a1 + 384;
      v57 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v58 = sub_A1A5A0(v55, 16);
      v59 = *(_DWORD *)(v58 + 8);
      *(_DWORD *)(v58 + 8) = 0;
      v109 = v59;
      v108 = *(void **)v58;
      sub_A1A5E0(v55, 16);
      v60 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v61 = *(_DWORD *)(v60 + 48);
      if ( !v61 || v61 == 2 )
      {
        if ( !*(_QWORD *)(v60 + 24) )
          goto LABEL_97;
      }
      else if ( v61 != 3 && !*(_QWORD *)(v60 + 32) && !*(_QWORD *)v60 )
      {
        goto LABEL_97;
      }
      v62 = v109;
      if ( v109 <= 0x40 )
        v63 = v108 == nullptr;
      else
        v63 = v62 == (unsigned int)sub_2587400(&v108);
      if ( !v63 && !(unsigned __int8)sub_9D4C70(v56, v57, v60) )
      {
        result = 0;
        goto LABEL_110;
      }
LABEL_97:
      v64 = sub_942A60(v56, v57, (__int64)&v108, v60, 0);
      if ( v64 )
        goto LABEL_109;
      goto LABEL_98;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v65 = *(_QWORD *)(a1 + 568);
      v56 = a1 + 384;
      v66 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v67 = sub_A1A5A0(v65, 16);
      v68 = *(_DWORD *)(v67 + 8);
      *(_DWORD *)(v67 + 8) = 0;
      v109 = v68;
      v108 = *(void **)v67;
      sub_A1A5E0(v65, 16);
      v69 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v70 = *(_DWORD *)(v69 + 48);
      if ( !v70 || v70 == 2 )
      {
        if ( !*(_QWORD *)(v69 + 24) )
          goto LABEL_108;
      }
      else if ( v70 != 3 && !*(_QWORD *)(v69 + 32) && !*(_QWORD *)v69 )
      {
        goto LABEL_108;
      }
      v71 = v109;
      if ( v109 <= 0x40 )
        v72 = v108 == nullptr;
      else
        v72 = v71 == (unsigned int)sub_2587400(&v108);
      if ( !v72 && !(unsigned __int8)sub_9D4C70(v56, v66, v69) )
      {
        result = 0;
        goto LABEL_110;
      }
LABEL_108:
      v64 = sub_943380(v56, v66, (__int64)&v108, v69, 0);
      if ( !v64 )
        goto LABEL_98;
LABEL_109:
      v91 = v64;
      sub_8E94C0(v56);
      result = v91;
      goto LABEL_110;
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v73 = *(_QWORD *)(a1 + 568);
      v14 = a1 + 384;
      v74 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      v75 = sub_8F4170(v73);
      v76 = *(_QWORD *)(a1 + 568);
      LOBYTE(v108) = v75;
      v77 = sub_A1A5A0(v76, 56);
      v78 = *(_DWORD *)(v77 + 48);
      if ( !v78 || v78 == 2 )
      {
        if ( !*(_QWORD *)(v77 + 24) )
          goto LABEL_119;
      }
      else if ( v78 != 3 && !*(_QWORD *)(v77 + 32) && !*(_QWORD *)v77 )
      {
        goto LABEL_119;
      }
      if ( (_BYTE)v108 )
      {
        v99 = v77;
        v85 = sub_9D4C70(a1 + 384, v74, v77);
        v77 = v99;
        if ( !v85 )
          return 0;
      }
LABEL_119:
      v19 = sub_9439C0(a1 + 384, v74, &v108, v77, 0);
      if ( !v19 )
        return 0;
LABEL_87:
      v90 = v19;
      sub_8E94C0(v14);
      return v90;
    case 11:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v5 = *(_QWORD *)(a1 + 568);
      v6 = a1 + 384;
      v7 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v108, v5);
      v8 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
      v9 = *(_DWORD *)(v8 + 48);
      if ( !v9 || v9 == 2 )
      {
        if ( !*(_QWORD *)(v8 + 24) )
          goto LABEL_14;
      }
      else if ( v9 != 3 && !*(_QWORD *)(v8 + 32) && !*(_QWORD *)v8 )
      {
        goto LABEL_14;
      }
      v107 = v109;
      if ( v109 <= 0x40 )
      {
        v10 = v108;
LABEL_12:
        v11 = v10 == nullptr;
        goto LABEL_13;
      }
      v79 = v110 >> 5;
      sub_2585B30(&v106);
      v10 = v106;
      v104 = v107;
      v103 = v106;
      v105 = !(v79 & 1);
      if ( v107 <= 0x40 )
        goto LABEL_12;
      v93 = v107;
      v11 = (unsigned int)sub_2587400(&v103) == v93;
      if ( v10 )
        operator delete[](v10);
LABEL_13:
      if ( !v11 && !(unsigned __int8)sub_9D4C70(v6, v7, v8) )
      {
        result = 0;
        goto LABEL_110;
      }
LABEL_14:
      v12 = sub_944110(v6, v7, (__int64)&v108, v8, 0);
      if ( v12 )
      {
        v89 = v12;
        sub_8E94C0(v6);
        result = v89;
      }
      else
      {
LABEL_98:
        result = 0;
      }
LABEL_110:
      if ( v109 > 0x40 && v108 )
      {
        v92 = result;
        operator delete[](v108);
        return v92;
      }
      return result;
  }
}

