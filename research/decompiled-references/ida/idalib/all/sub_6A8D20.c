__int64 __fastcall sub_6A8D20(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r8
  __int64 v3; // rdi
  __int64 v4; // r8

  result = sub_6A5CB0(a1 + 40, 1u);
  if ( !(_BYTE)result )
  {
    v3 = *v2;
    if ( *v2 + 80 * v2[1] != *v2 )
    {
      do
      {
        result = sub_6A5CB0(v3, 0);
        if ( (_BYTE)result )
          break;
        v3 += 80;
      }
      while ( v4 != v3 );
    }
  }
  return result;
}
