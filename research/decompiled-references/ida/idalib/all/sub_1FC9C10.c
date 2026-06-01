__int64 __fastcall sub_1FC9C10(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 result; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 12));
  v3 = (*(_BYTE *)(a2 + 14) & 1) != 0 && *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 12) + 24) != 0;
  v4 = (__int64 *)(a2 + 24);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v3);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  v5 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 12);
  if ( v5 != a2 + 24 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    do
    {
      v7 = *v4;
      if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v6 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v7;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6) = v7;
      }
      ++v4;
      v6 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v6;
    }
    while ( (__int64 *)v5 != v4 );
  }
  if ( (*(_BYTE *)(a2 + 14) & 1) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 12) + 24);
    if ( v8 )
      sub_183F100(a1 + 32, v8);
  }
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 233;
  return result;
}
