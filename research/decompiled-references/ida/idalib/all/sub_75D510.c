__int64 __fastcall sub_75D510(char *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // bp
  unsigned int v12; // eax
  char v13; // r12
  char *v14; // rcx
  char *v15; // rax
  char *v16; // rdx
  char *v17; // rdx
  char v18; // [rsp+3h] [rbp-45h] BYREF
  int v19; // [rsp+4h] [rbp-44h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+Ch] [rbp-3Ch] BYREF
  int v22; // [rsp+10h] [rbp-38h] BYREF
  int v23; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v20 = 0;
  v5 = (unsigned __int8)*qword_2CD44C0;
  if ( (_BYTE)v5 == 76 )
  {
    v20 = sub_75FA90();
    goto LABEL_9;
  }
  if ( (_BYTE)v5 == 84 )
  {
    ++qword_2CD44C0;
    v6 = xmmword_2CCCD90;
    v7 = sub_75C1C0((__int64)a1, (__int64)a2, v5, a4, a5);
    return *(unsigned int *)sub_772CD0(v6, v7, v8, v9);
  }
  v11 = (char)a1;
  a1 = &v18;
  v18 = 0;
  v12 = sub_75CB40((unsigned int *)&v18, a2, v5, a4);
  v13 = v18;
  v21 = v12;
  if ( v18 > 0 )
  {
    v22 = sub_75D510(0);
    v23 = sub_772CF0(&v22);
    sub_770B70(&v20, &v23);
    sub_770B70(&v20, &v21);
    if ( v13 != 3 )
    {
      v22 = sub_75D510(0);
      v23 = sub_772CF0(&v22);
      sub_770B70(&v20, &v23);
      if ( v13 == 2 )
      {
        sub_76FD20(&v20, 58);
        v22 = sub_75D510(0);
        v23 = sub_772CF0(&v22);
        sub_770B70(&v20, &v23);
      }
      return v20;
    }
LABEL_19:
    v23 = sub_75E9A0();
    sub_770B70(&v20, &v23);
    if ( *qword_2CD44C0 == 73 )
    {
      v23 = sub_75D9F0(0);
      sub_770B70(&v20, &v23);
    }
    return v20;
  }
  if ( v18 == -3 )
  {
    v22 = sub_75D510(1);
    v23 = sub_772CF0(&v22);
    sub_770B70(&v20, &v23);
    v22 = 0;
    if ( *qword_2CD44C0 != 69 )
    {
      while ( 1 )
      {
        v23 = sub_75D510(2);
        sub_770B70(&v22, &v23);
        if ( *qword_2CD44C0 == 69 )
          break;
        if ( (_WORD)v22 )
          sub_770C10(&v22);
      }
    }
    a2 = (unsigned int *)&v23;
    a1 = (char *)&v20;
    v23 = sub_772CF0(&v22);
    sub_770B70(&v20, &v23);
    goto LABEL_9;
  }
  v20 = v12;
  if ( v18 )
  {
    if ( v18 == -2 )
    {
      sub_76FD20(&v20, 40);
      if ( (dword_2CD44CC & 0x2000) == 0 && (*qword_2CD44C0 == 78 || *qword_2CD44C0 == 83 && qword_2CD44C0[1] == 116) )
      {
        sub_76FA20(&v23, "typename ", 9);
        sub_770B70(&v20, &v23);
        v23 = sub_75DC60(0, 0);
        sub_770B70(&v20, &v23);
      }
      else
      {
        v23 = sub_75DC60(0, 0);
        sub_770B70(&v20, &v23);
      }
      sub_76FD20(&v20, 41);
      return v20;
    }
    v23 = sub_75DC60(0, 0);
    sub_770B70(&v20, &v23);
    sub_770730(&v20, 14906);
    if ( *qword_2CD44C0 == 78 )
    {
      v19 = 0;
      v22 = sub_75F5C0(&v19);
      v23 = sub_75DC60(0, 0);
      sub_770B70(&v20, &v23);
      if ( (_WORD)v20 )
        sub_76FD20(&v20, 32);
      sub_770B70(&v20, &v22);
      v23 = sub_75E740(0);
      sub_770B70(&v20, &v23);
      if ( v19 )
        sub_76FFF0(&v20);
      return v20;
    }
    goto LABEL_19;
  }
  if ( v11 )
  {
    if ( v11 != 1 )
      return v20;
    v17 = qword_2CD44C0;
    if ( *qword_2CD44C0 == 69 )
      return v20;
    if ( !(_BYTE)xmmword_2CCCD80 )
      goto LABEL_26;
  }
  else
  {
    if ( !(_BYTE)xmmword_2CCCD80 )
    {
LABEL_26:
      v22 = sub_75D510(0);
      v23 = sub_772CF0(&v22);
      sub_770B70(&v20, &v23);
      return v20;
    }
    v17 = qword_2CD44C0;
  }
  v14 = v17 - 2;
  if ( (unsigned int)(qword_2CD44B8 - ((_DWORD)v17 - 2)) <= 6
    || *(_DWORD *)(v17 - 2) != 1598841953
    || *(_DWORD *)(v17 + 1) != 1397643871 )
  {
    goto LABEL_26;
  }
  v16 = v17 + 3;
  qword_2CD44C0 = v16;
  if ( (unsigned __int8)++byte_2CCCD70 > 3u )
LABEL_46:
    sub_76E6C0(a1, a2, v16, v14);
  a2 = (unsigned int *)&v23;
  a1 = (char *)&v20;
  v23 = sub_75ECE0(0, 1);
  sub_770B70(&v20, &v23);
  --byte_2CCCD70;
LABEL_9:
  v15 = qword_2CD44C0;
  v16 = ++qword_2CD44C0;
  if ( *v15 != 69 )
    goto LABEL_46;
  return v20;
}
