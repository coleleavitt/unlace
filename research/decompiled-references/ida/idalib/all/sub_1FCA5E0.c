__int64 __fastcall sub_1FCA5E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15

  v2 = (__int64 *)(a2 + 40);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 4) & 0x7FFFFFFF);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 7) >> 7);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 32));
  result = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
  v5 = a2 + 40 + 8 * result;
  if ( v5 != a2 + 40 )
  {
    result = *(unsigned int *)(a1 + 40);
    do
    {
      v6 = *v2;
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v6;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v6;
      }
      ++v2;
      result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = result;
    }
    while ( (__int64 *)v5 != v2 );
  }
  *(_DWORD *)(a1 + 224) = 284;
  return result;
}
