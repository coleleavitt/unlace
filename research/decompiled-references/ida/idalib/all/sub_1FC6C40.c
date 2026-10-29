__int64 __fastcall sub_1FC6C40(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 32);
  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  v7 = a2 + 8LL * *(unsigned int *)(a2 + 4) + 32;
  if ( v7 != a2 + 32 )
  {
    v8 = *(unsigned int *)(a1 + 40);
    do
    {
      v4 = *(unsigned int *)(a1 + 44);
      v9 = *v2;
      if ( v8 + 1 > v4 )
      {
        sub_2237220(a1 + 32, a1 + 48, v8 + 1, 8);
        v3 = *(unsigned int *)(a1 + 40);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3) = v9;
      }
      else
      {
        v3 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(v3 + 8 * v8) = v9;
      }
      ++v2;
      v8 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
      *(_DWORD *)(a1 + 40) = v8;
    }
    while ( (__int64 *)v7 != v2 );
  }
  sub_1F9A760((__int64 *)(a1 + 8), (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL), v3, v4, v5, v6);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 28), *(_QWORD *)(a1 + 24));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 16) >> 2) & 1);
  *(_DWORD *)(a1 + 224) = 274;
  return result;
}
