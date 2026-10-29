__int64 __fastcall sub_174000(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v2 + 1;
  if ( v2 < a2 )
  {
    do
    {
      qfputc();
      v3 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v3 + 1;
    }
    while ( v3 < a2 );
  }
  return qfputs();
}

