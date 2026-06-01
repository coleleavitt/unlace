__int64 __fastcall sub_4F2970(__int64 a1, _QWORD *a2, const char **a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 (*v6)(); // rax
  char v7; // r13
  __int64 v8; // r12
  const char *v9; // r14
  int v10; // eax
  int v11; // edx
  char v12; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  char v17; // al
  const char *v18; // rdx
  int v19; // eax
  const char **v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+1Ch] [rbp-3Ch] BYREF
  char *endptr[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *a4;
  endptr[1] = (char *)__readfsqword(0x28u);
  if ( v4 )
  {
    v6 = *(__int64 (**)())(*(_QWORD *)v4 + 8LL);
    if ( v6 != sub_4F1EC0 )
    {
      v20 = a3;
      v19 = ((__int64 (__fastcall *)(__int64, _QWORD *, const char **, __int64 *))v6)(v4, a2, a3, a4);
      if ( v19 == -1 )
        return 0;
      a3 = v20;
      if ( v19 == 1 )
        return 1;
    }
  }
  if ( !a3[1] )
  {
    v7 = 0;
    v8 = 1;
    v9 = &s1;
LABEL_5:
    v10 = *((_DWORD *)a4 + 6);
LABEL_6:
    v11 = 10;
    if ( (v10 & 2) != 0 )
    {
      v12 = *((_BYTE *)a4 + 8);
      v11 = 8;
      if ( v12 )
      {
        v11 = 16;
        if ( v12 != 2 )
          v11 = 10;
      }
    }
    goto LABEL_10;
  }
  v9 = *a3;
  v17 = **a3;
  if ( v17 == 45 )
  {
    v10 = *((_DWORD *)a4 + 6);
    if ( (v10 & 4) != 0 )
    {
      v17 = v9[1];
      v18 = v9 + 1;
      v7 = 1;
      v8 = -1;
      goto LABEL_23;
    }
    v7 = v10 & 1;
    if ( (v10 & 1) != 0 )
    {
LABEL_35:
      v7 = 0;
      v8 = 1;
      goto LABEL_6;
    }
    v17 = v9[1];
    v18 = v9 + 1;
    v8 = -1;
  }
  else if ( v17 == 43 )
  {
    v10 = *((_DWORD *)a4 + 6);
    if ( (v10 & 4) == 0 )
      goto LABEL_35;
    v17 = v9[1];
    v18 = v9 + 1;
    v7 = 1;
    v8 = 1;
  }
  else
  {
    v18 = *a3;
    v7 = 0;
    v8 = 1;
  }
LABEL_23:
  v9 = v18;
  if ( v17 != 48 )
    goto LABEL_5;
  if ( (v18[1] & 0xDF) == 0x58 )
  {
    v9 = v18 + 2;
    v11 = 16;
  }
  else
  {
    v9 = v18 + 1;
    v11 = 8;
  }
LABEL_10:
  v13 = strtoull(v9, endptr, v11);
  if ( !*endptr[0] || (a4[3] & 2) == 0 )
    goto LABEL_12;
  if ( (unsigned int)qsscanf(v9, "%d", &v21) == 1 )
  {
    v13 = v21;
LABEL_12:
    v14 = 0;
    if ( v7 )
    {
      v14 = a4[2];
      if ( v8 == -1 )
      {
        v15 = a4[2];
        if ( v13 <= v14 )
          v15 = v13;
        if ( (a4[3] & 1) != 0 )
          v13 = v15;
      }
    }
    *a2 = v14 + v13 * v8;
    return 1;
  }
  return 0;
}
