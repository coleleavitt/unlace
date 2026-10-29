__int64 __fastcall sub_B39320(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = a1 + 64;
  v2 = 0;
  if ( *(int *)(a1 + 64) >> 8 != -1 )
  {
    do
    {
      v1 = *(_QWORD *)(v1 + 8);
      ++v2;
    }
    while ( v1 );
  }
  return v2;
}

