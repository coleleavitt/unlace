__int64 __fastcall sub_1FC9590(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r14

  v2 = (__int64 *)(a2 + 24);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (unsigned int)*(unsigned __int16 *)(a2 + 4) - 1);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 6));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  result = *(unsigned __int16 *)(a2 + 4);
  v4 = a2 + 8 * result + 16;
  if ( v4 != a2 + 24 )
  {
    result = *(unsigned int *)(a1 + 40);
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
          break;
        ++v2;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v5;
        result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = result;
        if ( v2 == (__int64 *)v4 )
          goto LABEL_6;
      }
      ++v2;
      sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v5;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( (__int64 *)v4 != v2 );
  }
LABEL_6:
  *(_DWORD *)(a1 + 224) = 213;
  return result;
}
