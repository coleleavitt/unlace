__int64 sub_14A4F0()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = sub_193900(17);
  if ( result )
  {
    result = (unsigned int)dword_245160;
    if ( dword_245160 != -1 )
    {
      result = (__int64)&qword_252590;
      v1 = qword_252590 + ((__int64)dword_245160 << 8);
      if ( *(_BYTE *)(v1 + 112) )
      {
        result = sub_14A080((int *)v1, (__int64 *)(v1 + 88));
        *(_BYTE *)(v1 + 112) = 0;
      }
    }
  }
  return result;
}

