__int64 __fastcall sub_56AD90(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, __int64 a5, double a6, double a7)
{
  __int64 v10; // rsi
  char v12; // r14
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  char *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  int v22; // eax
  int v23; // ecx
  char v24; // al
  char v25; // dl
  char v26; // dl
  char v27; // al
  char v28; // si
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  char *v32; // rax
  char v33; // al
  char v34; // al
  int v35; // r13d
  char v37; // al
  char v38; // al
  int v39; // eax
  const char *v40; // rax
  char v41; // al
  __int64 v42; // rdi
  char v43; // al
  char v44; // r9
  char v45; // al
  char v46; // al
  unsigned __int8 v47; // al
  const char *v48; // rsi
  char v49; // [rsp+8h] [rbp-80h]
  char v50; // [rsp+8h] [rbp-80h]
  char v51; // [rsp+8h] [rbp-80h]
  char v52; // [rsp+8h] [rbp-80h]
  int v53; // [rsp+8h] [rbp-80h]
  char v54; // [rsp+8h] [rbp-80h]
  char v55; // [rsp+Ch] [rbp-7Ch]
  int v56; // [rsp+Ch] [rbp-7Ch]
  char v57; // [rsp+10h] [rbp-78h]
  char v58; // [rsp+18h] [rbp-70h]
  int v59; // [rsp+18h] [rbp-70h]
  char v60; // [rsp+1Fh] [rbp-69h]
  char v61; // [rsp+2Fh] [rbp-59h] BYREF
  __int64 v62; // [rsp+30h] [rbp-58h] BYREF
  int v63[2]; // [rsp+38h] [rbp-50h] BYREF
  int v64[2]; // [rsp+40h] [rbp-48h] BYREF
  int v65[2]; // [rsp+48h] [rbp-40h]

  v10 = *a2;
  *(_QWORD *)v65 = __readfsqword(0x28u);
  v62 = v10;
  v12 = *(_BYTE *)v10;
  v13 = *(_BYTE *)v10 & 0xF;
  if ( (unsigned __int8)v13 <= 9u )
  {
    v49 = *(_BYTE *)v10 & 0xF;
    v17 = sub_565B80(v12, (const char *)v10);
    v10 = v62;
    LOBYTE(v13) = v49;
    *(_QWORD *)v63 = v17;
    v14 = v17;
    if ( v17 == -1 )
    {
      *(_QWORD *)v64 = -1;
      if ( a4 )
        goto LABEL_6;
      goto LABEL_29;
    }
    v18 = ++v62;
    if ( v14 == -2 )
      goto LABEL_56;
    if ( *(_BYTE *)(v10 + 1) != 0xFE )
      goto LABEL_14;
    v34 = sub_5383A0((unsigned __int8 **)&v62, nullptr, nullptr);
    LOBYTE(v13) = v49;
    if ( v34 )
      goto LABEL_14;
    goto LABEL_43;
  }
  if ( (_BYTE)v13 != 11 )
  {
    if ( (_BYTE)v13 != 13 )
    {
      if ( (_BYTE)v13 != 10 )
        goto LABEL_5;
      v18 = v10 + 1;
      v62 = v10 + 1;
      v26 = *(_BYTE *)(v10 + 1);
      if ( v26 )
      {
        *(_QWORD *)v63 = -1;
        if ( (~v12 & 0x30) != 0 )
        {
          v64[0] = 0;
          v27 = *(_BYTE *)(v10 + 1);
          v28 = 0;
          if ( v27 != -2 )
            goto LABEL_47;
        }
        else
        {
          if ( v26 != -1 )
          {
            v40 = sub_562E40(&v62, (char *)v63);
            v10 = v62;
            if ( !v40 )
              goto LABEL_5;
            v64[0] = 0;
            if ( *(_BYTE *)v62 == 0xFE )
            {
              v41 = sub_5383A0((unsigned __int8 **)&v62, v64, nullptr);
              v10 = v62;
              if ( !v41 )
                goto LABEL_5;
            }
            goto LABEL_48;
          }
          v62 = v10 + 2;
          if ( (*(_BYTE *)(v10 + 2) & 0xF) != 0xC )
          {
            v10 += 2;
            goto LABEL_5;
          }
          v64[0] = 0;
          v27 = *(_BYTE *)(v10 + 2);
          v28 = 0;
          if ( v27 != -2 )
          {
LABEL_47:
            v29 = sub_565A40(v12, v28, *(_BYTE *)(a1 + 41), (v27 & 0xF) == 12);
            v10 = v62;
            *(_QWORD *)v63 = v29;
            if ( v29 == -1 )
              goto LABEL_5;
LABEL_48:
            ++*(_DWORD *)(a1 + 32);
            v30 = sub_56B9F0(a1, v10);
            --*(_DWORD *)(a1 + 32);
            v62 = v30;
            v10 = v30;
            if ( v30 )
            {
              v14 = *(_QWORD *)v63;
              if ( a3 )
              {
                v31 = 1;
                if ( *(_QWORD *)v63 > 1u )
                {
                  do
                    v31 *= 2LL;
                  while ( v31 < *(_QWORD *)v63 );
                  if ( *(_QWORD *)v63 == 6 && v31 == 8 )
                  {
                    *a3 = 2;
                    *(_QWORD *)v64 = 6;
                    if ( !a4 )
                    {
                      *a2 = v10;
                      v20 = *a3;
                      if ( !(6uLL % *a3) )
                      {
LABEL_25:
                        if ( (v20 & (v20 - 1)) == 0 )
                          return v14;
                        if ( !under_debugger )
                          interr(1133);
LABEL_139:
                        BUG();
                      }
LABEL_135:
                      if ( !under_debugger )
                        interr(1132);
                      goto LABEL_139;
                    }
                    *a4 = 6;
                    v14 = 6;
                    *a2 = v10;
LABEL_23:
                    v20 = *a3;
                    if ( !(v14 % *a3) || !*(_QWORD *)v64 )
                      goto LABEL_25;
                    goto LABEL_135;
                  }
                }
                *a3 = v31;
                *(_QWORD *)v64 = v14;
                if ( a4 )
                  *a4 = v14;
                goto LABEL_18;
              }
              if ( a4 )
              {
                *a4 = *(_QWORD *)v63;
                *a2 = v30;
                return v14;
              }
LABEL_111:
              *a2 = v10;
              return v14;
            }
LABEL_5:
            *(_QWORD *)v63 = -1;
            v14 = -1;
            *(_QWORD *)v64 = -1;
            if ( a4 )
            {
LABEL_6:
              v15 = *(char **)v64;
LABEL_7:
              *a4 = v15;
              goto LABEL_8;
            }
LABEL_29:
            *a2 = v10;
            return -1;
          }
        }
        v33 = sub_5383A0((unsigned __int8 **)&v62, v64, nullptr);
        v10 = v62;
        if ( !v33 )
          goto LABEL_5;
        v27 = *(_BYTE *)v62;
        v28 = v64[0];
        goto LABEL_47;
      }
LABEL_56:
      v10 = v18;
      goto LABEL_5;
    }
    ++v10;
    v61 = 0;
    v21 = v12 & 0x30;
    v62 = v10;
    if ( (v12 & 0x30) == 0x20 )
    {
      v55 = 0;
      v57 = 1;
      v58 = 0;
    }
    else
    {
      if ( v21 > 0x20u )
      {
        if ( v21 != 48 )
          goto LABEL_5;
LABEL_40:
        *(_QWORD *)v63 = sub_56BB60(a1, &v62, a3, v64, a5, v13);
        v14 = *(_QWORD *)v63;
        if ( *(_QWORD *)v63 == -1 && *(_DWORD *)(a1 + 32) )
        {
          *(_BYTE *)(a1 + 40) = 0;
          v10 = v62;
          v14 = 0;
          *(_QWORD *)v63 = 0;
          *(_QWORD *)v64 = 0;
          if ( a4 )
            goto LABEL_6;
          goto LABEL_111;
        }
        if ( *(_BYTE *)(a1 + 40) )
        {
          *(_BYTE *)(a1 + 40) = 0;
          goto LABEL_43;
        }
        goto LABEL_108;
      }
      if ( v21 )
      {
        v55 = 2;
        v58 = 1;
      }
      else
      {
        v55 = 1;
        v58 = 0;
      }
      v57 = 0;
    }
    v22 = sub_6B38E0(&v62, &v61);
    v13 = 13;
    v23 = v22;
    if ( v22 != -1 )
    {
      v24 = *(_BYTE *)(a1 + 40);
      v25 = v55 + 1;
      if ( v24 )
      {
        if ( v24 != v25 )
          goto LABEL_43;
        *(_BYTE *)(a1 + 40) = 0;
      }
      if ( !v23 && !v61 )
      {
        *(_BYTE *)(a1 + 40) = v25;
        goto LABEL_40;
      }
      if ( !v57 )
      {
        *(_QWORD *)v63 = sub_56ABD0(a1, (unsigned __int8 **)&v62, v58, v23, a3, v64, a6, a7);
        v14 = *(_QWORD *)v63;
LABEL_108:
        v10 = v62;
        goto LABEL_65;
      }
      v10 = v62;
      v63[0] = 0;
      *(_QWORD *)v64 = v62;
      v60 = *(_BYTE *)v62;
      if ( *(_BYTE *)v62 == 0xFE )
      {
        v53 = v23;
        v46 = sub_5383A0((unsigned __int8 **)v64, v63, nullptr);
        v10 = *(_QWORD *)v64;
        if ( !v46 )
          goto LABEL_98;
        LOBYTE(v13) = 13;
        v23 = v53;
        v60 = **(_BYTE **)v64;
      }
      if ( v60 < 0 )
      {
        v56 = 0;
        *(_QWORD *)v64 = v10 + 1;
        v59 = v63[0] & 0x20;
        v35 = v23 - 1;
        if ( v23 - 1 < 0 )
        {
LABEL_73:
          if ( (v60 & 7) != 0 )
          {
            v32 = *(char **)v64;
            v14 = 1LL << ((v60 & 7u) - 1);
            v62 = *(_QWORD *)v64;
            *(_QWORD *)v63 = v14;
            if ( !a3 )
            {
              if ( !a4 )
                goto LABEL_76;
              goto LABEL_68;
            }
            goto LABEL_19;
          }
          v54 = v13;
          v47 = getinf(61);
          LOBYTE(v13) = v54;
          v14 = v47;
          *(_QWORD *)v63 = v47;
          v62 = *(_QWORD *)v64;
LABEL_14:
          if ( !a3 )
          {
            *(_QWORD *)v64 = v14;
            v32 = (char *)v62;
            if ( !a4 )
            {
LABEL_76:
              *a2 = (__int64)v32;
              return v14;
            }
LABEL_68:
            *a4 = v14;
            *a2 = (__int64)v32;
            return v14;
          }
          if ( !v14 )
            goto LABEL_16;
LABEL_19:
          v50 = v13;
          if ( !(unsigned __int8)getinf_flag(3, 4) )
          {
            v42 = 57;
            v43 = getinf(57);
            v44 = v50;
            if ( (v43 & 0xF) == 6 || (v42 = 67, v45 = getinf(67), v44 = v50, v45 < 0) )
            {
              if ( v14 == 8 )
              {
                v48 = (const char *)*(unsigned int *)(a1 + 36);
                if ( (_DWORD)v48 && (v44 == 9 || !*(_DWORD *)(get_ph(v42, v48) + 4)) || (v12 & 0x3F) == 0x29 )
                  goto LABEL_16;
                *a3 = 8;
                v10 = v62;
                v15 = &byte_8;
                *(_QWORD *)v64 = 8;
                if ( a4 )
                  goto LABEL_7;
                goto LABEL_22;
              }
              if ( (v12 & 0x3F) == 0x29 )
                goto LABEL_16;
            }
          }
          if ( (v14 & (v14 - 1)) != 0 )
          {
            if ( (v14 & 3) != 0 )
            {
              v19 = 2 - (v14 & 1);
              v15 = (char *)v14;
LABEL_17:
              *a3 = v19;
              v10 = v62;
              *(_QWORD *)v64 = v14;
              if ( a4 )
                goto LABEL_7;
LABEL_18:
              *a2 = v10;
LABEL_9:
              if ( v14 - 1 > 0xFFFFFFFFFFFFFFFDLL )
                return v14;
              goto LABEL_23;
            }
LABEL_16:
            v15 = (char *)v14;
            v19 = 4;
            goto LABEL_17;
          }
          *a3 = v14;
          v10 = v62;
          v15 = (char *)v14;
          *(_QWORD *)v64 = v14;
          if ( a4 )
            goto LABEL_7;
LABEL_22:
          *a2 = v10;
          goto LABEL_23;
        }
        while ( 1 )
        {
          v51 = v13;
          v37 = sub_6B37B0(v64, 0);
          LOBYTE(v13) = v51;
          if ( !v37 )
            break;
          if ( v59 )
          {
            v38 = sub_6B37B0(v64, 0);
            LOBYTE(v13) = v51;
            if ( !v38 )
              break;
          }
          if ( v56 )
          {
            --v56;
          }
          else if ( (v60 & 0x10) != 0 )
          {
            v52 = v13;
            v39 = sub_6B3760(v64);
            if ( v39 == -1 )
              break;
            if ( !v39 )
              v39 = 0;
            LOBYTE(v13) = v52;
            v56 = v39;
          }
          if ( v35-- == 0 )
            goto LABEL_73;
        }
        v10 = *(_QWORD *)v64;
      }
LABEL_98:
      v62 = v10;
      goto LABEL_5;
    }
LABEL_43:
    v10 = v62;
    goto LABEL_5;
  }
  v64[0] = 0;
  v62 = v10 + 1;
  if ( (v12 & 0x10) != 0 )
  {
    v64[0] = sub_6B3760(&v62);
    if ( v64[0] == -1 )
      goto LABEL_43;
  }
  else if ( !(unsigned __int8)sub_568510((char **)&v62, v64, nullptr) )
  {
    goto LABEL_43;
  }
  v10 = v62;
  if ( (unsigned __int8)(*(_BYTE *)v62 ^ v12) > 0x3Fu )
    goto LABEL_5;
  if ( *(_BYTE *)v62 == 0xFE && !(unsigned __int8)sub_5383A0((unsigned __int8 **)&v62, nullptr, nullptr) )
    goto LABEL_43;
  *(_QWORD *)v63 = sub_56AD90(a1, &v62, a3, 0);
  v14 = *(_QWORD *)v63;
  if ( *(_QWORD *)v63 != -1 )
  {
    v14 = (unsigned int)v64[0] * *(_QWORD *)v63;
    *(_QWORD *)v63 = v14;
  }
  *(_QWORD *)v64 = v14;
  v10 = v62;
LABEL_65:
  if ( a4 )
    goto LABEL_6;
LABEL_8:
  *a2 = v10;
  if ( a3 )
    goto LABEL_9;
  return v14;
}
