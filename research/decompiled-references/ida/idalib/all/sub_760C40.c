__int64 __fastcall sub_760C40(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rdi
  char *v6; // rdx
  char v7; // al
  bool v8; // cc
  char v9; // al
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  int v16; // [rsp+0h] [rbp-28h] BYREF
  int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v16 = 0;
  v5 = qword_2CD44C0 + 1;
  v6 = qword_2CD44C0 + 2;
  qword_2CD44C0 += 2;
  v7 = *v5;
  v8 = *v5 <= 84;
  if ( *v5 == 84 )
    goto LABEL_19;
LABEL_2:
  if ( !v8 )
  {
    if ( v7 == 85 )
    {
      a2 = (unsigned int)sub_76E990(v5, a2, v6, a4, a5);
      sub_76EF20(&v16);
      goto LABEL_16;
    }
    goto LABEL_9;
  }
  if ( v7 == 65 )
  {
    a2 = 38;
    sub_76FD20(&v16, 38);
    v15 = sub_76E990(&v16, 38, v12, v13, v14);
    v5 = qword_2CD44C0;
    if ( !v15 )
      goto LABEL_10;
    v6 = (char *)(qword_2CD44B8 - (_QWORD)qword_2CD44C0);
    if ( (int)qword_2CD44B8 - (int)qword_2CD44C0 < v15 )
    {
      if ( !byte_2CD44A1 )
        goto LABEL_35;
      v6 = (char *)(unsigned int)v6;
      v5 = &qword_2CD44C0[(unsigned int)v6];
      qword_2CD44C0 = v5;
    }
    else
    {
      sub_76E7B0(&qword_2CD44C0[v15]);
      v17 = sub_760000(-1);
      if ( *qword_2CD44C0 )
      {
        a2 = 0;
        sub_762250(&v17, 0);
      }
      sub_76E6E0(1);
      if ( byte_2CD44A1 <= 0 )
        goto LABEL_25;
      v5 = qword_2CD44C0;
    }
    if ( !*v5 )
    {
LABEL_12:
      sub_770D00(&v16);
      byte_2CD44A1 = 2;
      return sub_773010(&v16);
    }
LABEL_35:
    sub_76E6C0(v5, a2, v6, a4);
  }
  if ( v7 != 83 )
  {
LABEL_9:
    qword_2CD44C0 = v5;
LABEL_10:
    if ( !*v5 && byte_2CD44A1 )
      goto LABEL_12;
    goto LABEL_35;
  }
  a4 = v5 + 2;
  qword_2CD44C0 = v5 + 2;
  v9 = v5[1];
  if ( v9 == 78 )
  {
    a2 = 45;
    sub_76FD20(&v16, 45);
    v5 = qword_2CD44C0;
LABEL_28:
    if ( (unsigned __int8)(*v5 - 48) > 9u )
      goto LABEL_9;
    sub_76E990(v5, a2, v6, a4, a5);
    v17 = 0;
    sub_76EF20(&v17);
    if ( byte_2CD44A1 > 0 )
      sub_770D00(&v17);
LABEL_25:
    a2 = (__int64)&v17;
    sub_770B70(&v16, &v17);
    goto LABEL_16;
  }
  if ( v9 == 80 )
  {
    v5 += 2;
    goto LABEL_28;
  }
  if ( v9 != 77 )
  {
    v5 = v6;
    goto LABEL_9;
  }
  sub_76FA20(&v17, "-2147483648", 11);
  a2 = (__int64)&v17;
  sub_770B70(&v16, &v17);
LABEL_16:
  while ( *qword_2CD44C0 != 95 )
  {
    if ( byte_2CD44A1 > 0 )
      goto LABEL_12;
    sub_770C10(&v16);
    v5 = qword_2CD44C0;
    v6 = ++qword_2CD44C0;
    v7 = *v5;
    v8 = *v5 <= 84;
    if ( *v5 != 84 )
      goto LABEL_2;
LABEL_19:
    v11 = sub_761080(v5, a2);
    a2 = (__int64)&v17;
    v17 = v11;
    sub_770B70(&v16, &v17);
  }
  ++qword_2CD44C0;
  return sub_773010(&v16);
}
