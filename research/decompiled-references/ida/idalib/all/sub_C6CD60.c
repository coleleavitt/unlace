__int64 __fastcall sub_C6CD60(__int64 **a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v8; // ax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rsi
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rbp
  int *v25; // rax
  __int64 v26; // rsi
  __int64 *v27; // r13
  char v28; // al
  __int64 v29; // r14
  __int64 v30; // rax
  int v31; // esi
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 *v34; // r14
  __int64 *v35; // rax
  _WORD *v36; // rdx
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rbx
  unsigned __int8 v43; // al
  unsigned __int8 **v44; // rax
  __int64 v45; // rbp
  int v46; // esi
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rbp
  int v50; // esi
  __int64 v51; // r12
  __int64 v52; // rax
  _WORD *v53; // rax
  __int64 v54; // r8
  unsigned __int16 v55; // dx
  __int64 *v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rcx
  char v60; // dl
  unsigned __int8 v61; // al
  unsigned __int64 *v62; // r13
  __int64 v63; // rbp
  __int64 *v64; // r11
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rsi
  unsigned __int8 **v75; // rax
  __int64 v76; // rax
  __int64 *v77; // rdx
  int v78; // eax
  __int64 v79; // rsi
  int v80; // ecx
  __int64 *v81; // r12
  int v82; // [rsp+0h] [rbp-108h]
  unsigned __int8 v83; // [rsp+0h] [rbp-108h]
  unsigned __int8 v84; // [rsp+0h] [rbp-108h]
  unsigned __int8 v85; // [rsp+0h] [rbp-108h]
  unsigned __int64 v86; // [rsp+0h] [rbp-108h]
  __int64 v87; // [rsp+8h] [rbp-100h]
  char v88; // [rsp+8h] [rbp-100h]
  __int64 v89; // [rsp+8h] [rbp-100h]
  char v90; // [rsp+10h] [rbp-F8h]
  __int64 v91; // [rsp+10h] [rbp-F8h]
  __int64 *v92; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v93; // [rsp+28h] [rbp-E0h]
  __int64 v94[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v95; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+48h] [rbp-C0h]
  __int64 v97; // [rsp+50h] [rbp-B8h]
  char v98; // [rsp+58h] [rbp-B0h]
  __int64 v99; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v101; // [rsp+78h] [rbp-90h]
  _BYTE v102[136]; // [rsp+80h] [rbp-88h] BYREF

  while ( 2 )
  {
    while ( 2 )
    {
      v8 = *(_WORD *)a2 & 0x1FF;
      if ( v8 <= 0x75u )
      {
        if ( v8 == 4 )
        {
          a3 = *(_BYTE *)(a2 + 2) >> 3;
          switch ( (char)a3 )
          {
            case 0:
            case 1:
              return sub_C64EB0(a1, a2);
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            case 13:
              return sub_C3FE50((__int64 *)a1, a2, a3, a4, a5);
            case 5:
              return sub_C3FE50((__int64 *)a1, a2, a3, a4, a5);
            case 6:
            case 10:
            case 12:
LABEL_7:
              a2 = *(_QWORD *)(a2 + 16);
              continue;
            case 11:
              sub_C3FAF0((__int64)*a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
              return sub_C182D0((__int64 *)a1, a2, v10, v11, v12);
            default:
              a3 = *(_BYTE *)(a2 + 2) >> 3;
              goto LABEL_6;
          }
        }
      }
      else if ( v8 <= 0x77u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
            return sub_C6DF70(a1, a2);
          default:
            a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
            goto LABEL_6;
        }
      }
      break;
    }
LABEL_6:
    switch ( (v8 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 6:
      case 8:
      case 9:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0x10:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x3B:
      case 0x3C:
      case 0x3E:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x48:
      case 0x4B:
      case 0x5B:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x63:
      case 0x64:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6E:
      case 0x6F:
      case 0x70:
      case 0x72:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
        return sub_C14310((__int64)*a1, a2);
      case 1:
        return sub_C3FE50((__int64 *)a1, a2, a3, a4, a5);
      case 5:
      case 0x62:
        goto LABEL_7;
      case 7:
        v27 = *a1;
        v28 = *((_BYTE *)*a1 + 915);
        *((_BYTE *)*a1 + 915) = 0;
        v29 = *(_QWORD *)(a2 + 16);
        v88 = v28;
        result = 1;
        if ( !*(_DWORD *)(v29 + 4) )
          goto LABEL_43;
        v92 = v27;
        v93 = *((_DWORD *)v27 + 68);
        v30 = v27[4];
        v31 = *(_DWORD *)(v30 + 160) + 1;
        *(_DWORD *)(v30 + 160) = v31;
        sub_9B7040(v30 + 136, v31);
        v32 = (__int64 *)(v29 + 16);
        v33 = v29 + 8LL * *(unsigned int *)(v29 + 4) + 16;
        v34 = (__int64 *)(v29 + 24);
        if ( v34 == (__int64 *)v33 )
          goto LABEL_40;
        while ( 2 )
        {
          v36 = (_WORD *)*(v34 - 1);
          v37 = (__int64)*a1;
          v94[0] = (__int64)&v95;
          BYTE4(v95) &= ~1u;
          LODWORD(v95) = 0;
          v94[1] = 0;
          v38 = sub_C53060(v94, v37, v36);
          if ( v38 != 2 )
          {
            if ( v38 )
            {
              v81 = *a1;
              v37 = (unsigned int)sub_EEB7E0(*(v34 - 1));
              sub_E33C80(v81, v37, 2485, 0);
            }
            if ( (unsigned int)v95 > 1 )
            {
              sub_A4F8E0((int *)&v95);
              v43 = 0;
              goto LABEL_42;
            }
LABEL_116:
            v43 = 0;
            goto LABEL_42;
          }
          if ( (unsigned int)v95 > 1 )
          {
            sub_A4F8E0((int *)&v95);
            v35 = v34 + 1;
            if ( (__int64 *)v33 == v34 + 1 )
              goto LABEL_39;
LABEL_35:
            v34 = v35;
            continue;
          }
          break;
        }
        v35 = v34 + 1;
        if ( (__int64 *)v33 != v34 + 1 )
          goto LABEL_35;
LABEL_39:
        v32 = v34;
LABEL_40:
        v37 = *v32;
        if ( ((*(_WORD *)*v32 + 509) & 0x1FFu) > 0x7E )
        {
          v42 = *a1;
          v37 = (unsigned int)sub_EEB7E0(v37);
          sub_E33C80(v42, v37, 2485, 0);
          v43 = 0;
          goto LABEL_42;
        }
        if ( !(unsigned __int8)sub_C6CD60(a1, v37) )
          goto LABEL_116;
        v37 = 1;
        v43 = sub_C54F60((__int64)v92, (__m128i *)((char *)&dword_0 + 1), v93, v40, v41);
        v93 = -1;
LABEL_42:
        v84 = v43;
        sub_C55380((__int64)&v92, v37, v39, v40, v41);
        result = v84;
LABEL_43:
        *((_BYTE *)v27 + 915) = v88;
        return result;
      case 0xA:
        return sub_C3AA20((__int64 *)a1, a2);
      case 0xE:
        v62 = (unsigned __int64 *)(a2 + 24);
        v63 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
        if ( a2 + 24 == v63 )
          return 1;
        while ( 2 )
        {
          v69 = (_QWORD *)*v62;
          v70 = *(unsigned __int16 *)(a2 + 6);
          v71 = *(unsigned __int16 *)*v62;
          LOWORD(v71) = v71 & 0x1FF;
          if ( (_WORD)v71 == 26 )
          {
            if ( (_WORD)v70 && v69 == *(_QWORD **)(a2 + 8 * v70 + 16) )
              return sub_C14310((__int64)*a1, a2);
            if ( (*v69 & 0x80000LL) == 0 )
            {
              v64 = *a1;
              v98 |= 1u;
              v95 = nullptr;
              v96 = 0;
              v97 = 0;
              v99 = 0;
              ptr = v102;
              v101 = 0x800000000LL;
              v102[65] = 0;
              v91 = (__int64)v64;
              v89 = v64[4];
              v86 = v69[2];
              v65 = sub_C104A0(v64[2], (__int64)v69);
              v66 = sub_C2C1C0(v89, (unsigned __int64)v69, v65, (__int64)&v95);
              result = sub_C39A10(v66, v91, v86, v67, v68);
              if ( !(_BYTE)result )
              {
                if ( ptr != v102 )
                {
                  free(ptr);
                  return 0;
                }
                return result;
              }
              if ( ptr != v102 )
                free(ptr);
            }
          }
          else
          {
            v72 = *v62;
            if ( (_WORD)v70 && v69 == *(_QWORD **)(a2 + 8 * v70 + 16) )
            {
              if ( !(unsigned __int8)sub_C6CD60(a1, v72) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0((__int64)*a1, v72, v71, a4, a5) )
            {
              return 0;
            }
          }
          if ( (unsigned __int64 *)v63 == ++v62 )
            return 1;
          continue;
        }
      case 0xF:
        v26 = 0;
        if ( *(char *)(a2 + 2) < 0 )
          v26 = *(_QWORD *)(a2 + 16);
        return sub_C6CD60(a1, v26);
      case 0x11:
      case 0x71:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x12:
        v23 = sub_C1DE00(a2);
        return sub_C6CD60(a1, v23);
      case 0x17:
        v24 = *a1;
        v25 = (int *)sub_C110E0((*a1)[4], a2);
        if ( v25 && *v25 )
        {
          sub_A54D20((__int64)a1[1], v25);
          return 1;
        }
        else
        {
          v26 = *(_QWORD *)(a2 + 16);
          if ( !v26 || a2 == v26 )
            return sub_C14310((__int64)v24, a2);
          else
            return sub_C6CD60(a1, v26);
        }
      case 0x2B:
        return sub_C40750((__int64 *)a1, a2, a3, a4, a5);
      case 0x32:
        return sub_C6E710(a1, a2);
      case 0x33:
      case 0x61:
      case 0x65:
        return sub_C182D0((__int64 *)a1, a2, a3, a4, a5);
      case 0x36:
        return sub_C6CD60(
                 a1,
                 *(_QWORD *)(a2
                           + 8LL
                           * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                           + 32));
      case 0x39:
        v13 = *((_DWORD *)*a1 + 68);
        v95 = *a1;
        LODWORD(v96) = v13;
        v14 = v95[4];
        v15 = *(_DWORD *)(v14 + 160) + 1;
        *(_DWORD *)(v14 + 160) = v15;
        sub_9B7040(v14 + 136, v15);
        v16 = *(_QWORD *)(a2 + 16);
        v17 = sub_C6CD60(a1, v16);
        if ( v17 )
        {
          v16 = 1;
          v17 = sub_C553F0((__int64)v95, 1, v96, v19, v20);
          LODWORD(v96) = -1;
        }
        v83 = v17;
        sub_C559A0((__int64)&v95, v16, v18, v19, v20);
        return v83;
      case 0x3A:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) == 0 )
          return sub_C6CD60(a1, *(_QWORD *)(a2 + 16));
        sub_BF7B00((__int64)&v95, a2, a3, a4, a5, a6, v82, v87, v90);
        sub_A54D20((__int64)a1[1], (int *)&v95);
        if ( (unsigned int)v95 > 1 )
          sub_A4F8E0((int *)&v95);
        return 1;
      case 0x3D:
        return sub_C40A20((__int64 *)a1, a2, a3, a4, a5);
      case 0x3F:
        v21 = *(unsigned int *)(a2 + 48);
        v95 = (__int64 *)a2;
        v96 = v21;
        v22 = (_QWORD *)sub_C29F30(&v95);
        return sub_C6CD60(a1, *v22);
      case 0x47:
        return sub_C3B030((__int64 *)a1, a2);
      case 0x49:
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          v26 = *(_QWORD *)(a2 + 24);
        else
          v26 = *(_QWORD *)(a2 + 32);
        return sub_C6CD60(a1, v26);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return sub_C6C410((__int64 *)a1, a2, a3, a4, a5, a6);
      case 0x4F:
        v44 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v44 )
          sub_C11320(v44, 0);
        return sub_C6C410((__int64 *)a1, a2, a3, a4, a5, a6);
      case 0x50:
        if ( *(char *)(*(_QWORD *)((*a1)[2] + 2320) + 1LL) >= 0 )
        {
          v75 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v75 )
            sub_C11320(v75, 1);
        }
        return sub_C6C410((__int64 *)a1, a2, a3, a4, a5, a6);
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return sub_C62530((__int64 *)a1, a2);
      case 0x6C:
        v45 = (*a1)[4];
        v46 = *(_DWORD *)(v45 + 160) + 1;
        *(_DWORD *)(v45 + 160) = v46;
        sub_9B7040(v45 + 136, v46);
        if ( sub_C94CC0(a2) )
        {
          v47 = (*a1)[4];
          if ( *(_QWORD *)(v47 + 64) )
          {
            v76 = sub_C94CC0(a2);
            result = sub_C6CD60(a1, v76);
          }
          else
          {
            *(_QWORD *)(v47 + 64) = a2;
            v48 = sub_C94CC0(a2);
            result = sub_C6CD60(a1, v48);
            *(_QWORD *)(v47 + 64) = 0;
          }
        }
        else
        {
          result = sub_C14310((__int64)*a1, a2);
        }
        --*(_DWORD *)(v45 + 144);
        return result;
      case 0x6D:
        v49 = (*a1)[4];
        v50 = *(_DWORD *)(v49 + 160) + 1;
        *(_DWORD *)(v49 + 160) = v50;
        sub_9B7040(v49 + 136, v50);
        v51 = (*a1)[4];
        if ( *(_QWORD *)(v51 + 64) )
        {
          v73 = sub_C94C80(a2);
          result = sub_C6CD60(a1, v73);
        }
        else
        {
          *(_QWORD *)(v51 + 64) = a2;
          v52 = sub_C94C80(a2);
          result = sub_C6CD60(a1, v52);
          *(_QWORD *)(v51 + 64) = 0;
        }
        --*(_DWORD *)(v49 + 144);
        return result;
      case 0x73:
      case 0x74:
        return sub_C6DF70(a1, a2);
      case 0x7D:
        v53 = (_WORD *)sub_BFD550(*(_QWORD *)(a2 + 24));
        v55 = *v53 & 0x1FF;
        if ( v55 > 0x58u && v55 <= 0x5Du && (unsigned int)sub_BFBE70((__int64)v53) == 214 )
        {
          v77 = *a1;
          result = 0;
          if ( *((_BYTE *)*a1 + 914) )
            return result;
          v95 = *a1;
          LOBYTE(v96) = 1;
          v59 = v77[3];
          v78 = *((_DWORD *)v77 + 229);
          v79 = *(_QWORD *)(v59 + 8);
          if ( !v79 || *(_DWORD *)(v79 + 8) )
          {
            BYTE1(v96) = 0;
            HIDWORD(v96) = v78;
          }
          else
          {
            v80 = *(unsigned __int8 *)v59;
            HIDWORD(v96) = *((_DWORD *)v77 + 229);
            v59 = v80 ^ 1u;
            BYTE1(v96) = v59;
          }
          *((_DWORD *)v77 + 229) = 2;
        }
        else
        {
          v56 = *a1;
          LOBYTE(v96) = 0;
          v95 = v56;
          v57 = v56[3];
          v58 = *((_DWORD *)v56 + 229);
          v59 = *(_QWORD *)(v57 + 8);
          if ( !v59 || (v59 = *(unsigned int *)(v59 + 8), (_DWORD)v59) )
          {
            BYTE1(v96) = 0;
            HIDWORD(v96) = v58;
          }
          else
          {
            v60 = *(_BYTE *)v57;
            HIDWORD(v96) = v58;
            BYTE1(v96) = v60 ^ 1;
          }
        }
        if ( (unsigned __int8)sub_C3FB70(*(_QWORD *)(a2 + 24), v94, (__int64)*a1, v59, v54) )
        {
          if ( LOBYTE(v94[0]) )
            v74 = *(_QWORD *)(a2 + 32);
          else
            v74 = *(_QWORD *)(a2 + 40);
          v61 = sub_C6CD60(a1, v74);
          if ( v61 )
            goto LABEL_73;
        }
        else if ( *((_BYTE *)*a1 + 914) && (unsigned __int8)sub_C11850((__int64)*a1) )
        {
          sub_C6E0B0(a1, a2);
        }
        else if ( (unsigned __int8)sub_C11850((__int64)*a1) )
        {
          sub_C6CD60(a1, *(_QWORD *)(a2 + 32));
          sub_C6CD60(a1, *(_QWORD *)(a2 + 40));
        }
        LOBYTE(v96) = 0;
        v61 = 0;
LABEL_73:
        v85 = v61;
        sub_C23B30((__int64 *)&v95);
        return v85;
      case 0x7E:
        return sub_C6E3B0(a1, a2);
    }
  }
}
