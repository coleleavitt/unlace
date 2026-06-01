__int64 __fastcall sub_190AE60(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned __int8 a9)
{
  unsigned int v14; // esi
  unsigned __int8 v15; // al
  __int64 result; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r10
  char v20; // al
  bool v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbp
  unsigned __int64 v33; // rax
  bool v34; // al
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // ebp
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // r12d
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  const char *v50; // rax
  char *v51; // rax
  unsigned __int64 v52; // rax
  const char *v53; // rax
  char *v54; // rax
  unsigned __int64 v55; // rax
  _QWORD *v56; // [rsp+8h] [rbp-F0h]
  __int64 v57; // [rsp+8h] [rbp-F0h]
  __int64 v58; // [rsp+8h] [rbp-F0h]
  __int64 v59; // [rsp+8h] [rbp-F0h]
  __int64 *v60; // [rsp+8h] [rbp-F0h]
  __int64 v61; // [rsp+8h] [rbp-F0h]
  _QWORD *v62; // [rsp+10h] [rbp-E8h]
  __int64 v63; // [rsp+18h] [rbp-E0h] BYREF
  unsigned int v64; // [rsp+24h] [rbp-D4h] BYREF
  __int64 v65; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int16 v66[100]; // [rsp+30h] [rbp-C8h] BYREF

  v14 = *(_DWORD *)(a3 + 8);
  v63 = a4;
  v64 = v14;
  if ( (unsigned __int8)sub_18CDF10(a1, v14, a4, a9) )
  {
    v17 = sub_B85A10(a3);
    if ( !v17 )
      v17 = *(_DWORD *)(a3 + 8);
    return sub_18C4330(a1, *(_DWORD *)(a3 + 8), v17, nullptr, 0, 0);
  }
  else
  {
    v15 = *(_BYTE *)(v63 + 28) & 0x7F;
    if ( (unsigned int)v15 - 68 <= 6 )
    {
      sub_1CCEE00(a1, a2, 0, v63, v64);
      return 1;
    }
    if ( (unsigned int)v15 - 26 > 0x1A && v15 != 57 )
    {
      sub_168B9F0((__int64)v66, (__int64 *)(a1 + 8), v64, 0x1336u, 0);
      v18 = sub_17BA610((__int64)v66, &v63);
      v65 = *a2;
      sub_1587DB0(v18, &v65);
      sub_15F7200(v66);
      sub_168B9F0((__int64)v66, (__int64 *)(a1 + 8), *(_DWORD *)(v63 + 24), 0x67u, 0);
      sub_15F7200(v66);
      return 1;
    }
    if ( (unsigned __int8)sub_18F5260(a1, v63, (int *)&v64, 1u, 0, 0, a7, *(double *)a8.m128_u64, 0, 0, 0) )
      return 1;
    v19 = v63;
    v20 = *(_BYTE *)(v63 + 28);
    if ( v20 < 0 && !a9 )
      return 1;
    if ( (v20 & 0x7F) == 0x20 )
    {
      v21 = sub_17A0250(v63);
      v19 = v63;
      if ( !v21 )
      {
        v45 = *(unsigned int *)(a3 + 8);
        *(_QWORD *)v66 = 3;
        return sub_19C5550(a1, a2, v45, v63, 3, 0, 0);
      }
    }
    v65 = *(_QWORD *)(v19 + 48);
    if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 1;
    v56 = (_QWORD *)v19;
    v22 = sub_F5C3B0(&v65);
    v26 = (__int64)v56;
    v65 = v22;
    switch ( (*(_BYTE *)(v63 + 28) + 99) & 0x7F )
    {
      case 0:
      case 1:
      case 2:
      case 0x13:
        goto LABEL_28;
      case 3:
      case 0x14:
      case 0x15:
        v44 = sub_C1BEF0((__int64)&v65, v63, v23, v24);
        v31 = 1;
        v26 = (__int64)v56;
        v65 = v44;
        goto LABEL_29;
      case 5:
        v37 = 0;
        v38 = sub_B75A50((__int64)v56, 0);
        v26 = (__int64)v56;
        v40 = v38;
        if ( v38
          && ((v62 = v56,
               v60 = *(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL),
               v50 = (const char *)sub_FBD4B0(v60, v38),
               v51 = strchr(v50, 102),
               v26 = (__int64)v62,
               !v51)
           || (v53 = (const char *)sub_FBD4B0(v60, v40), v37 = 122, v54 = strchr(v53, 122), v26 = (__int64)v62, v54)) )
        {
          v31 = 0;
          v65 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19112LL);
        }
        else
        {
          v41 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
          v42 = (unsigned int)*(unsigned __int8 *)(v41 + 16) - 25;
          if ( (unsigned int)v42 > 1 )
          {
            v59 = v26;
            v41 = sub_F63050(v41, v37, v42, v39);
            v26 = v59;
          }
          v43 = *(_QWORD *)(a1 + 248);
          if ( *(_QWORD *)(v43 + 19104) == *(_QWORD *)(v41 + 24) )
          {
            v65 = *(_QWORD *)(v43 + 19104);
            v31 = 0;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
          {
LABEL_28:
            v31 = 1;
          }
          else if ( (*(_QWORD *)(v26 + 80) & 0x200000LL) != 0
                 || (*(_QWORD *)(v26 + 80) & 0x100000LL) != 0
                 || *(_BYTE *)(v41 + 16) != 26 )
          {
LABEL_45:
            v31 = 0;
          }
          else
          {
            v61 = v26;
            v66[0] = *(_WORD *)(v41 + 20) >> 2;
            v55 = sub_A71610(v43, *(_QWORD *)(v41 + 24), v66);
            v31 = 0;
            v26 = v61;
            v65 = v55;
          }
        }
LABEL_29:
        v57 = v26;
        result = sub_1907C00(a1, v26, v65, v31, a3, (__int64)a2, *(double *)a7.m128i_i64, a8, a5, 0, a6);
        v32 = result;
        if ( *(char *)(v57 + 28) < 0 )
        {
          if ( result )
          {
            *(_QWORD *)v66 = result;
            v46 = sub_BF7FE0(result);
            v47 = sub_16C50A0(v32);
            result = sub_18C4330(a1, v47, v46, v66, 1, 0);
          }
        }
        break;
      case 6:
        v33 = v56[6] & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) == 26
          && *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19104LL) == *(_QWORD *)(*(_QWORD *)v33 + 24LL) )
        {
          v65 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19104LL);
          v31 = 0;
        }
        else
        {
          v34 = sub_B979F0(v56);
          v26 = (__int64)v56;
          v31 = v34;
        }
        goto LABEL_29;
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xF:
      case 0x11:
      case 0x17:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
          goto LABEL_24;
        v24 = v65 & 7;
        v23 = v24 | (v65 >> 3) & 1;
        if ( v23 )
          goto LABEL_24;
        v23 = *(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
        v24 = v23 | (*(__int64 *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1;
        if ( v24 )
          goto LABEL_24;
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v27 + 16) != 13 || ((*(_WORD *)(v27 + 18) >> 3) & 0x1FF) != 0x1B3 )
          goto LABEL_24;
        goto LABEL_45;
      case 0xE:
      case 0x10:
LABEL_24:
        v28 = sub_C1BEF0((__int64)&v65, v63, v23, v24);
        v26 = (__int64)v56;
        v65 = v28;
        v29 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
        if ( v29 != 3 && v29 > 1 )
        {
          v30 = sub_1905D40(a1, (__int64)v56, v64);
          v26 = (__int64)v56;
          if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            v65 = v30;
        }
        goto LABEL_28;
      case 0x12:
        v35 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v35 + 16) - 43 <= 1
          || (v48 = sub_18BBE30(v35, v63, v23, v24), v26 = (__int64)v56, (v35 = v48) != 0) )
        {
          v58 = v26;
          v36 = sub_9B4870(v35, v63, v23, v24, v25);
          v31 = 1;
          v26 = v58;
          v65 = v36;
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL) == 48 )
        {
          v52 = sub_6D5440(&v65);
          v31 = 1;
          v26 = (__int64)v56;
          v65 = v52 | 1;
        }
        else
        {
          v49 = sub_6D5440(&v65);
          v31 = 0;
          v26 = (__int64)v56;
          v65 = v49;
        }
        goto LABEL_29;
      default:
        goto LABEL_45;
    }
  }
  return result;
}
