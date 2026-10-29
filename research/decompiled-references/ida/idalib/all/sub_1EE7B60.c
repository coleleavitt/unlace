__int64 __fastcall sub_1EE7B60(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax

  v2 = a2 + 24;
  v3 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
  if ( v3 != a2 + 24 )
  {
    do
    {
      v2 += 8;
      *(_QWORD *)(v2 - 8) = sub_1F61940(*(_QWORD *)(*a1 + 8));
    }
    while ( v3 != v2 );
  }
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
