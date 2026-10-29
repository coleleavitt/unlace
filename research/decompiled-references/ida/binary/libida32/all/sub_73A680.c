__int64 __fastcall sub_73A680(int *a1, char *a2, char *a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  char *v6; // rax
  char v7; // bp
  unsigned int v8; // eax
  char *v9; // rax
  char *v10; // rsi
  char v11; // r12
  int v12; // r15d
  bool v13; // r14
  char *v14; // rax
  int v15; // ecx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // [rsp+8h] [rbp-70h]
  unsigned int v19; // [rsp+14h] [rbp-64h]
  char v20; // [rsp+18h] [rbp-60h]
  char v21; // [rsp+1Ch] [rbp-5Ch]
  char v22; // [rsp+2Bh] [rbp-4Dh] BYREF
  int v23; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned int v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v20 = (char)a1;
  v26 = __readfsqword(0x28u);
  v18 = qword_2CAA5C0;
  if ( (_BYTE)a1 )
  {
    if ( (*(_DWORD *)qword_2CAA5C0 & 0xFFFFFF) == 0x545F5F )
    {
      qword_2CAA5C0 += 3;
      a2 = (_BYTE *)(elf_gnu_hash_chain + 3477);
      a1 = &v23;
      v23 = sub_73A680(0);
      sub_750270(&v23, 10273);
      v6 = qword_2CAA5C0;
      a3 = ++qword_2CAA5C0;
      v7 = *v6;
      v22 = v7;
      if ( v7 != 90 )
      {
        v19 = 0;
        goto LABEL_14;
      }
      result = sub_750D90(&v23, 41);
      goto LABEL_32;
    }
    goto LABEL_55;
  }
  if ( *qword_2CAA5C0 == 81 )
    return sub_73B9E0(0);
  v19 = sub_74E4D0(a1, a2, a3, a4, a5);
  a3 = (char *)v19;
  if ( !v19 || (a2 = qword_2CAA5C0, v18 = qword_2CAA5C0, (int)qword_2CAA5B8 - (int)qword_2CAA5C0 < v19) )
LABEL_55:
    sub_74E200(a1, a2, a3, a4);
  if ( (*(_DWORD *)qword_2CAA5C0 & 0xFFFFFF) == 0x545F5F && v19 > 4 && qword_2CAA5C0[v19 - 1] == 90 )
  {
    qword_2CAA5C0 += 3;
    a2 = (_BYTE *)(elf_gnu_hash_chain + 3477);
    a1 = &v23;
    v23 = sub_73A680(0);
    sub_750270(&v23, 10273);
    v6 = qword_2CAA5C0;
    a3 = ++qword_2CAA5C0;
    v7 = *v6;
    v22 = v7;
    if ( v7 == 90 )
    {
      result = sub_750D90(&v23, 41);
LABEL_29:
      if ( qword_2CAA5C0 == &v18[v19] )
      {
LABEL_32:
        dword_2CAA5C8 |= 0x4000000u;
        return result;
      }
      qword_2CAA5C0 = v18;
      goto LABEL_8;
    }
LABEL_14:
    while ( v7 == 72 )
    {
      if ( v6[1] == 72 )
        goto LABEL_55;
      v6 = qword_2CAA5C0;
      a3 = ++qword_2CAA5C0;
      v7 = *v6;
      v22 = v7;
      if ( v7 == 90 )
      {
LABEL_28:
        result = sub_750D90(&v23, 41);
        if ( !v20 )
          goto LABEL_29;
        goto LABEL_32;
      }
    }
    while ( v7 == 86 )
    {
      v10 = &v22;
      v11 = *qword_2CAA5C0;
      v24 = sub_73ACE0(0, &v22, 0);
      if ( v22 )
      {
        if ( *qword_2CAA5C0 == 83 )
        {
          v10 = (char *)&v24;
          sub_7506B0(&v23, &v24);
        }
        v8 = sub_73A2D0((unsigned int *)(unsigned int)v11, (__int64)v10);
        goto LABEL_19;
      }
      a2 = (char *)&v24;
      sub_7506B0(&v23, &v24);
LABEL_20:
      v9 = qword_2CAA5C0++;
      v7 = *v9;
      v22 = v7;
      if ( v7 == 90 )
        goto LABEL_28;
      a1 = &v23;
      sub_750750(&v23);
    }
    if ( v7 > 86 )
    {
      if ( v7 == 88 )
      {
        v8 = sub_73A680(0);
        goto LABEL_19;
      }
      goto LABEL_55;
    }
    if ( v7 != 83 )
    {
      if ( v7 == 84 )
      {
        v8 = sub_73ACE0(0, 0, 0);
LABEL_19:
        v25 = v8;
        a2 = (char *)&v25;
        sub_7506B0(&v23, &v25);
        goto LABEL_20;
      }
      goto LABEL_55;
    }
    v24 = 0;
    v12 = dword_2CAA5CC;
    v13 = *(_WORD *)qword_2CAA5C0 == 17503;
    v14 = &qword_2CAA5C0[2 * v13];
    qword_2CAA5C0 = v14;
    dword_2CAA5CC |= 0xA940u;
    while ( *v14 != 77 )
    {
      v25 = sub_73AB20(0);
      sub_7506B0(&v24, &v25);
      v15 = (unsigned __int8)*qword_2CAA5C0;
      if ( (_BYTE)v15 == 77 || v13 )
      {
        v21 = *qword_2CAA5C0;
        v25 = sub_73ACE0(0, 0, 0);
        if ( v21 == 77 )
LABEL_39:
          sub_7506B0(&v24, &v25);
        v15 = (unsigned __int8)*qword_2CAA5C0;
      }
      if ( !(_BYTE)v15
        || (v16 = (unsigned int)(v15 - 83), (unsigned __int8)v16 <= 7u) && (v17 = 139, _bittest64(&v17, v16)) )
      {
        a2 = (char *)&v25;
        dword_2CAA5CC = v12;
        v25 = v24;
        sub_7506B0(&v23, &v25);
        goto LABEL_20;
      }
      sub_74F860(&v24, 46);
      v14 = qword_2CAA5C0;
    }
    v25 = sub_73ACE0(0, 0, 0);
    goto LABEL_39;
  }
LABEL_8:
  v25 = 0;
  sub_74EA60(&v25);
  if ( byte_2CAA5A1 > 0 )
    sub_750840(&v25);
  return v25;
}

