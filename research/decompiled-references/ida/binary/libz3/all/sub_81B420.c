__int64 __fastcall sub_81B420(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD **v5; // r13
  __int64 v6; // rcx
  _QWORD **v7; // rbx
  _QWORD *v8; // rbp

  sub_7E4990(a1, a2);
  result = *(_QWORD *)(a1 + 312);
  v3 = *(_QWORD *)(a1 + 88);
  if ( result )
  {
    v4 = 8LL * *(unsigned int *)(result - 4);
    v5 = (_QWORD **)(result + v4);
    if ( v3 )
    {
      v6 = 8LL * *(unsigned int *)(v3 - 4);
      v7 = (_QWORD **)(result + v6);
      if ( v4 != v6 )
        goto LABEL_4;
      LODWORD(v4) = *(_DWORD *)(v3 - 4);
LABEL_12:
      *(_DWORD *)(result - 4) = v4;
      return result;
    }
    v7 = *(_QWORD ***)(a1 + 312);
    result += v4;
    if ( !v4 )
      goto LABEL_12;
  }
  else
  {
    if ( !v3 )
      return result;
    v7 = (_QWORD **)(8LL * *(unsigned int *)(v3 - 4));
    if ( !v7 )
      return result;
    v5 = nullptr;
  }
  do
  {
LABEL_4:
    v8 = *v7;
    if ( *v7 )
    {
      if ( *v8 )
        sub_186B220((void *)(*v8 - 8LL));
      sub_186B220(v8);
    }
    ++v7;
  }
  while ( v7 != v5 );
  v4 = *(_QWORD *)(a1 + 88);
  result = *(_QWORD *)(a1 + 312);
  if ( v4 )
    LODWORD(v4) = *(_DWORD *)(v4 - 4);
  else
    LODWORD(v4) = 0;
  if ( result )
    goto LABEL_12;
  return result;
}

