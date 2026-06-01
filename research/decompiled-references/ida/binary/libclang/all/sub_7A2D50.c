void __fastcall sub_7A2D50(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rsi

  v2 = *(_QWORD *)(a2 + 18200);
  v3 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    do
    {
      v4 = *v3++;
      *(v3 - 1) = *(v3 - 1) & 3
                | (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2, v4 >> 3);
    }
    while ( *(unsigned __int64 **)(a1 + 8) != v3 );
  }
  *(_QWORD *)(a1 + 16) &= ~4uLL;
}

