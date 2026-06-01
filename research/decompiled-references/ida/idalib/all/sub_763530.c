__int64 __fastcall sub_763530(char a1, unsigned int *a2)
{
  char *v3; // rax
  __int64 v4; // rdi
  char *v5; // rcx
  char v6; // r12
  char v7; // dl
  char v9; // r12
  __int64 v10; // rdx
  char *v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  char *v17; // rax
  int v18; // r15d
  __int16 v19; // ax
  unsigned int v20; // eax
  __int16 v21; // dx
  unsigned int *v22; // rsi
  unsigned int *v23; // rdi
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // eax
  __int16 v27; // bp
  char v28; // al
  __int16 v29; // ax
  __int16 v30; // dx
  __int16 v31; // ax
  int v32; // eax
  __int64 v33; // rdx
  char *v34; // rcx
  __int16 v35; // ax
  __int64 v36; // rdx
  const char *v37; // rsi
  __int64 v38; // rdx
  char *v39; // rcx
  char *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rbx
  int v43; // eax
  __int16 v44; // ax
  unsigned __int8 v45; // cl
  const char *v46; // rsi
  int v47; // eax
  _DWORD *v48; // rax
  char *v49; // rax
  _DWORD *v50; // [rsp+8h] [rbp-80h]
  __int16 v51; // [rsp+10h] [rbp-78h]
  unsigned int v52; // [rsp+10h] [rbp-78h]
  unsigned int v53; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned int v54; // [rsp+30h] [rbp-58h] BYREF
  int v55; // [rsp+34h] [rbp-54h] BYREF
  unsigned int v56; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v57; // [rsp+3Ch] [rbp-4Ch] BYREF
  int v58; // [rsp+40h] [rbp-48h] BYREF
  int v59; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v53 = 0;
  v3 = qword_2CD44C0;
  if ( *qword_2CD44C0 == 63 )
  {
    ++qword_2CD44C0;
    if ( v3[1] == 36 )
    {
      v4 = 1;
      qword_2CD44C0 = v3 + 2;
      v53 = sub_765F90(1);
    }
    else
    {
      v4 = 0;
      v53 = sub_764330(0);
    }
  }
  else
  {
    v4 = 0;
    v53 = sub_766190(0);
  }
  if ( !*qword_2CD44C0 )
    return v53;
  v6 = BYTE2(v53) & 2;
  if ( *qword_2CD44C0 == 64 || (v59 = sub_764A40(), !(_WORD)v59) )
  {
    if ( !(_WORD)v53 || (v53 & 0x80000) != 0 )
      return v53;
    if ( v6 )
    {
LABEL_15:
      v9 = 0;
      goto LABEL_16;
    }
    goto LABEL_38;
  }
  if ( !byte_2CCCDAB )
    goto LABEL_8;
  byte_2CCCDAB = 0;
  a2 = (unsigned int *)&v59;
  v4 = (__int64)&v53;
  sub_770B70(&v53, &v59);
  if ( *qword_2CD44C0 != 64 )
  {
    v59 = sub_764A40();
LABEL_8:
    a2 = (unsigned int *)&v59;
    v4 = (__int64)&v53;
    sub_771030(&v53, &v59);
  }
  if ( !v6 )
  {
    if ( !(_WORD)v53 || (v53 & 0x80000) != 0 )
      return v53;
LABEL_38:
    if ( (dword_2CD44CC & 8) == 0 || a1 == -1 )
      goto LABEL_15;
    v9 = a1 & 1;
    if ( (a1 & 1) != 0 )
    {
LABEL_16:
      v10 = (__int64)qword_2CD44C0;
      v11 = ++qword_2CD44C0;
      if ( *(_BYTE *)v10 != 64 )
        goto LABEL_154;
      v54 = 0;
      v5 = (char *)qword_2CD44B8;
      while ( 1 )
      {
        v4 = 0;
        qword_2CD44C0 = v11 + 1;
        v12 = *v11;
        if ( v12 == 95 )
        {
          v4 = 0x4000;
          qword_2CD44C0 = v11 + 2;
          v12 = v11[1];
        }
        v13 = (unsigned int)(v12 - 65);
        if ( (unsigned int)v13 <= 0x19 )
        {
          v10 = (__int64)word_23B8020;
          LOWORD(v4) = word_23B8020[v13] | v4;
          v18 = v4;
          goto LABEL_47;
        }
        v10 = (unsigned int)(v12 - 48);
        if ( (unsigned int)v10 <= 9 )
        {
          v18 = word_23B8000[v10];
          goto LABEL_47;
        }
        if ( (_DWORD)v10 != -12 )
          goto LABEL_154;
        v10 = (__int64)qword_2CD44C0;
        a2 = (unsigned int *)++qword_2CD44C0;
        v14 = *(char *)v10;
        v15 = (unsigned int)(v14 - 48);
        if ( (unsigned int)v15 <= 5 )
        {
          LOWORD(v4) = word_23B7FE8[v15] | v4;
          v18 = v4;
          goto LABEL_47;
        }
        v16 = (unsigned int)(v14 - 65);
        if ( (unsigned int)v16 <= 4 )
          break;
        if ( (_DWORD)v16 != -29 )
          goto LABEL_154;
        if ( *(_BYTE *)(v10 + 1) == 80 )
          a2 = (unsigned int *)(v10 + 2);
        v11 = (char *)a2 + 1;
        qword_2CD44C0 = (char *)a2 + 1;
        v4 = (unsigned int)*(char *)a2;
        v10 = v4;
        if ( (unsigned int)(v4 - 70) > 9 )
          goto LABEL_154;
        if ( (unsigned __int8)(v4 - 74) <= 1u || (unsigned int)v4 > 0x4D )
        {
          v17 = (char *)a2 + 2;
          qword_2CD44C0 = (char *)a2 + 2;
          v10 = (unsigned int)(*((char *)a2 + 1) - 48);
          if ( (unsigned int)v10 > 9 )
            goto LABEL_154;
          a2 = (unsigned int *)(qword_2CD44B8 - (_QWORD)v17);
          if ( (unsigned int)v10 >= (int)qword_2CD44B8 - (int)v17 )
            goto LABEL_154;
          v11 = &v17[(int)v10];
        }
      }
      v10 = (__int64)word_23B7FD8;
      LOWORD(v4) = word_23B7FD8[v16] | v4;
      v18 = v4;
LABEL_47:
      if ( (_WORD)v18 == 0xFFFD )
        goto LABEL_88;
      if ( (v18 & 0x8000u) == 0 )
      {
        a2 = &v53;
        v4 = (__int64)&v54;
        sub_770B70(&v54, &v53);
        HIWORD(v32) = HIWORD(v18);
        LOWORD(v32) = v18 & 0x7C00;
        if ( (v18 & 0x7C00) == 0x7800 )
          goto LABEL_86;
        if ( (v18 & 0x7C00u) > 0x7800 )
        {
          if ( (_WORD)v32 == 31744 )
          {
            sub_76FA20(&v59, "{for ", 5);
            sub_770B70(&v54, &v59);
            v59 = sub_764A40();
            sub_770B70(&v54, &v59);
            if ( *qword_2CD44C0 == 64 )
              ++qword_2CD44C0;
            sub_76FD20(&v54, 125);
            v30 = v54;
            v31 = HIWORD(v54);
            goto LABEL_87;
          }
        }
        else
        {
          v10 = (unsigned int)(v32 - 26624);
          if ( (((_WORD)v32 - 26624) & 0xF400) == 0 )
          {
            v56 = v54;
            if ( *qword_2CD44C0 )
            {
              v58 = 0;
              v59 = 0;
              v57 = sub_766590(&v59, 0, &v58, 0);
              if ( !v9 )
              {
                if ( (_WORD)v57 )
                  sub_76FD20(&v57, 32);
                v56 = sub_771320(&v57, &v56);
              }
              v49 = qword_2CD44C0;
              if ( *qword_2CD44C0 != 64 )
              {
                sub_76FA20(&v59, "{for ", 5);
                sub_770B70(&v56, &v59);
                while ( 1 )
                {
                  v59 = sub_764A40();
                  v58 = sub_773330(&v59);
                  sub_770B70(&v56, &v58);
                  if ( *++qword_2CD44C0 == 64 )
                    break;
                  sub_770730(&v56, 8307);
                }
                sub_76FD20(&v56, 125);
                v49 = qword_2CD44C0;
              }
              v30 = v56;
              qword_2CD44C0 = v49 + 1;
              v31 = HIWORD(v56);
              goto LABEL_87;
            }
            goto LABEL_154;
          }
          if ( (_WORD)v32 == 24576 )
          {
            sub_76FD20(&v54, 123);
            v59 = sub_763140(&v54, 123, v33, v34);
            sub_770B70(&v54, &v59);
            sub_770730(&v54, 10109);
            goto LABEL_86;
          }
        }
      }
      else
      {
        if ( (v18 & 0x1000) == 0 )
        {
          if ( !v9 )
          {
            if ( (v18 & 0x4000) != 0 )
            {
              v59 = sub_766410(v4, a2, v10);
              if ( (dword_2CD44CC & 0xA0) == 0 )
              {
                a2 = (unsigned int *)&v59;
                v4 = 32;
                v54 = sub_7713D0(32, &v59);
              }
            }
            v55 = 0;
            v56 = 0;
            v57 = 0;
            if ( (v18 & 0x800) != 0 )
            {
              v19 = v18 & 0x700;
              if ( (v18 & 0x400) != 0 )
              {
                if ( v19 == 1280 )
                  v56 = sub_763140((unsigned int *)v4, (__int64)a2, v10, v5);
                v55 = sub_763140((unsigned int *)v4, (__int64)a2, v10, v5);
LABEL_57:
                v59 = 0;
                v58 = 0;
                v20 = sub_766590(&v58, 0, &v59, 1);
                v21 = dword_2CD44CC;
                if ( (dword_2CD44CC & 0x200) == 0 )
                  v57 = v20;
LABEL_59:
                v51 = v54;
                v22 = &v54;
                v23 = (unsigned int *)&v59;
                v59 = sub_7633B0((unsigned __int16)v18 | 1u, (v21 & 0x120) == 0);
                v54 = sub_771320(&v59, &v54);
                if ( (_WORD)v53 )
                {
                  if ( (dword_2CD44CC & 8) != 0 )
                  {
                    v54 = v53;
                  }
                  else
                  {
                    if ( v51 && (_WORD)v54 )
                      sub_76FD20(&v54, 32);
                    v22 = &v53;
                    v23 = &v54;
                    sub_770B70(&v54, &v53);
                  }
                }
                if ( (v53 & 0x20000) != 0 )
                {
                  if ( (_WORD)v54 )
                    sub_76FD20(&v54, 32);
                  if ( *qword_2CD44C0 == 64 )
                  {
                    ++qword_2CD44C0;
                    sub_76F870(&v59, 0);
                    v24 = v59;
                  }
                  else
                  {
                    v24 = sub_766B90(0);
                  }
                  v59 = v24;
                  sub_770B70(&v54, &v59);
                  v25 = dword_2CD44CC & 8;
                  if ( (dword_2CD44CC & 8) != 0 )
                    goto LABEL_86;
                  v50 = nullptr;
                }
                else
                {
                  v48 = (_DWORD *)sub_76E9D0(v23, v22);
                  *v48 = 0;
                  v50 = v48;
                  if ( *qword_2CD44C0 == 64 )
                  {
                    ++qword_2CD44C0;
                    sub_76F870(&v59, v48);
                    v25 = v59;
                  }
                  else
                  {
                    v25 = sub_766B90(v48);
                  }
                  v9 = v50 != nullptr;
                }
                v26 = a1;
                v27 = v18 & 0xF00;
                if ( (~(_WORD)v18 & 0xC00) != 0 )
                {
                  v58 = sub_766C50(v26);
                  v59 = sub_772CF0(&v58);
                  sub_770B70(&v54, &v59);
                  if ( v27 == 2560 )
                  {
LABEL_72:
                    v59 = sub_766E80();
                    v28 = dword_2CD44CC;
                    if ( (dword_2CD44CC & 0x800) == 0 )
                    {
                      sub_770B70(&v54, &v59);
                      v28 = dword_2CD44CC;
                    }
                    if ( (v28 & 0x40) == 0 && v9 )
                    {
                      *v50 = v54;
                      v54 = v25;
                    }
                    goto LABEL_77;
                  }
                }
                else
                {
                  v52 = v26;
                  dword_2CD44C8 |= 0x80000u;
                  if ( v27 == 3328 )
                  {
                    sub_76FA20(&v59, "`vtordisp{", 10);
                    sub_770B70(&v54, &v59);
                    sub_770B70(&v54, &v56);
                    sub_770C10(&v54);
                  }
                  else
                  {
                    sub_76FA20(&v59, "`adjustor{", 10);
                    sub_770B70(&v54, &v59);
                  }
                  sub_770B70(&v54, &v55);
                  sub_76FCD0(&v59, 2107261, 3);
                  sub_770B70(&v54, &v59);
                  v58 = sub_766C50(v52);
                  v59 = sub_772CF0(&v58);
                  sub_770B70(&v54, &v59);
                }
                sub_770B70(&v54, &v57);
                goto LABEL_72;
              }
              if ( v19 != 512 )
              {
                if ( (_WORD)v18 == 0x8900 && byte_2CCCDA9 < 0 && *(_WORD *)qword_2CD44C0 == 16709 )
                  ++qword_2CD44C0;
                goto LABEL_57;
              }
            }
            v21 = dword_2CD44CC;
            goto LABEL_59;
          }
LABEL_88:
          v30 = v53;
          v31 = HIWORD(v53);
          goto LABEL_87;
        }
        sub_770B70(&v54, &v53);
        dword_2CD44C8 |= 0x80000u;
        v35 = v18 & 0x1B00;
        if ( (v18 & 0x1B00) != 0x1000 )
        {
          v36 = 48;
          v37 = "`template static data member constructor helper'";
          if ( v35 != 4352 )
          {
            if ( v35 != 4608 )
            {
              if ( (v18 & 0x4000) != 0 )
              {
                v59 = sub_766410(&v54, "`template static data member constructor helper'", 48);
                if ( (dword_2CD44CC & 0xA0) == 0 )
                  v54 = sub_7713D0(32, &v59);
              }
              sub_76FD20(&v54, 123);
              v59 = sub_763140(&v54, 123, v38, v39);
              sub_770B70(&v54, &v59);
              sub_76FA20(&v59, ",{flat}}", 8);
              a2 = (unsigned int *)&v59;
              v4 = (__int64)&v54;
              sub_770B70(&v54, &v59);
              v40 = qword_2CD44C0;
              v10 = (__int64)++qword_2CD44C0;
              if ( *v40 == 65 )
              {
                if ( v40[1] )
                {
                  v59 = sub_7633B0(1, (dword_2CD44CC & 0x120) == 0);
                  v54 = sub_771320(&v59, &v54);
                }
                v54 = sub_7713D0(32, &v54);
                if ( v9 )
                  goto LABEL_86;
                goto LABEL_84;
              }
LABEL_154:
              sub_76E6C0(v4, a2, v10, v5);
            }
            v36 = 47;
            v37 = "`template static data member destructor helper'";
          }
          sub_76FA20(&v59, v37, v36);
          sub_770B70(&v54, &v59);
          if ( !v9 )
            goto LABEL_84;
LABEL_86:
          v30 = v54;
          v31 = HIWORD(v54);
LABEL_87:
          LOWORD(v53) = v30;
          HIWORD(v53) = v31;
          return v53;
        }
        sub_76FA20(&v59, "`local static destructor helper'", 32);
        a2 = (unsigned int *)&v59;
        sub_770B70(&v54, &v59);
      }
      if ( !v9 )
      {
        v57 = v54;
        v41 = (_DWORD *)sub_76E9D0(&v54, a2);
        *v41 = 0;
        v42 = v41;
        v54 = sub_766B90(v41);
        v59 = 0;
        v58 = 0;
        v43 = sub_766590(&v58, 0, &v59, 0);
        *v42 = v43;
        if ( (_WORD)v43 )
          sub_76FD20(v42, 32);
        sub_770B70(v42, &v57);
        if ( (unsigned __int16)v18 > 0x1FFFu )
        {
LABEL_77:
          if ( (v18 & 0x9800) != 0x8800 )
            goto LABEL_84;
          if ( (v18 & 0x1F00) == 0xA00 )
            sub_770DE0(&v54);
          if ( (v18 & 0x8F00) == 0x8C00 || (v18 & 0x8B00) == 0x8900 )
          {
            dword_2CD44C8 |= 0x40000u;
            if ( (dword_2CD44CC & 0x1000) == 0 )
            {
              sub_76FA20(&v59, "virtual ", 8);
              v54 = sub_771320(&v59, &v54);
            }
          }
          v29 = v18 & 0x98C0;
          if ( (v18 & 0x98C0) != 0x8800 )
          {
            if ( (v18 & 0x98C0u) <= 0x8800 )
              goto LABEL_84;
            if ( v29 != -30656 )
            {
              if ( v29 == -30592 )
                goto LABEL_161;
LABEL_84:
              if ( (v18 & 0x9C00u) > 0x8BFF )
              {
                sub_76FA20(&v59, "[thunk]:", 8);
                v54 = sub_771320(&v59, &v54);
                dword_2CD44C8 |= 0x1000000u;
              }
              goto LABEL_86;
            }
LABEL_158:
            v45 = 9;
            v46 = "private: ";
            v47 = dword_2CD44C8 | 0x40;
            goto LABEL_120;
          }
          goto LABEL_119;
        }
        sub_770DE0(&v54);
        v44 = v18 & 0x98C0;
        if ( (v18 & 0x98C0) == 0x800 )
          goto LABEL_158;
        if ( v44 == 4096 )
        {
LABEL_161:
          v45 = 11;
          v46 = "protected: ";
          v47 = dword_2CD44C8 | 0x60;
LABEL_120:
          dword_2CD44C8 = v47;
          if ( (dword_2CD44CC & 0x400) == 0 )
          {
            sub_76FA20(&v59, v46, v45);
            v54 = sub_771320(&v59, &v54);
          }
          goto LABEL_84;
        }
        if ( !v44 )
        {
LABEL_119:
          v45 = 8;
          v46 = "public: ";
          v47 = dword_2CD44C8 | 0x20;
          goto LABEL_120;
        }
      }
      goto LABEL_86;
    }
    return v53;
  }
  v7 = BYTE2(v53);
  v5 = (char *)(BYTE2(v53) | 2u);
  BYTE2(v53) |= 2u;
  if ( (_WORD)v53 && (v7 & 8) == 0 )
    goto LABEL_15;
  return v53;
}
