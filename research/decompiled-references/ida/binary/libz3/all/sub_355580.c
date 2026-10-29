__int64 __fastcall sub_355580(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_186B270(56LL * a1);
  if ( a1 )
  {
    v2 = result;
    do
    {
      *(_OWORD *)(v2 + 40) = 0;
      v2 += 56;
      *(_OWORD *)(v2 - 32) = 0;
      *(_QWORD *)(v2 - 56) = 0;
      *(_OWORD *)(v2 - 48) = 0;
      *(_BYTE *)(v2 - 28) = 0;
      *(_DWORD *)(v2 - 16) = 1;
      *(_BYTE *)(v2 - 12) = 0;
    }
    while ( result + 56LL * a1 != v2 );
  }
  return result;
}

