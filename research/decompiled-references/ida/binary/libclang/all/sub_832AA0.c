__int64 __fastcall sub_832AA0(__int64 a1, void *a2)
{
  void **v2; // rbp
  __int64 v3; // rdx
  unsigned int v4; // ebx
  void *v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // rsi
  __int64 v12; // rax
  void *v13; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-50h]
  unsigned __int8 v15; // [rsp+1Ch] [rbp-4Ch]
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h]
  char v18; // [rsp+2Ch] [rbp-3Ch]
  void *v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-30h]
  char v21; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-20h]

  v3 = *(unsigned int *)(a1 + 8);
  v14 = 64;
  v13 = a2;
  v15 = 0;
  if ( (_DWORD)v3 == 64 )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      LODWORD(v2) = 0;
      if ( (__int64)a2 >= 0 )
        LOBYTE(v2) = (int)sub_25867A0(a1, &v13) <= 0;
    }
    else
    {
      LOBYTE(v2) = (int)sub_2586820(a1, &v13) <= 0;
    }
    return (unsigned int)v2;
  }
  if ( (unsigned int)v3 > 0x40 )
  {
    v2 = (void **)&v22;
    sub_2587BE0(&v22, &v13, v3);
    v7 = v23;
    v18 = 0;
    v8 = *(unsigned int *)(a1 + 8);
    v17 = v23;
    v16 = (void *)v22;
    if ( (_DWORD)v8 == v23 )
    {
      if ( *(_BYTE *)(a1 + 12) )
      {
        v11 = 1LL << ((unsigned __int8)v8 - 1);
        if ( (unsigned int)v8 <= 0x40 )
        {
          LODWORD(v2) = 0;
          if ( (v22 & v11) == 0 )
            LOBYTE(v2) = (int)sub_25867A0(a1, &v16) <= 0;
          goto LABEL_23;
        }
        LODWORD(v2) = 0;
        if ( (*(_QWORD *)(v22 + 8LL * ((unsigned int)(v8 - 1) >> 6)) & v11) == 0 )
          LOBYTE(v2) = (int)sub_25867A0(a1, &v16) <= 0;
        goto LABEL_20;
      }
      v9 = sub_2586820(a1, &v16);
LABEL_19:
      LOBYTE(v2) = v9 <= 0;
      if ( v7 <= 0x40 )
      {
LABEL_23:
        v6 = v14;
        goto LABEL_24;
      }
      goto LABEL_20;
    }
    if ( v23 < (unsigned int)v8 )
    {
      sub_2587BE0(&v22, &v16, v8);
      v21 = 0;
      v20 = v23;
      v19 = (void *)v22;
      v9 = sub_804370((__int64 *)a1, (__int64 *)&v19);
      if ( v20 <= 0x40 )
      {
LABEL_18:
        v7 = v17;
        goto LABEL_19;
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 12) )
      {
        sub_2587D60(&v22, a1);
        v21 = 1;
      }
      else
      {
        sub_2587BE0(&v22, a1, v23);
        v21 = 0;
      }
      v20 = v23;
      v19 = (void *)v22;
      v9 = sub_804370((__int64 *)&v19, (__int64 *)&v16);
      if ( v20 <= 0x40 )
        goto LABEL_18;
    }
    if ( v19 )
      operator delete[](v19);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 12) )
  {
    sub_2587D60(&v22, a1);
    v4 = v23;
    v5 = (void *)v22;
    v18 = 1;
    v17 = v23;
    v16 = (void *)v22;
    if ( v14 != v23 )
    {
      if ( v14 >= v23 )
      {
        sub_2587D60(&v22, &v16);
        v21 = 1;
        v20 = v23;
        v19 = (void *)v22;
        goto LABEL_7;
      }
      goto LABEL_37;
    }
    LODWORD(v2) = v15;
    v12 = 1LL << ((unsigned __int8)v23 - 1);
    if ( v23 > 0x40 )
    {
      if ( (*((_QWORD *)v13 + ((v23 - 1) >> 6)) & v12) != 0 )
      {
LABEL_21:
        if ( v5 )
          operator delete[](v5);
        goto LABEL_23;
      }
    }
    else if ( (v12 & (unsigned __int64)v13) != 0 )
    {
      return (unsigned int)v2;
    }
    LODWORD(v2) = sub_25867A0(&v16, &v13);
  }
  else
  {
    sub_2587BE0(&v22, a1, 64);
    v4 = v23;
    v18 = 0;
    v17 = v23;
    v16 = (void *)v22;
    if ( v14 != v23 )
    {
      if ( v14 >= v23 )
      {
        sub_2587BE0(&v22, &v16, v14);
        v21 = 0;
        v20 = v23;
        v19 = (void *)v22;
LABEL_7:
        LODWORD(v2) = sub_804370((__int64 *)&v19, (__int64 *)&v13);
        if ( v20 > 0x40 )
          goto LABEL_8;
        goto LABEL_10;
      }
LABEL_37:
      sub_2587BE0(&v22, &v13, v4);
      v21 = 0;
      v20 = v23;
      v19 = (void *)v22;
      LODWORD(v2) = sub_804370((__int64 *)&v16, (__int64 *)&v19);
      if ( v20 > 0x40 )
      {
LABEL_8:
        if ( v19 )
          operator delete[](v19);
      }
LABEL_10:
      v4 = v17;
      goto LABEL_11;
    }
    LODWORD(v2) = sub_2586820(&v16, &v13);
  }
LABEL_11:
  LOBYTE(v2) = (int)v2 <= 0;
  if ( v4 > 0x40 )
  {
LABEL_20:
    v5 = v16;
    goto LABEL_21;
  }
  v6 = v14;
LABEL_24:
  if ( v6 > 0x40 && v13 )
  {
    operator delete[](v13);
    return (unsigned int)v2;
  }
  return (unsigned int)v2;
}

