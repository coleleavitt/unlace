__int64 __fastcall sub_AFAB80(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rax
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax

  v2 = *(_QWORD **)(a1 + 96);
  v3 = &v2[2 * *(unsigned int *)(a1 + 104)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_9;
    }
    while ( v3 != v2 )
    {
      sub_AEDEA0(v2[1], a2);
      v4 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v4;
        if ( *v4 > 1u )
          break;
        v4 += 2;
        if ( v3 == v4 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  v7 = v6 - a2;
  sub_AFA580(a1, *(_DWORD *)(v5 + 4LL * v7));
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = v7;
  return sub_965AE0(a1, a2);
}

