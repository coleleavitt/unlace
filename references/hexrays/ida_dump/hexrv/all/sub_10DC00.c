__int64 __fastcall sub_10DC00(__int64 a1, char a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *j; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 i; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v12 = 0;
  for ( i = 0; ; *(_QWORD *)&i = i + 1 )
  {
    if ( a2 && *(_DWORD *)(a1 + 352) != 1 )
    {
LABEL_21:
      v4 = v12;
      goto LABEL_22;
    }
    if ( sub_32BA00(a1) == 1 && (v7 = *(_QWORD *)(a1 + 56), *(_DWORD *)v7 == 55) && *(_BYTE *)(v7 + 32) == 7 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      v9 = *(unsigned int *)(v7 + 40);
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 64) )
      {
        if ( !under_debugger )
          sub_37DDE0(52719);
LABEL_34:
        BUG();
      }
      a1 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v9);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 48) || *(_DWORD *)(a1 + 76) != 3 )
        goto LABEL_21;
      a1 = *(_QWORD *)(a1 + 8);
    }
    if ( !a1 )
    {
      if ( !under_debugger )
        sub_37DDE0(51856);
      goto LABEL_34;
    }
    v4 = v12;
    v5 = (_QWORD *)(v12 + 8 * i);
    if ( (_QWORD *)v12 != v5 )
    {
      v6 = (_QWORD *)v12;
      while ( *v6 != a1 )
      {
        if ( v5 == ++v6 )
          goto LABEL_14;
      }
      if ( v5 != v6 )
        break;
    }
LABEL_14:
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      v12 = qvector_reserve(&v12, v12, i + 1, 8);
      v5 = (_QWORD *)(v12 + 8 * i);
    }
    *v5 = a1;
  }
  for ( j = v6 + 1; v5 != j; ++j )
  {
    if ( *(_DWORD *)(*j + 72LL) < *(_DWORD *)(a1 + 72) )
      a1 = *j;
  }
LABEL_22:
  if ( v4 )
  {
    *(_QWORD *)&i = 0;
    qfree(v4);
  }
  return a1;
}
