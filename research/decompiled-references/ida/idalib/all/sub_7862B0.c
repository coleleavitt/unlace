__int64 __fastcall sub_7862B0(_QWORD *a1, const char *a2, int *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // rax
  const char *v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // edx
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  int v14; // r15d
  __int64 v15; // rax
  const char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // r13
  const char *v22; // rdi

  v4 = a1[15];
  if ( v4 )
  {
    v5 = a1[14];
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = haystack;
      v9 = v5 + 24 * v7;
      if ( *(_QWORD *)(v9 + 8) )
        v8 = *(const char **)v9;
      if ( !strcmp(v8, a2) )
        break;
      v7 = ++v6;
      if ( v6 >= v4 )
        goto LABEL_11;
    }
    result = v6;
    v11 = 1;
  }
  else
  {
LABEL_11:
    v12 = a1[18];
    if ( v12 )
    {
      v13 = a1[17];
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = haystack;
        v17 = v13 + 24 * v15;
        if ( *(_QWORD *)(v17 + 8) )
          v16 = *(const char **)v17;
        if ( !strcmp(v16, a2) )
          break;
        v15 = ++v14;
        if ( v14 >= v12 )
          goto LABEL_18;
      }
      result = v14;
      v11 = 2;
    }
    else
    {
LABEL_18:
      v18 = a1[13];
      v19 = *(_QWORD *)(v18 + 96);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v18 + 88);
        v21 = 0;
        while ( 1 )
        {
          v22 = haystack;
          if ( *(_QWORD *)(v20 + 8) )
            v22 = *(const char **)v20;
          if ( !strcmp(v22, a2) )
            break;
          ++v21;
          v20 += 56;
          if ( v21 == v19 )
            goto LABEL_25;
        }
        result = v21;
        v11 = 3;
      }
      else
      {
LABEL_25:
        if ( sub_78D960(v18, a2) )
        {
          v11 = 5;
          result = -1;
        }
        else if ( (unsigned int)sub_78DBE0(a1[13], a2) == 0x7FFFFFFF )
        {
          if ( off_2C7C660 )
            off_2C7C660();
          v11 = 0;
          result = -1;
        }
        else
        {
          v11 = 6;
          result = -1;
        }
      }
    }
  }
  if ( a3 )
    *a3 = v11;
  return result;
}
