__int64 __fastcall sub_28D80(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 320);
  HIDWORD(v8) = 0;
  v3 = a1 + 312;
  if ( !v2 )
    goto LABEL_9;
  v4 = a1 + 312;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_QWORD *)(v2 + 24);
      if ( *(_DWORD *)(v2 + 32) >= a2 )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = v2;
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v5 );
LABEL_6:
  if ( v3 == v4 )
  {
LABEL_9:
    LOBYTE(v2) = 0;
  }
  else if ( *(_DWORD *)(v4 + 32) <= a2 )
  {
    BYTE4(v8) = 1;
    LODWORD(v8) = *(_DWORD *)(v4 + 36);
    return v8;
  }
  BYTE4(v8) = v2;
  LODWORD(v8) = 0;
  return v8;
}
