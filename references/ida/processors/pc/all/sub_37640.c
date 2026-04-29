__int64 __fastcall sub_37640(__int64 a1, _WORD *a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rdx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int flags; // eax
  char v11; // bh
  char v12; // dl
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int128 v16; // xmm1
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rax
  __int16 word; // ax
  int dword; // eax
  __int16 v21; // ax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-388h]
  __int64 v27; // [rsp+0h] [rbp-388h]
  unsigned __int64 v28; // [rsp+0h] [rbp-388h]
  int v29; // [rsp+Ch] [rbp-37Ch]
  unsigned __int64 v30; // [rsp+10h] [rbp-378h]
  __int64 v31; // [rsp+18h] [rbp-370h]
  __int64 v32; // [rsp+28h] [rbp-360h] BYREF
  __int64 v33; // [rsp+30h] [rbp-358h] BYREF
  int v34; // [rsp+38h] [rbp-350h]
  __int64 v35; // [rsp+40h] [rbp-348h]
  __int64 v36; // [rsp+48h] [rbp-340h]
  __int64 v37; // [rsp+50h] [rbp-338h]
  __int64 v38; // [rsp+58h] [rbp-330h]
  char v39; // [rsp+60h] [rbp-328h]
  _QWORD v40[46]; // [rsp+70h] [rbp-318h] BYREF
  _BYTE v41[360]; // [rsp+1E0h] [rbp-1A8h] BYREF
  _QWORD v42[8]; // [rsp+348h] [rbp-40h] BYREF

  v42[0] = __readfsqword(0x28u);
  if ( !a2[13] )
    return 0;
  v29 = a3 & 1;
  qmemcpy(v40, a2, 0x168u);
  result = sub_36980(a1, (__int64)v40, a3 & 1);
  if ( (_DWORD)result == -1 )
  {
    v30 = v40[2];
    if ( (unsigned __int8)getinf_flag() && get_first_fcref_to() != -1 && sub_36300() )
      return 100;
    v33 = a1;
    v4 = 0;
    v39 = 0;
    v34 = 0;
    qmemcpy(v41, v40, sizeof(v41));
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    do
    {
      v5 = 0x100000000LL;
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8;
      v32 = *(_QWORD *)&v41[16] + *(unsigned __int16 *)&v41[26];
      if ( v6 )
        v5 = -1;
      if ( *(_QWORD *)&v41[16] + (unsigned __int64)*(unsigned __int16 *)&v41[26] >= v5 )
        break;
      v7 = sub_36CC0(&v33, &v32, (__int64)v41, v4 == 0);
      if ( v7 == 2 )
        break;
      if ( v7 == 3 )
        return 100;
      if ( v7 == 4 || v7 != 1 && (unsigned int)sub_36A60(&v33, (__int64)v41) == 4 )
        return 0;
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_DWORD *)(v8 + 104);
      if ( *(unsigned __int16 *)&v41[24] >= v9
        && *(unsigned __int16 *)&v41[24] < *(int *)(v8 + 108)
        && (*(_BYTE *)(*(_QWORD *)(v8 + 112) + 16LL * (*(unsigned __int16 *)&v41[24] - v9) + 8) & 1) != 0 )
      {
        break;
      }
      flags = get_flags_ex();
      v11 = BYTE1(flags);
      if ( (flags & 0x600) == 0x600 && (flags & 0x10000000) != 0 )
        return 0;
      v26 = flags & 0x600;
      if ( (unsigned __int8)is_planned_proc()
        || (v11 & 0x40) != 0
        || ((v26 - 512) & 0xFFFFFFFFFFFFFC00LL) == 0
        || !(unsigned int)decode_insn() )
      {
        return 0;
      }
      if ( (v11 & 0x10) != 0 )
        break;
      ++v4;
    }
    while ( v4 != 16 );
    v12 = sub_35040(v40[2]);
    v13 = v34;
    if ( v12 )
      v13 = --v34;
    if ( v13 > 2 )
      return 100;
    if ( (_DWORD)v37 )
      return 0;
    if ( (v40[3] & 0x1000000000LL) == 0 )
    {
      word = get_word();
      if ( v30 > 5 && word == -117 )
      {
        dword = get_dword();
        if ( dword == -858993460 )
        {
          if ( (unsigned __int8)get_byte() == 0xCC )
            return 100;
        }
        else if ( dword == -1869574000 && (unsigned __int8)get_byte() == 0x90 )
        {
          return 100;
        }
      }
    }
    v14 = LOWORD(v40[3]);
    if ( LOWORD(v40[3]) != 143 )
    {
LABEL_32:
      if ( (_WORD)v14 == 145 )
      {
        v27 = 3;
        v16 = -1;
        v17 = WORD1(v40[3]) + v30;
        while ( 1 )
        {
          *(_OWORD *)v41 = v16;
          v18 = &v41[40];
          *(_QWORD *)&v41[16] = -1;
          *(_QWORD *)&v41[24] = 0;
          *(_QWORD *)&v41[32] = 0;
          do
          {
            *(_WORD *)v18 = 0;
            v18 += 5;
            *((_WORD *)v18 - 19) = 0;
            *((_WORD *)v18 - 18) = 0;
            *((_DWORD *)v18 - 2) = 0;
            *((_WORD *)v18 - 17) = 0;
            *((_OWORD *)v18 - 2) = 0;
            *(v18 - 2) = 0;
          }
          while ( v18 != v42 );
          if ( !(unsigned int)decode_insn() )
            break;
          if ( *(_WORD *)&v41[24] == 143 )
            return 51;
          v16 = -1;
          if ( *(_WORD *)&v41[24] > 0x8Fu )
          {
            if ( (unsigned __int16)(*(_WORD *)&v41[24] - 159) <= 1u )
              break;
          }
          else if ( *(_WORD *)&v41[24] == 134 )
          {
            break;
          }
          v17 += *(unsigned __int16 *)&v41[26];
          if ( !--v27 )
            return 51;
        }
        v14 = LOWORD(v40[3]);
      }
      if ( (unsigned int)(v14 - 159) <= 1 || (unsigned int)(v14 - 736) <= 5 || (unsigned __int8)sub_36460(a1, v40) )
        return 100;
      if ( (unsigned int)getinf() == 11 && v30 > 5 )
      {
        v15 = get_dword();
        if ( v15 == -858993460 )
        {
          if ( (unsigned __int8)get_byte() != 0xCC )
            return 0;
        }
        else if ( v15 != -1869574000 || (unsigned __int8)get_byte() != 0x90 )
        {
          return 0;
        }
        if ( !get_fchunk() )
          return 51;
      }
      return 0;
    }
    if ( BYTE1(v40[5]) != 1 )
    {
LABEL_48:
      if ( (getinf() & 0xF) != 1 || BYTE1(v40[5]) != 1 || HIWORD(v40[5]) != 6 )
        goto LABEL_49;
      sub_22580((__int64)v41);
      if ( (int)decode_insn() > 0 )
      {
        if ( *(_WORD *)&v41[24] == 143 )
        {
          if ( v41[41] == 1 && *(_WORD *)&v41[46] == 7 )
            goto LABEL_93;
          goto LABEL_49;
        }
        if ( *(_WORD *)&v41[24] == 122 )
        {
          if ( v41[41] == 1 && *(_WORD *)&v41[46] == 6 && v41[81] == 1 && *(_WORD *)&v41[86] == 1 )
          {
LABEL_93:
            decode_insn();
            goto LABEL_94;
          }
LABEL_49:
          v14 = LOWORD(v40[3]);
          goto LABEL_32;
        }
      }
LABEL_94:
      if ( *(_WORD *)&v41[26] && *(_WORD *)&v41[24] == 16 )
        return 51;
      goto LABEL_49;
    }
    v21 = HIWORD(v40[5]);
    if ( HIWORD(v40[5]) == 5 )
    {
      v25 = &v41[40];
      *(_QWORD *)&v41[24] = 0;
      *(_QWORD *)&v41[32] = 0;
      memset(v41, 255, 24);
      do
      {
        *(_WORD *)v25 = 0;
        v25 += 5;
        *((_WORD *)v25 - 19) = 0;
        *((_WORD *)v25 - 18) = 0;
        *((_DWORD *)v25 - 2) = 0;
        *((_WORD *)v25 - 17) = 0;
        *((_OWORD *)v25 - 2) = 0;
        *(v25 - 2) = 0;
      }
      while ( v42 != v25 );
      if ( (int)decode_insn() > 0 && (unsigned __int8)has_insn_feature() && v41[41] == 1 && *(_WORD *)&v41[46] == 5 )
        return 51;
      if ( BYTE1(v40[5]) != 1 )
        goto LABEL_48;
      v21 = HIWORD(v40[5]);
    }
    if ( v21 == 3 )
    {
      if ( (v40[3] & 0x1000000000LL) != 0 )
      {
        v22 = 3;
        v23 = v30 + WORD1(v40[3]);
        do
        {
          v24 = &v41[40];
          *(_QWORD *)&v41[24] = 0;
          *(_QWORD *)&v41[32] = 0;
          memset(v41, 255, 24);
          do
          {
            *(_WORD *)v24 = 0;
            v24 += 5;
            *((_WORD *)v24 - 19) = 0;
            *((_WORD *)v24 - 18) = 0;
            *((_DWORD *)v24 - 2) = 0;
            *((_WORD *)v24 - 17) = 0;
            *((_OWORD *)v24 - 2) = 0;
            *(v24 - 2) = 0;
          }
          while ( v42 != v24 );
          v31 = v22;
          v28 = v23;
          if ( !(unsigned int)decode_insn() )
            break;
          if ( *(_WORD *)&v41[24] == 122 )
          {
            if ( v41[41] == 1 )
            {
              if ( *(_WORD *)&v41[46] == 3 )
              {
                if ( v41[81] != 1 || *(_WORD *)&v41[86] != 7 )
                  break;
                return 100;
              }
              if ( *(_WORD *)&v41[46] == 7 )
                break;
            }
          }
          else if ( *(_WORD *)&v41[24] != 143 || v41[41] == 1 && *(_WORD *)&v41[46] == 7 )
          {
            break;
          }
          v23 = *(unsigned __int16 *)&v41[26] + v28;
          v22 = v31 - 1;
        }
        while ( v31 != 1 );
      }
      if ( !v29 )
      {
        sub_22580((__int64)v41);
        if ( (int)decode_insn() > 0 && (*(_WORD *)&v41[24] != 16 || (int)decode_insn() > 0 && *(_WORD *)&v41[24] != 86) )
          return 100;
      }
    }
    goto LABEL_48;
  }
  return result;
}
