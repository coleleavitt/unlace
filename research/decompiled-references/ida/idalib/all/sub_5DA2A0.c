__int64 __fastcall sub_5DA2A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = *(_QWORD *)(a1 + 1056);
  if ( !v3 )
    return sub_5D9EE0(a1, a2, a3);
  v4 = a1 + 1048;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v3 + 16);
      v6 = *(_QWORD *)(v3 + 24);
      if ( *(_DWORD *)(v3 + 32) >= a3 )
        break;
      v3 = *(_QWORD *)(v3 + 24);
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 1048 != v4 && a3 >= *(_DWORD *)(v4 + 32) )
    return *(unsigned int *)(v4 + 36);
  else
    return sub_5D9EE0(a1, a2, a3);
}
