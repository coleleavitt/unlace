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
  __int64 v18; // rcx
  int v19; // edx
  unsigned int *v20; // r10
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 (__fastcall **v28)(); // rax
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // r12
  unsigned int v32; // r14d
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // r10
  int v40; // r9d
  int v41; // r11d
  int v42; // r9d
  int v43; // eax
  __int64 v44; // r10
  __int32 v45; // r9d
  __int64 v46; // rsi
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  char v50; // cl
  unsigned __int8 *v51; // r15
  unsigned int *v52; // rax
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int16 v56; // si
  __int16 v57; // cx
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int v62; // r13d
  __int64 v63; // rdi
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  char *v67; // r12
  __int64 v68; // r10
  int v69; // r13d
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v76; // [rsp+8h] [rbp-E0h]
  _DWORD *v77; // [rsp+8h] [rbp-E0h]
  int v78; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v80; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v81; // [rsp+18h] [rbp-D0h]
  unsigned int *v82; // [rsp+20h] [rbp-C8h]
  __int64 v83; // [rsp+20h] [rbp-C8h]
  int v84; // [rsp+20h] [rbp-C8h]
  int v85; // [rsp+28h] [rbp-C0h]
  int v86; // [rsp+28h] [rbp-C0h]
  int v87; // [rsp+30h] [rbp-B8h]
  __int64 v88; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall **v90)(); // [rsp+50h] [rbp-98h] BYREF
  __int128 v91; // [rsp+58h] [rbp-90h]
  __int64 v92; // [rsp+68h] [rbp-80h]
  unsigned __int64 v93; // [rsp+70h] [rbp-78h] BYREF
  __int64 v94; // [rsp+78h] [rbp-70h]
  unsigned __int64 v95; // [rsp+80h] [rbp-68h] BYREF
  __int64 v96; // [rsp+88h] [rbp-60h]
  unsigned __int64 v97; // [rsp+90h] [rbp-58h] BYREF
  __int64 v98; // [rsp+98h] [rbp-50h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-40h]

  v5 = (unsigned __int8 *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 68);
  v99 = __readfsqword(0x28u);
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
      v19 = *(_DWORD *)(a1 + 36);
      if ( !v12 || v19 <= v12 )
      {
LABEL_8:
        if ( *(_BYTE *)(a1 + 32) == 14 && *(_DWORD *)(a1 + 68) < *(_DWORD *)(a1 + 36) / 2 )
        {
          v25 = *(__int64 **)(a1 + 40);
          v26 = v25[1];
          v27 = *v25;
          v25[1] = 0;
          *v25 = 0xFFFFFFFF00000000LL;
          v28 = *(__int64 (__fastcall ***)())(a1 + 32);
          *(_QWORD *)(a1 + 32) = v27;
          v90 = v28;
          v29 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = v26;
          *(_QWORD *)&v91 = v29;
          sub_11CDA0((__int64)&v90);
          return v14;
        }
        return 0;
      }
      v15 = sub_126F10((unsigned __int64)v5, a2, v19 - v12, v18);
    }
    else
    {
      v15 = sub_12AB50(v5, a2, v12, 1);
    }
    if ( v15 )
    {
      *(_DWORD *)a1 = 4;
      return v14;
    }
    goto LABEL_8;
  }
  v20 = *(unsigned int **)(a1 + 40);
  v21 = *v20;
  switch ( (int)v21 )
  {
    case 4:
      *v20 = 10;
      sub_12C5D0(a2, a1, v11, v21);
      return v14;
    case 5:
    case 7:
      v46 = *(_QWORD *)(a1 + 40);
      v93 = 0xFFFFFFFF00000000LL;
      v94 = 0;
      v95 = 0xFFFFFFFF00000000LL;
      v96 = 0;
      v97 = 0xFFFFFFFF00000000LL;
      v98 = 0;
      v91 = 0;
      sub_1253A0((__int64)&v90, v46);
      if ( (!*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) || !sub_11BB90((unsigned __int8 *)&v93))
        && (unsigned __int8)sub_12AB50((unsigned __int8 *)&v93, a2, *(_DWORD *)(a1 + 68), 1) )
      {
        goto LABEL_64;
      }
      if ( a5 && (unsigned int)(*a5 - 8) <= 1 || (v47 = *(_DWORD *)(a1 + 68), v47 == 1) )
      {
        sub_11CDA0((__int64)&v97);
        sub_11CDA0((__int64)&v95);
        sub_11CDA0((__int64)&v93);
        return 0;
      }
      sub_1207E0((char *)&v93, a2, 10, v92, v47);
LABEL_64:
      sub_11CDA0((__int64)&v97);
      sub_123A40((__int64)&v97, (unsigned __int8 *)(a1 + 64), v48, v49);
      sub_11D890(a1, (__int64)&v90);
      sub_11CDA0((__int64)&v97);
      sub_11CDA0((__int64)&v95);
      sub_11CDA0((__int64)&v93);
      return v14;
    case 8:
    case 9:
      if ( v12 == v20[9] )
      {
        sub_123A40((__int64)&v90, (unsigned __int8 *)v20 + 32, v11, v21);
        *(_DWORD *)a1 = 4;
        sub_11CDA0((__int64)v5);
        sub_123A40((__int64)v5, (unsigned __int8 *)&v90, v60, v61);
        sub_11CDA0((__int64)&v90);
        return v14;
      }
      if ( v12 < (int)v20[9] )
      {
        *v20 = 10;
        v20 = *(unsigned int **)(a1 + 40);
      }
      v20[17] = v12;
      goto LABEL_44;
    case 10:
      goto LABEL_44;
    case 12:
    case 13:
    case 14:
    case 19:
    case 21:
      v22 = *((_BYTE *)v20 + 32);
      goto LABEL_19;
    case 15:
    case 16:
    case 18:
      goto LABEL_28;
    case 17:
      v30 = sub_11FD80((char *)v20 + 48, &v89, 0);
      v12 = *(_DWORD *)(a1 + 68);
      if ( !v30 )
        goto LABEL_27;
      v11 = v89 - 1;
      if ( (v89 & (v89 - 1)) != 0 )
        goto LABEL_27;
      v11 = v12;
      if ( (unsigned __int64)v12 > 0x3F )
        goto LABEL_27;
      v11 = 1LL << v12;
      if ( v89 >= 1LL << v12 )
        goto LABEL_27;
      v63 = *(_QWORD *)(a1 + 40);
      v90 = &off_4DD8E0;
      *(_QWORD *)&v91 = a2;
      *((_QWORD *)&v91 + 1) = (unsigned int)v12 | 0x100000000LL;
      if ( (unsigned __int8)sub_121DB0(v63, (__int64)&v90, 273) )
        goto LABEL_44;
      v12 = *(_DWORD *)(a1 + 68);
LABEL_27:
      v20 = *(unsigned int **)(a1 + 40);
      v13 = *(unsigned int *)(a1 + 36);
      LODWORD(v21) = *v20;
LABEL_28:
      v21 = (unsigned int)v21 & 0xFFFFFFFD;
      v76 = v21;
      if ( v12 >= (int)v13 )
        return 0;
      v80 = v14;
      v31 = (__int64)(v20 + 8);
      v32 = v12;
      v33 = (__int64)(v20 + 12);
      v34 = (__int64)v20;
      while ( 1 )
      {
        if ( v76 == 16 )
        {
          while ( 1 )
          {
            while ( !(unsigned __int8)sub_30DAC0(v31, v32, v11, v21, v13) )
            {
              v32 *= 2;
              if ( *(_DWORD *)(a1 + 36) <= (signed int)v32 )
                return 0;
            }
            if ( (unsigned __int8)sub_30DAC0(v33, v32, v11, v21, v13) )
              break;
            v32 *= 2;
            if ( (signed int)v32 >= *(_DWORD *)(a1 + 36) )
              return 0;
          }
        }
        else
        {
          while ( !(unsigned __int8)sub_1278D0(v31, a2, v32, v21) || !(unsigned __int8)sub_1278D0(v33, a2, v32, v21) )
          {
            v32 *= 2;
            if ( *(_DWORD *)(a1 + 36) <= (signed int)v32 )
              return 0;
          }
        }
        *(_QWORD *)&v91 = a2;
        *((_QWORD *)&v91 + 1) = v32 | 0x100000000LL;
        v90 = &off_4DD8E0;
        if ( (unsigned __int8)sub_121DB0(v34, (__int64)&v90, 273) )
          break;
        v32 *= 2;
        if ( *(_DWORD *)(a1 + 36) <= (signed int)v32 )
          return 0;
      }
      v62 = v32;
      v14 = v80;
      if ( *(_DWORD *)(a1 + 68) == v62 )
      {
LABEL_44:
        sub_12C5D0(a2, a1, v11, v21);
        return v14;
      }
      *(_DWORD *)(a1 + 36) = v62;
      return 0;
    case 20:
      if ( *((_BYTE *)v20 + 48) == 2 )
      {
        v50 = 8 * v12;
        v51 = (unsigned __int8 *)(v20 + 8);
        v52 = v20 + 12;
        if ( (unsigned __int64)(8 * v12) > 0x3F )
        {
LABEL_69:
          v53 = -1;
          goto LABEL_70;
        }
      }
      else
      {
        v22 = *((_BYTE *)v20 + 32);
        if ( v22 != 2 )
          goto LABEL_19;
        v50 = 8 * v12;
        v51 = (unsigned __int8 *)(v20 + 12);
        v52 = v20 + 8;
        if ( (unsigned __int64)(8 * v12) > 0x3F )
          goto LABEL_69;
      }
      v53 = (1LL << v50) - 1;
LABEL_70:
      if ( sub_32ABC0(*(_QWORD *)(*((_QWORD *)v52 + 1) + 16LL), v52[1], 1) == v53 )
      {
        *(_QWORD *)&v91 = 0;
        sub_123A40((__int64)&v90, v51, v54, v55);
        v56 = *(_WORD *)(a1 + 32);
        v57 = *(_WORD *)(a1 + 34);
        v58 = *(_DWORD *)(a1 + 36);
        *(_QWORD *)(a1 + 32) = v90;
        v59 = *(_QWORD *)(a1 + 40);
        LOWORD(v90) = v56;
        *(_QWORD *)(a1 + 40) = v91;
        WORD1(v90) = v57;
        HIDWORD(v90) = v58;
        *(_QWORD *)&v91 = v59;
        sub_11CDA0((__int64)&v90);
        return v14;
      }
      v20 = *(unsigned int **)(a1 + 40);
      v22 = *((_BYTE *)v20 + 32);
LABEL_19:
      if ( v22 != 10 && *((_BYTE *)v20 + 48) != 10 )
      {
        v93 = 0xFFFFFFFF00000000LL;
        v94 = 0;
        v95 = 0xFFFFFFFF00000000LL;
        v96 = 0;
        v97 = 0xFFFFFFFF00000000LL;
        v98 = 0;
        v91 = 0;
        sub_1253A0((__int64)&v90, (__int64)v20);
        sub_12B320((__int64)&v93, a2, v92, *(_DWORD *)(a1 + 68));
        sub_12B320((__int64)&v95, a2, v92, *(_DWORD *)(a1 + 68));
        sub_11CDA0((__int64)&v97);
        sub_123A40((__int64)&v97, (unsigned __int8 *)(a1 + 64), v23, v24);
        sub_11D890(a1, (__int64)&v90);
        sub_11CDA0((__int64)&v97);
        sub_11CDA0((__int64)&v95);
        sub_11CDA0((__int64)&v93);
        return v14;
      }
      return 0;
    case 23:
    case 24:
      if ( *((_BYTE *)v20 + 48) != 2
        || (*((_BYTE *)v20 + 33) & 4) != 0
        || *((_BYTE *)v20 + 32) == 4 && sub_122600(*((unsigned int **)v20 + 5)) )
      {
        return 0;
      }
      v85 = v13;
      v82 = v20;
      v81 = (unsigned __int8 *)(v20 + 8);
      LODWORD(v89) = -1;
      sub_152630(v20, &v89);
      v37 = v85;
      v38 = v89;
      v39 = (__int64)v82;
      v40 = 8 * (v85 - v12);
      if ( v40 == (_DWORD)v89 )
        goto LABEL_96;
      v41 = 8 * v12;
      if ( (_DWORD)v89 != 8 * v12 )
        goto LABEL_50;
      if ( v85 >= 2 * v12 )
      {
        if ( (unsigned __int8)sub_1273B0((unsigned __int64)v81, a2, *((_QWORD *)v82 + 3), 2 * v12) )
        {
LABEL_96:
          *(_DWORD *)a1 = 11;
          sub_123A40((__int64)&v90, v81, v35, v36);
          sub_11CA10((char *)v5, (char *)&v90);
          sub_11CDA0((__int64)&v90);
          return v14;
        }
        v38 = v89;
        v41 = 8 * v12;
        v40 = 8 * (v85 - v12);
        v37 = v85;
        v39 = (__int64)v82;
LABEL_50:
        if ( v40 < v38 )
        {
          if ( v37 == 2 * v12 && *(_BYTE *)(v39 + 32) == 4 && **(_DWORD **)(v39 + 40) == 14 )
          {
            v67 = (char *)(v39 + 48);
            v77 = (_DWORD *)v39;
            sub_120A10(v39 + 48, a2, v38 - v41, *(_DWORD *)(v39 + 52), **(_QWORD **)(v39 + 56), 0);
            *(_DWORD *)a1 = *v77;
            *v77 = 11;
            sub_11CA10(v67, (char *)(a1 + 48));
            *(_DWORD *)(v68 + 68) = v12;
            *(_DWORD *)(a1 + 36) = v12;
            return v14;
          }
          goto LABEL_52;
        }
        if ( !v38 || (v38 & 7) != 0 )
        {
LABEL_52:
          v83 = v39;
          if ( (unsigned int)sub_119AE0(a3, a4, v39, 1) == 1 )
          {
            sub_12D880(a1, a2, a3, a4, (_DWORD)a5, v42);
            return v14;
          }
          v43 = *(_DWORD *)(a1 + 68);
          if ( *(_BYTE *)(v83 + 32) != 4 )
            goto LABEL_54;
          v64 = *(_DWORD **)(v83 + 40);
          if ( *v64 != 9 )
          {
            if ( *v64 != 8 || *(_DWORD *)v83 != 24 )
              goto LABEL_54;
            goto LABEL_100;
          }
          if ( *(_DWORD *)v83 == 23 )
          {
LABEL_100:
            if ( v64[9] == v43 )
            {
              *(_DWORD *)a1 = *(_DWORD *)v83;
              sub_11CA10((char *)(a1 + 48), (char *)(v83 + 48));
              sub_123A40((__int64)&v90, (unsigned __int8 *)(v65 + 32), v66, v65);
              sub_11CA10((char *)v5, (char *)&v90);
              sub_11CDA0((__int64)&v90);
              return v14;
            }
LABEL_54:
            if ( v43 == 1 && *(_DWORD *)v83 == 23 && 8 * *(_DWORD *)(v83 + 36) - 1 == (_DWORD)v89 )
            {
              v90 = (__int64 (__fastcall **)())0xFFFFFFFF00000000LL;
              *(_QWORD *)&v91 = 0;
              sub_11CA10((char *)&v90, (char *)v81);
              sub_11CA10((char *)&v90, (char *)v5);
              sub_120A10(a1 + 48, a2, 0, *(_DWORD *)(a1 + 36), *(_QWORD *)(v44 + 24), v45);
              *(_DWORD *)a1 = 40;
              sub_11CDA0((__int64)&v90);
              return v14;
            }
          }
          return 0;
        }
      }
      else if ( v40 < (int)v89 || !(_DWORD)v89 )
      {
        goto LABEL_52;
      }
      v88 = v39;
      v87 = v37;
      v86 = v38 / 8;
      v84 = v37 - v38 / 8;
      if ( sub_122640((__int64)v5, v84) )
      {
        *(_DWORD *)v88 = 11;
        sub_11CDA0(v88 + 48);
        *(_DWORD *)(a1 + 36) = v84;
        *(_DWORD *)(v88 + 68) = v84;
        return v14;
      }
      v69 = v86 + v12;
      if ( sub_122640((__int64)v5, v69) )
      {
        *(_DWORD *)a1 = 11;
        *(_DWORD *)v88 = 10;
        sub_11CDA0(v88 + 48);
        *(_DWORD *)(a1 + 36) = v69;
        *(_DWORD *)(v88 + 68) = v69;
        return v14;
      }
      v70 = round_up_power2();
      if ( v87 <= v70 )
      {
        v73 = round_up_power2();
        v39 = v88;
        if ( v87 > v73 )
        {
          sub_1273B0((unsigned __int64)v81, a2, *(_QWORD *)(a1 + 24), v73);
          v74 = *(_DWORD *)(v88 + 36);
          *(_DWORD *)(v88 + 68) = v74;
          *(_DWORD *)(a1 + 36) = v74;
          return v14;
        }
        goto LABEL_52;
      }
      v78 = v70;
      sub_1279B0((unsigned __int64)v81, a2, *(_QWORD *)(a1 + 24), v70);
      v71 = *(_DWORD *)(v88 + 36);
      *(_DWORD *)(v88 + 68) = v71;
      *(_DWORD *)(a1 + 36) = v71;
      v72 = v89 + 8 * (v78 - v87);
      if ( v72 < 0 )
      {
        if ( !under_debugger )
          sub_383060(51564);
        goto LABEL_123;
      }
      if ( v72 )
      {
        sub_120A10(v88 + 48, a2, v72, *(_DWORD *)(v88 + 52), **(_QWORD **)(v88 + 56), 0);
      }
      else
      {
        *(_DWORD *)v88 = 4;
        sub_11CDA0(v88 + 48);
      }
      return v14;
    default:
      return 0;
  }
}
