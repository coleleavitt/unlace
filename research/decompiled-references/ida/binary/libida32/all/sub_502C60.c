__int64 __fastcall sub_502C60(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  signed int v5; // ebx
  unsigned int v6; // edx

  v2 = sub_4EE820(a1 + 1552, a2);
  if ( !v2 || *v2 != (_DWORD)a2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_DWORD *)(v4 + 68);
    if ( v5 <= *(_DWORD *)(v4 + 72) )
    {
      do
      {
        v6 = v5++;
        sub_501830(a1, (unsigned int)a2, v6, v3);
      }
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) >= v5 );
    }
  }
  return 1;
}

