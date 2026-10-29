__int64 __fastcall sub_51A980(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // rax
  signed int v4; // ebx
  unsigned int v5; // edx

  v2 = sub_505D70(a1 + 1624, a2);
  if ( !v2 || *v2 != a2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_DWORD *)(v3 + 68);
    if ( v4 <= *(_DWORD *)(v3 + 72) )
    {
      do
      {
        v5 = v4++;
        sub_5194D0(a1, a2, v5);
      }
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) >= v4 );
    }
  }
  return 1;
}
