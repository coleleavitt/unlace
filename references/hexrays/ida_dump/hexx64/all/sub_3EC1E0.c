__int64 __fastcall sub_3EC1E0(__int64 a1, _DWORD *a2, int *a3, _QWORD *a4)
{
  __int64 v6; // rsi
  int tinfo_size; // eax
  char tinfo_property; // al
  int v11; // edx
  int v12; // r12d
  unsigned int v13; // eax
  char *v14; // r12
  int v15; // r14d
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v6 = *a4;
  v18 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, v6, 0);
  *a3 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    tinfo_property = get_tinfo_property(*a4, 2);
    v11 = *a3;
    if ( (tinfo_property & 0xF) != 9 )
    {
      if ( a2[20] >= v11 || v11 == 8 )
      {
        s1 = nullptr;
        v12 = 8;
        *(_QWORD *)&v17 = 0;
LABEL_7:
        cleanup_argloc(&s1);
        LODWORD(s1) = 3;
        LODWORD(v17) = v12;
LABEL_12:
        *(_DWORD *)a1 = 0;
        copy_argloc(a1, &s1);
        cleanup_argloc(&s1);
        return a1;
      }
      if ( v11 == 16 )
        goto LABEL_15;
      goto LABEL_11;
    }
    v13 = (v11 - 4) & 0xFFFFFFFB;
    if ( a2[21] != 8 )
    {
      if ( v13 && v11 != a2[112] )
        goto LABEL_11;
      v12 = a2[130];
LABEL_16:
      s1 = nullptr;
      *(_QWORD *)&v17 = 0;
      if ( v12 == -1 )
        goto LABEL_12;
      goto LABEL_7;
    }
    if ( !v13 )
    {
LABEL_15:
      v12 = a2[140];
      goto LABEL_16;
    }
    if ( a2[112] != v11 )
    {
LABEL_11:
      s1 = nullptr;
      *(_QWORD *)&v17 = 0;
      goto LABEL_12;
    }
    if ( (getinf(57) & 0xF) != 6 )
    {
      s1 = nullptr;
      if ( (getinf(57) & 0xF) != 1 )
      {
LABEL_22:
        *(_QWORD *)&v17 = 0;
        goto LABEL_12;
      }
      v17 = 0;
      get_abi_name(&s1);
      v14 = s1;
      if ( !(_QWORD)v17 )
      {
        if ( s1 )
          qfree(s1);
        goto LABEL_29;
      }
      v15 = strcmp(s1, "mingw");
      if ( v14 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v14);
      }
      if ( v15 )
      {
LABEL_29:
        s1 = nullptr;
        goto LABEL_22;
      }
    }
    v12 = a2[130];
    goto LABEL_16;
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return a1;
}
