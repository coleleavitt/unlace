__int64 __fastcall sub_416720(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v9; // rdi
  const char *v10; // rbp
  __int64 v11; // rax
  char *v12; // rbx
  __int64 v13; // r14
  __int64 i; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  void *v17; // r12
  char *v18; // rsi
  __int64 *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  _BOOL4 v29; // [rsp+1Ch] [rbp-7Ch]
  __int64 v30; // [rsp+20h] [rbp-78h] BYREF
  char v31; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v32[8]; // [rsp+30h] [rbp-68h] BYREF
  char *s1; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v34[88]; // [rsp+40h] [rbp-58h] BYREF

  v7 = sub_473420(a2);
  v29 = 0;
  if ( a3 != 1 )
  {
    if ( a3 != 2 )
    {
      sub_458930(a2, 1, a4, "?pattern?");
      return 1;
    }
    v9 = *(_QWORD *)(a4 + 8);
    v10 = *(const char **)(v9 + 8);
    if ( !v10 )
      v10 = (const char *)sub_47B3B0(v9);
    sub_473C40(a2, (_DWORD)v10, 0, 0, (unsigned int)&v30, (unsigned int)&v31, (__int64)v32, (__int64)&s1);
    if ( v30 )
    {
      v29 = strcmp(s1, v10) != 0;
      goto LABEL_8;
    }
    return 0;
  }
  s1 = nullptr;
  v30 = v7;
  if ( !v7 )
    return 0;
LABEL_8:
  v11 = sub_46EEB0(0, 0);
  v12 = s1;
  v13 = v11;
  if ( s1 && !strpbrk(s1, "*[?\\") )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, char *))(v30 + 224))(v30 + 160, v12);
    if ( v23 )
    {
      v24 = *(__int64 **)(v23 + 24);
      v25 = (__int64)v24;
      if ( sub_488860(v24) || (v28 = sub_474960(v24)) != 0 && (v25 = v28, sub_488860(v28)) )
      {
        if ( v29 )
        {
          v27 = sub_47B0B0(v25, v12, v26);
          sub_4072E0(a2, v24, v27);
        }
        else
        {
          v27 = sub_48DF10(s1, 0xFFFFFFFF);
        }
        sub_46FBF0(a2, v13, v27);
      }
    }
  }
  else
  {
    for ( i = sub_457E20(v30 + 160, v34); ; i = sub_457DE0(v34) )
    {
      v16 = i;
      if ( !i )
        break;
      v17 = (void *)(i + 32);
      if ( *(_DWORD *)(v30 + 220) == 1 || *(_DWORD *)(v30 + 220) == -1 )
        v17 = *(void **)(i + 32);
      v18 = s1;
      if ( !s1 || (unsigned int)sub_49EAC0(v17, s1) )
      {
        v19 = *(__int64 **)(v16 + 24);
        v20 = (__int64)v19;
        if ( sub_488860(v19) || (v22 = sub_474960(v19)) != 0 && (v20 = v22, sub_488860(v22)) )
        {
          if ( v29 )
          {
            v15 = sub_47B0B0(v20, v18, v21);
            sub_4072E0(a2, v19, v15);
          }
          else
          {
            v15 = sub_48DF10(v17, 0xFFFFFFFF);
          }
          sub_46FBF0(a2, v13, v15);
        }
      }
    }
  }
  sub_48AFD0(a2, v13);
  return 0;
}

