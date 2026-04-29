__int64 __fastcall sub_55F90(__int64 a1, __int64 a2, int a3, char a4)
{
  _DWORD *exception; // rax
  __int64 v5; // rbx
  __int64 v8; // r13
  char v9; // al
  char v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  unsigned __int16 v15; // r10
  char v16; // al
  unsigned __int16 v17; // r13
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int16 v20; // r10
  char v21; // al
  __int64 v22; // rax
  unsigned __int16 v23; // r10
  unsigned __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v30; // al
  unsigned __int16 v31; // r10
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  char fixups; // al
  int v39; // eax
  int dword; // eax
  char v41; // al
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned int v48; // r12d
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // r12
  unsigned __int64 v52; // rbx
  __int64 v53; // r12
  unsigned __int64 v54; // rsi
  __int64 v55; // rbx
  unsigned __int64 k; // r15
  char v57; // al
  char v58; // al
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // r13
  unsigned __int64 j; // rbx
  unsigned __int64 v63; // r9
  __int64 v64; // rsi
  unsigned __int64 i; // rbx
  unsigned __int64 v67; // r9
  __int64 v68; // rsi
  unsigned __int16 v69; // [rsp+0h] [rbp-A8h]
  char v70; // [rsp+0h] [rbp-A8h]
  unsigned __int16 v71; // [rsp+0h] [rbp-A8h]
  int v72; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v73; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+0h] [rbp-A8h]
  __int64 v75; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+8h] [rbp-A0h]
  bool v77; // [rsp+8h] [rbp-A0h]
  __int64 v78; // [rsp+10h] [rbp-98h]
  unsigned __int16 v79; // [rsp+18h] [rbp-90h]
  unsigned __int64 v80; // [rsp+18h] [rbp-90h]
  __int64 v81; // [rsp+18h] [rbp-90h]
  unsigned __int64 v82; // [rsp+20h] [rbp-88h]
  __int64 v83; // [rsp+28h] [rbp-80h]
  __int64 v84; // [rsp+30h] [rbp-78h]
  unsigned __int64 v85; // [rsp+38h] [rbp-70h]
  unsigned __int64 v86; // [rsp+40h] [rbp-68h]
  unsigned __int64 v87; // [rsp+40h] [rbp-68h]
  __int16 word; // [rsp+48h] [rbp-60h]
  unsigned __int16 v89; // [rsp+48h] [rbp-60h]
  unsigned __int16 v90; // [rsp+48h] [rbp-60h]
  __int16 v91; // [rsp+48h] [rbp-60h]
  unsigned __int16 v92; // [rsp+48h] [rbp-60h]
  unsigned __int16 v93; // [rsp+48h] [rbp-60h]
  unsigned __int16 v94; // [rsp+48h] [rbp-60h]
  unsigned __int16 v95; // [rsp+48h] [rbp-60h]
  unsigned __int64 v96; // [rsp+50h] [rbp-58h]
  unsigned __int64 v97; // [rsp+58h] [rbp-50h] BYREF
  char v98; // [rsp+67h] [rbp-41h]
  unsigned __int64 v99; // [rsp+68h] [rbp-40h]

  v97 = a2;
  v99 = __readfsqword(0x28u);
  if ( a3 > 1023 )
  {
    exception = __cxa_allocate_exception(4u);
    *exception = 777;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
  }
  v5 = a2;
  v8 = getseg();
  if ( !v8 )
    return 0;
  v9 = netnode_charval();
  v10 = v9;
  if ( (v9 & 8) != 0 )
  {
    if ( !a4 )
      return 1;
  }
  else if ( (v9 & 4) != 0 || !a4 && (v9 & 2) != 0 )
  {
    return 0;
  }
  v98 = v9 | 4;
  netnode_supset();
  show_auto();
  v11 = *(_QWORD *)(v8 + 8);
  if ( v11 < a2 + 8 || *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
    return 0;
  word = get_word();
  v12 = get_word();
  if ( !v12 )
    return 0;
  v13 = word & 0x14FF;
  if ( (word & 0x14FF) == 0x10 )
    goto LABEL_73;
  if ( (word & 0x14FFu) <= 0x10 )
  {
    if ( v13 != 1 )
    {
      if ( v13 != 3 || v11 < a2 + 33 )
        return 0;
      v89 = v12;
      v14 = sub_51C60(a1, a2 + 8, 0, 1u, 0);
      v15 = v89;
      if ( v14 == -1 )
      {
        if ( *(_BYTE *)(a1 + 5504) )
        {
          fixups = get_fixups();
          v15 = v89;
          if ( fixups )
            return 0;
        }
        v94 = v15;
        v39 = getinf();
        v15 = v94;
        if ( v39 == 11 )
        {
          dword = get_dword();
          v15 = v94;
          if ( (unsigned int)(dword - 4096) <= 0xFFFFEFFE )
            return 0;
        }
      }
      else if ( a3 && v14 )
      {
        sub_55F90(a1, v14, (unsigned int)(a3 + 1), 0);
        v15 = v89;
      }
      if ( *(_BYTE *)(a1 + 5504) )
      {
        v90 = v15;
        v16 = get_fixups();
        v15 = v90;
        if ( v16 )
          return 0;
      }
      v69 = v15;
      v91 = get_dword();
      v17 = get_word();
      v18 = get_word();
      if ( v69 >= v17 )
        return 0;
      if ( v17 >= v18 )
        return 0;
      v75 = v18 + a2;
      if ( v11 < v75 + (-(__int64)((v91 & 2) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8 )
        return 0;
      v19 = sub_51C60(a1, a2 + 20, 0, 1u, 0);
      if ( v19 == -1 )
        return 0;
      v20 = v69;
      if ( v19 )
      {
        v21 = get_word();
        v20 = v69;
        if ( (v21 & 4) != 0 )
        {
          if ( (v21 & 7) != 5 )
            return 0;
        }
        else if ( (v21 & 7) == 0 )
        {
          return 0;
        }
      }
      v79 = v20;
      v70 = get_word();
      v22 = sub_51C60(a1, a2 + 28, 0, 1u, 0);
      if ( v22 == -1 )
        return 0;
      v23 = v79;
      if ( v22 )
      {
        if ( (v70 & 4) != 0 )
        {
          if ( (v70 & 7) != 5 )
            return 0;
        }
        else if ( (v70 & 7) == 0 )
        {
          return 0;
        }
      }
      v24 = a2 + 32;
      if ( (v91 & 2) != 0 )
      {
        if ( *(_BYTE *)(a1 + 5504) )
        {
          v25 = get_fixups();
          v23 = v79;
          if ( v25 )
            return 0;
        }
        v71 = v23;
        v26 = sub_51C60(a1, a2 + 40, 0, 1u, 0);
        v23 = v71;
        if ( v26 == -1 )
          return 0;
        v27 = a2 + 44;
        v28 = 20;
        if ( (v91 & 0x2000) == 0 )
          v28 = 4;
        if ( *(_BYTE *)(a1 + 5504) )
        {
          v81 = v28;
          v57 = get_fixups();
          v27 = a2 + 44;
          v28 = v81;
          v23 = v71;
          if ( v57 )
            return 0;
        }
        v24 = v28 + v27;
      }
      else if ( (v91 & 0x2000) != 0 )
      {
        if ( *(_BYTE *)(a1 + 5504) )
        {
          v58 = get_fixups();
          v23 = v79;
          if ( v58 )
            return 0;
        }
        v24 = a2 + 48;
      }
      if ( a2 + v23 != v24 )
        goto LABEL_40;
      v42 = v17;
      v73 = v24;
      v43 = v17 + a2;
      v84 = v42;
      v44 = sub_50FF0(v24, v43, 0);
      v83 = v44;
      if ( !v44 )
        return 0;
      v45 = v73 + v44;
      v46 = (v73 + v44 + 3) & 0xFFFFFFFFFFFFFFFCLL;
      v47 = v43 - v46;
      v85 = v43 - v46;
      if ( v43 == v46 )
      {
        v43 = v46;
LABEL_102:
        v74 = v75 - v43;
        if ( (v91 & 0xC) != 0 )
        {
          if ( (v91 & 4) != 0 )
          {
            for ( i = v74; ; i -= 12LL )
            {
              v67 = v75 - i;
              v80 = v74 - i;
              if ( i <= 3 )
                break;
              v87 = v75 - i;
              v68 = sub_51C60(a1, v75 - i, 0, 1u, 0);
              if ( v68 == -1 )
                return 0;
              if ( i - 4 <= 7 || !v68 )
              {
                v80 += 4LL;
                v5 = a2;
                v43 = v87 + 4;
                goto LABEL_188;
              }
              if ( a3 )
                sub_55F90(a1, v68, (unsigned int)(a3 + 1), 0);
            }
            v5 = a2;
            v43 = v67;
LABEL_188:
            v74 = v75 - v43;
          }
          else
          {
            v80 = 0;
          }
          if ( (v91 & 8) != 0 )
          {
            v60 = v43 + v74;
            v61 = v5;
            v86 = v60;
            for ( j = v74; ; j -= 12LL )
            {
              v63 = v86 - j;
              v82 = v74 - j;
              if ( j <= 3 )
                break;
              v96 = v86 - j;
              v64 = sub_51C60(a1, v86 - j, 0, 1u, 0);
              if ( v64 == -1 )
                return 0;
              if ( j - 4 <= 7 || !v64 )
              {
                v5 = v61;
                v82 += 4LL;
                v43 = v96 + 4;
                goto LABEL_107;
              }
              if ( a3 )
                sub_55F90(a1, v64, (unsigned int)(a3 + 1), 0);
            }
            v5 = v61;
            v43 = v63;
          }
          else
          {
            v82 = 0;
          }
LABEL_107:
          v74 = v75 - v43;
        }
        else
        {
          v82 = 0;
          v80 = 0;
        }
        if ( v74 )
        {
          if ( (v74 & 3) != 0 || *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
            return 0;
          if ( v74 > 0xC )
            goto LABEL_40;
          v43 += v74;
        }
        if ( (v91 & 2) == 0 )
        {
LABEL_114:
          v78 = v5;
          v77 = a3 != 0;
          v48 = a3 + 1;
          while ( 1 )
          {
            v49 = sub_51C60(a1, v43, 0, 1u, 0);
            v50 = v49;
            if ( v49 == -1 )
              break;
            if ( !v49 && !(unsigned int)get_dword() )
            {
              *(_QWORD *)(a1 + 5480) = 25;
              sub_529D0(a1, v78, v43 - v78, v10 | 8, 0);
              v51 = v78 + v84;
              sub_558D0(a1, &v97, v83, v91);
              if ( v97 != v78 + v84 )
              {
                if ( v85 )
                  create_data();
                else
                  create_align();
                v97 = v78 + v84;
              }
              if ( (v91 & 0xC) != 0 )
              {
                if ( (v91 & 4) != 0 && (v52 = v80, v80 > 3) )
                {
                  do
                  {
                    if ( (get_flags_ex() & 0x800) == 0 )
                      set_cmt();
                    sub_51CE0(a1, (__int64 *)&v97, 0);
                    v53 = v97;
                    if ( v52 <= 0xB )
                      break;
                    create_data();
                    v53 += 8;
                    v52 -= 12LL;
                    v97 = v53;
                  }
                  while ( v52 > 3 );
                  v55 = v53;
                }
                else
                {
                  v55 = v97;
                }
                v51 = v55;
                if ( (v91 & 8) != 0 )
                {
                  for ( k = v82; k > 3; v97 = v51 )
                  {
                    if ( (get_flags_ex() & 0x800) == 0 )
                      set_cmt();
                    sub_51CE0(a1, (__int64 *)&v97, 0);
                    v51 = v97;
                    if ( k <= 0xB )
                      break;
                    create_data();
                    v51 += 8;
                    k -= 12LL;
                  }
                }
              }
              if ( v74 )
              {
                create_data();
                num_flag();
                set_op_type();
              }
              v54 = v51 + v74;
              v97 = v51 + v74;
              if ( (v91 & 2) != 0 )
              {
                sub_51CE0(a1, (__int64 *)&v97, 0);
                v54 = v97;
              }
              if ( v54 < v43 )
                sub_52E40(a1);
              create_data();
              if ( (get_flags_ex() & 0x800) == 0 )
                set_cmt();
              return 1;
            }
            if ( v11 < v43 + 12 || *(_BYTE *)(a1 + 5504) && (unsigned __int8)get_fixups() )
              return 0;
            if ( v50 && v77 )
              sub_55F90(a1, v50, v48, 0);
            v43 += 8LL;
          }
          return 0;
        }
        v59 = sub_51C60(a1, v43, 0, 1u, 0);
        if ( v59 != -1 )
        {
          if ( a3 && v59 )
            sub_55F90(a1, v59, (unsigned int)(a3 + 1), 0);
          v43 += 4LL;
          goto LABEL_114;
        }
        return 0;
      }
      *(_BYTE *)(a1 + 5633) = 1;
      if ( v47 <= 3 || (v47 & 0x80000000) != 0LL && v43 >= v45 )
        goto LABEL_102;
LABEL_40:
      if ( *(_BYTE *)(a1 + 5488) )
        sub_3FE90((__int64)"This file contains unusual type of RTTI descriptor");
      return 0;
    }
    goto LABEL_50;
  }
  if ( v13 == 160 )
  {
LABEL_73:
    if ( v11 < a2 + 13 )
      return 0;
    v72 = 5;
    v76 = 5;
    goto LABEL_52;
  }
  if ( v13 <= 0xA0u )
  {
    if ( v13 != 32 && v13 != 144 )
      return 0;
    goto LABEL_73;
  }
  if ( v13 != 1024 )
    return 0;
LABEL_50:
  if ( v11 < a2 + 16 )
    return 0;
  v72 = 8;
  v76 = 8;
LABEL_52:
  if ( (word & 1) != 0 )
  {
    if ( *(_BYTE *)(a1 + 5504) )
    {
      v92 = v12;
      v30 = get_fixups();
      v12 = v92;
      if ( v30 )
        return 0;
    }
    v93 = v12;
    if ( (unsigned int)get_dword() != -1 )
      return 0;
  }
  else
  {
    v93 = v12;
    v37 = sub_51C60(a1, a2 + 8, 0, 0, 0);
    if ( v37 == -1 )
      return 0;
    v31 = v93;
    if ( !a3 || !v37 )
      goto LABEL_57;
    sub_55F90(a1, v37, (unsigned int)(a3 + 1), 0);
  }
  v31 = v93;
LABEL_57:
  v32 = a2 + 12;
  if ( v72 == 8 )
  {
    if ( *(_BYTE *)(a1 + 5504) )
    {
      v95 = v31;
      v41 = get_fixups();
      v31 = v95;
      if ( v41 )
        return 0;
    }
    v32 = a2 + 16;
  }
  if ( a2 + v31 != v32 )
    goto LABEL_40;
  v33 = sub_50FF0(v32, v11, 0);
  v34 = v33;
  if ( !v33 )
    return 0;
  v35 = v33 + v32;
  if ( !*(_BYTE *)(a1 + 5633) )
  {
    v36 = (v35 + 3) & 0xFFFFFFFFFFFFFFFCLL;
    if ( v35 < v36 )
    {
      while ( !(unsigned __int8)netnode_charval() )
      {
        if ( v36 == ++v35 )
          goto LABEL_66;
      }
      *(_BYTE *)(a1 + 5633) = 1;
    }
  }
LABEL_66:
  *(_QWORD *)(a1 + 5480) = v76;
  sub_529D0(a1, a2, v35 - a2, v10 | 8, 0);
  if ( v72 != 5 )
  {
    sub_52DB0(a1, &v97, v34);
    goto LABEL_68;
  }
  sub_52D20(a1, &v97, v34);
  if ( !*(_BYTE *)(a1 + 5633) )
  {
LABEL_68:
    if ( v97 != v35 )
      create_align();
  }
  return 1;
}
