void __fastcall sub_3A2F40(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 i; // rdx
  __int64 v7; // r10
  __int64 v8; // r9

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  while ( 1 )
  {
    if ( !v2 )
    {
LABEL_5:
      sub_3A2EB0(a1, v3, v3);
      return;
    }
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 32);
      if ( v4 >= a2 )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        goto LABEL_5;
    }
    v5 = *(_QWORD *)(v2 + 16);
    if ( a2 >= v4 )
      break;
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  for ( i = *(_QWORD *)(v2 + 24); i; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(i + 24);
      if ( a2 < *(_DWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 24);
      if ( !v7 )
        goto LABEL_12;
    }
    v3 = i;
  }
LABEL_12:
  while ( v5 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 24);
      if ( *(_DWORD *)(v5 + 32) >= a2 )
        break;
      v5 = *(_QWORD *)(v5 + 24);
      if ( !v8 )
        goto LABEL_15;
    }
    v2 = v5;
    v5 = *(_QWORD *)(v5 + 16);
  }
LABEL_15:
  sub_3A2EB0(a1, v2, v3);
}

