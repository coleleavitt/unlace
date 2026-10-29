__int64 sub_149D30()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = sub_192D00(17);
  if ( result )
  {
    result = (unsigned int)dword_244108;
    if ( dword_244108 != -1 )
    {
      result = (__int64)&qword_251410;
      v1 = qword_251410 + 232LL * dword_244108;
      if ( *(_BYTE *)(v1 + 112) )
      {
        result = sub_149900((int *)v1, (__int64 *)(v1 + 88));
        *(_BYTE *)(v1 + 112) = 0;
      }
    }
  }
  return result;
}

