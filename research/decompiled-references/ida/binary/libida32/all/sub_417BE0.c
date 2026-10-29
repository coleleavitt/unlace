char __fastcall sub_417BE0(__int64 a1, int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx

  LOBYTE(v3) = 1;
  if ( a3 == 78 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = a2 - *(_DWORD *)(v4 + 104);
    v6 = v4 + 64;
    v3 = *(_QWORD *)(v4 + 72);
    if ( v3 )
    {
      v7 = v6;
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v3 + 16);
          v9 = *(_QWORD *)(v3 + 24);
          if ( *(_DWORD *)(v3 + 32) < v5 )
            break;
          v7 = v3;
          v3 = *(_QWORD *)(v3 + 16);
          if ( !v8 )
            goto LABEL_7;
        }
        v3 = *(_QWORD *)(v3 + 24);
      }
      while ( v9 );
LABEL_7:
      if ( v6 != v7 )
        LOBYTE(v3) = v5 >= *(_DWORD *)(v7 + 32);
    }
    else
    {
      LOBYTE(v3) = 0;
    }
  }
  return v3;
}

