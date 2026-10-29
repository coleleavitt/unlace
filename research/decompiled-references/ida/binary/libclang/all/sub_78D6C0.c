__int64 __fastcall sub_78D6C0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // ecx
  int v13; // eax
  _BYTE *v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  int v26; // eax
  signed __int64 v27; // rdi
  int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // r15
  char v31; // dl
  char v32; // al
  int v33; // edx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  _QWORD *v36; // rdi
  _QWORD *v37; // rax
  _DWORD **v38; // rdi
  unsigned __int64 v39; // rcx
  _DWORD **v40; // r15
  _DWORD *v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // al
  bool v45; // al
  bool v46; // al
  __int64 v47; // rax
  int v48; // edx
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int8 v52; // al
  __int64 v53; // rax
  unsigned int v54; // edx
  bool v55; // dl
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  unsigned __int8 v61; // si
  char v62; // al
  char v63; // al
  __int64 v64; // rax
  __int64 *v65; // rdx
  unsigned __int8 v66; // al
  __int64 v67; // rax
  char v68; // rdx^4
  unsigned __int8 v69; // dl
  unsigned __int8 v70; // si
  unsigned __int8 v71; // dl
  unsigned __int64 v72; // rax
  char v73; // [rsp+0h] [rbp-78h]
  char v74; // [rsp+0h] [rbp-78h]
  char v75; // [rsp+0h] [rbp-78h]
  char v76; // [rsp+0h] [rbp-78h]
  char v77; // [rsp+0h] [rbp-78h]
  char v78; // [rsp+0h] [rbp-78h]
  unsigned __int8 v79; // [rsp+7h] [rbp-71h]
  char v80; // [rsp+7h] [rbp-71h]
  char v81; // [rsp+7h] [rbp-71h]
  unsigned __int8 v82; // [rsp+17h] [rbp-61h] BYREF
  __int64 v83; // [rsp+18h] [rbp-60h]
  unsigned __int64 v84; // [rsp+20h] [rbp-58h]
  unsigned __int64 v85; // [rsp+28h] [rbp-50h]
  unsigned __int64 v86; // [rsp+30h] [rbp-48h]
  unsigned __int64 v87; // [rsp+38h] [rbp-40h]

  while ( 1 )
  {
    v4 = a2;
    v6 = a3;
    v73 = a4;
    v79 = a3 & 1;
    v7 = sub_798D40(a2);
    v8 = 0;
    v9 = v7;
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 38 < 7 )
      v8 = a2;
    v10 = v8;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    v12 = *(_BYTE *)(v11 + 28) & 0x7F;
    if ( (unsigned int)(v12 - 66) <= 6 )
    {
      v11 = *(_QWORD *)(v11 + 48);
      if ( !v11 )
        goto LABEL_9;
      v12 = *(_BYTE *)(v11 + 28) & 0x7F;
    }
    if ( (unsigned int)(v12 - 38) > 6 )
    {
      if ( (unsigned int)(v12 - 32) > 5 )
        goto LABEL_9;
      v13 = *(_BYTE *)(v11 + 81) >> 5;
    }
    else
    {
      v13 = *(_BYTE *)(v11 + 96) & 7;
    }
    if ( v13 == 2 )
      return 18;
LABEL_9:
    v14 = *(_BYTE **)(v9 + 2160);
    if ( (*v14 & 8) != 0 )
      break;
    if ( v10 )
      goto LABEL_11;
LABEL_62:
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x1E )
      goto LABEL_41;
    a4 = v73;
    a3 = v6;
    a2 = **(_QWORD **)(a2 + 56);
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 38 >= 7 )
      a2 = 0;
  }
  if ( !v10 )
    goto LABEL_62;
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x29 && *(char *)(v10 + 97) < 0 )
    return 18;
LABEL_11:
  if ( (v14[1] & 8) == 0 )
    goto LABEL_34;
  v15 = *(_QWORD *)(v10 + 48);
  if ( (v15 & 1) == 0 && (byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
    goto LABEL_34;
  if ( (v15 & 4) != 0 )
    goto LABEL_34;
  if ( (byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    goto LABEL_34;
  v16 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( v16 != 41 && (*(_BYTE *)(v10 + 97) & 0x20) != 0 )
    goto LABEL_34;
  v17 = *(_QWORD *)(v10 + 8) & 7LL;
  if ( *(char *)(v10 + 29) >= 0 )
  {
    if ( !v17 )
      goto LABEL_24;
    v18 = *(_QWORD *)(v10 - 8);
LABEL_20:
    if ( !v18 || (v19 = *(unsigned int *)(v18 + 36), (unsigned int)v19 > 8) || (v20 = 308, !_bittest64(&v20, v19)) )
    {
      v16 = *(_BYTE *)(v10 + 28) & 0x7F;
      goto LABEL_24;
    }
    goto LABEL_34;
  }
  if ( v17 )
  {
    v18 = sub_794640(v10);
    goto LABEL_20;
  }
LABEL_24:
  if ( (unsigned int)v16 - 39 > 1 && !sub_77CBA0(v10) )
  {
    v21 = sub_789930((__int64 *)(v10 + 72));
    if ( v21 )
      return sub_78C840(a1, (__int64)v21, v6);
    if ( (*(_BYTE *)(v10 + 96) & 5) != 1 )
    {
      v72 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
        v72 = *(_QWORD *)v72;
      if ( (*(_BYTE *)(v72 + 8) & 0x7F) != 4 || (*(_BYTE *)(v72 + 10) & 1) != 0 )
        return 18;
    }
  }
LABEL_34:
  v23 = *(_QWORD *)(v10 + 72);
  if ( (v23 & 1) == 0 && (v23 & 2) == 0 )
  {
    v25 = sub_7865D0((__int64 *)(v10 + 72), v10);
LABEL_37:
    if ( !v25 )
      goto LABEL_41;
    while ( 1 )
    {
      v26 = v25[12] & 7;
      if ( v26 == 3 )
      {
        if ( (*(_BYTE *)(v10 + 96) & 7) == 0 )
          return sub_78CB40(a1, (__int64)v25);
      }
      else if ( v26 == 2 )
      {
        return 18;
      }
      v27 = v25[9];
      if ( (v27 & 1) != 0 )
        break;
      v34 = v27 >> 1;
      if ( (v27 & 2) != 0 )
        break;
      v35 = v27 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v27 & 1) != 0 )
        goto LABEL_54;
      if ( v35 <= 3 )
        break;
      v36 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v34 & 1) != 0 )
      {
        v27 = sub_6D4E90(v36, (__int64)v25);
        v25[9] = v27 | 1;
        v37 = nullptr;
        LOBYTE(v35) = v27 & 0xFE;
        if ( (v27 & 0xFFFFFFFFFFFFFFFELL) == 0 )
          goto LABEL_51;
LABEL_54:
        v38 = (_DWORD **)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        v39 = v35 & 4;
        v40 = v38;
        v37 = v38;
        if ( (_DWORD)v39 && v38 )
        {
          v41 = *v38;
          v42 = v41[3];
          if ( *((_DWORD *)v40 + 2) != v42 )
          {
            *((_DWORD *)v40 + 2) = v42;
            (*(void (__fastcall **)(_DWORD *, _QWORD *, __int64, unsigned __int64))(*(_QWORD *)v41 + 144LL))(
              v41,
              v25,
              v24,
              v39);
          }
          v25 = v40[2];
        }
        else
        {
LABEL_51:
          v25 = v37;
        }
        goto LABEL_37;
      }
      v25 = v36;
    }
  }
LABEL_41:
  if ( (unsigned __int8)sub_79A980(v4) )
  {
    v28 = *(_BYTE *)(v4 + 28) & 0x7F;
    if ( (unsigned int)(v28 - 38) > 6 )
    {
      if ( (unsigned int)(v28 - 32) > 5 || !(unsigned __int8)sub_77E260(*(_QWORD *)(v4 + 112)) )
        return 18;
    }
    else if ( !(unsigned __int8)sub_77B5F0(*(_QWORD *)(v4 + 80)) )
    {
      return 18;
    }
  }
  LOBYTE(v29) = 0;
  v30 = 2;
  if ( (v6 & 2) == 0 )
  {
    v43 = sub_786650(v4, v79, 0);
    v84 = v43;
    v29 = HIDWORD(v43);
    v85 = v43;
    if ( BYTE4(v43) )
    {
      v30 = v43 & 3;
      if ( (int)v43 <= 2 )
        goto LABEL_68;
    }
    else
    {
      v49 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) == 0 )
        goto LABEL_86;
LABEL_85:
      v49 = *(_QWORD *)v49;
LABEL_86:
      while ( (*(_BYTE *)(v49 + 8) & 0x7F) != 0 )
      {
        if ( (*(_BYTE *)(v49 + 8) & 0x7F) == 0x16 )
        {
          v50 = sub_786650(v49 - 48, v79, 0);
          v86 = v50;
          v29 = HIDWORD(v50);
          v87 = v50;
          if ( BYTE4(v50) )
          {
            if ( (int)v50 > 2 )
              break;
            v30 = v50 & 3;
            goto LABEL_68;
          }
        }
        v51 = *(_QWORD *)(sub_79A2E0(v49) + 16);
        v49 = v51 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v51 & 4) != 0 )
          goto LABEL_85;
      }
    }
    LOBYTE(v29) = 0;
    v30 = 2;
LABEL_68:
    v82 = (32 * (v29 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
    if ( (v82 & 0x20) == 0 )
    {
      v44 = (*(_BYTE *)(*(_QWORD *)(v9 + 2160) + 201LL) >> 3) & 7;
      if ( v79 )
        v44 = *(_BYTE *)(*(_QWORD *)(v9 + 2160) + 201LL) & 7;
      if ( v44 <= v30 && v44 != (v30 & 7) )
      {
        LOBYTE(v29) = 0;
        v30 = v44 & 3;
      }
      v80 = v29;
      v45 = sub_78BDA0(v4);
      LOBYTE(v29) = v80;
      if ( v45 )
      {
        v46 = v30 == 0;
        v30 = 0;
        LOBYTE(v29) = v46 & v80;
      }
    }
  }
  v31 = *(_BYTE *)(v4 + 28);
  v32 = (v31 + 110) & 0x7F;
  v33 = v31 & 0x7F;
  switch ( v32 )
  {
    case 0:
    case 11:
      goto LABEL_77;
    case 4:
      return (32 * (v29 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6u;
    case 13:
      v59 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v59 = (_QWORD *)*v59;
      v76 = v29;
      v60 = sub_79A2E0(v59);
      v61 = sub_78C840(a1, v60, v6);
      if ( (v61 & 7) != 3 && (v61 & 7) != 6 )
        return 17;
      v82 = (32 * (v76 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
      sub_779E00(&v82, v61);
      goto LABEL_89;
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
      if ( *(_BYTE *)(v4 + 81) >> 5 == 3 )
      {
        LOBYTE(v29) = 1;
        v30 = 0;
      }
      v53 = *(_QWORD *)(v9 + 2160);
      if ( !*(_DWORD *)(v53 + 64) || (*(_BYTE *)(v53 + 68) & 8) == 0 )
        goto LABEL_103;
      v54 = *(_DWORD *)(*(_QWORD *)(v9 + 17288) + 248LL);
      if ( v54 > 0x1A )
      {
        if ( v54 - 41 <= 1 )
          goto LABEL_102;
      }
      else if ( v54 > 0x18 )
      {
LABEL_102:
        v55 = v30 == 0;
        v30 = 0;
        LOBYTE(v29) = v55 & v29;
        goto LABEL_103;
      }
      v78 = v29;
      v67 = sub_723500((_BYTE *)v4);
      LOBYTE(v29) = v78;
      v68 = BYTE4(v67);
      v83 = v67;
      v53 = *(_QWORD *)(v9 + 2160);
      if ( v68 )
        goto LABEL_102;
LABEL_103:
      if ( (*(_BYTE *)(v53 + 1) & 8) == 0 )
        goto LABEL_104;
      v77 = v29;
      v63 = sub_77E260(*(_QWORD *)(v4 + 112));
      LOBYTE(v29) = v77;
      if ( v63 )
        goto LABEL_104;
      v64 = *(_QWORD *)(v4 + 48);
      v65 = (__int64 *)(*(_QWORD *)(v4 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v4 + 56) & 4) != 0 )
        v65 = (__int64 *)v65[4];
      if ( v65 )
        v64 = *v65;
      v66 = sub_B15EF0(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL));
      LOBYTE(v29) = v77;
      if ( v66 > 3u )
      {
LABEL_104:
        v56 = *(_QWORD *)(v4 + 152);
        if ( v56 && (*(_QWORD *)(v4 + 152) & 6LL) == 4 && (v56 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v82 = (32 * (v29 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
          sub_78D460(a1, &v82, v4, v56 & 0xFFFFFFFFFFFFFFF8LL, v6);
LABEL_89:
          v48 = v82 & 7;
          LOBYTE(v29) = (v82 & 0x20) != 0;
          v30 = (v82 >> 3) & 3;
          if ( (unsigned __int8)v48 <= 3u )
            return v48 | 0x10u;
        }
        else
        {
LABEL_77:
          LOBYTE(v48) = 6;
        }
        return v82 & 0xC0 | ((unsigned __int8)(32 * v29) | (unsigned __int8)(v48 | (8 * v30))) & 0x3Fu;
      }
      result = 19;
      break;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      if ( (*(_BYTE *)(*(_QWORD *)(v9 + 2160) + 1LL) & 8) == 0 )
        goto LABEL_92;
      v81 = v29;
      v62 = sub_77B5F0(*(_QWORD *)(v4 + 80));
      LOBYTE(v29) = v81;
      if ( v73 || v62 )
        goto LABEL_129;
      v69 = sub_77A150(a1, *(_QWORD *)(*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL), v6);
      result = 19;
      if ( (v69 & 7u) <= 3 )
        return result;
      LOBYTE(v29) = v81;
      v70 = (v69 >> 3) & 3;
      v82 = (32 * (v81 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
      if ( (v82 & 0x20) == 0 )
      {
        if ( v30 < v70 )
        {
          v70 = v30;
        }
        else
        {
          v71 = v69 & 0x20;
          if ( v30 != v70 || v71 )
            LOBYTE(v29) = v71 >> 5;
        }
        v30 = v70;
      }
LABEL_129:
      v33 = *(_BYTE *)(v4 + 28) & 0x7F;
LABEL_92:
      if ( (*(_BYTE *)(v4 + 96) & 7) == 3 )
      {
        LOBYTE(v29) = 1;
        v30 = 0;
      }
      if ( (unsigned int)(v33 - 39) > 1 )
        goto LABEL_77;
      v82 = (32 * (v29 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
      sub_78CF40(a1, &v82, v4, v6);
      goto LABEL_89;
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
      v57 = *(_QWORD *)(v4 + 40);
      if ( v57 <= 7 && !(_DWORD)v57 )
      {
        v58 = *(_QWORD *)(v4 + 120);
        if ( (v58 & 4) != 0 || v58 <= 7 )
          return 17;
      }
      if ( (unsigned int)(v33 - 58) > 1 )
        goto LABEL_77;
      v82 = (32 * (v29 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
      sub_78D1C0(a1, &v82, v4, v6);
      goto LABEL_89;
    case 44:
    case 45:
    case 46:
      v74 = v29;
      v47 = sub_784CB0((_QWORD *)v4, 1);
      LOBYTE(v29) = v74;
      if ( v47 )
        goto LABEL_77;
      return 17;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
      v75 = v29;
      v52 = sub_77A180(a1, *(_QWORD *)(v4 + 56), v6);
      v82 = (32 * (v75 & 1)) | (8 * (v30 & 3)) & 0xDF | v82 & 0xC0 | 6;
      sub_779E80(&v82, v52, (v6 & 2) == 0);
      goto LABEL_89;
    default:
      return 17;
  }
  return result;
}

