__int64 __fastcall sub_64CA30(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx

  if ( !a2 )
    return 0;
  v3 = (_QWORD *)a1[1];
  v4 = a1[2];
  v5 = &v3[v4];
  if ( v3 == v5 )
    goto LABEL_9;
  v6 = (_QWORD *)a1[1];
  while ( *v6 != a2 )
  {
    if ( v5 == ++v6 )
      goto LABEL_9;
  }
  if ( v5 == v6 )
  {
LABEL_9:
    v8 = v4 + 1;
    if ( a1[3] < v8 )
    {
      v9 = qvector_reserve(a1 + 1, v3, v8, 8);
      v10 = a1[2];
      a1[1] = v9;
      v5 = (_QWORD *)(v9 + 8 * v10);
    }
    *v5 = a2;
    ++a1[2];
    ++*(_DWORD *)(a2 + 80);
    return 1;
  }
  else
  {
    ++*(_DWORD *)(a2 + 80);
    return 0;
  }
}
