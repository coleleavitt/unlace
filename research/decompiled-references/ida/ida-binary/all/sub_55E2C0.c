__int64 __fastcall sub_55E2C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  int v7; // edx

  if ( (a1 & 1) != 0 )
    return 0;
  v3 = *(unsigned int *)(a1 + 36);
  v4 = v3 - 1;
  if ( (_DWORD)v3 )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 8 * (v4 - v3));
      if ( (v5 & 1) != 0 )
      {
        v6 = HIBYTE(v5);
        v7 = BYTE6(v5);
      }
      else
      {
        LODWORD(v6) = *(_DWORD *)(v5 + 16);
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( v7 + (_DWORD)v6 )
        break;
      if ( a2 == v5 || (unsigned __int8)sub_55E2C0(v5, a2) )
        return 1;
    }
    while ( v4-- != 0 );
  }
  return 0;
}
