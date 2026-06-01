void __fastcall sub_2049440(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi

  v2 = *(unsigned __int8 *)(a1 + a2 / 8 + 12);
  if ( _bittest(&v2, a2 % 8) )
  {
    v3 = a1 + 56;
    v4 = (8LL * *(unsigned int *)(a1 + 8) - 8LL * *(unsigned int *)(a1 + 40)) >> 3;
    if ( 8LL * *(unsigned int *)(a1 + 8) + 56 - 8LL * *(unsigned int *)(a1 + 40) > 56 )
    {
      do
      {
        while ( 1 )
        {
          v5 = v4 >> 1;
          v6 = v3 + 8 * (v4 >> 1);
          v7 = *(_QWORD *)v6 ? *(_DWORD *)(*(_QWORD *)v6 + 12LL) : 0;
          if ( a2 <= v7 )
            break;
          v3 = v6 + 8;
          v4 = v4 - v5 - 1;
          if ( v4 <= 0 )
            return;
        }
        v4 >>= 1;
      }
      while ( v5 );
    }
  }
}
