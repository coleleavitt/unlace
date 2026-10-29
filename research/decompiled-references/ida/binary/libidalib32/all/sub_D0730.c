__int64 __fastcall sub_D0730(char a1)
{
  _DWORD *v1; // rbx
  _DWORD *v2; // rax
  __int64 result; // rax

  if ( a1 )
    goto LABEL_10;
  if ( (*(_BYTE *)(dbg + 33LL) & 2) != 0 )
  {
    if ( HIDWORD(qword_251320) )
    {
      v1 = (_DWORD *)qword_251410;
      v2 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
      if ( (_DWORD *)qword_251410 != v2 )
      {
        while ( HIDWORD(qword_251320) != *v1 )
        {
          v1 += 58;
          if ( v2 == v1 )
            goto LABEL_11;
        }
        if ( v1
          && (sub_D0580((__int64)v1, dword_244110, dword_24411C) || sub_D0580((__int64)v1, dword_24410C, dword_244118)) )
        {
LABEL_10:
          invalidate_dbgmem_config();
        }
      }
    }
  }
LABEL_11:
  result = invalidate_dbgmem_contents();
  HIDWORD(qword_2511A0) = 0;
  return result;
}

