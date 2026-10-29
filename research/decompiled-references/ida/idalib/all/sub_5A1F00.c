unsigned __int64 __fastcall sub_5A1F00(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ecx

  result = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(result + 8);
  if ( v3 )
  {
    v4 = *(_QWORD *)result;
    v5 = 56 * v3;
    v6 = v4 + 56 * v3;
    if ( 56 * v3 )
    {
      v5 = 0;
      do
      {
        v5 += *(_QWORD *)(v4 + 24);
        v4 += 56;
      }
      while ( v4 != v6 );
    }
    v7 = v3 + 1;
    result = (unsigned int)(2 * v7);
    if ( a2 < 0 )
      v7 *= 2;
    v3 = v5 + v7;
  }
  *(_QWORD *)(a1 + 24) = v3;
  return result;
}
