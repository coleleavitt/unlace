unsigned __int64 __fastcall sub_762250(__int64 a1, int *a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  _WORD *v5; // r12
  int v6; // ebx
  char *v7; // rdx
  char v8; // al
  unsigned int *v9; // r15
  int v10; // ecx
  unsigned int *v11; // rax
  int *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  unsigned int *v18; // rax
  __int64 v19; // rdx
  char *v20; // rcx
  __int64 v21; // r8
  unsigned int *v22; // rax
  int v23; // [rsp+4h] [rbp-54h]
  char v24; // [rsp+Bh] [rbp-4Dh]
  int v25; // [rsp+Ch] [rbp-4Ch]
  int v26; // [rsp+10h] [rbp-48h] BYREF
  int v27; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v5 = (_WORD *)a1;
  v6 = 1;
  v24 = (char)a2;
  v7 = qword_2CD44C0;
  v28 = __readfsqword(0x28u);
  v26 = 0;
  v8 = *qword_2CD44C0;
  v23 = 0;
  v25 = 1;
  while ( *v7 )
  {
    while ( 2 )
    {
      if ( (unsigned __int8)(v8 - 48) > 9u )
      {
        a4 = (unsigned int *)(v7 + 1);
        qword_2CD44C0 = v7 + 1;
        switch ( *v7 )
        {
          case 'C':
            if ( (v23 & 1) != 0 )
              goto LABEL_27;
            ++v7;
            ++v23;
            goto LABEL_20;
          case 'F':
            if ( !byte_2CCCDA8 )
            {
              a4 = nullptr;
              *(_WORD *)(qword_2CD44D0 + 8LL) = 0;
            }
            if ( v7[1] == 118 && !v7[2] )
            {
              v7 += 2;
              qword_2CD44C0 = v7;
            }
            goto LABEL_15;
          case 'Q':
            v18 = (unsigned int *)sub_76E9D0(a1, a2);
            a2 = &dword_0 + 1;
            *v18 = 0;
            v9 = v18;
            v26 = sub_762050(v18, 1, v19, v20, v21);
            if ( byte_2CD44A1 > 0 )
              goto LABEL_35;
            sub_772B70(qword_2CD44D0, &v26);
            v10 = dword_2CD44C8;
            if ( !v9 )
              goto LABEL_46;
            goto LABEL_10;
          case 'S':
            if ( v25 != 1 )
              goto LABEL_27;
            v25 = 0;
            ++v7;
            dword_2CD44C8 |= 0x20000u;
            goto LABEL_20;
          case 'V':
            if ( (v23 & 2) != 0 )
              goto LABEL_27;
            ++v7;
            v23 |= 2u;
            v8 = *(_BYTE *)a4;
            if ( !*(_BYTE *)a4 )
              goto LABEL_35;
            continue;
          case '_':
            goto LABEL_27;
          case 't':
            if ( !byte_2CCCDA8 )
              goto LABEL_27;
            v11 = (unsigned int *)sub_76E9D0(a1, a2);
            *v11 = 0;
            v12 = (int *)v11;
            v26 = sub_761C50(v11, (__int64)a2, v13, v14, v15);
            sub_772B70(qword_2CD44D0, &v26);
            a2 = &v26;
            a1 = (__int64)v5;
            dword_2CD44C8 |= 0x80u;
            sub_771030(v5, &v26);
            v16 = dword_2CD44C8;
            if ( (dword_2CD44C8 & 0x100000) != 0 )
            {
              a2 = &dword_7C + 2;
              a1 = (__int64)v5;
              sub_76FD20(v5, 126);
              v16 = dword_2CD44C8;
            }
            if ( (v16 & 0x200000) != 0 )
            {
              a2 = v12;
              a1 = (__int64)v5;
              sub_770B70(v5, v12);
            }
            goto LABEL_15;
          default:
            qword_2CD44C0 = v7;
            if ( byte_2CCCDA8 )
              goto LABEL_15;
            if ( byte_2CD44A1 >= 0 )
              goto LABEL_27;
            if ( *v7 )
              goto LABEL_27;
            byte_2CD44A1 = 1;
            if ( v6 != 1 )
              goto LABEL_27;
            goto LABEL_61;
        }
      }
      break;
    }
    v9 = nullptr;
    if ( !*v5 )
    {
      v22 = (unsigned int *)sub_76E9D0(a1, a2);
      *v22 = 0;
      v9 = v22;
    }
    v26 = sub_760F20(v9, (__int64)a2, (__int64)v7, (__int64)a4, a5);
    if ( byte_2CD44A1 <= 0 )
    {
      sub_772B70(qword_2CD44D0, &v26);
    }
    else if ( !(_WORD)v26 )
    {
      sub_770D00(&v26);
      ++byte_2CD44A1;
    }
    if ( v24 )
    {
      v10 = dword_2CD44C8;
      if ( !v9 )
        goto LABEL_46;
LABEL_10:
      if ( (v10 & 0x200000) == 0 )
      {
LABEL_46:
        LOBYTE(v10) = v10 | 0x80;
        dword_2CD44C8 = v10;
        goto LABEL_14;
      }
      if ( (v10 & 0x100000) != 0 )
      {
        sub_76F8C0(&v27, 126);
        *(_DWORD *)v5 = v27;
      }
      sub_770B70(v5, v9);
    }
LABEL_14:
    a2 = &v26;
    a1 = (__int64)v5;
    sub_771030(v5, &v26);
    if ( byte_2CCCDA8 )
    {
LABEL_15:
      if ( v6 != 1 )
LABEL_27:
        sub_76E6C0(a1, a2, v7, a4);
      if ( byte_2CD44A1 > 0 )
      {
LABEL_61:
        if ( (dword_2CD44CC & 8) != 0 )
          return v28 - __readfsqword(0x28u);
LABEL_56:
        if ( !v23 )
          goto LABEL_40;
LABEL_57:
        sub_76FFF0(v5);
        if ( !v25 )
          goto LABEL_58;
        return v28 - __readfsqword(0x28u);
      }
      a1 = 1;
      v26 = sub_761960((unsigned int *)((char *)&dword_0 + 1), a2, (__int64)v7, a4, a5);
      if ( (dword_2CD44CC & 8) != 0 )
      {
        if ( byte_2CD44A1 > 0 )
          goto LABEL_55;
      }
      else
      {
        a1 = (__int64)v5;
        a2 = &v26;
        sub_770B70(v5, &v26);
        if ( byte_2CD44A1 > 0 )
        {
LABEL_55:
          if ( (dword_2CD44CC & 8) != 0 )
            return v28 - __readfsqword(0x28u);
          goto LABEL_56;
        }
      }
      v7 = qword_2CD44C0;
      v6 = 0;
    }
    else
    {
      v7 = qword_2CD44C0;
    }
LABEL_20:
    v8 = *v7;
  }
LABEL_35:
  if ( (dword_2CD44CC & 8) == 0 )
  {
    if ( byte_2CCCDA8 && v6 )
    {
      v27 = sub_761960((unsigned int *)((char *)&dword_0 + 1), a2, (__int64)v7, a4, a5);
      sub_770B70(v5, &v27);
    }
    if ( v23 )
      goto LABEL_57;
LABEL_40:
    if ( !v25 )
LABEL_58:
      sub_770DE0(v5);
  }
  return v28 - __readfsqword(0x28u);
}
