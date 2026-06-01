__int64 __fastcall sub_1FCB370(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 24) >> 1) & 3);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 16) >> 2) & 1);
  v4 = *(_QWORD *)(a2 + 16);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v4 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
  if ( (v4 & 4) != 0 )
    sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  if ( ((*(__int64 *)(a2 + 40) >> 1) & 3) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( ((*(__int64 *)(a2 + 40) >> 1) & 3) == 1 )
    {
      sub_9B9C90(v5, 1);
      result = sub_1F85840(
                 *(_QWORD *)(a1 + 16),
                 *(_QWORD *)(a1 + 8),
                 *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL,
                 *(_QWORD **)(a1 + 24),
                 v7,
                 v8);
    }
    else
    {
      sub_9B9C90(v5, 2);
      result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
    }
    *(_DWORD *)(a1 + 224) = 224;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(unsigned int *)(v9 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
    {
      sub_2237220(*(_QWORD *)(a1 + 24), v9 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(v9 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v9 + 8 * v10) = 0;
    ++*(_DWORD *)(v9 + 8);
    result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL);
    *(_DWORD *)(a1 + 224) = 224;
  }
  return result;
}
