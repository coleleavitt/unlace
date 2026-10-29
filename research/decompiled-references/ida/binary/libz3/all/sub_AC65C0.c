__int64 __fastcall sub_AC65C0(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = sub_186B270(56LL * a1);
  if ( a1 )
  {
    v2 = result;
    do
    {
      *(_OWORD *)(v2 + 24) = 0;
      v2 += 56;
      *(_OWORD *)(v2 - 48) = 0;
      *(_QWORD *)(v2 - 56) = 0;
      *(_BYTE *)(v2 - 44) = 0;
      *(_DWORD *)(v2 - 32) = 1;
      *(_BYTE *)(v2 - 28) = 0;
      *(_DWORD *)(v2 - 16) = 0;
    }
    while ( v2 != result + 56LL * a1 );
  }
  return result;
}

