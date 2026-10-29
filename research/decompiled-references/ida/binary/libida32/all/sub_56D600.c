__int64 __fastcall sub_56D600(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = *(_QWORD *)(a1 + 32);
  v3 = a1 + 24;
  if ( !result )
    return 0;
  v4 = a1 + 24;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(result + 16);
      v6 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) >= a2 )
        break;
      result = *(_QWORD *)(result + 24);
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = result;
    result = *(_QWORD *)(result + 16);
  }
  while ( v5 );
LABEL_6:
  if ( v3 != v4 && a2 >= *(_DWORD *)(v4 + 32) )
    return *(unsigned int *)(v4 + 36);
  return result;
}

