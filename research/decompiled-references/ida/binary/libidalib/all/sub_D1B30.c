__int64 __fastcall sub_D1B30(char a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rax
  __int64 result; // rax

  if ( a1 )
    goto LABEL_10;
  if ( (*(_BYTE *)(dbg + 33LL) & 2) != 0 )
  {
    if ( HIDWORD(qword_2524A0) )
    {
      v1 = (_DWORD *)qword_252590;
      v2 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
      if ( qword_252590 != v2 )
      {
        while ( HIDWORD(qword_2524A0) != *v1 )
        {
          v1 += 64;
          if ( (_DWORD *)v2 == v1 )
            goto LABEL_11;
        }
        if ( v1
          && (sub_D1980((__int64)v1, dword_245168, dword_245174) || sub_D1980((__int64)v1, dword_245164, dword_245170)) )
        {
LABEL_10:
          invalidate_dbgmem_config();
        }
      }
    }
  }
LABEL_11:
  result = invalidate_dbgmem_contents();
  HIDWORD(qword_252280) = 0;
  return result;
}

