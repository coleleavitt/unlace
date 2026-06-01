__int64 __fastcall sub_7DFDB0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // r12
  _QWORD *v6; // rdx
  _QWORD *v7; // r13
  __int64 v8; // r9
  _QWORD *v9; // r12
  _QWORD *v10; // rdx
  _QWORD *v11; // r13
  __int64 v12; // r9
  _QWORD *v13; // r12
  _QWORD *v14; // rdx
  _QWORD *v15; // r13
  __int64 v16; // r9
  _QWORD *v17; // r12
  _QWORD *v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // r9
  _QWORD *v21; // r12
  _QWORD *v22; // rdx
  _QWORD *v23; // r13
  __int64 v24; // r9
  _QWORD *v25; // r12
  _QWORD *v26; // rdx
  _QWORD *v27; // r13
  __int64 v28; // r9
  _QWORD *v29; // r12
  _QWORD *v30; // rdx
  _QWORD *v31; // r13
  __int64 v32; // r9
  unsigned int *v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rsi
  _QWORD *v38; // r12
  _QWORD *v39; // rdx
  _QWORD *v40; // r13
  __int64 v41; // r9
  _QWORD *v42; // r12
  _QWORD *v43; // rdx
  _QWORD *v44; // r13
  __int64 v45; // r9
  _QWORD *v46; // r12
  _QWORD *v47; // rdx
  _QWORD *v48; // r13
  __int64 v49; // r9
  _QWORD *v50; // r12
  _QWORD *v51; // rdx
  _QWORD *v52; // r13
  __int64 v53; // r9
  unsigned __int64 v54; // rax
  _QWORD *v55; // r12
  _QWORD *v56; // rdx
  _QWORD *v57; // r13
  __int64 v58; // r9
  _QWORD *v59; // r12
  _QWORD *v60; // rdx
  _QWORD *v61; // r13
  __int64 v62; // r9
  _QWORD *v63; // r12
  _QWORD *v64; // rdx
  _QWORD *v65; // r13
  __int64 v66; // r9
  _QWORD *v67; // r12
  _QWORD *v68; // rdx
  _QWORD *v69; // r13
  __int64 v70; // r9
  unsigned __int64 v71; // rax
  _QWORD *v72; // r12
  _QWORD *v73; // rdx
  _QWORD *v74; // r13
  __int64 v75; // r9
  _QWORD *v76; // r12
  _QWORD *v77; // rdx
  _QWORD *v78; // r13
  __int64 v79; // r9
  _QWORD *v80; // r12
  _QWORD *v81; // rdx
  _QWORD *v82; // r13
  __int64 v83; // r9
  _QWORD v84[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    return 1;
  v84[2] = v2;
  switch ( *(_BYTE *)(a2 + 28) & 0x7F )
  {
    case 0:
      return sub_7F69D0();
    case 1:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 72)) || !(unsigned __int8)sub_7E1600(a1, a2 + 40) )
        return 0;
      v80 = (_QWORD *)sub_6434A0(a2);
      v82 = v81;
      if ( v80 == v81 )
        return 1;
      while ( 1 )
      {
        v83 = *a1;
        v84[0] = *v80;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v83) )
          break;
        if ( v82 == ++v80 )
          return 1;
      }
      return 0;
    case 2:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 40) )
        return 0;
      v76 = (_QWORD *)sub_6434A0(a2);
      v78 = v77;
      if ( v76 == v77 )
        return 1;
      while ( 1 )
      {
        v79 = *a1;
        v84[0] = *v76;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v79) )
          break;
        if ( v78 == ++v76 )
          return 1;
      }
      return 0;
    case 3:
      v71 = sub_777E30(a2);
      if ( !(unsigned __int8)sub_7EBA80(a1, v71) )
        return 0;
      v72 = (_QWORD *)sub_6434A0(a2);
      v74 = v73;
      if ( v72 == v73 )
        return 1;
      while ( 1 )
      {
        v75 = *a1;
        v84[0] = *v72;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v75) )
          break;
        if ( v74 == ++v72 )
          return 1;
      }
      return 0;
    case 4:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 40) )
        return 0;
      v67 = (_QWORD *)sub_6434A0(a2);
      v69 = v68;
      if ( v67 == v68 )
        return 1;
      while ( 1 )
      {
        v70 = *a1;
        v84[0] = *v67;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v70) )
          break;
        if ( v69 == ++v67 )
          return 1;
      }
      return 0;
    case 5:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 40) )
        return 0;
      v63 = (_QWORD *)sub_6434A0(a2);
      v65 = v64;
      if ( v63 == v64 )
        return 1;
      while ( 1 )
      {
        v66 = *a1;
        v84[0] = *v63;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v66) )
          break;
        if ( v65 == ++v63 )
          return 1;
      }
      return 0;
    case 6:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 40) )
        return 0;
      v59 = (_QWORD *)sub_6434A0(a2);
      v61 = v60;
      if ( v59 == v60 )
        return 1;
      while ( 1 )
      {
        v62 = *a1;
        v84[0] = *v59;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v62) )
          break;
        if ( v61 == ++v59 )
          return 1;
      }
      return 0;
    case 7:
      v54 = sub_777E30(a2);
      if ( !(unsigned __int8)sub_7EBA80(a1, v54) )
        return 0;
      v55 = (_QWORD *)sub_6434A0(a2);
      v57 = v56;
      if ( v55 == v56 )
        return 1;
      while ( 1 )
      {
        v58 = *a1;
        v84[0] = *v55;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v58) )
          break;
        if ( v57 == ++v55 )
          return 1;
      }
      return 0;
    case 8:
      return sub_7F5F30();
    case 9:
      return sub_7F6060();
    case 0xA:
      return sub_7F34A0();
    case 0xB:
      return sub_7F3560();
    case 0xC:
      return sub_7F3620();
    case 0xD:
      return sub_7F6160();
    case 0xE:
      return sub_7FE010();
    case 0xF:
      return sub_7FE110();
    case 0x10:
      return sub_7F6BF0();
    case 0x11:
      return sub_7F36E0();
    case 0x12:
      return sub_7F4CA0();
    case 0x13:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 48) )
        return 0;
      v50 = (_QWORD *)sub_6434A0(a2);
      v52 = v51;
      if ( v50 == v51 )
        return 1;
      while ( 1 )
      {
        v53 = *a1;
        v84[0] = *v50;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v53) )
          break;
        if ( v52 == ++v50 )
          return 1;
      }
      return 0;
    case 0x14:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 48) )
        return 0;
      v46 = (_QWORD *)sub_6434A0(a2);
      v48 = v47;
      if ( v46 == v47 )
        return 1;
      while ( 1 )
      {
        v49 = *a1;
        v84[0] = *v46;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v49) )
          break;
        if ( v48 == ++v46 )
          return 1;
      }
      return 0;
    case 0x15:
      return sub_7F53C0();
    case 0x16:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 48) )
        return 0;
      v42 = (_QWORD *)sub_6434A0(a2);
      v44 = v43;
      if ( v42 == v43 )
        return 1;
      while ( 1 )
      {
        v45 = *a1;
        v84[0] = *v42;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v45) )
          break;
        if ( v44 == ++v42 )
          return 1;
      }
      return 0;
    case 0x17:
      if ( !(unsigned __int8)sub_7E1600(a1, a2 + 48) )
        return 0;
      v38 = (_QWORD *)sub_6434A0(a2);
      v40 = v39;
      if ( v38 == v39 )
        return 1;
      while ( 1 )
      {
        v41 = *a1;
        v84[0] = *v38;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v41) )
          break;
        if ( v40 == ++v38 )
          return 1;
      }
      return 0;
    case 0x18:
      if ( (unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 88)) )
      {
        v37 = *(_QWORD *)(a2 + 96);
        if ( !v37 || (unsigned __int8)sub_7EBA80(a1, v37) )
          return sub_7EDF40(a1, *(_QWORD *)(a2 + 48));
      }
      return 0;
    case 0x19:
      v33 = *(unsigned int **)(a2 + 56);
      v34 = v33 + 4;
      v35 = 2LL * *v33;
      v36 = (__int64)&v33[v35 + 4];
      if ( !(v35 * 4) )
        return sub_7EDF40(a1, *(_QWORD *)(a2 + 48));
      while ( (unsigned __int8)sub_7FD860(a1, *v34) )
      {
        if ( (_QWORD *)v36 == ++v34 )
          return sub_7EDF40(a1, *(_QWORD *)(a2 + 48));
      }
      return 0;
    case 0x1A:
      return sub_7F3AC0();
    case 0x1B:
      return sub_7F3BC0();
    case 0x1C:
      return sub_7F3C80();
    case 0x1D:
      return sub_7F3D40();
    case 0x1E:
      return sub_7F3E00();
    case 0x1F:
      return sub_7F6270();
    case 0x20:
      if ( !(unsigned __int8)sub_7F0CC0() )
        return 0;
      v25 = (_QWORD *)sub_6434A0(a2);
      v27 = v26;
      if ( v25 == v26 )
        return 1;
      while ( 1 )
      {
        v28 = *a1;
        v84[0] = *v25;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v28) )
          break;
        if ( v27 == ++v25 )
          return 1;
      }
      return 0;
    case 0x21:
      if ( !(unsigned __int8)sub_7F0CC0() )
        return 0;
      v29 = (_QWORD *)sub_6434A0(a2);
      v31 = v30;
      if ( v29 == v30 )
        return 1;
      while ( 1 )
      {
        v32 = *a1;
        v84[0] = *v29;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v32) )
          break;
        if ( v31 == ++v29 )
          return 1;
      }
      return 0;
    case 0x22:
      if ( !(unsigned __int8)sub_7F0CC0() )
        return 0;
      v17 = (_QWORD *)sub_6434A0(a2);
      v19 = v18;
      if ( v17 == v18 )
        return 1;
      while ( 1 )
      {
        v20 = *a1;
        v84[0] = *v17;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v20) )
          break;
        if ( v19 == ++v17 )
          return 1;
      }
      return 0;
    case 0x23:
      if ( !(unsigned __int8)sub_7F0CC0() )
        return 0;
      v21 = (_QWORD *)sub_6434A0(a2);
      v23 = v22;
      if ( v21 == v22 )
        return 1;
      while ( 1 )
      {
        v24 = *a1;
        v84[0] = *v21;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v24) )
          break;
        if ( v23 == ++v21 )
          return 1;
      }
      return 0;
    case 0x24:
      if ( !(unsigned __int8)sub_7F0CC0() )
        return 0;
      v13 = (_QWORD *)sub_6434A0(a2);
      v15 = v14;
      if ( v13 == v14 )
        return 1;
      while ( 1 )
      {
        v16 = *a1;
        v84[0] = *v13;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v16) )
          break;
        if ( v15 == ++v13 )
          return 1;
      }
      return 0;
    case 0x25:
      if ( !(unsigned __int8)sub_7F0CC0() )
        return 0;
      v9 = (_QWORD *)sub_6434A0(a2);
      v11 = v10;
      if ( v9 == v10 )
        return 1;
      while ( 1 )
      {
        v12 = *a1;
        v84[0] = *v9;
        if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v12) )
          break;
        if ( v11 == ++v9 )
          return 1;
      }
      return 0;
    case 0x26:
      return sub_7FCAE0();
    case 0x27:
      return sub_7FD120();
    case 0x28:
      return sub_7F6350();
    case 0x29:
      return sub_7FCF90();
    case 0x2A:
      return sub_7FCC00();
    case 0x2B:
      return sub_7FCD20();
    case 0x2C:
      return sub_7FCE40();
    case 0x2D:
      return sub_7F3EC0();
    case 0x2E:
      return sub_7F4070();
    case 0x2F:
      return sub_7F64E0();
    case 0x30:
      return sub_7F6620();
    case 0x31:
      return sub_7F6710();
    case 0x32:
      return sub_7F6D70();
    case 0x33:
      return sub_7F4140();
    case 0x34:
      return sub_7F4200();
    case 0x35:
      return sub_7F42C0();
    case 0x36:
      return sub_7F4380();
    case 0x37:
      return sub_7F4460();
    case 0x38:
      return sub_7F4520();
    case 0x39:
      return sub_7F4640();
    case 0x3A:
      return sub_7F4700();
    case 0x3B:
      return sub_7F4820();
    case 0x3C:
      return sub_7F4960();
    case 0x3D:
      return sub_7F4AD0();
    case 0x3E:
      return sub_7FBFA0();
    case 0x3F:
      return sub_7FC1F0();
    case 0x40:
      return sub_7F4BB0();
    case 0x41:
      return sub_7F5690();
    case 0x42:
      return sub_7F6E90();
    case 0x43:
      return sub_7F7060();
    case 0x44:
      return sub_7F71B0();
    case 0x45:
      return sub_7F72B0();
    case 0x46:
      return sub_7F7400();
    case 0x47:
      return sub_7F6800();
    case 0x48:
      return sub_7F58B0();
    case 0x49:
      return sub_7F5990();
    case 0x4A:
      return sub_7F5A70();
    case 0x4B:
      if ( !(unsigned __int8)sub_7EF1F0(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80)) )
        return 0;
      v5 = (_QWORD *)sub_6434A0(a2);
      v7 = v6;
      if ( v5 == v6 )
        return 1;
      break;
    case 0x4C:
      return sub_7F5B30();
    case 0x4D:
      return sub_7FBD60();
    case 0x4E:
      return sub_7F5BF0();
    case 0x4F:
      return sub_7F32B0();
    case 0x50:
      return sub_7F5CF0();
    case 0x51:
      return sub_803B90();
    case 0x52:
      return sub_7F7550();
    case 0x53:
      return sub_7F7720();
    case 0x54:
      return sub_7F68F0();
    case 0x55:
      return sub_7F5DB0();
    case 0x56:
      return sub_7F5E70();
    default:
      return 1;
  }
  do
  {
    v8 = *a1;
    v84[0] = *v5;
    if ( !(unsigned __int8)sub_7F2380(a1, v84[0], v84[0], v84, a1, v8) )
      return 0;
    ++v5;
  }
  while ( v7 != v5 );
  return 1;
}

