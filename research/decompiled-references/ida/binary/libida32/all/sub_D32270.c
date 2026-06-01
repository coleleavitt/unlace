__int64 __fastcall sub_D32270(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  unsigned int v7; // r13d
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  void *v16; // rax
  unsigned int v17; // r14d
  void *v18; // rax
  __int64 v19; // r12
  unsigned int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r13
  unsigned __int8 v24; // r14
  unsigned __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r12
  _BYTE *v28; // rbx
  __int64 v29; // rsi
  _BYTE *v30; // rbp
  __int64 v31; // r15
  __int64 v32; // r13
  unsigned __int16 v33; // r14
  unsigned __int64 v34; // rcx
  __int64 v35; // r15
  int v36; // r14d
  __int64 v37; // r14
  __int64 v38; // r13
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // r14
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  void *v53; // rax
  unsigned int v54; // r14d
  void *v55; // rax
  __int64 v56; // r14
  __int64 v57; // rax
  unsigned __int64 v58; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v59; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+18h] [rbp-A0h]
  _BYTE v62[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v63[104]; // [rsp+50h] [rbp-68h] BYREF

  v7 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(a1 + 1232);
        v23 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v22) )
          return 0;
        v24 = sub_CFEA20(*(_QWORD *)(a1 + 560));
        sub_E05440(a3);
        v25 = (char)v24;
        goto LABEL_16;
      }
      return v7;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(a1 + 1232);
        v23 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v22) )
          return 0;
        v24 = sub_CFF120(*(_QWORD *)(a1 + 560));
        sub_E05440(a3);
        v25 = v24;
LABEL_16:
        v58 = v25;
        v7 = sub_CDB1A0(v23, v22, v25);
        if ( !(_BYTE)v7 )
          return 0;
        v26 = sub_D8C630(a1 + 432, a4, a3, v58, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( !v24 )
          goto LABEL_38;
        goto LABEL_18;
      }
      return v7;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v31 = *(_QWORD *)(a1 + 1232);
        v32 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v31) )
          return 0;
        v33 = sub_CFF630(*(_QWORD *)(a1 + 560));
        sub_E05440(a3);
        v34 = (__int16)v33;
        goto LABEL_25;
      }
      return v7;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v31 = *(_QWORD *)(a1 + 1232);
        v32 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v31) )
          return 0;
        v33 = sub_CFFD50(*(_QWORD *)(a1 + 560));
        sub_E05440(a3);
        v34 = v33;
LABEL_25:
        v59 = v34;
        v7 = sub_CDB1A0(v32, v31, v34);
        if ( !(_BYTE)v7 )
          return 0;
        v26 = sub_D8C630(a1 + 432, a4, a3, v59, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( v33 )
        {
LABEL_18:
          v27 = *(_QWORD *)(a1 + 560);
          v28 = v63;
          v29 = v26;
          v30 = v62;
          sub_DFF430(v63, v29);
          goto LABEL_45;
        }
        goto LABEL_38;
      }
      return v7;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v35 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v35) )
          return 0;
        v36 = sub_CFFE60(*(_QWORD *)(a1 + 560));
        sub_E05440(a3);
        v7 = sub_CDB1A0(a1 + 384, v35, v36);
        if ( !(_BYTE)v7 )
          return 0;
        v26 = sub_D8C630(a1 + 432, a4, a3, v36, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( v36 )
          goto LABEL_44;
        goto LABEL_38;
      }
      return v7;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v37 = *(_QWORD *)(a1 + 1232);
        v38 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v37) )
          return 0;
        LODWORD(v60) = sub_D00570(*(_QWORD *)(a1 + 560));
        v39 = sub_E05440(a3);
        if ( !(unsigned __int8)sub_D0B300(v38, v37, (unsigned int *)&v60, v39, (unsigned __int8)a5) )
          goto LABEL_50;
        v7 = sub_CDB1A0(v38, v37, (unsigned int)v60);
        if ( !(_BYTE)v7 )
          return 0;
        v26 = sub_D8C630(a1 + 432, a4, a3, (unsigned int)v60, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( (_DWORD)v60 )
          goto LABEL_44;
        goto LABEL_38;
      }
      return v7;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v41 = *(_QWORD *)(a1 + 1232);
        v42 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v41) )
          return 0;
        v60 = sub_D00680(*(_QWORD *)(a1 + 560));
        v43 = sub_E05440(a3);
        if ( !(unsigned __int8)sub_D0B490(v42, v41, &v60, v43, (unsigned __int8)a5) )
          goto LABEL_50;
        goto LABEL_42;
      }
      return v7;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v41 = *(_QWORD *)(a1 + 1232);
        v42 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v41) )
          return 0;
        v60 = sub_D00DC0(*(_QWORD *)(a1 + 560));
        v47 = sub_E05440(a3);
        if ( !(unsigned __int8)sub_D0B630(v42, v41, &v60, v47, (unsigned __int8)a5) )
          goto LABEL_50;
LABEL_42:
        v7 = sub_CDB1A0(v42, v41, v60);
        if ( !(_BYTE)v7 )
          return 0;
        v26 = sub_D8C630(a1 + 432, a4, a3, v60, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( v60 )
        {
LABEL_44:
          v27 = *(_QWORD *)(a1 + 560);
          v28 = v62;
          v44 = v26;
          v30 = v63;
          sub_DFF430(v62, v44);
LABEL_45:
          sub_CDA6F0((__int64)v30, (__int64)v28, 0);
          v45 = v27;
          goto LABEL_46;
        }
LABEL_38:
        v40 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
        sub_DFF430(v40, v26);
      }
      return v7;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v48 = *(_QWORD *)(a1 + 1232);
        v49 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v48) )
          return 0;
        v50 = sub_D01350(*(_QWORD *)(a1 + 560));
        v61 = v51;
        v60 = v50;
        v52 = sub_E05440(a3);
        if ( !(unsigned __int8)sub_D26670(v49, v48, (__int64)&v60, v52, (unsigned __int8)a5) )
          goto LABEL_50;
        v53 = sub_D0B7C0((__int64)&v60);
        v7 = sub_CDB1A0(v49, v48, (unsigned __int64)v53);
        if ( !(_BYTE)v7 )
          return 0;
        v54 = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 32LL);
        v55 = sub_D0B7C0((__int64)&v60);
        v19 = sub_D8C630(a1 + 432, a4, a3, v55, v54, 1);
        v20 = sub_D0B8A0((__int64)&v60);
        if ( (_BYTE)v20 )
          goto LABEL_9;
        goto LABEL_56;
      }
      return v7;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v7;
      v11 = *(_QWORD *)(a1 + 1232);
      v12 = a1 + 384;
      *(_QWORD *)(a1 + 1240) = *a6;
      if ( !(unsigned __int8)sub_DA7230(a1 + 384, v11) )
        return 0;
      v13 = sub_D01480(*(_QWORD *)(a1 + 560));
      v61 = v14;
      v60 = v13;
      v15 = sub_E05440(a3);
      if ( !(unsigned __int8)sub_D317A0(v12, v11, (__int64)&v60, v15, (unsigned __int8)a5) )
      {
LABEL_50:
        if ( (_BYTE)a5 )
        {
          v7 = a5;
          v57 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
          *(_QWORD *)v57 = 0;
          *(_OWORD *)(v57 + 8) = 0;
          *(_DWORD *)(v57 + 24) = 1;
          *(_QWORD *)(v57 + 40) = 0;
          *(_QWORD *)(v57 + 32) = 0;
          return v7;
        }
        return 0;
      }
      v16 = sub_D0B940((__int64)&v60);
      v7 = sub_CDB1A0(v12, v11, (unsigned __int64)v16);
      if ( !(_BYTE)v7 )
        return 0;
      v17 = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 32LL);
      v18 = sub_D0B940((__int64)&v60);
      v19 = sub_D8C630(a1 + 432, a4, a3, v18, v17, 1);
      v20 = sub_D29E30((__int64 *)&v60);
      if ( (_BYTE)v20 )
      {
LABEL_9:
        v7 = v20;
        v21 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
        sub_DFF430(v21, v19);
      }
      else
      {
LABEL_56:
        v56 = *(_QWORD *)(a1 + 560);
        v28 = v62;
        v30 = v63;
        sub_DFF430(v62, v19);
        sub_CDA6F0((__int64)v63, (__int64)v62, 0);
        v45 = v56;
LABEL_46:
        v46 = sub_DFD980(v45, 48);
        sub_DFF520(v46);
        sub_DFF560(v30);
        sub_DFF560(v28);
      }
      return v7;
  }
}

