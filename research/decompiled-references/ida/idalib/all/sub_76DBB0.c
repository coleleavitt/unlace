__int64 __fastcall sub_76DBB0(__int64 a1, char *a2)
{
  char v2; // r12
  char *v3; // rbp
  unsigned int v4; // eax
  char *v5; // r13
  unsigned int v6; // edx
  char v7; // bl
  unsigned int v9; // r14d
  const __int32_t **v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  const __int32_t **v13; // rax
  unsigned int v14; // eax
  const __int32_t **v15; // rax
  int v16; // eax
  int v17; // edi
  __int64 v18; // rdx
  unsigned int v19; // eax
  const __int32_t **v20; // rax
  __int32_t v21; // eax
  const __int32_t **v22; // rax
  __int32_t v23; // eax
  const __int32_t **v24; // rax
  __int32_t v25; // eax
  const __int32_t **v26; // rax
  unsigned int v27; // eax
  __int16 v28; // ax
  const __int32_t **v29; // rax
  __int64 v30; // r13
  const __int32_t **v31; // r14
  __int32_t v32; // eax
  unsigned int v33; // ebp
  unsigned int v34; // eax
  __int64 v35; // r13
  char *v36; // rax
  char *v37; // r13
  int v38; // eax
  __int32_t v39; // eax
  __int32_t v40; // eax
  __int32_t v41; // eax
  char *v42; // rdx
  char *v43; // rax
  int v44; // ecx
  unsigned int v45; // r14d
  unsigned int v46; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+Ch] [rbp-4Ch] BYREF
  int v48; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v49; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v50; // [rsp+18h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = a1;
  v46 = 0;
  v3 = qword_2CD44C0;
  if ( *qword_2CD44C0 != 36 )
  {
    v4 = sub_76CEC0();
    v5 = qword_2CD44C0;
    v46 = v4;
    LOBYTE(v6) = BYTE2(v4);
    goto LABEL_3;
  }
  HIWORD(v9) = 0;
  qword_2CD44C0 += 2;
  v10 = __ctype_tolower_loc();
  v12 = (unsigned __int8)v3[1];
  switch ( (*v10)[v12] )
  {
    case 'a':
      v15 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      v16 = (*v15)[v12] - 65;
      if ( (unsigned int)v16 > 0xA )
        goto LABEL_21;
      v17 = word_23B8A90[v16];
      qword_2CD44C0 = v3 + 3;
      a1 = (v17 << 8) | 0x3Du;
      goto LABEL_24;
    case 'c':
      v5 = v3 + 3;
      qword_2CD44C0 = v3 + 3;
      v20 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      v21 = (*v20)[v12];
      if ( v21 != 84 )
      {
        if ( v21 == 86 )
        {
          dword_2CD44C8 |= 0x400000u;
          v49 = sub_772740(a1, a2, v12, v11);
          if ( (_WORD)v49 )
          {
            a2 = (char *)&qword_20;
            sub_76FD20(&v49, 32);
          }
          BYTE2(v49) |= 2u;
          v5 = qword_2CD44C0;
          v19 = v49;
          goto LABEL_26;
        }
LABEL_21:
        sub_76E6C0(a1, a2, v12, v11);
      }
      dword_2CD44C8 |= 0x200000u;
      v19 = 0x40000;
LABEL_26:
      v46 = v19;
      v6 = HIWORD(v19);
LABEL_3:
      v7 = v6 & 2;
      if ( *v5 == 58 )
      {
        if ( (sub_76D8B0((int *)&v46, (int *)a2) & 1) != 0 && (v2 & 1) != 0 )
          dword_2CD44C8 |= 0x80u;
        if ( v7 )
        {
          BYTE2(v46) |= 2u;
          if ( !(_WORD)v46 )
            return v46;
          return sub_76CF50(&v46, 0);
        }
        if ( !(_WORD)v46 )
          return v46;
        goto LABEL_7;
      }
      if ( !(_WORD)v46 )
        return v46;
      if ( !v7 )
      {
LABEL_7:
        if ( (dword_2CD44CC & 8) != 0 )
          return v46;
      }
      return sub_76CF50(&v46, 0);
    case 'd':
      qword_2CD44C0 = v3 + 3;
      v22 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      v23 = (*v22)[v12];
      switch ( v23 )
      {
        case 'L':
          a1 = 0;
          v18 = 7;
          a2 = " delete";
          break;
        case 'T':
          a2 = (_BYTE *)(&dword_7C + 2);
          dword_2CD44C8 |= 0x300000u;
          sub_76F8C0(&v49, 126);
          BYTE2(v49) |= 4u;
          v5 = qword_2CD44C0;
          v19 = v49;
          goto LABEL_26;
        case 'A':
          a1 = 0;
          v18 = 9;
          a2 = " delete[]";
          break;
        default:
          goto LABEL_21;
      }
      goto LABEL_25;
    case 'n':
      qword_2CD44C0 = v3 + 3;
      v24 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      v25 = (*v24)[v12];
      if ( v25 == 65 )
      {
        a1 = 0;
        v18 = 6;
        a2 = " new[]";
      }
      else
      {
        if ( v25 != 87 )
          goto LABEL_21;
        a1 = 2003136032;
LABEL_24:
        v18 = 0;
        a2 = nullptr;
      }
LABEL_25:
      dword_2CD44C8 |= 0x100000u;
      v19 = sub_7728C0(a1, a2, v18);
      v5 = qword_2CD44C0;
      goto LABEL_26;
    case 'o':
      v26 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      v27 = (*v26)[v12] - 65;
      if ( v27 > 0x14 )
        goto LABEL_21;
      v12 = (__int64)">><<!";
      v28 = *(_WORD *)&asc_23B8A60[2 * v27];
      qword_2CD44C0 = v3 + 3;
      LOWORD(v9) = v28;
      if ( v28 )
        goto LABEL_20;
      a1 = 2768429;
      goto LABEL_24;
    case 'r':
      v13 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      v14 = (*v13)[v12] - 65;
      if ( v14 > 5 )
        goto LABEL_21;
      v12 = (__int64)"==!=<";
      qword_2CD44C0 = v3 + 3;
      LOWORD(v9) = *(_WORD *)&asc_23B8A38[2 * v14];
LABEL_20:
      a1 = v9;
      if ( !v9 )
        goto LABEL_21;
      goto LABEL_24;
    case 't':
      v29 = __ctype_toupper_loc();
      v12 = (unsigned __int8)v3[2];
      if ( (*v29)[v12] != 69 )
        goto LABEL_21;
      qword_2CD44C0 = v3 + 3;
      if ( v3[3] != 36 )
        goto LABEL_21;
      a2 = "`__anonymous_enum'";
      qword_2CD44C0 = v3 + 4;
      dword_2CD44C8 |= 0x2000000u;
      sub_76FA20(&v49, "`__anonymous_enum'", 18);
      v19 = v49;
      v5 = qword_2CD44C0;
      goto LABEL_26;
    case 'w':
      qword_2CD44C0 = v3 + 3;
      LOBYTE(v30) = v3[2];
      v31 = __ctype_toupper_loc();
      v32 = (*v31)[(unsigned __int8)v30];
      if ( !v32 )
        goto LABEL_48;
      break;
    default:
      goto LABEL_21;
  }
  switch ( v32 )
  {
    case 'B':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      if ( (*v31)[v30] != 73 )
        goto LABEL_48;
      v12 = 12;
      a2 = "`__onceonly'";
      goto LABEL_49;
    case 'C':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      if ( (*v31)[v30] != 77 )
        goto LABEL_48;
      v12 = 14;
      a2 = "`__stattabcmd'";
      goto LABEL_49;
    case 'D':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      v41 = (*v31)[v30];
      if ( v41 == 70 )
      {
        v12 = 10;
        a2 = "`__defarg'";
        goto LABEL_49;
      }
      if ( v41 == 79 )
      {
        v12 = 13;
        a2 = "`__dtorbjblk'";
        goto LABEL_49;
      }
      if ( v41 != 65 )
        goto LABEL_48;
      v12 = 14;
      a2 = "`__arrdtorblk'";
      goto LABEL_49;
    case 'M':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      if ( (*v31)[v30] != 80 )
        goto LABEL_48;
      v12 = 15;
      a2 = "`__mbrptrthunk'";
      dword_2CD44C8 |= 0x1000001u;
      goto LABEL_49;
    case 'S':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      v40 = (*v31)[v30];
      if ( v40 == 73 )
      {
        v12 = 14;
        a2 = "`__staticinit'";
        goto LABEL_49;
      }
      if ( v40 != 84 )
        goto LABEL_48;
      v12 = 14;
      a2 = "`__typstattab'";
      goto LABEL_49;
    case 'T':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      v39 = (*v31)[v30];
      if ( v39 == 72 )
      {
        v12 = 12;
        a2 = "`__throwblk'";
        goto LABEL_49;
      }
      if ( v39 != 84 )
        goto LABEL_48;
      v12 = 11;
      a2 = "`__typesig'";
      goto LABEL_49;
    case 'V':
      qword_2CD44C0 = v3 + 4;
      v30 = (unsigned __int8)v3[3];
      v38 = (*v31)[v30];
      if ( v38 == 77 )
      {
        v12 = 9;
        a2 = "`__vmtbl'";
        goto LABEL_49;
      }
      if ( v38 > 77 )
      {
        if ( v38 == 84 )
        {
          v12 = 11;
          a2 = "`__vfthunk'";
          dword_2CD44C8 |= 0x1000000u;
          goto LABEL_49;
        }
      }
      else
      {
        if ( v38 == 66 )
        {
          v12 = 9;
          a2 = "`__vbtbl'";
          goto LABEL_49;
        }
        if ( v38 == 70 )
        {
          v12 = 9;
          a2 = "`__vftbl'";
          dword_2CD44C8 |= 0xA0u;
LABEL_49:
          a1 = 0;
          v47 = sub_7728C0(0, a2, v12);
          v33 = sub_76CE80(0, a2);
          if ( v33 <= 0x23 )
          {
            v34 = sub_76CE80(0, a2);
            if ( v34 <= 0x23 )
            {
              v35 = v34 + 36 * v33;
              v36 = qword_2CD44C0;
              v12 = qword_2CD44B8 - (_QWORD)qword_2CD44C0;
              if ( (int)qword_2CD44B8 - (int)qword_2CD44C0 >= (unsigned int)v35 )
              {
                v37 = &qword_2CD44C0[v35];
                if ( *v37 == 36 )
                {
                  ++qword_2CD44C0;
                  if ( (*v31)[(unsigned __int8)*v36] == 79
                    && ((v36[1] - 50) & 0xFD) == 0
                    && v36[2] == 58
                    && *(v37 - 1) == 36 )
                  {
                    v42 = v36 + 2;
                    v43 = v36 + 3;
                    v44 = 4075580;
                    qword_2CD44C0 = v42;
                    BYTE1(v44) = *(v43 - 2);
                    v45 = v44;
                    if ( v43 < v37 )
                    {
                      v48 = sub_76DB20(nullptr, (int *)a2);
                      if ( v37 == qword_2CD44C0 )
                      {
                        sub_771030(&v47, &v48);
                        sub_76FCD0(&v49, v45, 3);
                        a2 = (char *)&v49;
                        sub_770B70(&v47, &v49);
                      }
                    }
                  }
                  v5 = v37 + 1;
                  qword_2CD44C0 = v5;
                  dword_2CD44C8 |= 0x80000u;
                  v19 = v47;
                  goto LABEL_26;
                }
              }
            }
          }
          goto LABEL_21;
        }
      }
LABEL_48:
      v12 = 12;
      a2 = "`__internal'";
      if ( !(_BYTE)v30 )
        goto LABEL_21;
      goto LABEL_49;
    default:
      qword_2CD44C0 = v3 + 4;
      LOBYTE(v30) = v3[3];
      goto LABEL_48;
  }
}
