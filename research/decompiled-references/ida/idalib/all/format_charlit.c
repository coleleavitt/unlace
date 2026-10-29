__int64 __fastcall format_charlit(__int64 *a1, __int64 *a2, __int64 a3, char a4, int default_encoding_idx)
{
  __int64 encoding_name; // rax
  unsigned __int64 i; // r15
  bool (__fastcall *v10)(__int64); // rax
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  size_t v14; // rax
  size_t v15; // r15
  _BYTE *v16; // rsi
  size_t v17; // rbp
  size_t v18; // r8
  size_t v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // r13d
  unsigned __int64 v22; // rbx
  char v24; // bp
  size_t v25; // rdx
  _BYTE *v26; // rsi
  __int64 v27; // rbx
  size_t v28; // r12
  char *v29; // rax
  char v30; // al
  int v31; // eax
  unsigned __int8 (*v32)(void); // rax
  char v33; // dl
  int v34; // eax
  size_t v35; // r12
  __int64 v36; // rbp
  size_t v37; // r14
  __int64 v38; // rsi
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rbx
  unsigned __int64 v42; // rbp
  _BYTE *v43; // rsi
  __int64 v44; // rax
  __int64 v46; // [rsp+8h] [rbp-108h]
  int v47; // [rsp+14h] [rbp-FCh]
  __int64 v48; // [rsp+18h] [rbp-F8h]
  unsigned int v49; // [rsp+30h] [rbp-E0h]
  size_t v50; // [rsp+30h] [rbp-E0h]
  char v51; // [rsp+3Bh] [rbp-D5h]
  size_t v52; // [rsp+40h] [rbp-D0h]
  unsigned int v53; // [rsp+54h] [rbp-BCh] BYREF
  void *src; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+60h] [rbp-B0h]
  _QWORD v56[4]; // [rsp+78h] [rbp-98h] BYREF
  __int64 (__fastcall **v57)(); // [rsp+98h] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+A0h] [rbp-70h]
  __int64 v59; // [rsp+A8h] [rbp-68h]
  __int64 v60; // [rsp+B0h] [rbp-60h]
  __int64 v61; // [rsp+B8h] [rbp-58h]
  char s[2]; // [rsp+C8h] [rbp-48h] BYREF
  char v63; // [rsp+CAh] [rbp-46h]
  char v64; // [rsp+CBh] [rbp-45h]
  unsigned __int64 v65; // [rsp+D0h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  src = nullptr;
  v55 = 0;
  src = (void *)qvector_reserve(&src, 0, 16, 1);
  v48 = qword_2CCB598;
  v51 = *(_BYTE *)(qword_2CCB598 + 1129);
  if ( !v51 )
  {
    if ( (a4 & 8) != 0 )
    {
      v21 = getinf_flag(2, 2);
      if ( !(_BYTE)v21 )
        goto LABEL_30;
      v51 = 39;
    }
    else
    {
      v51 = 39;
    }
  }
  v58 = 0;
  v60 = a3;
  v61 = 0;
  v46 = *a2;
  v59 = *a2;
  v57 = off_2B3DE50;
  if ( default_encoding_idx <= 0 )
  {
    default_encoding_idx = get_default_encoding_idx(1);
  }
  else if ( (int)get_encoding_bpu((unsigned int)default_encoding_idx) > 1 )
  {
LABEL_73:
    v21 = 0;
    goto LABEL_30;
  }
  encoding_name = get_encoding_name((unsigned int)default_encoding_idx);
  sub_8B7BF0(v56, &v57, encoding_name, 0, 0);
  v47 = 0;
  for ( i = 0; ; i = v58 )
  {
    v10 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v56[0] + 16LL);
    if ( v10 != sub_4C74A0 )
      break;
    if ( *(_QWORD *)(v56[0] + 32LL) >= *(_QWORD *)(v56[0] + 24LL) )
      goto LABEL_34;
LABEL_9:
    v11 = sub_8B7CF0(v56, s, &v53);
    switch ( v11 )
    {
      case 0:
        v20 = v53;
        if ( !v53 )
        {
          if ( v47 )
          {
            do
            {
              v32 = *(unsigned __int8 (**)(void))(*(_QWORD *)v56[0] + 16LL);
              if ( (char *)v32 == (char *)sub_4C74A0 )
              {
                if ( *(_QWORD *)(v56[0] + 32LL) >= *(_QWORD *)(v56[0] + 24LL) )
                  goto LABEL_56;
              }
              else if ( v32() )
              {
                goto LABEL_56;
              }
              v31 = sub_8B7CF0(v56, s, &v53);
            }
            while ( !(v53 | v31) );
          }
LABEL_27:
          v21 = 0;
          *a2 = i + v46;
          goto LABEL_28;
        }
        if ( v53 <= 0x1F )
          goto LABEL_44;
        if ( v53 > 0xFF )
        {
LABEL_24:
          if ( *(char *)(v48 + 1072) >= 0 )
            goto LABEL_25;
          if ( !(unsigned __int8)getinf_flag(2, 2) )
          {
            if ( (a4 & 1) == 0 )
              goto LABEL_27;
            if ( (a4 & 2) != 0 )
            {
LABEL_62:
              v63 = -67;
              *(_WORD *)s = -16401;
              v64 = 0;
              v53 = 65533;
              if ( (unsigned __int8)is_cp_graphical(65533) )
                goto LABEL_16;
              goto LABEL_14;
            }
            qsnprintf((unsigned int)s, 8, (unsigned int)"\\x%02X", v53, v39, v40);
          }
LABEL_56:
          v20 = v53;
          if ( !v53 )
            goto LABEL_16;
          goto LABEL_25;
        }
        v49 = v53;
        v29 = strchr(*(const char **)(v48 + 1136), (char)v53);
        v20 = v49;
        if ( v29 )
        {
LABEL_44:
          v30 = a4 & 1;
          if ( (a4 & 1) == 0 )
            goto LABEL_45;
          if ( (a4 & 2) != 0 )
            goto LABEL_62;
        }
        else
        {
          if ( v49 != 255 )
          {
            if ( v49 > 0x7F )
              goto LABEL_24;
LABEL_25:
            if ( (unsigned __int8)is_cp_graphical(v20) )
              goto LABEL_16;
            break;
          }
          v30 = a4 & 1;
          if ( (a4 & 4) != 0 )
          {
            if ( (a4 & 1) == 0 )
              goto LABEL_27;
            put_utf8_char(s, 255);
            goto LABEL_56;
          }
          if ( (a4 & 1) == 0 )
          {
LABEL_45:
            if ( !v30 )
              goto LABEL_27;
            goto LABEL_25;
          }
          if ( (a4 & 2) != 0 )
            goto LABEL_62;
          v20 = 255;
        }
        qsnprintf((unsigned int)s, 8, (unsigned int)"\\x%02X", v20, v12, v13);
        v20 = v53;
        if ( !v53 )
          goto LABEL_16;
        goto LABEL_25;
      case 2:
        v53 = (unsigned __int8)s[0];
        break;
      case 1:
        v53 = *(unsigned __int8 *)(v46 + i);
        break;
    }
    if ( (a4 & 1) == 0 )
      goto LABEL_27;
LABEL_14:
    if ( (a4 & 2) != 0 )
    {
      v63 = -67;
      *(_WORD *)s = -16401;
      v64 = 0;
      v53 = 65533;
    }
    else
    {
      qsnprintf((unsigned int)s, 8, (unsigned int)"\\x%02X", v53, v12, v13);
    }
LABEL_16:
    ++v47;
    v14 = strlen(s);
    v15 = v55;
    v16 = src;
    v17 = v14;
    if ( (_QWORD)v55 )
    {
      v15 = v55 - 1;
      v18 = v14 + v55 - 1;
      v19 = v14 + v55;
      if ( *((_QWORD *)&v55 + 1) >= v14 + (unsigned __int64)v55 )
        goto LABEL_18;
    }
    else
    {
      v19 = v14 + 1;
      if ( *((_QWORD *)&v55 + 1) >= v14 + 1 )
      {
        *(_QWORD *)&v55 = v14 + 1;
        *((_BYTE *)src + v14) = 0;
        goto LABEL_20;
      }
      v18 = v14;
    }
    v52 = v18;
    v50 = v19;
    src = (void *)qvector_reserve(&src, src, v19, 1);
    v18 = v52;
    v16 = src;
    v19 = v50;
LABEL_18:
    *(_QWORD *)&v55 = v19;
    v16[v18] = 0;
    if ( v15 )
      memmove((char *)src + v17, src, v15);
LABEL_20:
    memmove(src, s, v17);
  }
  if ( !((unsigned __int8 (*)(void))v10)() )
    goto LABEL_9;
LABEL_34:
  *a2 = i + v46;
  if ( (a4 & 8) == 0 )
    goto LABEL_42;
  if ( i <= 1 )
    goto LABEL_36;
  v33 = getinf_flag(2, 2);
  v34 = *(_DWORD *)(v48 + 1072);
  if ( !v33 && (v34 & 0x20) != 0 )
    goto LABEL_73;
  v24 = 34;
  if ( (v34 & 8) == 0 )
LABEL_36:
    v24 = v51;
  v25 = v55;
  v26 = src;
  if ( !(_QWORD)v55 )
  {
    if ( *((_QWORD *)&v55 + 1) > 1u )
    {
      *(_QWORD *)&v55 = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_41;
    }
    v28 = 0;
    v27 = 2;
LABEL_94:
    src = (void *)qvector_reserve(&src, src, v27, 1);
    v26 = src;
    v25 = v28 + 1;
    goto LABEL_39;
  }
  v27 = v55 + 1;
  v28 = v55 - 1;
  if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
    goto LABEL_94;
LABEL_39:
  *(_QWORD *)&v55 = v27;
  v26[v25] = 0;
  if ( v28 )
    memmove((char *)src + 1, src, v28);
LABEL_41:
  *(_BYTE *)src = v24;
  if ( (*(_BYTE *)(v48 + 1072) & 0x10) == 0 )
  {
    v41 = v55;
    v42 = 2;
    if ( (_QWORD)v55 )
    {
      v42 = v55 + 1;
      v41 = v55 - 1;
    }
    v43 = src;
    if ( *((_QWORD *)&v55 + 1) < v42 )
    {
      src = (void *)qvector_reserve(&src, src, v42, 1);
      v43 = src;
    }
    *(_QWORD *)&v55 = v42;
    v43[v41] = v51;
    *((_BYTE *)src + v41 + 1) = 0;
  }
LABEL_42:
  v21 = 1;
LABEL_28:
  if ( a1 )
  {
    v22 = v55;
    if ( (_QWORD)v55 )
    {
      v35 = v55 - 1;
      if ( (_QWORD)v55 != 1 )
      {
        v36 = a1[1];
        v37 = v55 - 1;
        if ( v36 )
        {
          --v36;
          v37 = v35 + v36;
          v22 = v55 + v36;
        }
        v38 = *a1;
        if ( a1[2] < v22 )
        {
          v44 = qvector_reserve(a1, v38, v22, 1);
          *a1 = v44;
          v38 = v44;
        }
        a1[1] = v22;
        *(_BYTE *)(v38 + v37) = 0;
        memcpy((void *)(v36 + *a1), src, v35);
      }
    }
  }
LABEL_30:
  if ( src )
  {
    *(_QWORD *)&v55 = 0;
    qfree(src);
  }
  return v21;
}
