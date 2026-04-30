__int64 __fastcall sub_240EA0(char a1, double a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax

  if ( a1 )
    goto LABEL_10;
  if ( (*(_BYTE *)(dbg + 33) & 2) != 0 )
  {
    if ( HIDWORD(qword_8CC340) )
    {
      v2 = (_DWORD *)qword_8CC430;
      v3 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
      if ( qword_8CC430 != v3 )
      {
        while ( HIDWORD(qword_8CC340) != *v2 )
        {
          v2 += 64;
          if ( (_DWORD *)v3 == v2 )
            goto LABEL_11;
        }
        if ( v2
          && (sub_240CF0((__int64)v2, (unsigned int)dword_8BA588, (unsigned int)dword_8BA594, a2)
           || sub_240CF0((__int64)v2, (unsigned int)dword_8BA584, (unsigned int)dword_8BA590, a2)) )
        {
LABEL_10:
          invalidate_dbgmem_config();
        }
      }
    }
  }
LABEL_11:
  result = invalidate_dbgmem_contents(-1, -1);
  HIDWORD(qword_8CC120) = 0;
  return result;
}
