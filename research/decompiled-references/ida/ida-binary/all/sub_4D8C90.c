__int64 __fastcall sub_4D8C90(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  unsigned int *v5; // rcx
  unsigned int v6; // esi

  result = 0;
  if ( a3 < a1[4] )
  {
    v4 = 16 * a3;
    v5 = (unsigned int *)(16 * a3 + a1[3]);
    v6 = v5[2];
    if ( v6 != 2 )
    {
      if ( v6 )
        return result;
      if ( (*(_BYTE *)(*a1 + 24 * a3 + 9) & 1) == 0 )
      {
        v5[2] = 2;
        return *(unsigned int *)(v4 + a1[3]);
      }
      *(_QWORD *)v5 = 0;
      v5 = (unsigned int *)(v4 + a1[3]);
    }
    return *v5;
  }
  return result;
}
