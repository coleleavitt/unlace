__int64 __fastcall get_aflags(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  v2 = v1 + 1440;
  result = *(_QWORD *)(v1 + 1448);
  if ( !result )
    return 0;
  v4 = v2;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(result + 16);
      v6 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) >= a1 )
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
  if ( v2 != v4 && a1 >= *(_DWORD *)(v4 + 32) )
    return *(unsigned int *)(v4 + 36);
  return result;
}

