__int64 __fastcall sub_1FBE540(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rsi

  v2 = (__int64 *)(a2 + 104);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 100));
  sub_1FBDCF0(a1, a2, v3, v4, v5, v6);
  result = *(unsigned int *)(a2 + 100);
  v8 = a2 + 104 + 8 * result;
  if ( v8 != a2 + 104 )
  {
    do
    {
      v9 = *v2++;
      result = sub_1F92A90(*(_QWORD *)(a1 + 16), v9, *(_QWORD *)(a1 + 24));
    }
    while ( (__int64 *)v8 != v2 );
  }
  *(_DWORD *)(a1 + 224) = 75;
  return result;
}
