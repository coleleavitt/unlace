__int64 __fastcall sub_8E89C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi

  v2 = 8LL * a2;
  result = *(_QWORD *)(a1 + 9456);
  v5 = result + v2;
  if ( result )
  {
    v6 = 8LL * *(unsigned int *)(result - 4);
    v7 = result + v6;
    if ( v2 == v6 )
    {
LABEL_5:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v7 = 0;
    if ( !v2 )
      return result;
  }
  do
  {
    v8 = *(_QWORD *)(v7 - 8);
    v7 -= 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  while ( v5 != v7 );
  result = *(_QWORD *)(a1 + 9456);
  if ( result )
    goto LABEL_5;
  return result;
}

