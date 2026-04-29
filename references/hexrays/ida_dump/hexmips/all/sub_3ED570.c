__int64 __fastcall sub_3ED570(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int8 *v7; // r12
  __int64 v8; // kr08_8
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  unsigned int v14; // r13d
  _QWORD *v16; // rax
  __int16 v17; // dx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int64 v22; // rsi
  unsigned int v23; // r8d
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r13d
  _DWORD *v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 (__fastcall *v32)(_DWORD *, unsigned int); // rax
  __int64 v33; // rsi
  int v34; // r8d
  int v35; // eax
  int v36; // edx
  int v37; // r12d
  int v38; // eax
  unsigned __int16 v39; // cx
  __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r13d
  __int64 v44; // rax
  __int64 (*v45)(void); // rax
  signed int v46; // r14d
  signed int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r13d
  _DWORD *v56; // rdi
  __int64 (__fastcall *v57)(_DWORD *); // rdx
  __int64 v58; // rdx
  __int64 v59; // rax
  _DWORD *v60; // rdi
  int v61; // edx
  __int64 (__fastcall *v62)(_DWORD *, unsigned int); // rcx
  int v63; // r13d
  int v64; // eax
  int v65; // ecx
  __int64 v66; // rax
  int v67; // r8d
  int v68; // ecx
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // eax
  _DWORD *v73; // rdi
  __int64 (__fastcall *v74)(_DWORD *, unsigned int); // rax
  signed int v75; // eax
  unsigned int v76; // [rsp+1Ch] [rbp-2Ch]

  v4 = (int)a2;
  v6 = 40LL * (int)a2;
  v7 = (unsigned __int8 *)(a1 + v6 + 64);
  v8 = a1 + v6;
  v9 = (int)a2;
  switch ( *(_BYTE *)(v8 + 65) )
  {
    case 1:
      a2 = *(unsigned __int16 *)(a1 + 40LL * (int)a2 + 70);
      v16 = *(_QWORD **)(a1 + 832);
      if ( (_WORD)a2 == 64 )
      {
        v70 = v16[95];
        if ( v70 )
        {
          v14 = *(_DWORD *)(v16[94] + 4 * v70 - 4);
          v16[95] = v70 - 1;
          sub_3ED4A0((_QWORD *)a1, v14, 2, a4);
          return v14;
        }
        goto LABEL_82;
      }
      v17 = *(_WORD *)(a1 + 48);
      if ( v17 == 533 )
      {
        if ( (_DWORD)v4 == 1 )
          goto LABEL_13;
      }
      else if ( !(_DWORD)v4 && v17 == 540 )
      {
LABEL_13:
        v18 = v16[95];
        if ( v18 )
        {
          v14 = *(_DWORD *)(v16[94] + 4 * v18 - 4);
          v16[95] = v18 - 1;
LABEL_56:
          sub_3EC710(a1, *(unsigned __int16 *)(a1 + 40 * v4 + 70), v4, v14, 1);
          return v14;
        }
        goto LABEL_82;
      }
      v56 = *(_DWORD **)(a1 + 832);
      v57 = *(__int64 (__fastcall **)(_DWORD *))(*v16 + 168LL);
      if ( (char *)v57 == (char *)sub_3E5480 )
        return sub_3E5480(v56, a2);
      else
        return v57(v56);
    case 2:
      v19 = *(_QWORD *)(a1 + 832);
      v20 = *(_QWORD *)(v19 + 760);
      if ( !v20 )
        goto LABEL_82;
      v14 = *(_DWORD *)(*(_QWORD *)(v19 + 752) + 4 * v20 - 4);
      *(_QWORD *)(v19 + 760) = v20 - 1;
      v21 = *(_WORD *)(a1 + 48);
      v22 = *(_QWORD *)(a1 + 40LL * (int)a2 + 80);
      if ( v21 == 1740 )
        goto LABEL_58;
      if ( v21 > 0x6CCu )
      {
        if ( v21 != 1742 )
        {
LABEL_20:
          v23 = v14;
          v24 = *(_QWORD *)(a1 + 40 * v4 + 80);
          v25 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
          return sub_3EC4F0(a1, v7, v24, v25, v23);
        }
      }
      else if ( v21 != 205 && v21 != 495 )
      {
        goto LABEL_20;
      }
LABEL_58:
      sub_3ECCE0(a1, v22, v14);
      return v14;
    case 3:
      v26 = a1 + 40LL * (int)a2;
      if ( *(_BYTE *)(v26 + 96) == 1 )
        return (unsigned int)-1;
      v27 = *(_QWORD *)(a1 + 832);
      v28 = *(_QWORD *)(v27 + 760);
      if ( !v28 )
        goto LABEL_82;
      v29 = *(_DWORD *)(*(_QWORD *)(v27 + 752) + 4 * v28 - 4);
      *(_QWORD *)(v27 + 760) = v28 - 1;
      v30 = *(_DWORD **)(a1 + 832);
      v31 = *(_QWORD *)(v26 + 88);
      v32 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v30 + 168LL);
      v33 = (v31 >> 5) & 0x1F;
      if ( v32 == sub_3E5480 )
      {
        v34 = v30[120];
        v35 = v30[89];
        v36 = v30[20];
        if ( v34 <= v35 )
        {
          LODWORD(v31) = v31 & 0x1F;
          v37 = v34 + v36 * (31 - v33);
LABEL_26:
          v38 = v34 + v36 * (31 - v31);
          goto LABEL_27;
        }
        LODWORD(v31) = v31 & 0x1F;
        v37 = v36 * v33 + v35;
        goto LABEL_64;
      }
      v72 = v32(v30, v33);
      v73 = *(_DWORD **)(a1 + 832);
      v37 = v72;
      v31 = *(_QWORD *)(v26 + 88) & 0x1FLL;
      v74 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v73 + 168LL);
      if ( v74 == sub_3E5480 )
      {
        v34 = v73[120];
        v35 = v73[89];
        v36 = v73[20];
        if ( v34 <= v35 )
          goto LABEL_26;
LABEL_64:
        v38 = v36 * v31 + v35;
        goto LABEL_27;
      }
      v38 = v74(v73, v31);
      v36 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
LABEL_27:
      v39 = *(_WORD *)(a1 + 48);
      v40 = v38;
      if ( v39 == 1710 )
        goto LABEL_71;
      if ( v39 > 0x6AEu )
      {
        if ( (unsigned __int16)(v39 - 1711) > 1u )
          goto LABEL_31;
LABEL_69:
        v67 = v36;
        v68 = v29;
        v69 = 2;
        goto LABEL_70;
      }
      if ( v39 != 815 )
      {
        if ( v39 != 1708 )
        {
LABEL_31:
          sub_3EAB70(a1, 0xCu, v36, v37, v38, v29, 0);
          return (unsigned int)v29;
        }
        goto LABEL_69;
      }
LABEL_71:
      v67 = v36;
      v68 = v29;
      v69 = 4;
LABEL_70:
      sub_3EC710(a1, v69, 1, v68, v67);
      sub_3EAB70(a1, 0xEu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v40, v29, v29, 0);
      sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v37, v29, v29, 0);
      return (unsigned int)v29;
    case 4:
      v41 = *(_QWORD *)(a1 + 832);
      v42 = *(_QWORD *)(v41 + 760);
      if ( !v42 )
        goto LABEL_82;
      v43 = *(_DWORD *)(*(_QWORD *)(v41 + 752) + 4 * v42 - 4);
      *(_QWORD *)(v41 + 760) = v42 - 1;
      v9 = *(_QWORD *)(a1 + 832);
      v44 = a1 + 40LL * (int)a2;
      a2 = *(unsigned __int16 *)(v44 + 70);
      if ( (_WORD)a2 == 64 )
      {
        v71 = *(_QWORD *)(v9 + 760);
        if ( !v71 )
          goto LABEL_82;
        v46 = *(_DWORD *)(*(_QWORD *)(v9 + 752) + 4 * v71 - 4);
        *(_QWORD *)(v9 + 760) = v71 - 1;
        sub_3ED4A0((_QWORD *)a1, v46, *(_BYTE *)(v44 + 69), a4);
        v9 = *(_QWORD *)(a1 + 832);
      }
      else
      {
        v45 = *(__int64 (**)(void))(*(_QWORD *)v9 + 168LL);
        if ( (char *)v45 == (char *)sub_3E5480 )
        {
          v46 = sub_3E5480((_DWORD *)v9, a2);
        }
        else
        {
          v75 = v45();
          v9 = *(_QWORD *)(a1 + 832);
          v46 = v75;
        }
      }
      v47 = sub_3EC4F0(a1, v7, *(_QWORD *)(a1 + 40 * v4 + 80), *(_DWORD *)(v9 + 80), v43);
      v14 = v47;
      if ( v47 == -1 )
        return v14;
      sub_3EAB70(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v46, v47, v47, 0);
      sub_3E8540(*(_QWORD *)(a1 + 832), v46);
      return v14;
    case 5:
      v48 = *(_QWORD *)(a1 + 832);
      v49 = *(_QWORD *)(v48 + 760);
      if ( !v49 )
        goto LABEL_82;
      v23 = *(_DWORD *)(*(_QWORD *)(v48 + 752) + 4 * v49 - 4);
      *(_QWORD *)(v48 + 760) = v49 - 1;
      v50 = *(_QWORD *)(a1 + 40LL * (int)a2 + 72);
      v51 = *(unsigned __int16 *)(a1 + 48);
      if ( (_WORD)v51 == 135 )
      {
        v76 = v23;
        v66 = sub_CBD70(0xBC7u);
        v23 = v76;
        v50 = (int)(v50 << (4 * (v66 != 2) + 12));
      }
      else if ( (unsigned __int16)v51 > 0x87u )
      {
        if ( (_WORD)v51 == 569 )
LABEL_44:
          v50 += 32;
      }
      else if ( (unsigned __int16)(v51 - 16) <= 4u )
      {
        v52 = 1376256;
        if ( _bittest64(&v52, v51) )
          goto LABEL_44;
      }
      v24 = v50;
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
      return sub_3EC4F0(a1, v7, v24, v25, v23);
    case 7:
      if ( !a3 )
        return (unsigned int)-1;
      v53 = *(_QWORD *)(a1 + 832);
      v54 = *(_QWORD *)(v53 + 760);
      if ( !v54 )
        goto LABEL_82;
      v55 = *(_DWORD *)(*(_QWORD *)(v53 + 752) + 4 * v54 - 4);
      *(_QWORD *)(v53 + 760) = v54 - 1;
      sub_3EC710(a1, *(_QWORD *)(a1 + 40LL * (int)a2 + 80), a2, v55, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
      return v55;
    case 9:
      v10 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v10 <= 0x38u && (v11 = 0x12A000000000000LL, _bittest64(&v11, v10)) && (_DWORD)a2 == 1
        || (v12 = a1 + 40LL * (int)a2, v13 = *(_BYTE *)(v12 + 97), v13 == 5) )
      {
        v58 = *(_QWORD *)(a1 + 832);
        v59 = *(_QWORD *)(v58 + 760);
        if ( v59 )
        {
          v14 = *(_DWORD *)(*(_QWORD *)(v58 + 752) + 4 * v59 - 4);
          *(_QWORD *)(v58 + 760) = v59 - 1;
          goto LABEL_56;
        }
LABEL_82:
        sub_3E5460(a4, v9, a2);
      }
      if ( v13 != 4 )
        return (unsigned int)-1;
      v60 = *(_DWORD **)(a1 + 832);
      v61 = *(unsigned __int16 *)(v12 + 70);
      v62 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v60 + 168LL);
      if ( v62 == sub_3E5480 )
      {
        if ( (unsigned __int16)v61 <= 0x1Fu )
        {
          v63 = v60[121];
          v64 = v60[152];
          v65 = v60[20];
          if ( v63 >= v64 )
            return (unsigned int)(v64 + v65 * (31 - v61));
          else
            return (unsigned int)(v65 * v61 + v63);
        }
        return (unsigned int)-1;
      }
      return v62(v60, v61 + 32);
    case 0xB:
      return *(_DWORD *)(*(_QWORD *)(a1 + 832) + 644LL) + (unsigned int)*(unsigned __int16 *)(a1 + 40LL * (int)a2 + 70);
    default:
      return (unsigned int)-1;
  }
}
