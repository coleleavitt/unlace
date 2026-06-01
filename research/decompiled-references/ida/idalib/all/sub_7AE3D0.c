__int64 __fastcall sub_7AE3D0(__int64 a1, const char *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = a1 + 8;
    do
    {
      while ( 1 )
      {
        v5 = strcmp(*(const char **)(v3 + 32), a2);
        v6 = *(_QWORD *)(v3 + 16);
        v7 = *(_QWORD *)(v3 + 24);
        if ( v5 < 0 )
          break;
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v6 )
          goto LABEL_6;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v7 );
LABEL_6:
    if ( v2 != v4 && strcmp(a2, *(const char **)(v4 + 32)) >= 0 )
      return v4;
  }
  return v2;
}
