__int64 __fastcall sub_2F810(
        std::string *this,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        char a6,
        char *s,
        size_t n,
        int a9,
        const char *a10,
        unsigned __int64 a11)
{
  __int64 v11; // rbp
  char v12; // bl
  _BYTE *v13; // rax
  __int64 v14; // r13
  size_t v16; // rax
  __int64 v17; // r14
  __int64 v18; // rsi
  char *v19; // r15
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  char *v23; // rcx
  size_t v24; // rdx
  _BYTE *v25; // rcx
  char v26; // al
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  size_t v32; // rax
  __int64 *v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  _BYTE *v38; // r15
  __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r15
  __int16 v45; // ax
  _BYTE *v46; // r14
  _BYTE *v47; // rax
  char v48; // dl
  __int64 v49; // r15
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v54; // [rsp+0h] [rbp-B8h]
  size_t v57; // [rsp+10h] [rbp-A8h]
  char v59; // [rsp+27h] [rbp-91h]
  char *v60; // [rsp+28h] [rbp-90h]
  __int64 v61; // [rsp+30h] [rbp-88h]
  __int64 v62; // [rsp+40h] [rbp-78h]
  __int64 v63; // [rsp+40h] [rbp-78h]
  _BYTE *v64; // [rsp+40h] [rbp-78h]
  __int64 v65; // [rsp+48h] [rbp-70h]
  size_t v66; // [rsp+48h] [rbp-70h]
  char v67[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v11 = a2;
  v68 = __readfsqword(0x28u);
  v60 = s;
  v57 = n;
  v61 = 0;
  if ( *(_WORD *)(a2 + 16) == 18 )
  {
    if ( (unsigned __int64)sub_BFF0(a2) > 1 )
      v61 = *((_QWORD *)sub_C020((_BYTE *)a2) + 1);
    if ( sub_BFF0(a2) )
      v11 = *(_QWORD *)sub_C020((_BYTE *)a2);
    else
      v11 = 0;
  }
  v12 = 0;
  if ( n )
  {
    v13 = memchr(s, 32, n);
    if ( v13 )
      v12 = v13 - s != -1;
  }
  if ( !a6 )
    goto LABEL_6;
  v27 = sub_BFF0(v11);
  v28 = 0;
  if ( v27 > 1 )
    v28 = *((_QWORD *)sub_C020((_BYTE *)v11) + 1);
  if ( *(_WORD *)(v28 + 16) == 128 )
  {
    v59 = *((_BYTE *)this + 17);
    if ( v59 )
    {
      v12 = *((_BYTE *)this + 17);
      v14 = v11;
      if ( a4 )
        return v14;
      goto LABEL_9;
    }
    v59 = a6;
  }
  else
  {
LABEL_6:
    v59 = 0;
  }
  if ( a4 )
  {
    v14 = v11;
    v12 |= a5 != 0;
    if ( v12 )
      return v14;
  }
LABEL_9:
  v14 = 0;
  if ( sub_BFF0(v11) )
    v14 = *(_QWORD *)sub_C020((_BYTE *)v11);
  if ( !*((_BYTE *)this + 9) )
    goto LABEL_52;
  if ( *(_WORD *)(v14 + 16) != 143 )
    goto LABEL_13;
  v24 = *(_QWORD *)(v14 + 8);
  v25 = *(_BYTE **)v14;
  if ( v24 != 5 )
  {
    if ( v24 != 3 )
      goto LABEL_46;
    if ( *(_WORD *)v25 != 24415 || v25[2] != 67 )
    {
      v52 = *((_QWORD *)this + 4);
      if ( *((_QWORD *)this + 5) == 3 && *(_WORD *)v25 == *(_WORD *)v52 && v25[2] == *(_BYTE *)(v52 + 2) )
        goto LABEL_52;
      goto LABEL_13;
    }
    v26 = *((_BYTE *)this + 26);
LABEL_51:
    if ( v26 )
      goto LABEL_13;
LABEL_52:
    v14 = 0;
    goto LABEL_14;
  }
  if ( *(_DWORD *)v25 == 1718187859 && v25[4] == 116 )
  {
    v26 = *((_BYTE *)this + 25);
    goto LABEL_51;
  }
LABEL_46:
  if ( v24 == *((_QWORD *)this + 5) )
  {
    if ( !v24 )
      goto LABEL_52;
    v66 = *(_QWORD *)(v14 + 8);
    v64 = *(_BYTE **)v14;
    v51 = memcmp(*(const void **)v14, *((const void **)this + 4), v24);
    v25 = v64;
    v24 = v66;
    if ( !v51 )
      goto LABEL_52;
  }
  if ( v24 > 0xB && *(_QWORD *)v25 == 0x655F62646C6C5F5FLL && *((_DWORD *)v25 + 2) == 1601335416 )
  {
    v26 = *((_BYTE *)this + 24);
    goto LABEL_51;
  }
LABEL_13:
  if ( !v12 )
  {
    v62 = *(_QWORD *)(*(_QWORD *)this - 24LL);
    v14 = sub_24010(this);
    v40 = *(_QWORD *)this;
    v41 = *(_QWORD *)(*(_QWORD *)this - 24LL);
    if ( v62 != v41 )
    {
      v42 = v41 + 1;
      if ( (unsigned __int64)(v41 + 1) > *(_QWORD *)(v40 - 16) || *(int *)(v40 - 8) > 0 )
      {
        v65 = *(_QWORD *)(*(_QWORD *)this - 24LL);
        v63 = v41 + 1;
        std::string::reserve(this, v41 + 1);
        v42 = v63;
        v41 = v65;
      }
      *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 46;
      v43 = *(_QWORD *)this;
      if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v43 - 8) = 0;
        *(_QWORD *)(v43 - 24) = v42;
        *(_BYTE *)(v43 + v41 + 1) = 0;
      }
    }
  }
LABEL_14:
  if ( a6 )
  {
    if ( !n || !v12 )
      goto LABEL_28;
  }
  else
  {
    if ( !a11 )
      goto LABEL_16;
    if ( !n || !v12 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)this - 24LL);
      goto LABEL_61;
    }
  }
  std::string::append(this, s, n);
  if ( a9 >= 0 )
  {
    __snprintf_chk(v67, 32, 1, 32, "%lld", a9);
    v16 = strlen(v67);
    std::string::append(this, v67, v16);
  }
  std::string::append(this, " of ", 4u);
  v57 = 0;
  v60 = "";
  a9 = -1;
LABEL_28:
  v17 = *(_QWORD *)(*(_QWORD *)this - 24LL);
  if ( a11 )
  {
LABEL_61:
    std::string::append(this, a10, a11);
    goto LABEL_62;
  }
  v18 = 0;
  if ( (unsigned __int64)sub_BFF0(v11) > 1 )
    v18 = *((_QWORD *)sub_C020((_BYTE *)v11) + 1);
  if ( *(_WORD *)(v18 + 16) != 165 )
    sub_24010(this);
  v19 = (char *)sub_C050(v11);
  v20 = sub_C020((_BYTE *)v11);
  v21 = (v19 - v20) >> 5;
  v22 = (v19 - v20) >> 3;
  if ( v21 > 0 )
  {
    v23 = &v20[32 * v21];
    while ( *(_WORD *)(*(_QWORD *)v20 + 16LL) != 165 )
    {
      if ( *(_WORD *)(*((_QWORD *)v20 + 1) + 16LL) == 165 )
      {
        v19 = v20 + 8;
        goto LABEL_41;
      }
      if ( *(_WORD *)(*((_QWORD *)v20 + 2) + 16LL) == 165 )
      {
        v19 = v20 + 16;
        goto LABEL_41;
      }
      if ( *(_WORD *)(*((_QWORD *)v20 + 3) + 16LL) == 165 )
      {
        v19 = v20 + 24;
        goto LABEL_41;
      }
      v20 += 32;
      if ( v23 == v20 )
      {
        v22 = (v19 - v20) >> 3;
        goto LABEL_119;
      }
    }
    goto LABEL_40;
  }
LABEL_119:
  if ( v22 == 2 )
  {
LABEL_145:
    if ( *(_WORD *)(*(_QWORD *)v20 + 16LL) != 165 )
    {
      v20 += 8;
      goto LABEL_122;
    }
    goto LABEL_40;
  }
  if ( v22 != 3 )
  {
    if ( v22 != 1 )
      goto LABEL_41;
LABEL_122:
    if ( *(_WORD *)(*(_QWORD *)v20 + 16LL) == 165 )
      v19 = v20;
    goto LABEL_41;
  }
  if ( *(_WORD *)(*(_QWORD *)v20 + 16LL) != 165 )
  {
    v20 += 8;
    goto LABEL_145;
  }
LABEL_40:
  v19 = v20;
LABEL_41:
  if ( v19 != (char *)sub_C050(v11) && *(_QWORD *)v19 )
    sub_24010(this);
LABEL_62:
  v29 = *(_QWORD *)this;
  v30 = *(_QWORD *)(*(_QWORD *)this - 24LL);
  if ( v30 == v17 )
  {
LABEL_16:
    if ( !v57 )
      goto LABEL_17;
    goto LABEL_69;
  }
  if ( !v57 )
    goto LABEL_17;
  if ( (unsigned __int64)(v30 + 1) > *(_QWORD *)(v29 - 16) || *(int *)(v29 - 8) > 0 )
    std::string::reserve(this, v30 + 1);
  *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 46;
  v31 = *(_QWORD *)this;
  if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    *(_DWORD *)(v31 - 8) = 0;
    *(_QWORD *)(v31 - 24) = v30 + 1;
    *(_BYTE *)(v31 + v30 + 1) = 0;
  }
LABEL_69:
  std::string::append(this, v60, v57);
  if ( a9 >= 0 )
  {
    __snprintf_chk(v67, 32, 1, 32, "%lld", a9);
    v32 = strlen(v67);
    std::string::append(this, v67, v32);
    if ( !a5 )
      goto LABEL_18;
LABEL_71:
    v33 = (__int64 *)sub_C050(v11);
    v34 = sub_C020((_BYTE *)v11);
    v35 = ((char *)v33 - (char *)v34) >> 5;
    v36 = v33 - v34;
    if ( v35 > 0 )
    {
      v37 = &v34[4 * v35];
      while ( *(_WORD *)(*v34 + 16LL) != 221 )
      {
        if ( *(_WORD *)(v34[1] + 16LL) == 221 )
        {
          v33 = v34 + 1;
          goto LABEL_79;
        }
        if ( *(_WORD *)(v34[2] + 16LL) == 221 )
        {
          v33 = v34 + 2;
          goto LABEL_79;
        }
        if ( *(_WORD *)(v34[3] + 16LL) == 221 )
        {
          v33 = v34 + 3;
          goto LABEL_79;
        }
        v34 += 4;
        if ( v37 == v34 )
        {
          v36 = v33 - v34;
          goto LABEL_131;
        }
      }
      goto LABEL_78;
    }
LABEL_131:
    if ( v36 != 2 )
    {
      if ( v36 != 3 )
      {
        if ( v36 != 1 )
          goto LABEL_79;
        goto LABEL_134;
      }
      if ( *(_WORD *)(*v34 + 16LL) == 221 )
      {
LABEL_78:
        v33 = v34;
        goto LABEL_79;
      }
      ++v34;
    }
    if ( *(_WORD *)(*v34 + 16LL) != 221 )
    {
      ++v34;
LABEL_134:
      if ( *(_WORD *)(*v34 + 16LL) == 221 )
        v33 = v34;
LABEL_79:
      if ( v33 == (__int64 *)sub_C050(v11) || (v38 = (_BYTE *)*v33) == nullptr )
      {
        *((_BYTE *)this + 81) = 0;
        return 0;
      }
      v54 = 0;
      if ( sub_BFF0(*v33) )
        v54 = *(_QWORD *)sub_C020(v38);
      if ( a5 != 2 )
        goto LABEL_84;
      v44 = v54;
      while ( 1 )
      {
        v45 = *(_WORD *)(v44 + 16);
        if ( v45 != 41 )
          break;
        while ( 1 )
        {
          v46 = nullptr;
          if ( (unsigned __int64)sub_BFF0(v44) > 1 )
            v46 = *((_BYTE **)sub_C020((_BYTE *)v44) + 1);
          v44 = 0;
          if ( !sub_BFF0((__int64)v46) )
            break;
          v47 = sub_C020(v46);
          v44 = *(_QWORD *)v47;
          v45 = *(_WORD *)(*(_QWORD *)v47 + 16LL);
          if ( v45 != 41 )
            goto LABEL_107;
        }
      }
LABEL_107:
      v48 = v45 != 234;
      if ( (unsigned __int16)(v45 - 20) <= 0x3Bu )
        v48 &= (__int64)0xF7FFFBFFFFFFFFFELL >> ((unsigned __int8)v45 - 20);
      if ( v45 == 211 || !v48 )
      {
        if ( v12 || sub_23730(v54) )
        {
          v49 = *(_QWORD *)(*(_QWORD *)this - 24LL);
          if ( (unsigned __int64)(v49 + 1) > *(_QWORD *)(*(_QWORD *)this - 16LL) || *(int *)(*(_QWORD *)this - 8LL) > 0 )
            std::string::reserve(this, v49 + 1);
          *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 32;
          v50 = *(_QWORD *)this;
          if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            *(_DWORD *)(v50 - 8) = 0;
            *(_QWORD *)(v50 - 24) = v49 + 1;
            *(_BYTE *)(v50 + v49 + 1) = 0;
          }
        }
      }
      else
      {
LABEL_84:
        if ( !*((_BYTE *)this + 16) )
          goto LABEL_18;
        std::string::append(this, " : ", 3u);
      }
      sub_2F4C0(this, (_BYTE *)v11, v54, v61, a3);
      goto LABEL_18;
    }
    goto LABEL_78;
  }
LABEL_17:
  if ( a5 )
    goto LABEL_71;
LABEL_18:
  if ( a4 != 1 && v14 && (!v59 || *((_BYTE *)this + 17)) )
  {
    v39 = *(_WORD *)(v11 + 16);
    if ( v39 == 330 || v39 == 30 || v39 == 119 || (unsigned __int16)(v39 - 167) <= 1u )
      std::string::append(this, " of ", 4u);
    else
      std::string::append(this, " in ", 4u);
    v14 = 0;
    sub_24010(this);
  }
  return v14;
}

