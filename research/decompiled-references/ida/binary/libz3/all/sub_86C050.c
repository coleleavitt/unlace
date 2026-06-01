__int64 __fastcall sub_86C050(unsigned int *a1, __int64 a2)
{
  if ( a1[26] )
  {
    do
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 512LL))(a1);
    while ( a1[26]-- != 1 );
  }
  return sub_86BFC0(a1, a2);
}

