__int64 __fastcall sub_D31AC0(__int64 a1, int a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v6; // r12d
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  void *v14; // rax
  unsigned int v15; // r13d
  void *v16; // rax
  __int64 v17; // r13
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  unsigned __int64 v22; // r15
  __int64 v23; // rbp
  __int64 v24; // r13
  _BYTE *v25; // rbx
  __int64 v26; // rsi
  _BYTE *v27; // rbp
  __int64 v28; // r13
  __int64 v29; // r12
  unsigned __int64 v30; // r15
  __int64 v31; // r13
  unsigned __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // r12
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r12
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // r15
  __int64 v48; // r12
  __int64 v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rdx
  void *v52; // rax
  unsigned int v53; // r13d
  void *v54; // rax
  __int64 v55; // r14
  __int64 v56; // rax
  unsigned __int64 v57; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+8h] [rbp-A0h]
  _BYTE v59[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v60[104]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        v21 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v20) )
          return 0;
        v22 = (char)sub_CFEA20(*(_QWORD *)(a1 + 560));
        goto LABEL_16;
      }
      return v6;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        v21 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v20) )
          return 0;
        v22 = (unsigned __int8)sub_CFF120(*(_QWORD *)(a1 + 560));
LABEL_16:
        v6 = sub_CDB1A0(v21, v20, v22);
        if ( !(_BYTE)v6 )
          return 0;
        v23 = sub_D8C6F0(a1 + 432, a3, v22, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( !(_BYTE)v22 )
          goto LABEL_38;
        goto LABEL_18;
      }
      return v6;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        v29 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v28) )
          return 0;
        v30 = (__int16)sub_CFF630(*(_QWORD *)(a1 + 560));
        goto LABEL_25;
      }
      return v6;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 1232);
        v29 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v28) )
          return 0;
        v30 = (unsigned __int16)sub_CFFD50(*(_QWORD *)(a1 + 560));
LABEL_25:
        v6 = sub_CDB1A0(v29, v28, v30);
        if ( !(_BYTE)v6 )
          return 0;
        v23 = sub_D8C6F0(a1 + 432, a3, v30, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( (_WORD)v30 )
          goto LABEL_18;
        goto LABEL_38;
      }
      return v6;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v31 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v31) )
          return 0;
        v32 = (int)sub_CFFE60(*(_QWORD *)(a1 + 560));
        v6 = sub_CDB1A0(a1 + 384, v31, v32);
        if ( !(_BYTE)v6 )
          return 0;
        v23 = sub_D8C6F0(a1 + 432, a3, v32, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( (_DWORD)v32 )
        {
LABEL_18:
          v24 = *(_QWORD *)(a1 + 560);
          v25 = v60;
          v26 = v23;
          v27 = v59;
          sub_DFF430(v60, v26);
          goto LABEL_45;
        }
        goto LABEL_38;
      }
      return v6;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v33 = *(_QWORD *)(a1 + 1232);
        v34 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v33) )
          return 0;
        v35 = sub_D00570(*(_QWORD *)(a1 + 560));
        v36 = *(_DWORD *)(a3 + 20);
        LODWORD(v57) = v35;
        if ( !(unsigned __int8)sub_D0B300(v34, v33, (unsigned int *)&v57, v36, (unsigned __int8)a4) )
          goto LABEL_50;
        v6 = sub_CDB1A0(v34, v33, (unsigned int)v57);
        if ( !(_BYTE)v6 )
          return 0;
        v23 = sub_D8C6F0(a1 + 432, a3, (unsigned int)v57, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( (_DWORD)v57 )
          goto LABEL_44;
        goto LABEL_38;
      }
      return v6;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v38 = *(_QWORD *)(a1 + 1232);
        v39 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v38) )
          return 0;
        v40 = sub_D00680(*(_QWORD *)(a1 + 560));
        v41 = *(_DWORD *)(a3 + 20);
        v57 = v40;
        if ( !(unsigned __int8)sub_D0B490(v39, v38, &v57, v41, (unsigned __int8)a4) )
          goto LABEL_50;
        goto LABEL_42;
      }
      return v6;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v38 = *(_QWORD *)(a1 + 1232);
        v39 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v38) )
          return 0;
        v45 = sub_D00DC0(*(_QWORD *)(a1 + 560));
        v46 = *(_DWORD *)(a3 + 20);
        v57 = v45;
        if ( !(unsigned __int8)sub_D0B630(v39, v38, &v57, v46, (unsigned __int8)a4) )
          goto LABEL_50;
LABEL_42:
        v6 = sub_CDB1A0(v39, v38, v57);
        if ( !(_BYTE)v6 )
          return 0;
        v23 = sub_D8C6F0(a1 + 432, a3, v57, *(unsigned int *)(*(_QWORD *)(a1 + 568) + 32LL), 1);
        if ( v57 )
        {
LABEL_44:
          v24 = *(_QWORD *)(a1 + 560);
          v25 = v59;
          v42 = v23;
          v27 = v60;
          sub_DFF430(v59, v42);
LABEL_45:
          sub_CDA6F0((__int64)v27, (__int64)v25, 0);
          v43 = v24;
          goto LABEL_46;
        }
LABEL_38:
        v37 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
        sub_DFF430(v37, v23);
      }
      return v6;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v47 = *(_QWORD *)(a1 + 1232);
        v48 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a5;
        if ( !(unsigned __int8)sub_DA7230(a1 + 384, v47) )
          return 0;
        v49 = sub_D01350(*(_QWORD *)(a1 + 560));
        v50 = *(_DWORD *)(a3 + 20);
        v58 = v51;
        v57 = v49;
        if ( !(unsigned __int8)sub_D26670(v48, v47, (__int64)&v57, v50, (unsigned __int8)a4) )
          goto LABEL_50;
        v52 = sub_D0B7C0((__int64)&v57);
        v6 = sub_CDB1A0(v48, v47, (unsigned __int64)v52);
        if ( !(_BYTE)v6 )
          return 0;
        v53 = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 32LL);
        v54 = sub_D0B7C0((__int64)&v57);
        v17 = sub_D8C6F0(a1 + 432, a3, v54, v53, 1);
        v18 = sub_D0B8A0((__int64)&v57);
        if ( (_BYTE)v18 )
          goto LABEL_9;
        goto LABEL_56;
      }
      return v6;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v6;
      v9 = *(_QWORD *)(a1 + 1232);
      v10 = a1 + 384;
      *(_QWORD *)(a1 + 1240) = *a5;
      if ( !(unsigned __int8)sub_DA7230(a1 + 384, v9) )
        return 0;
      v11 = sub_D01480(*(_QWORD *)(a1 + 560));
      v12 = *(_DWORD *)(a3 + 20);
      v58 = v13;
      v57 = v11;
      if ( !(unsigned __int8)sub_D317A0(v10, v9, (__int64)&v57, v12, (unsigned __int8)a4) )
      {
LABEL_50:
        if ( (_BYTE)a4 )
        {
          v6 = a4;
          v56 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
          *(_QWORD *)v56 = 0;
          *(_OWORD *)(v56 + 8) = 0;
          *(_DWORD *)(v56 + 24) = 1;
          *(_QWORD *)(v56 + 40) = 0;
          *(_QWORD *)(v56 + 32) = a3;
          return v6;
        }
        return 0;
      }
      v14 = sub_D0B940((__int64)&v57);
      v6 = sub_CDB1A0(v10, v9, (unsigned __int64)v14);
      if ( !(_BYTE)v6 )
        return 0;
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 568) + 32LL);
      v16 = sub_D0B940((__int64)&v57);
      v17 = sub_D8C6F0(a1 + 432, a3, v16, v15, 1);
      v18 = sub_D29E30((__int64 *)&v57);
      if ( (_BYTE)v18 )
      {
LABEL_9:
        v6 = v18;
        v19 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
        sub_DFF430(v19, v17);
      }
      else
      {
LABEL_56:
        v55 = *(_QWORD *)(a1 + 560);
        v25 = v59;
        v27 = v60;
        sub_DFF430(v59, v17);
        sub_CDA6F0((__int64)v60, (__int64)v59, 0);
        v43 = v55;
LABEL_46:
        v44 = sub_DFD980(v43, 48);
        sub_DFF520(v44);
        sub_DFF560(v27);
        sub_DFF560(v25);
      }
      return v6;
  }
}

