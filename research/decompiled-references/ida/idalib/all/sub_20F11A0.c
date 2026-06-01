__int64 __fastcall sub_20F11A0(_DWORD *a1, _QWORD *a2, __int64 a3, bool a4)
{
  _DWORD *v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // r8
  int v7; // r10d
  int v8; // eax
  __int64 v9; // rax
  _DWORD *v10; // r9
  _DWORD *v12; // rax
  int v13; // r15d
  _DWORD *v14; // r8
  _QWORD *v15; // r10
  _DWORD *v16; // r13
  unsigned int v17; // ebx
  __int64 v18; // rax
  bool v19; // bp
  __int64 v20; // rax
  unsigned int v21; // r11d
  __int64 result; // rax
  unsigned int v24; // ebx
  bool v26; // al
  unsigned int v27; // ebx
  unsigned int v28; // esi
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r11
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  _QWORD *v36; // rbp
  __int64 v37; // rdx
  _QWORD *v38; // r12
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 (*v43)(); // rax
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 (*v47)(); // rax
  _QWORD *v48; // rdi
  _QWORD *v49; // r12
  _DWORD *v50; // rdi
  _QWORD *v51; // rbx
  _QWORD *v52; // r13
  char v53; // al
  __int64 (*v54)(); // rax
  bool v55; // zf
  _QWORD *v56; // rdi
  _DWORD *v57; // rdi
  char v58; // al
  __int64 (*v59)(); // rax
  char v60; // al
  __int64 (*v61)(); // rax
  char v62; // al
  __int64 (*v63)(); // rax
  char v64; // al
  __int64 (*v65)(); // rax
  __int64 (*v66)(); // rax
  __int64 (*v67)(); // rax
  char v68; // al
  __int64 (*v69)(); // rax
  _QWORD *v70; // r10
  char v71; // al
  __int64 (*v72)(); // rax
  char v73; // al
  int v74; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v75; // [rsp+10h] [rbp-68h]
  _QWORD *v76; // [rsp+10h] [rbp-68h]
  _DWORD *v78; // [rsp+18h] [rbp-60h]
  __int64 v79; // [rsp+20h] [rbp-58h]
  __int64 v80; // [rsp+20h] [rbp-58h]
  _QWORD *v81; // [rsp+20h] [rbp-58h]
  unsigned int v83; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v84; // [rsp+2Ch] [rbp-4Ch]
  _DWORD *v85; // [rsp+30h] [rbp-48h]
  _DWORD *v86; // [rsp+30h] [rbp-48h]

  v4 = a1;
  v5 = a2;
  v6 = *(_QWORD *)a1;
  v7 = a1[16];
  v8 = 2;
  if ( (*(_QWORD *)(*(_QWORD *)a1 + 8LL) & 2) == 0 )
    v8 = *(_DWORD *)(*(_QWORD *)a1 + 8LL) & 1;
  v74 = v8;
  if ( v7 )
  {
    v9 = 0;
    v10 = (_DWORD *)((unsigned int)(v7 - 1) >> 6);
    while ( 1 )
    {
      _RDX = *(_QWORD *)(v6 + 8 * v9);
      if ( (unsigned int)(v7 - 1) >> 6 == (_DWORD)v9 )
        _RDX = (0xFFFFFFFFFFFFFFFFLL >> -(char)v7) & *(_QWORD *)(v6 + 8 * v9);
      if ( _RDX )
        break;
      if ( v10 == (_DWORD *)v9 )
        goto LABEL_10;
      ++v9;
    }
    __asm { tzcnt   rdx, rdx }
    v24 = _RDX + ((_DWORD)v9 << 6);
    if ( v24 != -1 )
    {
      while ( a4 && ((byte_26F2240[v24] - 2) & 0xFD) != 0 || byte_26F21E0[v24] == 12 )
      {
LABEL_37:
        v27 = v24 + 1;
        if ( v27 != v7 )
        {
          v10 = (_DWORD *)(v27 >> 6);
          v28 = (unsigned int)(v7 - 1) >> 6;
          if ( (unsigned int)v10 <= v28 )
          {
            v29 = v27 & 0x3F;
            v30 = (unsigned int)v10;
            v31 = *(_QWORD *)v4;
            v32 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v29);
            if ( v29 == 0 )
              v32 = 0;
            v33 = ~v32;
            while ( 1 )
            {
              _RAX = *(_QWORD *)(v31 + 8 * v30);
              if ( (_DWORD)v10 == (_DWORD)v30 )
                _RAX = v33 & *(_QWORD *)(v31 + 8 * v30);
              if ( v28 == (_DWORD)v30 )
                _RAX &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v7;
              if ( _RAX )
                break;
              if ( v28 < (unsigned int)++v30 )
                goto LABEL_49;
            }
            __asm { tzcnt   rax, rax }
            v24 = _RAX + ((_DWORD)v30 << 6);
            if ( v24 != -1 )
              continue;
          }
        }
LABEL_49:
        v5 = a2;
        goto LABEL_10;
      }
      if ( v24 == 73 )
      {
        v36 = *((_QWORD **)v4 + 9);
        v44 = 16LL * (unsigned int)v4[20];
        v38 = &v36[(unsigned __int64)v44 / 8];
        v39 = v44 >> 4;
        v40 = v44 >> 6;
        if ( v44 >> 6 )
        {
          v45 = *v36;
          v46 = v36[1];
          v47 = *(__int64 (**)())(*a2 + 16LL);
          if ( v47 == sub_EB4AD0 )
            goto LABEL_58;
          LODWORD(v6) = 73;
          v48 = &v36[8 * v40];
          v40 = (__int64)v38;
          v49 = v36 + 6;
          v75 = v48;
          v50 = v4;
          v51 = v36 + 4;
          v52 = v36 + 2;
          v10 = v50;
          while ( 1 )
          {
            v85 = v10;
            v83 = v6;
            v79 = v40;
            v53 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v47)(a2, v45, v46);
            v40 = v79;
            v6 = v83;
            v10 = v85;
            if ( !v53 )
              goto LABEL_106;
            v54 = *(__int64 (**)())(*a2 + 16LL);
            if ( v54 == sub_EB4AD0
              || (v68 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v54)(a2, v36[2], v36[3]),
                  v40 = v79,
                  v6 = v83,
                  v10 = v85,
                  !v68) )
            {
LABEL_64:
              v24 = v6;
              v55 = v40 == (_QWORD)v52;
              v4 = v10;
              v26 = v55;
              goto LABEL_33;
            }
            v69 = *(__int64 (**)())(*a2 + 16LL);
            if ( v69 == sub_EB4AD0
              || (v71 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v69)(a2, v36[4], v36[5]),
                  v40 = v79,
                  v6 = v83,
                  v10 = v85,
                  !v71) )
            {
LABEL_93:
              v70 = v51;
              v4 = v10;
              v24 = v6;
              v26 = v40 == (_QWORD)v70;
              goto LABEL_33;
            }
            v72 = *(__int64 (**)())(*a2 + 16LL);
            if ( v72 == sub_EB4AD0
              || (v73 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v72)(a2, v36[6], v36[7]),
                  v40 = v79,
                  v6 = v83,
                  v10 = v85,
                  !v73) )
            {
LABEL_96:
              v24 = v6;
              v4 = v10;
              v26 = v40 == (_QWORD)v49;
              goto LABEL_33;
            }
            v36 += 8;
            if ( v75 == v36 )
            {
LABEL_75:
              v38 = (_QWORD *)v40;
              v24 = v6;
              v4 = v10;
              v39 = (v40 - (__int64)v36) >> 4;
              break;
            }
            v45 = *v36;
            v52 += 8;
            v49 += 8;
            v46 = v36[1];
            v51 += 8;
            v47 = *(__int64 (**)())(*a2 + 16LL);
            if ( v47 == sub_EB4AD0 )
            {
LABEL_100:
              v38 = (_QWORD *)v40;
              v24 = v6;
              v4 = v10;
              goto LABEL_58;
            }
          }
        }
      }
      else
      {
        if ( v24 != 74 )
        {
          v26 = ((1LL << v24) & *(_QWORD *)(a2[1] + 8LL * (v24 >> 6))) != 0;
          goto LABEL_33;
        }
        v36 = *((_QWORD **)v4 + 9);
        v37 = 16LL * (unsigned int)v4[20];
        v38 = &v36[(unsigned __int64)v37 / 8];
        v39 = v37 >> 4;
        v40 = v37 >> 6;
        if ( v37 >> 6 )
        {
          v41 = *v36;
          v42 = v36[1];
          v43 = *(__int64 (**)())(*a2 + 16LL);
          if ( v43 == sub_EB4AD0 )
          {
LABEL_58:
            v26 = v38 == v36;
            goto LABEL_33;
          }
          LODWORD(v6) = 74;
          v56 = &v36[8 * v40];
          v40 = (__int64)v38;
          v49 = v36 + 6;
          v76 = v56;
          v57 = v4;
          v51 = v36 + 4;
          v52 = v36 + 2;
          v10 = v57;
          while ( 1 )
          {
            v86 = v10;
            v84 = v6;
            v80 = v40;
            v58 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v43)(a2, v41, v42);
            v40 = v80;
            v6 = v84;
            v10 = v86;
            if ( !v58 )
              break;
            v59 = *(__int64 (**)())(*a2 + 16LL);
            if ( v59 == sub_EB4AD0 )
              goto LABEL_64;
            v60 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v59)(a2, v36[2], v36[3]);
            v40 = v80;
            v6 = v84;
            v10 = v86;
            if ( !v60 )
              goto LABEL_64;
            v61 = *(__int64 (**)())(*a2 + 16LL);
            if ( v61 == sub_EB4AD0 )
              goto LABEL_93;
            v62 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v61)(a2, v36[4], v36[5]);
            v40 = v80;
            v6 = v84;
            v10 = v86;
            if ( !v62 )
              goto LABEL_93;
            v63 = *(__int64 (**)())(*a2 + 16LL);
            if ( v63 == sub_EB4AD0 )
              goto LABEL_96;
            v64 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD))v63)(a2, v36[6], v36[7]);
            v40 = v80;
            v6 = v84;
            v10 = v86;
            if ( !v64 )
              goto LABEL_96;
            v36 += 8;
            if ( v76 == v36 )
              goto LABEL_75;
            v41 = *v36;
            v52 += 8;
            v49 += 8;
            v42 = v36[1];
            v51 += 8;
            v43 = *(__int64 (**)())(*a2 + 16LL);
            if ( v43 == sub_EB4AD0 )
              goto LABEL_100;
          }
LABEL_106:
          v24 = v6;
          v4 = v10;
          v26 = v40 == (_QWORD)v36;
LABEL_33:
          if ( v74 == 1 )
          {
            if ( v26 )
              return 1;
          }
          else if ( (v74 || !v26) && (v26 || v74 != 2) )
          {
            return 0;
          }
LABEL_36:
          v7 = v4[16];
          goto LABEL_37;
        }
      }
      if ( v39 != 2 )
      {
        if ( v39 != 3 )
        {
          if ( v39 != 1 )
            goto LABEL_79;
          goto LABEL_88;
        }
        v65 = *(__int64 (**)())(*a2 + 16LL);
        if ( v65 == sub_EB4AD0
          || !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _DWORD *))v65)(
                a2,
                *v36,
                v36[1],
                v40,
                v6,
                v10) )
        {
          goto LABEL_58;
        }
        v36 += 2;
      }
      v66 = *(__int64 (**)())(*a2 + 16LL);
      if ( v66 == sub_EB4AD0
        || !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _DWORD *))v66)(
              a2,
              *v36,
              v36[1],
              v40,
              v6,
              v10) )
      {
        goto LABEL_58;
      }
      v36 += 2;
LABEL_88:
      v67 = *(__int64 (**)())(*a2 + 16LL);
      if ( v67 == sub_EB4AD0
        || !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _DWORD *))v67)(
              a2,
              *v36,
              v36[1],
              v40,
              v6,
              v10) )
      {
        goto LABEL_58;
      }
LABEL_79:
      if ( v74 == 1 )
        return 1;
      if ( v74 )
        return 0;
      goto LABEL_36;
    }
  }
LABEL_10:
  if ( a4 )
    return v74 != 1;
  v12 = *((_DWORD **)v4 + 27);
  v13 = *((_DWORD *)v5 + 22);
  v14 = &v12[v4[56]];
  if ( v12 == v14 )
    return v74 != 1;
  v15 = v5;
  v16 = *((_DWORD **)v4 + 27);
  v17 = 0;
  while ( 1 )
  {
    if ( v13 == v17 )
    {
      v19 = a4;
    }
    else
    {
      v18 = v17;
      do
      {
        ++v17;
        v19 = *(_DWORD *)(v15[10] + 4 * v18) == *v16;
        v18 = v17;
      }
      while ( v17 != v13 && !v19 );
    }
    if ( a3 )
    {
      v20 = *(unsigned int *)(a3 + 8);
      v21 = v17 - 1;
      if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v81 = v15;
        v78 = v14;
        sub_2237220(a3, a3 + 16, v20 + 1, 4);
        v20 = *(unsigned int *)(a3 + 8);
        v15 = v81;
        v14 = v78;
        v21 = v17 - 1;
      }
      *(_DWORD *)(*(_QWORD *)a3 + 4 * v20) = v21;
      ++*(_DWORD *)(a3 + 8);
    }
    if ( v74 == 1 )
      return v19;
    if ( v74 || !v19 )
      break;
    if ( v14 == ++v16 )
      return v74 != 1;
  }
  if ( v19 )
    return 0;
  result = 0;
  if ( v74 != 2 )
    return 0;
  return result;
}
