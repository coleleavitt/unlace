__int64 __fastcall sub_68FF40(int a1, void (*a2)(const char *, ...), __int64 a3, void **a4, int a5)
{
  void **v5; // r13
  char *v7; // rax
  char v8; // r12
  char v9; // bp
  unsigned __int8 v10; // r15
  const char *v11; // r14
  const char *v12; // rsi
  bool v13; // cc
  int v14; // r9d
  const char *v15; // r14
  int v16; // eax
  int v17; // ebp
  char *v18; // rdx
  char v19; // r14
  unsigned __int8 v20; // bp
  const char *v21; // rcx
  int v22; // r12d
  char v23; // al
  unsigned __int8 v24; // r14
  const char *v25; // r8
  const char *v26; // r9
  int v27; // eax
  char v28; // bp
  int v29; // r9d
  int v30; // eax
  unsigned int v31; // r14d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  int v36; // eax
  int v37; // ebp
  char v38; // dl
  int v40; // ecx
  int v41; // eax
  unsigned __int8 *v42; // rdx
  char v43; // al
  int v44; // ebp
  int v45; // r12d
  int v46; // r13d
  int v47; // r14d
  int v48; // r9d
  unsigned __int8 *v49; // rax
  int v50; // ecx
  unsigned __int8 v51; // bp
  unsigned __int8 *v52; // rax
  int v53; // r12d
  int v54; // ebp
  __int64 v55; // r14
  const char *v56; // rsi
  unsigned int *v57; // r14
  unsigned int v58; // r12d
  unsigned __int8 v59; // bp
  int v60; // ebp
  int v61; // r12d
  int v62; // eax
  int v63; // r13d
  int v64; // ebp
  int v65; // ebp
  int v66; // r13d
  int v67; // r9d
  int v68; // [rsp+0h] [rbp-B8h]
  int v69; // [rsp+0h] [rbp-B8h]
  int v70[2]; // [rsp+0h] [rbp-B8h]
  int v71; // [rsp+0h] [rbp-B8h]
  int v72; // [rsp+8h] [rbp-B0h]
  _QWORD *v73; // [rsp+8h] [rbp-B0h]
  int v74; // [rsp+8h] [rbp-B0h]
  int v75; // [rsp+10h] [rbp-A8h]
  int v76; // [rsp+10h] [rbp-A8h]
  char v77; // [rsp+10h] [rbp-A8h]
  void **p_ptr; // [rsp+18h] [rbp-A0h]
  int v79; // [rsp+18h] [rbp-A0h]
  int v80[2]; // [rsp+18h] [rbp-A0h]
  const char *v81; // [rsp+20h] [rbp-98h]
  int v82; // [rsp+20h] [rbp-98h]
  void **v83; // [rsp+20h] [rbp-98h]
  int v84; // [rsp+28h] [rbp-90h]
  int v85; // [rsp+28h] [rbp-90h]
  int v86; // [rsp+30h] [rbp-88h]
  int v87; // [rsp+30h] [rbp-88h]
  int v88; // [rsp+34h] [rbp-84h] BYREF
  void *v89; // [rsp+38h] [rbp-80h] BYREF
  void *v90; // [rsp+40h] [rbp-78h] BYREF
  __int128 v91; // [rsp+48h] [rbp-70h]
  void *v92; // [rsp+58h] [rbp-60h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  int v94[4]; // [rsp+68h] [rbp-50h]
  unsigned __int64 v95; // [rsp+78h] [rbp-40h]

  v5 = a4;
  v72 = a1;
  v75 = a3;
  v68 = a5;
  v95 = __readfsqword(0x28u);
  v89 = *a4;
  a2("//\t%2zu:%*c%s", (size_t)v89 - a3, a5, 32, &byte_22CD811);
  v7 = (char *)v89;
  v89 = (char *)v89 + 1;
  v8 = *v7;
  v9 = *v7 & 0xF;
  v10 = *v7 & 0x30;
  switch ( v9 )
  {
    case 0:
      v11 = nullptr;
      v12 = "BT_UNK_QWORD";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v12 = "BT_UNKNOWN";
          if ( v10 != 48 )
            v12 = nullptr;
        }
        else
        {
          v12 = "00";
          if ( v10 )
            v12 = "BT_UNK_WORD";
        }
      }
      break;
    case 1:
      v11 = nullptr;
      v12 = "BT_UNK_DWORD";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v12 = "BT_UNK_OWORD";
          if ( v10 != 48 )
            v12 = nullptr;
        }
        else
        {
          v12 = "BT_VOID";
          if ( v10 )
            v12 = "BT_UNK_BYTE";
        }
      }
      break;
    case 2:
      v11 = "BTMT_USIGNED";
      v12 = "BT_INT8";
      if ( v10 == 32 )
        break;
      if ( v10 <= 0x20u )
        goto LABEL_9;
      v11 = "BTMT_CHAR";
      if ( v10 != 48 )
        v11 = nullptr;
      break;
    case 3:
      v11 = "BTMT_USIGNED";
      v12 = "BT_INT16";
      v13 = v10 <= 0x20u;
      if ( v10 != 32 )
        goto LABEL_8;
      break;
    case 4:
      v11 = "BTMT_USIGNED";
      v12 = "BT_INT32";
      v13 = v10 <= 0x20u;
      if ( v10 == 32 )
        break;
      goto LABEL_8;
    case 5:
      v11 = "BTMT_USIGNED";
      v12 = "BT_INT64";
      v13 = v10 <= 0x20u;
      if ( v10 == 32 )
        break;
      goto LABEL_8;
    case 6:
      v11 = "BTMT_USIGNED";
      v12 = "BT_INT128";
      v13 = v10 <= 0x20u;
      if ( v10 == 32 )
        break;
LABEL_8:
      if ( v13 )
        goto LABEL_9;
      v11 = "BTMT_CHAR (!!!*illegal*!!!)";
      if ( v10 != 48 )
LABEL_33:
        v11 = nullptr;
      break;
    case 7:
      v11 = "BTMT_USIGNED";
      v12 = "BT_INT";
      if ( v10 == 32 )
        break;
      if ( v10 <= 0x20u )
      {
LABEL_9:
        v11 = "BTMT_UNKSIGN";
        if ( v10 )
          v11 = "BTMT_SIGND";
      }
      else
      {
        v11 = nullptr;
        if ( v10 == 48 )
          v12 = "BT_SEGREG";
      }
      break;
    case 8:
      if ( v10 == 32 )
      {
        v11 = "BTMT_BOOL2";
        v12 = "BT_BOOL";
        if ( (unsigned __int8)getinf_flag(3, 4) )
          v11 = "BTMT_BOOL8";
      }
      else
      {
        v12 = "BT_BOOL";
        if ( v10 > 0x20u )
        {
          v11 = "BTMT_BOOL4";
          if ( v10 != 48 )
            v11 = nullptr;
        }
        else
        {
          v11 = "BTMT_DEFBOOL";
          if ( v10 )
            v11 = "BTMT_BOOL1";
        }
      }
      break;
    case 9:
      v11 = "BTMT_LNGDBL";
      v12 = "BT_FLOAT";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v11 = "BTMT_SPECFLT";
          if ( v10 != 48 )
            v11 = nullptr;
        }
        else
        {
          v11 = "BTMT_FLOAT";
          if ( v10 )
            v11 = "BTMT_DOUBLE";
        }
      }
      break;
    case 10:
      v11 = "BTMT_FAR";
      v12 = "BT_PTR";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v11 = "BTMT_CLOSURE";
          if ( v10 != 48 )
            v11 = nullptr;
        }
        else
        {
          v11 = "BTMT_DEFPTR";
          if ( v10 )
            v11 = "BTMT_NEAR";
        }
      }
      break;
    case 11:
      v11 = "BTMT_NONBASED";
      v12 = "BT_ARRAY";
      if ( (v8 & 0x10) == 0 )
        goto LABEL_33;
      break;
    case 12:
      v11 = "BTMT_FARCALL";
      v12 = "BT_FUNC";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v11 = "BTMT_INTCALL";
          if ( v10 != 48 )
            v11 = nullptr;
        }
        else
        {
          v11 = "BTMT_DEFCALL";
          if ( v10 )
            v11 = "BTMT_NEARCALL";
        }
      }
      break;
    case 13:
      v11 = "BTMT_ENUM";
      v12 = "BT_COMPLEX";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v11 = "BTMT_TYPEDEF";
          if ( v10 != 48 )
            v11 = nullptr;
        }
        else
        {
          v11 = "BTMT_STRUCT";
          if ( v10 )
            v11 = "BTMT_UNION";
        }
      }
      break;
    case 14:
      v11 = "BTMT_BFLDI32";
      v12 = "BT_BITFIELD";
      if ( v10 != 32 )
      {
        if ( v10 > 0x20u )
        {
          v11 = "BTMT_BFLDI64";
          if ( v10 != 48 )
            v11 = nullptr;
        }
        else
        {
          v11 = "BTMT_BFLDI8";
          if ( v10 )
            v11 = "BTMT_BFLDI16";
        }
      }
      break;
    default:
      a2("%02X (wrong)\n", (unsigned __int8)v8);
      *v5 = v89;
      return 0;
  }
  if ( (v8 & 0x40) != 0 )
  {
    LODWORD(p_ptr) = (_DWORD)v12;
    a2("BTM_CONST ");
  }
  if ( v8 < 0 )
  {
    LODWORD(p_ptr) = (_DWORD)v12;
    a2("BTM_VOLATILE ");
  }
  a2("%s ", v12);
  if ( v11 )
  {
    v12 = v11;
    a2("%s", v11);
  }
  v15 = "\n";
  if ( (v8 & 0x3F) != 0xD )
  {
    v15 = &byte_22CD811;
    a2("\n");
  }
  switch ( v9 )
  {
    case 10:
      v37 = v68 + 1;
      if ( v10 != 48 )
        goto LABEL_123;
      v49 = (unsigned __int8 *)v89;
      v89 = (char *)v89 + 1;
      v50 = *v49;
      if ( (_BYTE)v50 == 0xFF )
      {
        if ( !(unsigned __int8)sub_68FF40(
                                 a1,
                                 (int)a2,
                                 v75,
                                 (int)&v89,
                                 v37,
                                 v14,
                                 v68,
                                 a1,
                                 v75,
                                 (int)p_ptr,
                                 (int)v81,
                                 v84,
                                 v86,
                                 v89,
                                 (__int64)v90,
                                 v91,
                                 SDWORD2(v91),
                                 v92,
                                 (__int64)ptr,
                                 v94[0],
                                 *(__int64 *)&v94[2]) )
          return 0;
      }
      else
      {
        a2("//\t%*cptr size: %d\n", v37, 32, v50);
      }
LABEL_123:
      if ( *(_BYTE *)v89 != 0xFE )
        goto LABEL_119;
      v40 = 10;
      goto LABEL_125;
    case 11:
      if ( (v8 & 0x10) != 0 )
      {
        v36 = sub_692FE0(&v89);
        v34 = (unsigned int)v36;
        if ( v36 < 0 )
          goto LABEL_184;
        v37 = v68 + 1;
        a2("//\t%*cnum_elem: %d\n", v68 + 1, 32, v36);
      }
      else
      {
        if ( !(unsigned __int8)sub_54ED70((char **)&v89, (int *)&v90, (int *)&ptr) )
        {
          a2("//\tGET_DA ERROR\n");
          *v5 = v89;
          return 0;
        }
        v37 = v68 + 1;
        a2("//\t%*cnum_elem: %u base: %u\n", v68 + 1, 32, (_DWORD)v90, (_DWORD)ptr);
      }
      if ( *(_BYTE *)v89 == 0xFE )
      {
        v40 = 11;
LABEL_125:
        if ( !(unsigned __int8)sub_6857E0(a2, (const char **)&v89, v37, v40) )
          return 0;
      }
LABEL_119:
      v38 = sub_68FF40(
              v72,
              (int)a2,
              v75,
              (int)&v89,
              v37,
              v14,
              v68,
              v72,
              v75,
              (int)p_ptr,
              (int)v81,
              v84,
              v86,
              v89,
              (__int64)v90,
              v91,
              SDWORD2(v91),
              v92,
              (__int64)ptr,
              v94[0],
              *(__int64 *)&v94[2]);
      v35 = v89;
      if ( !v38 )
        return 0;
      goto LABEL_120;
    case 12:
      v18 = (char *)v89;
      if ( (*(_BYTE *)v89 & 0xF0) == 0xA0 )
      {
        v88 = 0;
        v89 = (char *)v89 - 1;
        LODWORD(v81) = v68 + 1;
        v90 = nullptr;
        v91 = 0;
        v52 = sub_688400((__int64 *)&v90, &v88, (unsigned __int8 *)v89);
        v53 = v88;
        v89 = v52;
        if ( (v88 & 1) != 0 )
        {
          a2("//\t%*cspoiled registers: ", v68 + 1, 32);
          v54 = 0;
          v55 = 0;
          p_ptr = &ptr;
          ptr = nullptr;
          *(_OWORD *)v94 = 0;
          if ( (_QWORD)v91 )
          {
            while ( 1 )
            {
              v57 = (unsigned int *)((char *)v90 + 8 * v55);
              if ( get_reg_name(&ptr, *v57, (int)v57[1], 0xFFFFFFFFLL) > 0 )
              {
                v56 = haystack;
                if ( *(_QWORD *)v94 )
                  v56 = (const char *)ptr;
                a2("%s", v56);
              }
              else
              {
                a2("%u(%u)", *v57, v57[1]);
              }
              v55 = ++v54;
              if ( v54 >= (unsigned __int64)v91 )
                break;
              a2(", ");
            }
          }
          v53 &= ~1u;
          v88 = v53;
          a2("\n");
          if ( ptr )
          {
            *(_QWORD *)v94 = 0;
            qfree(ptr);
          }
        }
        if ( v53 )
        {
          a2("//\t%*cfunction attributes:", (int)v81, 32);
          if ( (v53 & 2) != 0 )
            a2(" noret");
          if ( (v53 & 4) != 0 )
            a2(" pure");
          if ( (v53 & 8) != 0 )
            a2(" high");
          if ( (v53 & 0x10) != 0 )
            a2(" static");
          if ( (v53 & 0x20) != 0 )
            a2(" virtual");
          if ( (v53 & 0x400) != 0 )
            a2(" const");
          if ( (v53 & 0x800) != 0 )
            a2(" constructor");
          if ( (v53 & 0x1000) != 0 )
            a2(" destructor");
          v58 = v53 & 0xFFFFE1C1;
          if ( v58 )
            a2(" unknown attrs(%02X)", v58);
          a2("\n");
        }
        if ( v90 )
        {
          *(_QWORD *)&v91 = 0;
          qfree(v90);
        }
        v18 = (char *)v89;
      }
      if ( !v18 || !*v18 )
        return 0;
      v89 = v18 + 1;
      v19 = *v18;
      v20 = *v18 & 0xF0;
      if ( v20 == 0xC0 )
      {
        if ( !(unsigned __int8)sub_693030(&v89, &v90) )
          return 0;
      }
      else
      {
        LODWORD(v90) = 0;
      }
      ptr = nullptr;
      v21 = "CM_N16_F32";
      *(_OWORD *)v94 = 0;
      v22 = v68 + 1;
      v23 = v19 & 3;
      if ( (v19 & 3) != 2 )
      {
        v21 = "CM_N32_F48";
        if ( v23 != 3 )
        {
          v21 = "CM_N8_F16";
          if ( v23 != 1 )
            v21 = "CM_UNKNOWN";
        }
      }
      v24 = v19 & 0xC;
      v25 = "CM_M_NF";
      if ( v24 != 8 )
      {
        if ( v24 > 8u )
        {
          v25 = "CM_M_FN";
          if ( v24 != 12 )
            v25 = nullptr;
        }
        else
        {
          v25 = "CM_M_NN";
          if ( v24 )
            v25 = "CM_M_FF";
        }
      }
      if ( v20 == 0x80 )
      {
        v26 = "CM_CC_THISCALL";
      }
      else if ( v20 > 0x80u )
      {
        if ( v20 == 0xC0 )
        {
          v81 = v25;
          p_ptr = (void **)v21;
          sub_3573A0((char **)&ptr);
          v26 = (const char *)ptr;
          v21 = (const char *)p_ptr;
          v25 = v81;
        }
        else if ( v20 > 0xC0u )
        {
          v26 = "CM_CC_SPECIALP";
          if ( v20 != 0xE0 )
          {
            v26 = "CM_CC_SPECIAL";
            if ( v20 != 0xF0 )
            {
              v26 = "CM_CC_SPECIALE";
              if ( v20 != 0xD0 )
                v26 = nullptr;
            }
          }
        }
        else
        {
          v26 = " !ERR(spoil)!";
          if ( v20 != 0xA0 )
          {
            v26 = "CM_CC_GOLANG";
            if ( v20 != 0xB0 )
            {
              v26 = "CM_CC_SWIFT";
              if ( v20 != 0x90 )
                v26 = nullptr;
            }
          }
        }
      }
      else
      {
        v26 = "CM_CC_ELLIPSIS";
        if ( v20 != 64 )
        {
          if ( v20 > 0x40u )
          {
            v26 = "CM_CC_PASCAL";
            if ( v20 != 96 )
            {
              v26 = "CM_CC_FASTCALL";
              if ( v20 != 112 )
              {
                v26 = "CM_CC_STDCALL";
                if ( v20 != 80 )
                  v26 = nullptr;
              }
            }
          }
          else
          {
            v26 = "CM_CC_VOIDARG";
            if ( v20 != 32 )
            {
              if ( v20 > 0x20u )
              {
                v26 = "CM_CC_CDECL";
                if ( v20 != 48 )
                  v26 = nullptr;
              }
              else
              {
                v26 = "CM_CC_INVALID";
                if ( v20 )
                  v26 = "CM_CC_UNKNOWN";
              }
            }
          }
        }
      }
      a2("//\t%*c%s %s %s\n", v22, 32, v21, v25, v26);
      if ( ptr )
      {
        *(_QWORD *)v94 = 0;
        qfree(ptr);
      }
      v27 = v20;
      if ( v20 == 0xC0 )
        v27 = (int)v90;
      LODWORD(v90) = v27;
      if ( *(_BYTE *)v89 == 0xFE && !(unsigned __int8)sub_6857E0(a2, (const char **)&v89, v22, 12) )
        return 0;
      a2("//\t%*creturn type:\n", v22, 32);
      v12 = (const char *)a2;
      v28 = *(_BYTE *)v89;
      if ( !(unsigned __int8)sub_68FF40(
                               a1,
                               (int)a2,
                               v75,
                               (int)&v89,
                               v22,
                               v29,
                               v68,
                               a1,
                               v75,
                               (int)p_ptr,
                               (int)v81,
                               v84,
                               v86,
                               v89,
                               (__int64)v90,
                               v91,
                               SDWORD2(v91),
                               v92,
                               (__int64)ptr,
                               v94[0],
                               *(__int64 *)&v94[2]) )
        return 0;
      v30 = (int)v90;
      v31 = (_DWORD)v90 - 208;
      if ( (v28 & 0x3F) != 1 && v31 <= 0x2F )
      {
        v12 = (const char *)a2;
        if ( !(unsigned __int8)sub_68FE40(v73, a2, (__int64)&v89, "retval", v22) )
          return 0;
        v30 = (int)v90;
      }
      if ( v30 == 32 )
        goto LABEL_131;
      v32 = sub_692FE0(&v89);
      if ( v32 < 0 )
      {
LABEL_184:
        a2("//\tGET_DT ERROR\n", v12, v33, v34);
        *v5 = v89;
        return 0;
      }
      if ( v32 )
      {
        v80[0] = (int)v5;
        v65 = 0;
        v66 = v32;
        do
        {
          a2("//\t%*carg #%d of #%d\n", v22, 32, v65, v66);
          if ( !(unsigned __int8)sub_68FF40(
                                   (int)v73,
                                   (int)a2,
                                   v76,
                                   (int)&v89,
                                   v22,
                                   v67,
                                   v69,
                                   (int)v73,
                                   v76,
                                   v80[0],
                                   v82,
                                   v85,
                                   v87,
                                   v89,
                                   (__int64)v90,
                                   v91,
                                   SDWORD2(v91),
                                   v92,
                                   (__int64)ptr,
                                   v94[0],
                                   *(__int64 *)&v94[2]) )
            return 0;
          if ( v31 <= 0x2F && !(unsigned __int8)sub_68FE40(v73, a2, (__int64)&v89, &byte_22CD811, v69 + 3) )
            return 0;
          ++v65;
        }
        while ( v66 > v65 );
        v5 = *(void ***)v80;
        v35 = v89;
      }
      else
      {
        if ( (_DWORD)v90 == 64 )
          a2("//\t%*c(...)\n", v22, 32);
        else
          a2("//\t%*cunknown parameters\n", v22, 32);
        v35 = v89;
      }
      goto LABEL_120;
    case 13:
      if ( v10 == 48 )
      {
        v17 = v68 + 1;
LABEL_149:
        if ( (unsigned __int8)sub_685660(a2, &v89, v17) )
        {
          v35 = v89;
          if ( *(_BYTE *)v89 == 0xFE )
          {
            if ( (unsigned __int8)sub_6857E0(a2, (const char **)&v89, v17, 61) )
              goto LABEL_131;
            return 0;
          }
LABEL_120:
          *v5 = v35;
          return 1;
        }
        return 0;
      }
      LOBYTE(v90) = 0;
      v16 = sub_693160(&v89, &v90);
      v79 = v16;
      if ( v16 < 0 )
        goto LABEL_222;
      if ( !v16 && !(_BYTE)v90 )
      {
        v17 = v68 + 1;
        a2("%s//\t%*cname reference (0)\n", v15, v68 + 1, 32);
        goto LABEL_149;
      }
      a2("%s", v15);
      v42 = (unsigned __int8 *)v89;
      v43 = *(_BYTE *)v89;
      if ( (v8 & 0x20) == 0 )
      {
        v44 = v68 + 1;
        if ( (v43 & 0xCF ^ 0xC0u) <= 1 && !(unsigned __int8)sub_6857E0(a2, (const char **)&v89, v44, 13) )
          return 0;
        a2("//\t%*calignment: ", v44, 32);
        if ( (v79 & 7) != 0 )
          a2("%d\n", 1 << ((v79 & 7) - 1));
        else
          a2("default\n");
        v45 = v79 >> 3;
        if ( v79 >> 3 )
        {
          v70[0] = (int)v5;
          v46 = 0;
          v47 = v75;
          while ( 1 )
          {
            a2("//\t%*cfield #%d of #%d\n", v44, 32, v46, v45);
            if ( !(unsigned __int8)sub_68FF40(
                                     v72,
                                     (int)a2,
                                     v47,
                                     (int)&v89,
                                     v44,
                                     v48,
                                     v70[0],
                                     v72,
                                     v75,
                                     v79,
                                     (int)v81,
                                     v84,
                                     v86,
                                     v89,
                                     (__int64)v90,
                                     v91,
                                     SDWORD2(v91),
                                     v92,
                                     (__int64)ptr,
                                     v94[0],
                                     *(__int64 *)&v94[2]) )
              return 0;
            if ( (*(_BYTE *)v89 & 0xCF ^ 0xC0u) <= 1 && !(unsigned __int8)sub_6857E0(a2, (const char **)&v89, v44, 14) )
              return 0;
            if ( v45 == ++v46 )
            {
              v5 = *(void ***)v70;
              goto LABEL_131;
            }
          }
        }
        goto LABEL_131;
      }
      if ( v43 == -2 )
      {
        if ( !(unsigned __int8)sub_6857E0(a2, (const char **)&v89, v68 + 1, 13) )
          return 0;
        v42 = (unsigned __int8 *)v89;
      }
      v89 = v42 + 1;
      v51 = *v42;
      if ( (*v42 & 0x80u) == 0 )
      {
        a2("\tBTE FIELD ERROR: %02X\n", v51);
        *v5 = v89;
        return 0;
      }
      v74 = v68 + 1;
      v77 = v51 & 0x10;
      if ( (v51 & 0x10) != 0 )
        a2("//\t%*cbitmask ", v68 + 1, 32);
      a2("storage size: ");
      if ( (v51 & 7) != 0 )
        a2("%d", 1 << ((v51 & 7) - 1));
      else
        a2("default");
      v59 = v51 & 0x60;
      a2(", output: ");
      if ( v59 == 64 )
      {
        a2("signed dec\n");
      }
      else if ( v59 > 0x40u )
      {
        if ( v59 == 96 )
          a2("unsigned dec\n");
      }
      else if ( v59 )
      {
        a2("char\n");
      }
      else
      {
        a2("hex\n");
      }
      if ( !v79 )
        goto LABEL_131;
      v60 = 0;
      v83 = v5;
      v61 = v68 + 2;
      break;
    case 14:
      v41 = sub_692FE0(&v89);
      if ( v41 == -1 )
        goto LABEL_184;
      a2("//\t%*cnbits: %d, unsigned: %d\n", v68 + 1, 32, v41 >> 1, v41 & 1);
LABEL_129:
      v35 = v89;
      if ( *(_BYTE *)v89 != 0xFE )
        goto LABEL_120;
      if ( (unsigned __int8)sub_6857E0(a2, (const char **)&v89, v68 + 1, 7) )
        goto LABEL_131;
      return 0;
    default:
      goto LABEL_129;
  }
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_693030(&v89, &ptr) )
    {
LABEL_254:
      a2("\tGET_DE ERROR\n");
      *v83 = v89;
      return 0;
    }
    if ( v77 )
      break;
    a2("//\t%*c0x%X\n", v74, 32, (_DWORD)ptr);
LABEL_246:
    if ( v79 == ++v60 )
    {
      v5 = v83;
LABEL_131:
      v35 = v89;
      goto LABEL_120;
    }
  }
  a2("//\t%*cmask: %08X\n", v74, 32, (_DWORD)ptr);
  v62 = sub_693160(&v89, 0);
  if ( v62 >= 0 )
  {
    v63 = 0;
    if ( v62 )
    {
      v71 = v60;
      v64 = v62;
      do
      {
        if ( !(unsigned __int8)sub_693030(&v89, &ptr) )
          goto LABEL_254;
        ++v63;
        a2("//\t%*c0x%X\n", v61, 32, (_DWORD)ptr);
      }
      while ( v64 != v63 );
      v60 = v71;
    }
    goto LABEL_246;
  }
  v5 = v83;
LABEL_222:
  a2("%s\tGET_COMPLEX_N ERROR\n", v15);
  *v5 = v89;
  return 0;
}

