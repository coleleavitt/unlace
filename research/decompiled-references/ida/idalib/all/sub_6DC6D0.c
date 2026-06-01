__int64 __fastcall sub_6DC6D0(__int64 a1, __int64 *a2, const char *a3)
{
  const char *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  const char *v8; // rdi
  int v9; // r14d
  unsigned int v10; // r13d
  const char *v11; // rbx
  char *v12; // rax
  char *v13; // r15

  v4 = a3;
  if ( a3 && (v5 = *(_QWORD *)(a1 + 568)) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 560);
    v7 = 0;
    while ( 1 )
    {
      v8 = haystack;
      if ( *(_QWORD *)(v6 + 32) )
        v8 = *(const char **)(v6 + 24);
      if ( !strcmp(v8, v4) )
        break;
      ++v7;
      v6 += 56;
      if ( v5 == v7 )
        goto LABEL_9;
    }
    v9 = *(_DWORD *)(v6 + 48);
    v4 = *(const char **)v6;
  }
  else
  {
LABEL_9:
    LOBYTE(v9) = 0;
  }
  v10 = sub_6DC2B0(a1, a2, v4);
  if ( (_BYTE)v10 )
  {
    return 1;
  }
  else if ( (*(_BYTE *)(a1 + 122) & 8) != 0 && (v9 & 1) == 0 )
  {
    v11 = v4;
    while ( 1 )
    {
      v12 = strstr(v11, "::");
      v13 = v12;
      if ( !v12
        || !(unsigned __int8)sub_6AB030(*(_QWORD *)(*(_QWORD *)a1 + 1672LL), v11, v12 - v11)
        || v11 != v4 && !(unsigned __int8)sub_6AB030(*(_QWORD *)(*(_QWORD *)a1 + 1672LL), v4, v13 - v4) )
      {
        break;
      }
      v11 = v13 + 2;
      if ( (unsigned __int8)sub_6DC2B0(a1, a2, v13 + 2) )
        return 1;
    }
  }
  return v10;
}
