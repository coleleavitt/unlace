__int64 __fastcall sub_1FC5AC0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 24);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  v3 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 4);
  if ( v3 != a2 + 24 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    do
    {
      v5 = *v2;
      if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        sub_2237220(a1 + 32, a1 + 48, v4 + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40)) = v5;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4) = v5;
      }
      ++v2;
      v4 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v4;
    }
    while ( (__int64 *)v3 != v2 );
  }
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 180;
  return result;
}
