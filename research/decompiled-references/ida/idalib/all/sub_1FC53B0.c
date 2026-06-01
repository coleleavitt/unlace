__int64 __fastcall sub_1FC53B0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rsi

  v3 = (__int64 *)(a2 + 32);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 28));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  result = *(unsigned int *)(a2 + 28);
  v5 = a2 + 8 * result + 32;
  if ( v5 != a2 + 32 )
  {
    do
    {
      v6 = *v3++;
      result = sub_1F92A90(*(_QWORD *)(a1 + 16), v6, *(_QWORD *)(a1 + 24));
    }
    while ( v3 != (__int64 *)v5 );
  }
  *(_DWORD *)(a1 + 224) = 288;
  return result;
}
