__int64 __fastcall sub_1DFE520(__int64 *a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // r13
  void **v4; // rbp
  __int64 result; // rax

  v1 = *((_DWORD *)a1 + 22);
  if ( v1 )
  {
    v2 = 0;
    v3 = 8LL * (unsigned int)(v1 - 1) + 8;
    do
    {
      v4 = *(void ***)(a1[10] + v2);
      if ( v4 )
      {
        if ( *v4 != v4 + 2 )
          free(*v4);
        operator delete(v4, 0x30u);
      }
      v2 += 8;
    }
    while ( v3 != v2 );
  }
  result = *a1;
  *(_QWORD *)(*a1 + 11280) = a1[13];
  *((_BYTE *)a1 + 112) = 1;
  return result;
}
