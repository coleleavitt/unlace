__int64 __fastcall sub_36D890(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // rsi

  v2 = *(_QWORD *)(a1 + 40);
  v4 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CCB488 )
  {
    v5 = *(_QWORD *)(qword_2CCB480 + 8 * v2);
    if ( v5 )
      v4 = (int)gen_file(
                  *(unsigned int *)(a1 + 8),
                  v5,
                  *(_QWORD *)(a1 + 72),
                  *(_QWORD *)(a1 + 104),
                  *(unsigned int *)(a1 + 136));
  }
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
