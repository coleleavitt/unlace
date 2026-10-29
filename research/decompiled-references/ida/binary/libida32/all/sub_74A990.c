__int64 __fastcall sub_74A990(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rax
  char *v6; // rcx
  int v7; // r13d
  __int64 v8; // rdx
  char v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r12
  unsigned __int8 v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  const char *v25; // rsi
  char *v26; // rax
  char v27; // bp
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  char *v45; // rsi
  __int64 v46; // rdx
  char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  char *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  char v59; // al
  __int64 v60; // rdx
  char *v61; // rsi
  __int64 v62; // rdx
  const char *v63; // rsi
  unsigned int v64; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v65; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v66; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v67; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v68; // [rsp+18h] [rbp-30h]

  v68 = __readfsqword(0x28u);
  v64 = 0;
  v5 = qword_2CAA5C0;
  v65 = 0;
  v6 = ++qword_2CAA5C0;
  v7 = (unsigned __int8)*v5;
  v8 = (unsigned __int8)(v7 - 77);
  switch ( (char)v7 )
  {
    case 'M':
      qword_2CAA5C0 = v5 + 2;
      v10 = v5[1];
      switch ( v10 )
      {
        case 'L':
          sub_74F810(&v67, 2038063468, 4);
          v64 = v67;
          sub_74F560(&v67, " cache variable", 15);
          sub_7506B0(&v64, &v67);
          sub_74F560(&v67, " for ", 5);
          sub_7506B0(&v64, &v67);
          goto LABEL_97;
        case 'P':
          sub_74F560(&v67, "generic", 7);
          v64 = v67;
          sub_74F560(&v67, " pattern", 8);
          v65 = v67;
          goto LABEL_95;
        case 'a':
          sub_74F560(&v67, " accessor", 9);
          v65 = v67;
          goto LABEL_95;
        case 'f':
          sub_74F810(&v67, 1819047270, 4);
          v64 = v67;
LABEL_95:
          if ( (_WORD)v64 )
            sub_74F860(&v64, 32);
LABEL_97:
          v6 = qword_2CAA5C0;
          goto LABEL_4;
        case 'm':
          sub_74F560(&v67, "metaclass", 9);
          v64 = v67;
          sub_74F560(&v67, " for ", 5);
          sub_7506B0(&v64, &v67);
          goto LABEL_46;
        case 'n':
          sub_74F560(&v67, "nominal type", 12);
          v64 = v67;
          goto LABEL_91;
        case 'p':
          sub_74F560(&v67, "protocol", 8);
          v64 = v67;
LABEL_91:
          sub_74F560(&v67, " descriptor", 11);
          sub_7506B0(&v64, &v67);
          break;
        default:
LABEL_4:
          qword_2CAA5C0 = v6;
          sub_74F560(&v67, "type metadata", 13);
          sub_7506B0(&v64, &v67);
          sub_7506B0(&v64, &v65);
          break;
      }
      sub_74F560(&v67, " for ", 5);
      sub_7506B0(&v64, &v67);
      if ( v10 != 112 )
        goto LABEL_46;
      v67 = sub_74A310(&v64, &v67, v11, v12, v13);
      sub_7506B0(&v64, &v67);
      return v64;
    case 'P':
      v8 = (__int64)(v5 + 2);
      qword_2CAA5C0 = v5 + 2;
      if ( v5[1] != 65 )
        goto LABEL_20;
      v14 = (char)a1;
      a2 = (unsigned int *)"partial apply";
      a1 = &v67;
      sub_74F560(&v67, "partial apply", 13);
      v64 = v67;
      v15 = dword_2CAA5CC;
      if ( *qword_2CAA5C0 == 111 )
      {
        ++qword_2CAA5C0;
        if ( (dword_2CAA5CC & 0x400) == 0 )
        {
          sub_74F560(&v67, " ObjC", 5);
          a1 = &v64;
          a2 = &v67;
          sub_7506B0(&v64, &v67);
          v15 = dword_2CAA5CC;
        }
      }
      v8 = v15 & 0xA0;
      if ( !(_DWORD)v8 )
      {
        sub_74F560(&v67, " forwarder", 10);
        a1 = &v64;
        a2 = &v67;
        sub_7506B0(&v64, &v67);
      }
      if ( *qword_2CAA5C0 != 95 || qword_2CAA5C0[1] != 95 || qword_2CAA5C0[2] != 84 )
        return v64;
      if ( v14 )
        goto LABEL_20;
      qword_2CAA5C0 += 3;
      sub_74F560(&v67, " for ", 5);
      sub_7506B0(&v64, &v67);
      if ( (dword_2CAA5CC & 8) != 0 )
        v64 = 0;
      v67 = sub_74A990(1);
      sub_7506B0(&v64, &v67);
      return v64;
    case 'T':
      qword_2CAA5C0 = v5 + 2;
      v7 = (unsigned __int8)v5[1];
      if ( (_BYTE)v7 != 87 )
      {
        v8 = v7 & 0xFFFFFFDF;
        if ( (v7 & 0xDF) != 0x52 )
          goto LABEL_20;
        v66 = 0;
        if ( v5[2] == 71 )
        {
          qword_2CAA5C0 = v5 + 3;
          v67 = sub_749030();
          sub_7506B0(&v66, &v67);
          if ( (_WORD)v66 )
            sub_74F860(&v66, 32);
        }
        sub_74F560(&v67, "from ", 5);
        sub_7506B0(&v66, &v67);
        v67 = sub_747AD0(nullptr, (__int64)&v67, v16, v17, v18);
        sub_7506B0(&v66, &v67);
        sub_74F810(&v67, 544175136, 4);
        sub_7506B0(&v66, &v67);
        v67 = sub_747AD0(nullptr, (__int64)&v67, v19, v20, v21);
        sub_7506B0(&v66, &v67);
        v65 = v66;
        if ( (dword_2CAA5CC & 0x8000) == 0 )
        {
          sub_74F560(&v67, "reabstraction ", 14);
          v64 = v67;
        }
        sub_74F560(&v67, "thunk", 5);
        sub_7506B0(&v64, &v67);
        if ( (dword_2CAA5CC & 0x8000) == 0 )
        {
          if ( (_BYTE)v7 == 82 )
          {
            sub_74F560(&v67, " helper", 7);
            sub_7506B0(&v64, &v67);
          }
          if ( (_WORD)v64 )
            sub_74F860(&v64, 32);
LABEL_54:
          sub_7506B0(&v64, &v65);
          return v64;
        }
        return v64;
      }
LABEL_47:
      v27 = 0;
LABEL_48:
      sub_74F560(&v67, "protocol", 8);
      sub_7506B0(&v64, &v67);
      if ( (_WORD)v64 )
        sub_74F860(&v64, 32);
      v28 = dword_2CAA5C8;
      LOBYTE(v28) = dword_2CAA5C8 | 0xC0;
      dword_2CAA5C8 = v28;
      sub_74F560(&v67, "witness", 7);
      sub_7506B0(&v64, &v67);
      if ( (_BYTE)v7 != 87 )
      {
        sub_74F560(&v67, " table", 6);
        sub_7506B0(&v64, &v67);
        switch ( (char)v7 )
        {
          case 'L':
            sub_74F560(&v67, " cache variable", 15);
            sub_7506B0(&v64, &v67);
            goto LABEL_45;
          case 'V':
            goto LABEL_45;
          case 'a':
          case 'l':
            sub_74F560(&v67, " accessor", 9);
            sub_7506B0(&v64, &v67);
            if ( (_BYTE)v7 == 108 )
              goto LABEL_45;
            break;
          default:
            break;
        }
        sub_74F560(&v67, " for ", 5);
        sub_7506B0(&v64, &v67);
        v65 = sub_74A840((__int64)&v64, &v67, v29, v30, v31);
        goto LABEL_54;
      }
      sub_74F560(&v67, " for ", 5);
      sub_7506B0(&v64, &v67);
      v65 = sub_74A840((__int64)&v64, &v67, v38, v39, v40);
      v67 = sub_749A60(nullptr, &v67, v41, v42, v43);
      sub_7506B0(&v64, &v67);
      sub_74F810(&v67, 544106784, 4);
      sub_7506B0(&v64, &v67);
      goto LABEL_56;
    case 'W':
      qword_2CAA5C0 = v5 + 2;
      v7 = (unsigned __int8)v5[1];
      switch ( (char)v7 )
      {
        case 'G':
          goto LABEL_102;
        case 'I':
          sub_74F560(&v67, "instantiation function for ", 27);
          v64 = v67;
LABEL_102:
          sub_74F560(&v67, "generic", 7);
          sub_7506B0(&v64, &v67);
          v27 = 0;
          if ( (_WORD)v64 )
            sub_74F860(&v64, 32);
          goto LABEL_48;
        case 'L':
        case 'l':
          v27 = 1;
          sub_74F560(&v67, "lazy ", 5);
          v64 = v67;
          goto LABEL_48;
        case 'P':
        case 'a':
          goto LABEL_47;
        case 'T':
        case 't':
          v65 = sub_74A840((__int64)a1, a2, (unsigned __int8)(v7 - 71), (__int64)v6, a5);
          sub_74F560(&v67, "associated type ", 16);
          v46 = 8;
          v47 = "metadata";
          v64 = v67;
          if ( (_BYTE)v7 != 116 )
          {
            v46 = 13;
            v47 = "witness table";
          }
          sub_74F560(&v67, v47, v46);
          sub_7506B0(&v64, &v67);
          sub_74F560(&v67, " accessor", 9);
          sub_7506B0(&v64, &v67);
          sub_74F560(&v67, " for ", 5);
          sub_7506B0(&v64, &v67);
          v67 = sub_747920((__int64)&v64, &v67, v48, v49, v50);
          sub_7506B0(&v64, &v67);
          if ( (_BYTE)v7 != 116 )
          {
            if ( (dword_2CAA5CC & 0x400000) != 0 )
              sub_74F810(&v67, 2112032, 3);
            else
              sub_74F400(&v67, 58);
            sub_7506B0(&v64, &v67);
            v67 = sub_74A310(&v64, &v67, v51, v52, v53);
            sub_7506B0(&v64, &v67);
          }
          sub_74F810(&v67, 544106784, 4);
          sub_7506B0(&v64, &v67);
          goto LABEL_54;
        case 'V':
          goto LABEL_110;
        case 'o':
          dword_2CAA5C8 |= 0xC0u;
          sub_74F560(&v67, "witness", 7);
          sub_7506B0(&v64, &v67);
          v54 = 6;
          v55 = " table";
          goto LABEL_105;
        case 'v':
          v8 = (__int64)(v5 + 3);
          qword_2CAA5C0 = v5 + 3;
          v59 = v5[2];
          if ( v59 == 100 )
            goto LABEL_109;
          if ( v59 != 105 )
            goto LABEL_20;
          sub_750270(&v64, 28265);
LABEL_109:
          v54 = 12;
          v55 = "direct field";
LABEL_105:
          sub_74F560(&v67, v55, v54);
          sub_7506B0(&v64, &v67);
          sub_74F560(&v67, " offset for ", 12);
          sub_7506B0(&v64, &v67);
          v67 = sub_749A60(nullptr, &v67, v56, v57, v58);
          sub_7506B0(&v64, &v67);
          break;
        default:
          v8 = (unsigned int)(v7 - 71);
          goto LABEL_20;
      }
      return v64;
    case 't':
      v67 = sub_747AD0(nullptr, (__int64)a2, v8, (__int64)v6, a5);
      sub_7506B0(&v64, &v67);
      return v64;
    case 'w':
      v22 = v5[1];
      if ( !v22 )
        goto LABEL_20;
      v23 = *(unsigned __int16 *)(v5 + 1);
      if ( (_WORD)v23 == 27476 )
        goto LABEL_132;
      if ( (unsigned __int16)v23 > 0x6B54u )
      {
        if ( (_WORD)v23 == 28789 )
        {
          v24 = 26;
          v25 = "destructiveProjectEnumData";
          goto LABEL_41;
        }
        if ( (unsigned __int16)v23 > 0x7075u )
        {
          if ( (_WORD)v23 == 29560 )
          {
            sub_74F560(&v67, "store", 5);
            v64 = v67;
LABEL_140:
            sub_74F560(&v67, "ExtraInhabitant", 15);
            sub_7506B0(&v64, &v67);
            v26 = qword_2CAA5C0;
            v44 = 5;
            v45 = "Index";
            if ( qword_2CAA5C0[1] != 103 )
              goto LABEL_42;
            goto LABEL_75;
          }
          if ( (unsigned __int16)v23 <= 0x7378u )
          {
            if ( (_WORD)v23 != 29296 )
              goto LABEL_20;
            sub_74F560(&v67, "project", 7);
            v64 = v67;
LABEL_80:
            v44 = 6;
            v45 = "Buffer";
            goto LABEL_75;
          }
          v8 = v23 & 0xFFFFFFDF;
          if ( (v23 & 0xFFDF) == 0x7858 )
          {
LABEL_73:
            sub_74F560(&v67, "destroy", 7);
            v64 = v67;
            v26 = qword_2CAA5C0;
            if ( v22 == 120 )
              goto LABEL_42;
            v44 = 5;
            v45 = "Array";
            if ( qword_2CAA5C0[1] != 88 )
            {
LABEL_75:
              sub_74F560(&v67, v45, v44);
              sub_7506B0(&v64, &v67);
              v26 = qword_2CAA5C0;
              goto LABEL_42;
            }
            goto LABEL_80;
          }
          if ( (_WORD)v23 != 29780 )
            goto LABEL_20;
          goto LABEL_147;
        }
        if ( (_WORD)v23 == 27745 )
        {
LABEL_123:
          sub_74F560(&v67, "allocate", 8);
          sub_7506B0(&v64, &v67);
          goto LABEL_80;
        }
        if ( (unsigned __int16)v23 <= 0x6C61u )
        {
          if ( (_WORD)v23 != 27508 )
            goto LABEL_20;
          goto LABEL_127;
        }
        if ( (_WORD)v23 != 28739 )
        {
          if ( (_WORD)v23 != 28771 )
            goto LABEL_20;
LABEL_63:
          sub_74F560(&v67, "WithCopy", 8);
          sub_7506B0(&v64, &v67);
          if ( qword_2CAA5C0[1] != 80 )
          {
LABEL_64:
            sub_74F560(&v67, "initialize", 10);
LABEL_65:
            v64 = sub_750E60(&v67, &v64);
            v26 = qword_2CAA5C0;
            goto LABEL_42;
          }
          goto LABEL_133;
        }
LABEL_134:
        sub_74F560(&v67, "Buffer", 6);
        v64 = sub_750E60(&v67, &v64);
        goto LABEL_63;
      }
      if ( (_WORD)v23 == 25411 )
        goto LABEL_147;
      if ( (unsigned __int16)v23 <= 0x6343u )
      {
        if ( (_WORD)v23 == 24931 )
        {
          sub_74F810(&v67, 2037411651, 4);
          v64 = v67;
        }
        else
        {
          if ( (unsigned __int16)v23 <= 0x6163u )
          {
            if ( (_WORD)v23 != 20547 )
            {
              if ( (unsigned __int16)v23 <= 0x5043u )
              {
                if ( (_WORD)v23 != 19284 )
                  goto LABEL_20;
LABEL_132:
                sub_74F560(&v67, "BufferWithTake", 14);
                v64 = v67;
                if ( qword_2CAA5C0[1] != 75 )
                  goto LABEL_64;
LABEL_133:
                v62 = 8;
                v63 = "OfBuffer";
                goto LABEL_130;
              }
              if ( (_WORD)v23 != 21620 )
              {
                if ( (_WORD)v23 != 22616 )
                  goto LABEL_20;
                goto LABEL_73;
              }
LABEL_147:
              sub_74F560(&v67, "Array", 5);
              v64 = v67;
              if ( v22 == 67 )
                goto LABEL_63;
LABEL_127:
              sub_74F560(&v67, "WithTake", 8);
              sub_7506B0(&v64, &v67);
              if ( qword_2CAA5C0[1] == 107 )
                goto LABEL_64;
              v62 = 11;
              v63 = "FrontToBack";
              if ( v22 != 84 )
                v63 = "BackToFront";
LABEL_130:
              sub_74F560(&v67, v63, v62);
              sub_7506B0(&v64, &v67);
              goto LABEL_64;
            }
            goto LABEL_134;
          }
          if ( (_WORD)v23 != 24948 )
            goto LABEL_20;
          sub_74F810(&v67, 1701536084, 4);
          v64 = v67;
        }
        sub_74F560(&v67, "assignWith", 10);
        goto LABEL_65;
      }
      if ( (_WORD)v23 == 26488 )
      {
        sub_74F810(&v67, 7628135, 3);
        v64 = v67;
        goto LABEL_140;
      }
      if ( (unsigned __int16)v23 > 0x6778u )
      {
        if ( (_WORD)v23 == 26997 )
        {
          v24 = 24;
          v25 = "destructiveInjectEnumTag";
          goto LABEL_41;
        }
LABEL_20:
        sub_74E200(a1, a2, v8, v6);
      }
      if ( (_WORD)v23 == 25956 )
      {
        sub_750270(&v64, 25956);
        goto LABEL_123;
      }
      if ( (_WORD)v23 != 26485 )
        goto LABEL_20;
      v24 = 10;
      v25 = "getEnumTag";
LABEL_41:
      sub_74F560(&v67, v25, v24);
      v64 = v67;
      v26 = qword_2CAA5C0;
LABEL_42:
      qword_2CAA5C0 = v26 + 2;
      if ( (dword_2CAA5CC & 0x20000) != 0 || (_WORD)v64 && (sub_74F860(&v64, 32), (dword_2CAA5CC & 0x20000) != 0) )
      {
        dword_2CAA5C8 |= 0xC0u;
LABEL_44:
        v27 = 0;
        goto LABEL_45;
      }
LABEL_110:
      sub_74F560(&v67, "value", 5);
      sub_7506B0(&v64, &v67);
      if ( (_WORD)v64 )
        sub_74F860(&v64, 32);
      dword_2CAA5C8 |= 0xC0u;
      if ( (_BYTE)v7 == 119 )
      {
        if ( (dword_2CAA5CC & 0x20000) != 0 )
          goto LABEL_44;
        v60 = 7;
        v61 = "witness";
      }
      else
      {
        sub_74F560(&v67, "witness", 7);
        sub_7506B0(&v64, &v67);
        v60 = 6;
        v61 = " table";
      }
      v27 = 0;
      sub_74F560(&v67, v61, v60);
      sub_7506B0(&v64, &v67);
LABEL_45:
      sub_74F560(&v67, " for ", 5);
      sub_7506B0(&v64, &v67);
      if ( v27 )
      {
        sub_74F560(&v67, "type ", 5);
        sub_7506B0(&v64, &v67);
        v67 = sub_747AD0(nullptr, (__int64)&v67, v32, v33, v34);
        sub_7506B0(&v64, &v67);
        v65 = sub_74A840((__int64)&v64, &v67, v35, v36, v37);
        sub_74F560(&v67, " and ", 5);
        sub_7506B0(&v64, &v67);
LABEL_56:
        sub_74F560(&v67, "conformance ", 12);
        sub_7506B0(&v64, &v67);
        sub_7506B0(&v64, &v65);
      }
      else
      {
LABEL_46:
        v67 = sub_747AD0(nullptr, (__int64)&v67, v11, v12, v13);
        sub_7506B0(&v64, &v67);
      }
      return v64;
    default:
      qword_2CAA5C0 = v5;
      v67 = sub_749A60(nullptr, a2, (unsigned int)(v7 - 77), (__int64)v6, a5);
      sub_7506B0(&v64, &v67);
      return v64;
  }
}

