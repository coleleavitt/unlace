__int64 sub_178C10()
{
  unsigned int v0; // edx
  __int64 v1; // rax

  v0 = 7;
  if ( dbg )
  {
    v1 = *(_QWORD *)(dbg + 32LL);
    if ( (~v1 & 0x2800000000LL) == 0 && (v1 & 0x4000000000LL) != 0 )
    {
      if ( dword_8CC5E8 )
      {
        v0 = 3;
        if ( !byte_8CC5EC )
          return 7;
      }
      else
      {
        return 4 * (unsigned int)(dword_8CC5F0 <= 0) + 3;
      }
    }
  }
  return v0;
}
