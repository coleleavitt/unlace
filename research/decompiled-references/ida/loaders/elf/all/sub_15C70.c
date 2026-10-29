unsigned __int64 __fastcall sub_15C70(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // r13
  __int64 (__fastcall **v15)(); // rax
  __int64 (__fastcall *v16)(); // rdx
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // r11
  int v22; // eax
  int v23; // r8d
  __int64 (__fastcall **v24)(); // rbx
  __int64 (__fastcall *v25)(); // rdx
  _QWORD *v26; // rdi
  unsigned __int16 v27; // ax
  int v28; // edx
  __int64 (__fastcall **v30)(); // rcx
  __int64 (__fastcall *v31)(__int64); // rdx
  _QWORD *v32; // rdi
  unsigned __int16 v33; // ax
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 (__fastcall **v38)(); // rax
  __int64 (__fastcall *v39)(); // rdx
  _QWORD *v40; // rdi
  unsigned __int16 v41; // ax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 (__fastcall **v45)(); // rsi
  __int64 (__fastcall **v46)(); // rsi
  __int16 v47; // r13
  __int16 v48; // ax
  __int16 word; // r13
  __int16 v50; // ax
  unsigned __int64 v52; // [rsp+8h] [rbp-80h]
  __int64 v53; // [rsp+8h] [rbp-80h]
  unsigned __int16 v54; // [rsp+8h] [rbp-80h]
  unsigned __int16 v55; // [rsp+8h] [rbp-80h]
  unsigned __int16 v56; // [rsp+8h] [rbp-80h]
  unsigned __int64 v57; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall **v58)(); // [rsp+18h] [rbp-70h]
  unsigned __int16 v59; // [rsp+20h] [rbp-68h]
  unsigned __int64 v60; // [rsp+20h] [rbp-68h]
  int v61; // [rsp+28h] [rbp-60h]
  bool v62; // [rsp+2Fh] [rbp-59h]
  __int64 v63; // [rsp+38h] [rbp-50h] BYREF
  __int64 v64; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-40h]

  v9 = a3;
  v11 = a7;
  v65 = __readfsqword(0x28u);
  if ( a2 > 0x69u )
  {
    if ( a2 <= 0x87u )
    {
      if ( a2 <= 0x85u )
        goto LABEL_47;
      if ( !a6 )
      {
        v61 = 3;
        v12 = 2;
        if ( a2 == 0x87 )
          goto LABEL_36;
        goto LABEL_65;
      }
    }
    else
    {
      if ( a2 != 0x8A )
        goto LABEL_47;
      if ( !a6 )
        goto LABEL_65;
    }
    v61 = 3;
    v13 = 10;
    v14 = a2 == 0x8A;
LABEL_13:
    *(_QWORD *)(a1 + 424) = -1;
    v58 = off_86F40;
    v15 = &off_86F40[v13];
    goto LABEL_14;
  }
  if ( a2 > 0x67u )
  {
    if ( a6 )
    {
LABEL_42:
      v61 = 2;
      v13 = 8;
LABEL_43:
      v14 = a2 == 9 || a2 == 102;
      goto LABEL_13;
    }
    if ( a2 == 105 )
    {
      v61 = 2;
      v12 = 1;
      goto LABEL_36;
    }
LABEL_65:
    *(_QWORD *)(a1 + 424) = a3;
    *(_QWORD *)(a1 + 432) = (int)a7;
    *(_BYTE *)(a1 + 440) = a2;
    *(_BYTE *)(a1 + 441) = 0;
    return v65 - __readfsqword(0x28u);
  }
  if ( a2 == 9 )
  {
    if ( !a6 )
      goto LABEL_65;
    goto LABEL_82;
  }
  if ( a2 > 9u )
  {
    if ( a2 == 102 )
    {
      if ( !a6 )
        goto LABEL_65;
      goto LABEL_42;
    }
LABEL_47:
    if ( a6 )
    {
      *(_QWORD *)(a1 + 424) = -1;
      sub_15080();
      goto LABEL_49;
    }
    goto LABEL_65;
  }
  if ( (unsigned __int8)(a2 - 5) > 1u )
    goto LABEL_47;
  if ( a6 )
  {
LABEL_82:
    v61 = 1;
    v13 = 6;
    goto LABEL_43;
  }
  if ( a2 != 6 )
    goto LABEL_65;
  v61 = 1;
  v12 = 0;
LABEL_36:
  if ( *(_QWORD *)(a1 + 424) == -1 )
  {
    v58 = off_86F40;
    v38 = &off_86F40[2 * v12 + 12];
    v39 = *v38;
    v40 = (_QWORD *)((char *)v38[1] + a1);
    if ( ((unsigned __int8)*v38 & 1) != 0 )
      v39 = *(__int64 (__fastcall **)())((char *)v39 + *v40 - 1);
    v41 = ((__int64 (__fastcall *)(_QWORD *))v39)(v40);
    v19 = a5;
    v20 = v41;
    if ( !a5 )
    {
LABEL_71:
      v42 = *(_QWORD *)(a1 + 8);
      if ( a4 >= *(_QWORD *)(v42 + 312) )
        goto LABEL_83;
      v14 = 0;
      if ( *(_BYTE *)(v42 + 529) == 1 )
      {
        v55 = v20;
        v43 = (_QWORD *)getseg(a4);
        v20 = v55;
        v14 = v11 < 0 || v43 == nullptr;
        if ( !v14 )
        {
          v18 = v43[1] - *v43;
          v36 = v11;
          if ( v11 < v18 )
          {
            v35 = *(_QWORD *)(a1 + 16);
            if ( *(_DWORD *)(v35 + 464) == 8 )
              goto LABEL_63;
LABEL_61:
            v11 = (int)v11;
LABEL_62:
            if ( v11 < 0 )
            {
              LOBYTE(v18) = a4 >= -v11;
              v37 = v36 + a4;
              if ( (_BYTE)v18 )
                goto LABEL_64;
              goto LABEL_67;
            }
LABEL_63:
            LOBYTE(v18) = !__CFADD__(a4, v11);
            v37 = v36 + a4;
            if ( (_BYTE)v18 )
            {
LABEL_64:
              a4 = *(_QWORD *)(v35 + 456) & v37;
              LODWORD(v11) = 0;
              goto LABEL_56;
            }
LABEL_67:
            v54 = v20;
            sub_40E00(v9, v37, v36, v18, v19);
            v35 = *(_QWORD *)(a1 + 16);
            v20 = v54;
            goto LABEL_64;
          }
        }
LABEL_83:
        if ( a2 != 6 && a2 != 105 && a2 != 0x87 )
        {
          v21 = 0;
          v46 = &off_86F40[2 * v61 - 2];
          v31 = (__int64 (__fastcall *)(__int64))*v46;
          v32 = (_QWORD *)((char *)v46[1] + a1);
          goto LABEL_50;
        }
        v21 = 0;
        goto LABEL_87;
      }
LABEL_60:
      v35 = *(_QWORD *)(a1 + 16);
      v36 = v11;
      if ( *(_DWORD *)(v35 + 464) == 8 )
        goto LABEL_62;
      goto LABEL_61;
    }
LABEL_18:
    if ( v11 )
    {
      v21 = 0;
      v14 = 0;
      if ( a2 == 105 || a2 == 0x87 || a2 == 6 )
        goto LABEL_20;
LABEL_49:
      v30 = &v58[2 * v61 - 2];
      v31 = (__int64 (__fastcall *)(__int64))*v30;
      v32 = (_QWORD *)((char *)v30[1] + a1);
LABEL_50:
      if ( ((unsigned __int8)v31 & 1) != 0 )
        v31 = *(__int64 (__fastcall **)(__int64))((char *)v31 + *v32 - 1);
      v53 = v21;
      v33 = v31((__int64)v32);
      v34 = -1610612736;
      if ( *(_BYTE *)(a1 + 390) )
        v34 = 1610612736;
      sub_42050(a1, v9, a4, 0, v11, v33, v53, v34, 0);
      return v65 - __readfsqword(0x28u);
    }
    v59 = v20;
    v62 = a2 == 105 || a2 == 0x87 || a2 == 6;
    v44 = sub_15AF0((_QWORD *)a1, a8);
    v20 = v59;
    if ( v44 != -1 )
    {
      v11 = *(_QWORD *)(a1 + 400);
      a4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & (v44 - v11);
      if ( a5 != 2 )
      {
        v21 = 0;
        v14 = 0;
        if ( !v62 )
        {
          v45 = &off_86F40[2 * v61 - 2];
          v31 = (__int64 (__fastcall *)(__int64))*v45;
          v32 = (_QWORD *)((char *)v45[1] + a1);
          goto LABEL_50;
        }
        goto LABEL_20;
      }
      v21 = *(_QWORD *)(a1 + 424);
      if ( v21 == -1 )
        v21 = v9;
      if ( v61 != 2 )
      {
        if ( v61 == 3 )
        {
          ++v21;
          v14 = 0;
          if ( !v62 )
          {
            v32 = (_QWORD *)a1;
            v31 = sub_14CD0;
            goto LABEL_50;
          }
        }
        else
        {
          v61 = 1;
          v14 = 0;
          if ( !v62 )
          {
            v32 = (_QWORD *)a1;
            v31 = sub_14D30;
            goto LABEL_50;
          }
        }
        goto LABEL_20;
      }
      if ( !v62 )
      {
        v57 = v21;
        word = get_word(v9 + 4);
        v50 = get_word(v9 + 6);
        v21 = v57;
        if ( (word & 0xF800) == 0xF000 && (v50 & 0xF800) == 0x800 )
        {
          v32 = (_QWORD *)a1;
          v31 = sub_14D00;
          v21 = (v9 + 4) & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          v32 = (_QWORD *)a1;
          v31 = sub_14D00;
        }
        goto LABEL_50;
      }
      v60 = v21;
      v56 = v20;
      v47 = get_word(v9);
      v48 = get_word(v9 + 2);
      v20 = v56;
      v21 = v60;
      if ( (v47 & 0xF800) == 0xF000 && (v48 & 0xF800) == 0x800 )
      {
        v14 = 0;
        v21 = v9 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_20;
      }
LABEL_87:
      v14 = 0;
      goto LABEL_20;
    }
    goto LABEL_71;
  }
  v11 = *(_QWORD *)(a1 + 432) + a7;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL) != 8 )
    v11 = (int)v11;
  v58 = off_86F40;
  v14 = *(_BYTE *)(a1 + 440) == 0x8A || *(_BYTE *)(a1 + 440) == 102 || *(_BYTE *)(a1 + 440) == 9;
  v15 = &off_86F40[2 * v12 + 6];
LABEL_14:
  v16 = *v15;
  v17 = (_QWORD *)((char *)v15[1] + a1);
  if ( ((unsigned __int8)*v15 & 1) != 0 )
    v16 = *(__int64 (__fastcall **)())((char *)v16 + *v17 - 1);
  v20 = ((__int64 (__fastcall *)(_QWORD *))v16)(v17);
  if ( !v14 )
  {
    if ( a5 )
      goto LABEL_18;
LABEL_59:
    if ( v14 )
      goto LABEL_60;
    goto LABEL_71;
  }
  if ( !a5 )
    goto LABEL_59;
LABEL_56:
  v21 = 0;
  if ( a2 != 105 && a2 != 6 && a2 != 0x87 )
  {
LABEL_25:
    if ( v14 )
    {
      v23 = a4 + 0x8000;
      LOWORD(v23) = 0;
      if ( (unsigned __int8)sub_54F40(a1, (unsigned int)&v63, (unsigned int)&v64, v9, v23, 0, a8) )
      {
        v24 = &off_86F40[2 * v61 + 10];
        v25 = *v24;
        v26 = (_QWORD *)((char *)v24[1] + a1);
        if ( ((unsigned __int8)*v24 & 1) != 0 )
          v25 = *(__int64 (__fastcall **)())((char *)v25 + *v26 - 1);
        v27 = ((__int64 (__fastcall *)(_QWORD *))v25)(v26);
        v28 = -1610612736;
        if ( *(_BYTE *)(a1 + 390) )
          v28 = 1610612736;
        sub_42050(a1, v9, v64, 0, -*(_DWORD *)(a1 + 400), v27, v63, v28, 0);
      }
      return v65 - __readfsqword(0x28u);
    }
    goto LABEL_49;
  }
LABEL_20:
  v22 = -1610612736;
  if ( *(_BYTE *)(a1 + 390) )
    v22 = 1610612736;
  v52 = v21;
  sub_42050(a1, v9, a4, 0, v11, v20, v21, v22, 0);
  v9 = *(_QWORD *)(a1 + 424);
  if ( v9 != -1 && !*(_BYTE *)(a1 + 441) )
  {
    *(_BYTE *)(a1 + 441) = 1;
    v21 = v52;
    goto LABEL_25;
  }
  return v65 - __readfsqword(0x28u);
}

