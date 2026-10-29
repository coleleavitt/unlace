unsigned __int64 __fastcall sub_1BCD380(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int16 v3; // r8
  __int64 v4; // rcx
  _DWORD *v5; // r9
  _DWORD *v6; // r9
  unsigned __int64 v7; // rax

  result = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x80000) != 0 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    v4 = 8LL * *(unsigned int *)(a1 + 4);
    v5 = (_DWORD *)(a1 + v4 + 80);
    if ( v3 == 24 )
      v5 = (_DWORD *)(a1 + v4 + 64);
    if ( *v5 )
    {
      if ( (result & 0x80000) != 0 )
      {
        v6 = (_DWORD *)(a1 + v4 + 80);
        if ( v3 == 24 )
          v6 = (_DWORD *)(a1 + v4 + 64);
      }
      else
      {
        v6 = nullptr;
      }
      v7 = result >> 16;
      if ( (v7 & 8) == 0 )
        return sub_F1EA70(v6, 0, a2);
      if ( v3 == 24 )
      {
        if ( *(_DWORD *)(a1 + v4 + 64) )
          return sub_F1EA70(v6, a1 + v4 + 16LL * ((v7 & 8) != 0) + 64, a2);
        return sub_F1EA70(v6, 0, a2);
      }
      if ( !*(_DWORD *)(a1 + v4 + 80) )
        return sub_F1EA70(v6, 0, a2);
      return sub_F1EA70(v6, a1 + v4 + 16LL * ((v7 & 8) != 0) + 80, a2);
    }
  }
  return result;
}
