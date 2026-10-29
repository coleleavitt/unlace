__int64 __fastcall sub_7FF080(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_186B270(40LL * a1);
  if ( a1 )
  {
    v2 = result;
    do
    {
      *(_OWORD *)(v2 + 24) = 0;
      v2 += 40;
      *(_OWORD *)(v2 - 32) = 0;
      *(_QWORD *)(v2 - 40) = 0;
      *(_BYTE *)(v2 - 28) = 0;
      *(_DWORD *)(v2 - 16) = 1;
      *(_BYTE *)(v2 - 12) = 0;
    }
    while ( result + 40LL * a1 != v2 );
  }
  return result;
}

