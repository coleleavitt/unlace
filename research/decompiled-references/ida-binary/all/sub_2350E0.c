void sub_2350E0()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = qword_8CC390;
  v1 = qword_8CC390 + 56 * xmmword_8CC398;
  if ( v1 != qword_8CC390 )
  {
    if ( ((56 * (_BYTE)xmmword_8CC398) & 8) == 0 || (*(_BYTE *)(qword_8CC390 + 35) = 0, v0 += 56, v0 != v1) )
    {
      do
      {
        *(_BYTE *)(v0 + 35) = 0;
        v0 += 112;
        *(_BYTE *)(v0 - 21) = 0;
      }
      while ( v0 != v1 );
    }
  }
  sub_1E32C0(0xFFu);
}
