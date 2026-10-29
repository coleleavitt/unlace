__int64 __fastcall sub_4DC440(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1560LL);
  v3 = v2 + 16;
  result = *(_QWORD *)(v2 + 24);
  if ( !result )
    return 0;
  v5 = v3;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(result + 16);
      v7 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) >= a2 )
        break;
      result = *(_QWORD *)(result + 24);
      if ( !v7 )
        goto LABEL_6;
    }
    v5 = result;
    result = *(_QWORD *)(result + 16);
  }
  while ( v6 );
LABEL_6:
  if ( v3 != v5 && a2 >= *(_DWORD *)(v5 + 32) )
    return *(unsigned int *)(v5 + 36);
  return result;
}

