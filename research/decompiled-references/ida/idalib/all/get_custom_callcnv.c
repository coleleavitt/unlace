void __fastcall get_custom_callcnv(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdi

  v7 = *(_QWORD *)(qword_2CCB598 + 1560);
  v1 = *(_QWORD *)(v7 + 16);
  v2 = v7 + 8;
  if ( !v1 )
    goto LABEL_8;
  v3 = v7 + 8;
  do
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v1 + 16);
      v5 = *(_QWORD *)(v1 + 24);
      if ( *(_DWORD *)(v1 + 32) >= a1 )
        break;
      v1 = *(_QWORD *)(v1 + 24);
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = v1;
    v1 = *(_QWORD *)(v1 + 16);
  }
  while ( v4 );
LABEL_6:
  if ( v2 == v3 || a1 < *(_DWORD *)(v3 + 32) )
LABEL_8:
    nullsub_1535();
}
