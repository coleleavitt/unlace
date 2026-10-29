__int64 __fastcall sub_4D8CF0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  int v5; // esi

  result = -1;
  if ( a3 < a1[4] )
  {
    v4 = (_DWORD *)(16 * a3 + a1[3]);
    v5 = v4[2];
    if ( v5 != 5 )
    {
      if ( v5 )
        return result;
      if ( (*(_BYTE *)(*a1 + 24 * a3 + 9) & 1) != 0 )
        *(_QWORD *)v4 = 0;
      else
        v4[2] = 5;
      v4 = (_DWORD *)(16 * a3 + a1[3]);
    }
    return *(_QWORD *)v4;
  }
  return result;
}
