__int64 __fastcall sub_91E0(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rbp

  result = get_sreg(*(_QWORD *)(a1 + 16), 34);
  if ( result != -1 )
  {
    v2 = *(unsigned __int16 *)(a1 + 24);
    if ( (unsigned __int16)v2 <= 0x13u )
    {
      if ( !(_WORD)v2 )
        return result;
      v3 = 666154;
      if ( !_bittest64(&v3, v2) || (*(_QWORD *)(a1 + 80) & 0xFFFF00000000FF00LL) != 0x1D000000000400LL )
        return result;
      v4 = *(int *)(a1 + 96);
LABEL_10:
      v5 = result + v4;
      result = is_mapped(v5);
      if ( (_BYTE)result )
      {
        *(_BYTE *)(a1 + 81) = 2;
        *(_QWORD *)(a1 + 96) = v5;
      }
      return result;
    }
    if ( (_WORD)v2 == 114 && *(_BYTE *)(a1 + 81) == 5 )
    {
      v4 = *(int *)(a1 + 88);
      goto LABEL_10;
    }
  }
  return result;
}
