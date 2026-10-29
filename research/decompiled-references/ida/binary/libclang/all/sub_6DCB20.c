char __fastcall sub_6DCB20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  bool v15; // r12
  __int64 v16; // r15
  int v17; // edx
  __int64 v18; // rsi
  unsigned __int8 v19; // al
  __int64 *v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int8 v27; // al
  unsigned __int8 v28; // dl
  __int64 v29; // rdx
  char v30; // r14
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 *v40; // rsi
  __int64 v41; // r15
  unsigned __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdi
  char v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // r14
  __int64 *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // rdx
  __int64 *v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  char v63; // r13
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rbx

  if ( a3 == a2 )
    return 1;
  v4 = a2;
  v5 = a3;
  if ( *(_QWORD *)(a3 + 40) != *(_QWORD *)(a2 + 40) )
    return 0;
  v7 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v8 = sub_79C2A0(v7, a2, a3, a4);
  v11 = sub_79A2E0(v8);
  v12 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v12 = (_QWORD *)*v12;
  v13 = sub_79C2A0(v12, a2, v9, v10);
  v14 = sub_79A2E0(v13);
  v15 = v11 == 0 || v14 == 0;
  if ( v15 )
    return 0;
  if ( v14 != v11 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    if ( v16 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11) )
      return 0;
  }
  v17 = *(_BYTE *)(a2 + 28) & 0x7F;
  v18 = *(_BYTE *)(a2 + 28) & 0x7F;
  v19 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( (unsigned int)(v17 - 62) <= 2 )
  {
    if ( (unsigned int)v19 - 62 <= 2 )
    {
      v20 = (__int64 *)(*(_QWORD *)(v5 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v5 + 80) & 4) != 0 )
        v21 = v20[1];
      else
        v21 = *v20;
      v22 = (__int64 *)(*(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v4 + 80) & 4) != 0 )
        v23 = v22[1];
      else
        v23 = *v22;
      v24 = v21 & 0xFFFFFFFFFFFFFFF0LL;
      v25 = v23 & 0xFFFFFFFFFFFFFFF0LL;
      return (*(_QWORD *)(v24 + 8) | v21 & 7) == (*(_QWORD *)(v25 + 8) | v23 & 7);
    }
    return 0;
  }
  if ( (_BYTE)v18 != v19 )
    return 0;
  if ( (((_BYTE)v18 + 111) & 0x7Fu) <= 1 )
    return 1;
  if ( (unsigned int)(v17 - 58) <= 1 )
    return 0;
  if ( (unsigned int)(v17 - 56) <= 4 )
  {
    v27 = *(_BYTE *)(v4 + 73) >> 5;
    v28 = *(_BYTE *)(v5 + 73) >> 5;
    return v28 == v27 || (v27 == 3 || v27 <= 1u) && (v28 <= 1u || v28 == 3);
  }
  if ( (unsigned int)(v17 - 32) <= 5 )
  {
    if ( (_BYTE)v18 == 36 && (*(_BYTE *)(v4 + 87) & 0x20) != 0 )
    {
      v18 = *(_QWORD *)(v4 + 184);
      if ( *(_QWORD *)(v4 + 176) )
      {
        v29 = 0;
        if ( (*(_BYTE *)(v5 + 87) & 0x20) != 0 )
          v29 = *(_QWORD *)(v5 + 184);
        if ( !(unsigned __int8)sub_6DCB20(a1, v18, v29) )
          return v15;
      }
    }
    v30 = *(_BYTE *)((*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, v18) + 84);
    if ( ((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) + 84) ^ v30) & 0x80u) != 0 )
      return v15;
    if ( *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4) + 84) >= 0 )
    {
LABEL_41:
      if ( (unsigned __int8)sub_77E5E0(v4) || (unsigned __int8)sub_77E5E0(v5) )
      {
        v31 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
          v31 = *(_QWORD *)(v31 + 8);
        v32 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
          v32 = *(_QWORD *)(v32 + 8);
        if ( !v32 )
          return v15;
        v33 = sub_79CC40(v31);
        if ( v33 != sub_79CC40(v32) )
          return v15;
      }
      v34 = *(_QWORD *)(v4 + 56);
      v35 = *(_QWORD *)(v5 + 56);
      v36 = (v34 >> 2) & 1;
      if ( (v35 & 4) != 0 )
      {
        v37 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        if ( (_BYTE)v36 )
        {
          v38 = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          if ( (v38 == 0) != (v37 == 0) || v38 && !(unsigned __int8)sub_6A7280((__int64)a1, v38, v37) )
            return v15;
        }
        else if ( v37 )
        {
          return v15;
        }
      }
      else if ( (_BYTE)v36 && *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
      {
        return v15;
      }
      v39 = sub_6A7B60(v4);
      v40 = (__int64 *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
      v41 = sub_6A7B60(v5);
      v42 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | v39 & 7) == (*(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL]
                                                                        | v41 & 7) )
      {
        v63 = sub_78CBC0(v4);
        if ( v63 != (unsigned __int8)sub_78CBC0(v5) )
          return v15;
        return sub_6A88E0(v4, v5);
      }
      else
      {
        v43 = *v40;
        if ( *(_BYTE *)(*v40 + 16) != 26 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          {
            v62 = sub_B0D320(*v40);
            v42 = v41 & 0xFFFFFFFFFFFFFFF0LL;
            v43 = v62;
          }
          else
          {
            v43 = 0;
          }
        }
        v44 = *(_QWORD *)v42;
        if ( *(_BYTE *)(*(_QWORD *)v42 + 16LL) != 26 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
            return v15;
          v44 = sub_B0D320(v44);
        }
        if ( (*(_BYTE *)(a1[270] + 1LL) & 0x40) == 0
          || !v43
          || !v44
          || ((*(_WORD *)(v43 + 22) >> 6) & 0xFu) - 9 > 1 && ((*(_WORD *)(v44 + 22) >> 6) & 0xFu) - 9 > 1 )
        {
          return v15;
        }
        return sub_6DC9E0((__int64)a1, v39, v41);
      }
    }
    if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
      goto LABEL_97;
    v48 = sub_79A2B0(v4);
    v49 = *(_QWORD **)v48;
    v50 = *(_QWORD *)v48 + 8LL * *(unsigned int *)(v48 + 8);
    if ( (unsigned __int64)v49 >= v50 )
    {
      if ( v49 == (_QWORD *)v50 )
        goto LABEL_97;
      while ( *(_WORD *)(*(_QWORD *)v50 + 32LL) != 367 )
      {
        v50 += 8LL;
        if ( v49 == (_QWORD *)v50 )
          goto LABEL_97;
      }
      v51 = v49;
    }
    else
    {
      v51 = v49;
      while ( *(_WORD *)(*v51 + 32LL) != 367 )
      {
        if ( (_QWORD *)v50 == ++v51 )
          goto LABEL_97;
      }
    }
    if ( v51 != (_QWORD *)v50 )
    {
      v52 = *v49;
      if ( *(_WORD *)(*v49 + 32LL) != 367 )
      {
        v53 = v49 + 1;
        do
          v52 = *v53++;
        while ( *(_WORD *)(v52 + 32) != 367 );
      }
LABEL_82:
      if ( (*(_BYTE *)(v5 + 29) & 1) == 0 )
        goto LABEL_155;
      v54 = sub_79A2B0(v5);
      v55 = *(_QWORD **)v54;
      v56 = *(_QWORD *)v54 + 8LL * *(unsigned int *)(v54 + 8);
      if ( (unsigned __int64)v55 >= v56 )
      {
        if ( v55 == (_QWORD *)v56 )
          goto LABEL_155;
        while ( *(_WORD *)(*(_QWORD *)v56 + 32LL) != 367 )
        {
          v56 += 8LL;
          if ( v55 == (_QWORD *)v56 )
            goto LABEL_155;
        }
        v57 = v55;
      }
      else
      {
        v57 = v55;
        while ( *(_WORD *)(*v57 + 32LL) != 367 )
        {
          if ( (_QWORD *)v56 == ++v57 )
            goto LABEL_155;
        }
      }
      if ( v57 != (_QWORD *)v56 )
      {
        v58 = *v55;
        if ( *(_WORD *)(*v55 + 32LL) != 367 )
        {
          v59 = v55 + 1;
          do
            v58 = *v59++;
          while ( *(_WORD *)(v58 + 32) != 367 );
        }
        if ( *(_DWORD *)(v52 + 36) != (unsigned __int64)*(unsigned int *)(v58 + 36)
          || *(_DWORD *)(v52 + 36)
          && memcmp(*(const void **)(v52 + 40), *(const void **)(v58 + 40), *(unsigned int *)(v52 + 36)) )
        {
          return v15;
        }
        goto LABEL_41;
      }
LABEL_155:
      BUG();
    }
LABEL_97:
    v52 = 0;
    goto LABEL_82;
  }
  if ( (unsigned int)(v17 - 38) <= 6 )
  {
    v45 = sub_78CBC0(v4);
    if ( v45 != (unsigned __int8)sub_78CBC0(v5) )
      return 0;
    if ( (*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF8LL) > 0xF
      && (*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF8LL) > 0xF
      && (*(_QWORD *)&byte_8[*(_QWORD *)(v4 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v4 + 48) & 7LL) != (*(_QWORD *)&byte_8[*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v5 + 48) & 7LL) )
    {
      v46 = sub_6D9A50(a1, *(_QWORD *)(v4 + 48));
      v47 = sub_6D9A50(a1, *(_QWORD *)(v5 + 48));
      if ( !v46
        || !v47
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
      {
        return 0;
      }
      v23 = *(_QWORD *)(v47 + 32);
      v21 = *(_QWORD *)(v46 + 32);
LABEL_72:
      v25 = v23 & 0xFFFFFFFFFFFFFFF0LL;
      v24 = v21 & 0xFFFFFFFFFFFFFFF0LL;
      return (*(_QWORD *)(v24 + 8) | v21 & 7) == (*(_QWORD *)(v25 + 8) | v23 & 7);
    }
    return 1;
  }
  if ( (_BYTE)v18 == 22 )
    return ((*(_BYTE *)(v5 + 57) & 0x20) != 0) == ((*(_BYTE *)(v4 + 57) & 0x20) != 0);
  if ( (unsigned int)(v17 - 66) > 6 )
  {
    if ( (unsigned int)(v17 - 47) <= 2 )
    {
      v23 = *(_QWORD *)(v5 + 48);
      v21 = *(_QWORD *)(v4 + 48);
      goto LABEL_72;
    }
    if ( (_BYTE)v18 == 30 )
    {
      v64 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 8LL * *(unsigned int *)(v4 + 64) - 8);
      v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
      v66 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL * *(unsigned int *)(v5 + 64) - 8);
      return v65 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 32LL))(v66);
    }
    if ( (_BYTE)v18 == 31 )
      return 1;
    if ( (unsigned int)(v17 - 51) <= 1 )
    {
      v67 = *(_QWORD *)(v4 + 64);
      v68 = *(_QWORD *)(v5 + 64);
      if ( !v67 )
        return 0;
LABEL_136:
      if ( !v68 )
        return 0;
      if ( v67 != v68 )
        return sub_6A7250(v67, v68);
      return 1;
    }
    switch ( (_BYTE)v18 )
    {
      case 0x4E:
        if ( !sub_6A7C80(*(_QWORD *)(v4 + 64), *(_QWORD *)(v5 + 64))
          || ((*(__int64 *)(v5 + 48) >> 2) & 1) != ((*(__int64 *)(v4 + 48) >> 2) & 1) )
        {
          return 0;
        }
        break;
      case 0x1A:
        if ( !sub_6A7C80(*(_QWORD *)(v4 + 64), *(_QWORD *)(v5 + 64)) )
          return 0;
        break;
      case 0x3D:
        return sub_6A7C80(*(_QWORD *)(v4 + 72), *(_QWORD *)(v5 + 72));
      case 0x35:
        v67 = *(_QWORD *)(v4 + 48);
        v68 = *(_QWORD *)(v5 + 48);
        if ( !v67 )
          return 0;
        goto LABEL_136;
      case 0x4B:
        do
          v4 = *(_QWORD *)(v4 + 88);
        while ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x4B );
        do
          v5 = *(_QWORD *)(v5 + 88);
        while ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x4B );
        v69 = sub_79CC40(v4 + 48);
        return v69 == sub_79CC40(v5 + 48);
      default:
        return 0;
    }
    return (*(_DWORD *)(v5 + 56) == 0) == (*(_DWORD *)(v4 + 56) == 0);
  }
  if ( (_BYTE)v18 == 71 )
  {
    v60 = *(_QWORD *)(v4 + 64);
    v61 = *(_QWORD *)(v5 + 64);
    if ( (v60 == 0) != (v61 == 0) || v60 && !(unsigned __int8)sub_6A7280((__int64)a1, v60, v61) )
      return 0;
  }
  if ( !(unsigned __int8)sub_6DCB20(a1, *(_QWORD *)(v4 + 48), *(_QWORD *)(v5 + 48)) )
    return 0;
  return sub_6DD6E0(a1, *(_QWORD *)(v4 + 56), *(_QWORD *)(v5 + 56));
}

