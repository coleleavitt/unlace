__int64 __fastcall sub_176780(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  unsigned __int64 v4; // rdx
  int v5; // esi
  unsigned __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r10
  int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  int v14; // ecx

  if ( !*((_BYTE *)a1 + 28) )
    return (unsigned int)-1;
  v2 = a1[1];
  if ( !v2 )
    return (unsigned int)-1;
  v3 = *(__int16 *)(a2 + 4);
  v4 = *(__int16 *)(a2 + 6);
  v5 = *(__int16 *)(a2 + 6);
  if ( (_WORD)v3 || v2 != v4 )
  {
    v6 = v2 - 1;
    v7 = v2 - 1;
    if ( v4 >= v6 )
      v5 = v7;
    if ( v5 < 0 )
    {
      return 0;
    }
    else
    {
      v8 = *a1;
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = *(_QWORD *)(v8 + 24LL * v9 + 8);
        v12 = v11 == 0;
        v13 = v11 - 1;
        v14 = v3;
        if ( v12 )
          v13 = 0;
        if ( v13 <= v3 )
          v14 = v13;
        if ( v5 == v9 )
          v13 = v14;
        ++v9;
        v10 += v13;
      }
      while ( v5 >= v9 );
    }
    return v10;
  }
  return *((unsigned int *)a1 + 6);
}
