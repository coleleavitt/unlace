__int64 __fastcall sub_1FBBE20(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rsi

  v2 = (__int64 *)(a2 + 64);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 56));
  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  result = *(unsigned int *)(a2 + 56);
  v4 = a2 + 64 + 8 * result;
  if ( v4 != a2 + 64 )
  {
    do
    {
      v5 = *v2++;
      result = sub_1F92A90(*(_QWORD *)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
    }
    while ( (__int64 *)v4 != v2 );
  }
  *(_DWORD *)(a1 + 224) = 91;
  return result;
}
