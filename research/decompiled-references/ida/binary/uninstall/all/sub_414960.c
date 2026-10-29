__int64 __fastcall sub_414960(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  signed int v7; // r13d
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rdi
  const char *v13; // r10
  signed int v14; // ebx
  __int64 v15; // rdi
  const char *v16; // r10
  __int64 v17; // rdi
  __int64 v18; // r10
  const char *v19; // rdx
  int v20; // ecx
  _QWORD *v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rsi
  __int64 result; // rax
  const char *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r10
  _DWORD v28[13]; // [rsp+4h] [rbp-34h] BYREF

  v7 = 0;
  v10 = 1;
  if ( a3 <= 1 )
  {
LABEL_15:
    v17 = *(_QWORD *)(a4 + 8LL * v10 - 8);
    v18 = *(_QWORD *)(v17 + 8);
    if ( !v18 )
      LODWORD(v18) = sub_47B3B0(v17);
    v19 = "no expression after \"";
    v20 = v18;
LABEL_34:
    sub_48B710(a2, (unsigned int)"wrong # args: ", (_DWORD)v19, v20, (unsigned int)"\" argument", 0);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      if ( !v7 )
      {
        result = sub_40A660(a2, *(_QWORD *)(a4 + 8LL * v10), (__int64)v28);
        if ( (_DWORD)result )
          return result;
      }
      v11 = v10 + 1;
      if ( v11 >= a3 )
        goto LABEL_31;
      v12 = *(_QWORD *)(a4 + 8LL * v11);
      v13 = *(const char **)(v12 + 8);
      if ( !v13 )
        v13 = (const char *)sub_47B3B0(v12);
      v11 += strcmp(v13, "then") == 0;
      if ( v11 >= a3 )
      {
LABEL_31:
        v26 = *(_QWORD *)(a4 + 8LL * v11 - 8);
        v27 = *(_QWORD *)(v26 + 8);
        if ( !v27 )
          LODWORD(v27) = sub_47B3B0(v26);
        v19 = "no script following \"";
        v20 = v27;
        goto LABEL_34;
      }
      if ( v28[0] )
      {
        v7 = v11;
        v28[0] = 0;
      }
      v14 = v11 + 1;
      if ( v14 >= a3 )
        break;
      v15 = *(_QWORD *)(a4 + 8LL * v14);
      v16 = *(const char **)(v15 + 8);
      if ( !v16 )
        v16 = (const char *)sub_47B3B0(v15);
      if ( *v16 != 101 || strcmp(v16, "elseif") )
      {
        if ( !strcmp(v16, "else") && (++v14, v14 >= a3) )
        {
          v25 = "no script following \"else\" argument";
        }
        else
        {
          if ( a3 - 1 <= v14 )
          {
            if ( v7 )
              goto LABEL_22;
            v21 = *(_QWORD **)(a2 + 952);
            v22 = v14;
            v23 = *(_QWORD *)(a4 + 8LL * v14);
            return sub_40B720(a2, v23, 0, v21, v22);
          }
          v25 = "extra words after \"else\" clause in \"if\" command";
        }
        sub_48B710(a2, (unsigned int)"wrong # args: ", (_DWORD)v25, 0, a5, a6);
        return 1;
      }
      v10 = v14 + 1;
      if ( v10 >= a3 )
        goto LABEL_15;
    }
    result = 0;
    if ( v7 )
    {
LABEL_22:
      v21 = *(_QWORD **)(a2 + 952);
      v22 = v7;
      v23 = *(_QWORD *)(a4 + 8LL * v7);
      return sub_40B720(a2, v23, 0, v21, v22);
    }
  }
  return result;
}

