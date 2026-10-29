__int64 __fastcall sub_1FC2440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  unsigned int v10; // r13d
  __int64 v11; // rsi

  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)a2, *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  result = *(unsigned int *)(a2 + 12);
  if ( (_DWORD)result )
  {
    v10 = 0;
    do
    {
      v11 = v10++;
      result = sub_1FA11E0((__int64 *)(a1 + 8), a3 + 32 * v11, v5, v6, v7, v8);
    }
    while ( *(_DWORD *)(a2 + 12) != v10 );
  }
  return result;
}
