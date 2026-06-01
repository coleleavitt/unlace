__int64 __fastcall sub_12D880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 *v5; // r15
  int v8; // esi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // r13d
  __int64 v13; // r8
  unsigned int v14; // r14d
  char v15; // al
  char v17; // al
  int v18; // edx
  __int64 v19; // r10
  int v20; // ecx
  char v21; // al
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 (__fastcall **v25)(); // rax
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // r12
  int v30; // r14d
  __int64 v31; // r15
  __int64 v32; // r13
  int v33; // r8d
  int v34; // eax
  __int64 v35; // r10
  int v36; // r9d
  int v37; // r11d
  int v38; // r9d
  int v39; // eax
  __int64 v40; // r10
  __int32 v41; // r9d
  __int64 v42; // rsi
  int v43; // r8d
  char v44; // cl
  unsigned __int8 *v45; // r15
  __int64 v46; // rax
  __int64 v47; // r12
  __int16 v48; // si
  __int16 v49; // cx
  int v50; // edx
  __int64 v51; // rax
  int v52; // r13d
  __int64 v53; // rdi
  _DWORD *v54; // rcx
  __int64 v55; // rcx
  char *v56; // r12
  __int64 v57; // r10
  int v58; // r13d
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v65; // [rsp+8h] [rbp-E0h]
  _DWORD *v66; // [rsp+8h] [rbp-E0h]
  int v67; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v69; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v70; // [rsp+18h] [rbp-D0h]
  __int64 v71; // [rsp+20h] [rbp-C8h]
  __int64 v72; // [rsp+20h] [rbp-C8h]
  int v73; // [rsp+20h] [rbp-C8h]
  int v74; // [rsp+28h] [rbp-C0h]
  int v75; // [rsp+28h] [rbp-C0h]
  int v76; // [rsp+30h] [rbp-B8h]
  __int64 v77; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v78; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall **v79)(); // [rsp+50h] [rbp-98h] BYREF
  __int128 v80; // [rsp+58h] [rbp-90h]
  __int64 v81; // [rsp+68h] [rbp-80h]
  unsigned __int64 v82; // [rsp+70h] [rbp-78h] BYREF
  __int64 v83; // [rsp+78h] [rbp-70h]
  unsigned __int64 v84; // [rsp+80h] [rbp-68h] BYREF
  __int64 v85; // [rsp+88h] [rbp-60h]
  unsigned __int64 v86; // [rsp+90h] [rbp-58h] BYREF
  __int64 v87; // [rsp+98h] [rbp-50h]
  unsigned __int64 v88; // [rsp+A8h] [rbp-40h]

  v5 = (unsigned __int8 *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 68);
  v88 = __readfsqword(0x28u);
  LOBYTE(v10) = sub_122640(a1 + 32, v8);
  if ( !(_BYTE)v10 )
    return 0;
  v12 = *(_DWORD *)(a1 + 68);
  v13 = *(unsigned int *)(a1 + 36);
  if ( v12 > (int)v13 )
  {
    if ( !under_debugger )
      sub_383060(51797);
LABEL_123:
    BUG();
  }
  if ( (*(_BYTE *)(a1 + 33) & 0x20) != 0 )
    return 0;
  v14 = v10;
  if ( *(_BYTE *)(a1 + 32) != 4 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && (v17 = sub_11BB90(v5), v12 = *(_DWORD *)(a1 + 68), v17) )
    {
      v18 = *(_DWORD *)(a1 + 36);
      if ( !v12 || v18 <= v12 )
      {
LABEL_8:
        if ( *(_BYTE *)(a1 + 32) == 14 && *(_DWORD *)(a1 + 68) < *(_DWORD *)(a1 + 36) / 2 )
        {
          v22 = *(__int64 **)(a1 + 40);
          v23 = v22[1];
          v24 = *v22;
          v22[1] = 0;
          *v22 = 0xFFFFFFFF00000000LL;
          v25 = *(__int64 (__fastcall ***)())(a1 + 32);
          *(_QWORD *)(a1 + 32) = v24;
          v79 = v25;
          v26 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = v23;
          *(_QWORD *)&v80 = v26;
          sub_11CDA0((__int64)&v79);
          return v14;
        }
        return 0;
      }
      v15 = sub_126F10((unsigned __int64)v5, a2, v18 - v12);
    }
    else
    {
      v15 = sub_12AB50((unsigned __int64)v5, a2, v12, 1);
    }
    if ( v15 )
    {
      *(_DWORD *)a1 = 4;
      return v14;
    }
    goto LABEL_8;
  }
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(_DWORD *)v19;
  switch ( *(_DWORD *)v19 )
  {
    case 4:
      *(_DWORD *)v19 = 10;
      sub_12C5D0(a2, a1);
      return v14;
    case 5:
    case 7:
      v42 = *(_QWORD *)(a1 + 40);
      v82 = 0xFFFFFFFF00000000LL;
      v83 = 0;
      v84 = 0xFFFFFFFF00000000LL;
      v85 = 0;
      v86 = 0xFFFFFFFF00000000LL;
      v87 = 0;
      v80 = 0;
      sub_1253A0((__int64)&v79, v42);
      if ( (!*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) || !sub_11BB90((unsigned __int8 *)&v82))
        && (unsigned __int8)sub_12AB50((unsigned __int64)&v82, a2, *(_DWORD *)(a1 + 68), 1) )
      {
        goto LABEL_64;
      }
      if ( a5 && (unsigned int)(*a5 - 8) <= 1 || (v43 = *(_DWORD *)(a1 + 68), v43 == 1) )
      {
        sub_11CDA0((__int64)&v86);
        sub_11CDA0((__int64)&v84);
        sub_11CDA0((__int64)&v82);
        return 0;
      }
      sub_1207E0((char *)&v82, a2, 10, v81, v43);
LABEL_64:
      sub_11CDA0((__int64)&v86);
      sub_123A40((__int64)&v86, (unsigned __int8 *)(a1 + 64));
      sub_11D890(a1, (__int64)&v79);
      sub_11CDA0((__int64)&v86);
      sub_11CDA0((__int64)&v84);
      sub_11CDA0((__int64)&v82);
      return v14;
    case 8:
    case 9:
      if ( v12 == *(_DWORD *)(v19 + 36) )
      {
        sub_123A40((__int64)&v79, (unsigned __int8 *)(v19 + 32));
        *(_DWORD *)a1 = 4;
        sub_11CDA0((__int64)v5);
        sub_123A40((__int64)v5, (unsigned __int8 *)&v79);
        sub_11CDA0((__int64)&v79);
        return v14;
      }
      if ( v12 < *(_DWORD *)(v19 + 36) )
      {
        *(_DWORD *)v19 = 10;
        v19 = *(_QWORD *)(a1 + 40);
      }
      *(_DWORD *)(v19 + 68) = v12;
      goto LABEL_44;
    case 0xA:
      goto LABEL_44;
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x13:
    case 0x15:
      v21 = *(_BYTE *)(v19 + 32);
      goto LABEL_19;
    case 0xF:
    case 0x10:
    case 0x12:
      goto LABEL_28;
    case 0x11:
      v27 = sub_11FD80((char *)(v19 + 48), &v78, 0);
      v12 = *(_DWORD *)(a1 + 68);
      if ( !v27 )
        goto LABEL_27;
      v11 = v78 - 1;
      if ( (v78 & (v78 - 1)) != 0 )
        goto LABEL_27;
      v11 = v12;
      if ( (unsigned __int64)v12 > 0x3F )
        goto LABEL_27;
      v11 = 1LL << v12;
      if ( v78 >= 1LL << v12 )
        goto LABEL_27;
      v53 = *(_QWORD *)(a1 + 40);
      v79 = off_4DD8E0;
      *(_QWORD *)&v80 = a2;
      *((_QWORD *)&v80 + 1) = (unsigned int)v12 | 0x100000000LL;
      if ( (unsigned __int8)sub_121DB0(v53, (__int64)&v79, 273) )
        goto LABEL_44;
      v12 = *(_DWORD *)(a1 + 68);
LABEL_27:
      v19 = *(_QWORD *)(a1 + 40);
      v13 = *(unsigned int *)(a1 + 36);
      v20 = *(_DWORD *)v19;
LABEL_28:
      v28 = v20 & 0xFFFFFFFD;
      v65 = v28;
      if ( v12 >= (int)v13 )
        return 0;
      v69 = v14;
      v29 = v19 + 32;
      v30 = v12;
      v31 = v19 + 48;
      v32 = v19;
      while ( 1 )
      {
        if ( v65 == 16 )
        {
          while ( 1 )
          {
            while ( !(unsigned __int8)sub_30DAC0(v29, (unsigned int)v30, v11, v28, v13) )
            {
              v30 *= 2;
              if ( *(_DWORD *)(a1 + 36) <= v30 )
                return 0;
            }
            if ( (unsigned __int8)sub_30DAC0(v31, (unsigned int)v30, v11, v28, v13) )
              break;
            v30 *= 2;
            if ( v30 >= *(_DWORD *)(a1 + 36) )
              return 0;
          }
        }
        else
        {
          while ( !(unsigned __int8)sub_1278D0(v29, a2, v30) || !(unsigned __int8)sub_1278D0(v31, a2, v30) )
          {
            v30 *= 2;
            if ( *(_DWORD *)(a1 + 36) <= v30 )
              return 0;
          }
        }
        *(_QWORD *)&v80 = a2;
        *((_QWORD *)&v80 + 1) = (unsigned int)v30 | 0x100000000LL;
        v79 = off_4DD8E0;
        if ( (unsigned __int8)sub_121DB0(v32, (__int64)&v79, 273) )
          break;
        v30 *= 2;
        if ( *(_DWORD *)(a1 + 36) <= v30 )
          return 0;
      }
      v52 = v30;
      v14 = v69;
      if ( *(_DWORD *)(a1 + 68) == v52 )
      {
LABEL_44:
        sub_12C5D0(a2, a1);
        return v14;
      }
      *(_DWORD *)(a1 + 36) = v52;
      return 0;
    case 0x14:
      if ( *(_BYTE *)(v19 + 48) == 2 )
      {
        v44 = 8 * v12;
        v45 = (unsigned __int8 *)(v19 + 32);
        v46 = v19 + 48;
        if ( (unsigned __int64)(8 * v12) > 0x3F )
        {
LABEL_69:
          v47 = -1;
          goto LABEL_70;
        }
      }
      else
      {
        v21 = *(_BYTE *)(v19 + 32);
        if ( v21 != 2 )
          goto LABEL_19;
        v44 = 8 * v12;
        v45 = (unsigned __int8 *)(v19 + 48);
        v46 = v19 + 32;
        if ( (unsigned __int64)(8 * v12) > 0x3F )
          goto LABEL_69;
      }
      v47 = (1LL << v44) - 1;
LABEL_70:
      if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v46 + 8) + 16LL), *(unsigned int *)(v46 + 4), 1) == v47 )
      {
        *(_QWORD *)&v80 = 0;
        sub_123A40((__int64)&v79, v45);
        v48 = *(_WORD *)(a1 + 32);
        v49 = *(_WORD *)(a1 + 34);
        v50 = *(_DWORD *)(a1 + 36);
        *(_QWORD *)(a1 + 32) = v79;
        v51 = *(_QWORD *)(a1 + 40);
        LOWORD(v79) = v48;
        *(_QWORD *)(a1 + 40) = v80;
        WORD1(v79) = v49;
        HIDWORD(v79) = v50;
        *(_QWORD *)&v80 = v51;
        sub_11CDA0((__int64)&v79);
        return v14;
      }
      v19 = *(_QWORD *)(a1 + 40);
      v21 = *(_BYTE *)(v19 + 32);
LABEL_19:
      if ( v21 != 10 && *(_BYTE *)(v19 + 48) != 10 )
      {
        v82 = 0xFFFFFFFF00000000LL;
        v83 = 0;
        v84 = 0xFFFFFFFF00000000LL;
        v85 = 0;
        v86 = 0xFFFFFFFF00000000LL;
        v87 = 0;
        v80 = 0;
        sub_1253A0((__int64)&v79, v19);
        sub_12B320((unsigned __int64)&v82, a2, v81, *(_DWORD *)(a1 + 68));
        sub_12B320((unsigned __int64)&v84, a2, v81, *(_DWORD *)(a1 + 68));
        sub_11CDA0((__int64)&v86);
        sub_123A40((__int64)&v86, (unsigned __int8 *)(a1 + 64));
        sub_11D890(a1, (__int64)&v79);
        sub_11CDA0((__int64)&v86);
        sub_11CDA0((__int64)&v84);
        sub_11CDA0((__int64)&v82);
        return v14;
      }
      return 0;
    case 0x17:
    case 0x18:
      if ( *(_BYTE *)(v19 + 48) != 2
        || (*(_BYTE *)(v19 + 33) & 4) != 0
        || *(_BYTE *)(v19 + 32) == 4 && sub_122600(*(unsigned int **)(v19 + 40)) )
      {
        return 0;
      }
      v74 = v13;
      v71 = v19;
      v70 = (unsigned __int8 *)(v19 + 32);
      LODWORD(v78) = -1;
      sub_152630(v19, &v78);
      v33 = v74;
      v34 = v78;
      v35 = v71;
      v36 = 8 * (v74 - v12);
      if ( v36 == (_DWORD)v78 )
        goto LABEL_96;
      v37 = 8 * v12;
      if ( (_DWORD)v78 != 8 * v12 )
        goto LABEL_50;
      if ( v74 >= 2 * v12 )
      {
        if ( (unsigned __int8)sub_1273B0((unsigned __int64)v70, a2, *(_QWORD *)(v71 + 24), 2 * v12) )
        {
LABEL_96:
          *(_DWORD *)a1 = 11;
          sub_123A40((__int64)&v79, v70);
          sub_11CA10((char *)v5, (char *)&v79);
          sub_11CDA0((__int64)&v79);
          return v14;
        }
        v34 = v78;
        v37 = 8 * v12;
        v36 = 8 * (v74 - v12);
        v33 = v74;
        v35 = v71;
LABEL_50:
        if ( v36 < v34 )
        {
          if ( v33 == 2 * v12 && *(_BYTE *)(v35 + 32) == 4 && **(_DWORD **)(v35 + 40) == 14 )
          {
            v56 = (char *)(v35 + 48);
            v66 = (_DWORD *)v35;
            sub_120A10(v35 + 48, a2, v34 - v37, *(_DWORD *)(v35 + 52), **(_QWORD **)(v35 + 56), 0);
            *(_DWORD *)a1 = *v66;
            *v66 = 11;
            sub_11CA10(v56, (char *)(a1 + 48));
            *(_DWORD *)(v57 + 68) = v12;
            *(_DWORD *)(a1 + 36) = v12;
            return v14;
          }
          goto LABEL_52;
        }
        if ( !v34 || (v34 & 7) != 0 )
        {
LABEL_52:
          v72 = v35;
          if ( (unsigned int)sub_119AE0(a3, a4, v35, 1) == 1 )
          {
            sub_12D880(a1, a2, a3, a4, (_DWORD)a5, v38);
            return v14;
          }
          v39 = *(_DWORD *)(a1 + 68);
          if ( *(_BYTE *)(v72 + 32) != 4 )
            goto LABEL_54;
          v54 = *(_DWORD **)(v72 + 40);
          if ( *v54 != 9 )
          {
            if ( *v54 != 8 || *(_DWORD *)v72 != 24 )
              goto LABEL_54;
            goto LABEL_100;
          }
          if ( *(_DWORD *)v72 == 23 )
          {
LABEL_100:
            if ( v54[9] == v39 )
            {
              *(_DWORD *)a1 = *(_DWORD *)v72;
              sub_11CA10((char *)(a1 + 48), (char *)(v72 + 48));
              sub_123A40((__int64)&v79, (unsigned __int8 *)(v55 + 32));
              sub_11CA10((char *)v5, (char *)&v79);
              sub_11CDA0((__int64)&v79);
              return v14;
            }
LABEL_54:
            if ( v39 == 1 && *(_DWORD *)v72 == 23 && 8 * *(_DWORD *)(v72 + 36) - 1 == (_DWORD)v78 )
            {
              v79 = (__int64 (__fastcall **)())0xFFFFFFFF00000000LL;
              *(_QWORD *)&v80 = 0;
              sub_11CA10((char *)&v79, (char *)v70);
              sub_11CA10((char *)&v79, (char *)v5);
              sub_120A10(a1 + 48, a2, 0, *(_DWORD *)(a1 + 36), *(_QWORD *)(v40 + 24), v41);
              *(_DWORD *)a1 = 40;
              sub_11CDA0((__int64)&v79);
              return v14;
            }
          }
          return 0;
        }
      }
      else if ( v36 < (int)v78 || !(_DWORD)v78 )
      {
        goto LABEL_52;
      }
      v77 = v35;
      v76 = v33;
      v75 = v34 / 8;
      v73 = v33 - v34 / 8;
      if ( sub_122640((__int64)v5, v73) )
      {
        *(_DWORD *)v77 = 11;
        sub_11CDA0(v77 + 48);
        *(_DWORD *)(a1 + 36) = v73;
        *(_DWORD *)(v77 + 68) = v73;
        return v14;
      }
      v58 = v75 + v12;
      if ( sub_122640((__int64)v5, v58) )
      {
        *(_DWORD *)a1 = 11;
        *(_DWORD *)v77 = 10;
        sub_11CDA0(v77 + 48);
        *(_DWORD *)(a1 + 36) = v58;
        *(_DWORD *)(v77 + 68) = v58;
        return v14;
      }
      v59 = round_up_power2();
      if ( v76 <= v59 )
      {
        v62 = round_up_power2();
        v35 = v77;
        if ( v76 > v62 )
        {
          sub_1273B0((unsigned __int64)v70, a2, *(_QWORD *)(a1 + 24), v62);
          v63 = *(_DWORD *)(v77 + 36);
          *(_DWORD *)(v77 + 68) = v63;
          *(_DWORD *)(a1 + 36) = v63;
          return v14;
        }
        goto LABEL_52;
      }
      v67 = v59;
      sub_1279B0((unsigned __int64)v70, a2, *(_QWORD *)(a1 + 24), v59);
      v60 = *(_DWORD *)(v77 + 36);
      *(_DWORD *)(v77 + 68) = v60;
      *(_DWORD *)(a1 + 36) = v60;
      v61 = v78 + 8 * (v67 - v76);
      if ( v61 < 0 )
      {
        if ( !under_debugger )
          sub_383060(51564);
        goto LABEL_123;
      }
      if ( v61 )
      {
        sub_120A10(v77 + 48, a2, v61, *(_DWORD *)(v77 + 52), **(_QWORD **)(v77 + 56), 0);
      }
      else
      {
        *(_DWORD *)v77 = 4;
        sub_11CDA0(v77 + 48);
      }
      return v14;
    default:
      return 0;
  }
}
