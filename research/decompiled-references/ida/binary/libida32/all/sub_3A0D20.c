bool __fastcall sub_3A0D20(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax

  v3 = *(_QWORD *)(a1 + 1616);
  if ( v3 )
  {
    v5 = a1 + 1608;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v3 + 16);
        v7 = *(_QWORD *)(v3 + 24);
        if ( *(_DWORD *)(v3 + 32) < a2 )
          break;
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v6 )
          goto LABEL_6;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v7 );
LABEL_6:
    v8 = -1;
    if ( v5 != a1 + 1608 && a2 >= *(_DWORD *)(v5 + 32) )
      v8 = *(_DWORD *)(v5 + 36) - 1;
  }
  else
  {
    v8 = -1;
  }
  *a3 = v8;
  sub_3A0A30(a1 + 1600, a2);
  return *a3 != -1;
}

