__int64 __fastcall sub_2209840(__int64 *a1, int a2)
{
  __int64 result; // rax
  int v4; // eax
  _QWORD *v5; // rdi
  int v7; // eax

  result = 0xFFFFFFFFLL;
  if ( a2 )
  {
    _RDX = *a1;
    v4 = 0;
    v5 = a1 + 1;
    if ( _RDX )
    {
      v7 = 0;
    }
    else
    {
      do
      {
        if ( a2 == ++v4 )
          return 0xFFFFFFFFLL;
        _RDX = *v5++;
      }
      while ( !_RDX );
      v7 = v4 << 6;
    }
    __asm { tzcnt   rdx, rdx }
    return (unsigned int)(_RDX + v7);
  }
  return result;
}
