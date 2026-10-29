const char *__fastcall sub_1EFA0(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v8; // r13
  __int64 v9; // rcx
  int v12; // r15d
  const char *v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // edi
  int v18; // eax
  __int64 v19; // r10
  __int64 v20; // kr00_8
  __int64 v21; // rdi
  __int64 v22; // r8
  const char *result; // rax
  __int16 v24; // ax
  __int16 v25; // bp
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // ecx
  __int64 v31; // r8
  unsigned __int8 v32; // si
  __int16 v33; // ax
  int v34; // eax
  unsigned int v35; // edx
  int v36; // r12d
  int v37; // eax
  __int64 v38; // rdx
  int v39; // esi
  const char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rax
  __int16 custom_fixup; // ax
  int dword; // eax
  int v51; // eax
  unsigned __int64 qword; // rax
  unsigned __int64 v53; // [rsp+8h] [rbp-90h]
  unsigned __int64 v54; // [rsp+8h] [rbp-90h]
  unsigned __int64 v55; // [rsp+8h] [rbp-90h]
  unsigned __int64 v56; // [rsp+8h] [rbp-90h]
  unsigned __int64 v57; // [rsp+8h] [rbp-90h]
  __int64 v58; // [rsp+8h] [rbp-90h]
  unsigned __int64 v59; // [rsp+10h] [rbp-88h]
  __int64 v60; // [rsp+18h] [rbp-80h]
  __int64 v61[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v62; // [rsp+30h] [rbp-68h]
  __int128 v63; // [rsp+38h] [rbp-60h]
  __int16 v64; // [rsp+48h] [rbp-50h]
  int v65; // [rsp+4Ch] [rbp-4Ch]
  __int16 v66; // [rsp+50h] [rbp-48h]
  __int16 v67; // [rsp+52h] [rbp-46h]
  __int16 v68; // [rsp+54h] [rbp-44h]
  unsigned __int64 v69; // [rsp+58h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( !a2[7] )
    return "Illegal relocation entry for PPC64";
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a1 + 16);
  v12 = *a2;
  v13 = *(const char **)(a2 + 1);
  v14 = *(_QWORD *)(a2 + 3);
  v15 = *(_QWORD *)(v9 + 288);
  if ( a3 && a3 >= v15 && v15 + 96LL * *(_QWORD *)(v9 + 296) >= a3 )
  {
    a5 = 1;
    v16 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a3 - v15) >> 5);
    v15 = *(_QWORD *)(v9 + 312);
    v17 = v16;
    if ( v16 >= v15 )
    {
      v17 = v16 - v15;
      a5 = 2;
    }
    v18 = *(_DWORD *)(a1 + 380);
    if ( v18 )
    {
      if ( v18 == (_DWORD)a5 && *(_DWORD *)(a1 + 384) == v17 )
      {
        if ( *(_DWORD *)(a1 + 376) != 1 )
          return "Invalid symbol .TOC. (no TOC)";
        v14 = *(_QWORD *)(a1 + 388);
      }
    }
  }
  LODWORD(v19) = v8;
  if ( *(_WORD *)(a1 + 348) != 0x8000 )
    goto LABEL_11;
  if ( (unsigned __int8)v12 != 50 )
  {
    if ( (unsigned __int8)v12 == 252 )
    {
      v56 = v14;
      custom_fixup = find_custom_fixup("HIGHA16");
      v14 = v56;
      *(_WORD *)(a1 + 348) = custom_fixup;
LABEL_78:
      v61[0] = a1;
      v62 = 0;
      v64 = -1;
      v65 = 0;
      v66 = 0;
      v68 = 257;
      v63 = 0;
      switch ( (unsigned __int8)v12 )
      {
        case 0xFBu:
          v25 = 16;
          v67 = -32749;
          break;
        case 0xFCu:
          v25 = 16;
          v67 = -32748;
          break;
        case 0xF9u:
          v25 = 16;
          v67 = -32751;
          break;
        default:
          v67 = -32750;
          v25 = 16;
          break;
      }
    }
    else
    {
      if ( (unsigned __int8)v12 != 6 )
      {
LABEL_11:
        v20 = a5;
        v21 = (unsigned __int8)v12;
        v22 = v8 + v14;
        switch ( (char)v12 )
        {
          case 0:
            return &byte_4;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 11:
          case 26:
          case 38:
          case 44:
          case 56:
          case 57:
            v61[0] = a1;
            v62 = 0;
            v64 = -1;
            v65 = 0;
            v66 = 0;
            v68 = 257;
            v63 = 0;
            goto LABEL_18;
          case 8:
          case 9:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 20:
          case 23:
          case 24:
          case 25:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          case 39:
          case 40:
          case 41:
          case 42:
          case 43:
          case 45:
          case 46:
          case 52:
          case 53:
          case 54:
          case 55:
          case 58:
          case 59:
          case 60:
          case 61:
          case 62:
            return (_BYTE *)(&dword_0 + 2);
          case 10:
            if ( !a3 )
              goto LABEL_47;
            v36 = *(_DWORD *)(a3 + 88);
            if ( !v36 )
            {
              if ( v14 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
                goto LABEL_47;
              goto LABEL_46;
            }
            v60 = v8 + v14;
            v59 = v14;
            v58 = v9;
            v51 = sub_3BD30(v9 + 80, 16);
            v9 = v58;
            v14 = v59;
            v22 = v60;
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL);
            if ( v36 != v51 || (*(_DWORD *)(v58 + 552) & 3) == 2 )
            {
              if ( v59 < v15 )
                goto LABEL_47;
              goto LABEL_46;
            }
            if ( v59 >= v15 || !(unsigned __int8)is_loaded(v60) )
            {
              sub_BFC0(
                (__int64)"AUTOHIDE SESSION\n%a: uninitialized or bogus function descriptor %a in REL24 relocation",
                a6,
                a7);
              return nullptr;
            }
            v8 = 0;
            qword = get_qword(v60);
            v9 = v58;
            v14 = qword;
            if ( qword >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            {
LABEL_46:
              if ( *(_BYTE *)(a3 + 92) == 2 && *(_WORD *)(v9 + 520) == 2 )
              {
                v57 = v14;
                dword = get_dword(v13, v15, v14, v9, v22);
                v14 = v57;
                if ( dword == 1610612736 )
                  return nullptr;
              }
            }
LABEL_47:
            v9 = 0;
            v61[0] = a1;
            v15 = 257;
            v64 = -1;
            v62 = 0;
            v65 = 0;
            v66 = 0;
            v68 = 257;
            v63 = 0;
LABEL_48:
            v25 = 16;
            v67 = 22;
            break;
          case 19:
            sub_40E20(a1, v13, 2);
            return nullptr;
          case 21:
            v34 = *(_DWORD *)(a1 + 352);
            if ( !v34 )
              return "Invalid JMP_SLOT relocation (no .plt)";
            v35 = v34 - 5;
            result = "Invalid JMP_SLOT relocation (illegal .plt)";
            if ( v35 <= 1 )
              return sub_1CC80(a1, a3, (__int64)v13, v22);
            return result;
          case 22:
            goto LABEL_29;
          case 47:
          case 48:
          case 49:
          case 50:
            goto LABEL_35;
          case 51:
            if ( *(_WORD *)(v9 + 520) == 1 )
            {
              result = "Invalid TOC relocation (no TOC)";
              if ( *(_DWORD *)(a1 + 376) != 1 )
                return result;
              v19 = *(_QWORD *)(a1 + 388);
              v31 = *(_QWORD *)(a1 + 396);
              v30 = v31 + v19;
              goto LABEL_30;
            }
            if ( !*(_BYTE *)(a1 + 404) )
              sub_1AEA0(a1);
            if ( *(_DWORD *)(a1 + 376) )
            {
              if ( get_qword(v13) != *(_QWORD *)(a1 + 388) )
                sub_BFC0((__int64)"AUTOHIDE SESSION\n%a: in relocation our value (%a) != linker's one (%a)", a6, a7, a8);
              op_offset(v13, 0, 9, -1, 0, *(_QWORD *)(a1 + 396));
              if ( *(_DWORD *)(a1 + 376) != 4 )
              {
                v45 = *(_QWORD *)(a1 + 396);
                v46 = *(_QWORD *)(a1 + 388);
                if ( *(_DWORD *)(get_ph(v13, 0, v44) + 4) == 15 )
                {
                  sub_101F0(0xBB9u, v46, v45);
                  *(_DWORD *)(a1 + 376) = 4;
                  return nullptr;
                }
                else
                {
                  sub_1AAC0(v13, 0, v47);
                  return (const char *)sub_1F8B0();
                }
              }
            }
            return nullptr;
          case 63:
          case 64:
            v32 = v12 - 7;
            return sub_1EC30(a1, v32, (__int64)v13, v14, v8, a6, a7, a8);
          default:
            v22 = v20;
            if ( (unsigned __int8)v12 <= 0xF8u )
            {
              if ( (unsigned __int8)v12 <= 0xF6u )
                return (_BYTE *)(&dword_0 + 2);
              sub_40E20(a1, v13, 4);
              if ( (_BYTE)v12 == 0xF7 )
              {
                v48 = get_qword(v8 + 8);
                patch_qword(v13 + 8, v48);
                op_offset(v13 + 8, 0, 9, -1, 0, *(_QWORD *)(a1 + 396));
                create_data(v13 + 16, 805306368, 8, -1);
              }
              else
              {
                sub_47DB0(a1, v8, v26, v27, v28, v29);
              }
              LODWORD(v19) = v8;
LABEL_29:
              v30 = v8;
              LODWORD(v31) = 0;
LABEL_30:
              sub_42050(a1, (_DWORD)v13, v19, v30, v31, 12, 0, 0, 0);
              return nullptr;
            }
            v9 = (unsigned int)(unsigned __int8)v12 - 249;
            result = (_BYTE *)(&dword_0 + 2);
            if ( (unsigned int)v9 > 3 )
              return result;
            goto LABEL_78;
        }
        goto LABEL_49;
      }
      v53 = v14;
      v24 = find_custom_fixup("HIGHA16");
      v61[0] = a1;
      v14 = v53;
      *(_WORD *)(a1 + 348) = v24;
      v21 = 6;
      v64 = -1;
      v66 = 0;
      v62 = 0;
      v65 = 0;
      v68 = 257;
      v63 = 0;
LABEL_18:
      switch ( v21 )
      {
        case 1LL:
          v22 = 5;
          v25 = 0;
          v67 = 5;
          break;
        case 2LL:
          v25 = 0;
          v67 = 6;
          break;
        case 3LL:
          v15 = 1;
          v25 = 0;
          v67 = 1;
          break;
        case 4LL:
          v9 = 2;
          v25 = 0;
          v67 = 2;
          break;
        case 5LL:
          v25 = 0;
          v67 = 3;
          break;
        case 6LL:
          v25 = 0;
          v67 = 4;
          break;
        case 7LL:
          v25 = 0;
          v67 = 7;
          break;
        case 10LL:
          goto LABEL_48;
        case 11LL:
          v25 = 16;
          v67 = 23;
          break;
        case 26LL:
          v25 = 16;
          v67 = -32747;
          break;
        default:
          if ( (unsigned __int8)v12 == 44 )
          {
            v22 = 4294934552LL;
            v25 = 16;
            v67 = -32744;
          }
          else
          {
            v25 = 0;
            if ( (unsigned __int8)v12 <= 0x2Cu )
              v67 = 8;
            else
              v67 = ((unsigned __int8)v12 != 56) + 9;
          }
          break;
      }
    }
LABEL_49:
    v55 = v14;
    v37 = get_dword(v13, v15, v14, v9, v22);
    v38 = v55;
    v39 = v37;
    if ( v55 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
    {
      v38 = v8 + v55;
    }
    else
    {
      v62 = v8;
      HIBYTE(v68) = 0;
    }
    v40 = nullptr;
    v61[1] = v38;
    if ( v25 )
      v40 = v13;
    *(_QWORD *)&v63 = v40;
    sub_1D2B0(v61, v39);
    sub_1D4D0(v61, v13, v41, v42, v43, 0.0, a7, a8);
    return nullptr;
  }
  v54 = v14;
  v33 = find_custom_fixup("HIGHA16");
  v14 = v54;
  *(_WORD *)(a1 + 348) = v33;
LABEL_35:
  v32 = v12 - 44;
  return sub_1EC30(a1, v32, (__int64)v13, v14, v8, a6, a7, a8);
}

