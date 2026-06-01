__int64 __fastcall sub_1F6F4D0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // r14
  __int64 result; // rax
  __int64 v6; // r15

  v3 = a2;
  v4 = &a2[a3];
  result = sub_9B9C90(*(_QWORD *)(a1 + 16), (unsigned int)a3);
  if ( v4 != a2 )
  {
    result = *(unsigned int *)(a1 + 32);
    do
    {
      v6 = *v3;
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
      {
        sub_2237220(a1 + 24, a1 + 40, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * *(unsigned int *)(a1 + 32)) = v6;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * result) = v6;
      }
      ++v3;
      result = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
      *(_DWORD *)(a1 + 32) = result;
    }
    while ( v4 != v3 );
  }
  return result;
}
