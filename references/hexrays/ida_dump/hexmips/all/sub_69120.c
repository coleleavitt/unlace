__int64 __fastcall sub_69120(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // rdx

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 48) + 24LL * a2;
  v6 = *(_DWORD **)v5;
  v7 = *(_QWORD *)v5 + 4LL * *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)v5 == v7 )
    goto LABEL_14;
  while ( *v6 != (_DWORD)v4 )
  {
    if ( (_DWORD *)v7 == ++v6 )
      goto LABEL_14;
  }
  if ( (_DWORD *)v7 == v6 )
  {
LABEL_14:
    result = 0;
  }
  else
  {
    memmove(v6, v6 + 1, v7 - (_QWORD)v6 - 4);
    --*(_QWORD *)(v5 + 8);
    result = 1;
  }
  v9 = *(_QWORD *)(a1 + 72) + 24 * v4;
  v10 = *(_DWORD **)v9;
  v11 = *(_QWORD *)v9 + 4LL * *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)v9 != v11 )
  {
    while ( *v10 != a2 )
    {
      if ( (_DWORD *)v11 == ++v10 )
        return result;
    }
    if ( (_DWORD *)v11 != v10 )
    {
      memmove(v10, v10 + 1, v11 - (_QWORD)v10 - 4);
      --*(_QWORD *)(v9 + 8);
      return 1;
    }
  }
  return result;
}
