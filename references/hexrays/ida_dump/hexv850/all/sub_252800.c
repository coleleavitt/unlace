__int64 __fastcall sub_252800(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx

  v2 = **(_QWORD ***)(a1 + 72);
  if ( v2 )
  {
    v3 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v3 )
    {
      v5 = 0;
      goto LABEL_8;
    }
    v4 = 0;
    v5 = **(_QWORD **)(a1 + 72);
    if ( (*(_BYTE *)v3 & 2) != 0 )
      return v4;
    do
    {
      v6 = *(_QWORD *)(v3 + 24);
      if ( v6 < a2 || a2 == v6 && *(int *)(v3 + 32) < 0 )
      {
        v3 = *(_QWORD *)(v3 + 16);
      }
      else
      {
        v5 = v3;
        v3 = *(_QWORD *)(v3 + 8);
      }
    }
    while ( (*(_BYTE *)v3 & 2) == 0 );
    if ( v2 != (_QWORD *)v5 )
    {
LABEL_8:
      v4 = 0;
      if ( a2 >= *(_QWORD *)(v5 + 24) )
        LOBYTE(v4) = *(_DWORD *)(v5 + 32) <= 65;
      return v4;
    }
  }
  return 0;
}
