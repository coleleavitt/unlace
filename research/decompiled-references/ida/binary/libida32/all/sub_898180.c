__int64 __fastcall sub_898180(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a2 >= a3 )
    return 0;
  if ( a4 )
    sub_898080((__int64 **)a1, a4, a2, a3);
  v5 = sub_8969D0((__int64 **)a1, a2, a3);
  result = 4;
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 44) = -1;
    *(_QWORD *)(a1 + 56) = 0;
    v8 = *(_QWORD *)(a1 + 16) + 16 * v7;
    *(_DWORD *)(a1 + 64) = -1;
    *(_QWORD *)(a1 + 80) = v8;
    *(_QWORD *)(a1 + 48) = v8;
    *(_QWORD *)(a1 + 72) = 0;
    sub_8964D0(a1);
    return 0;
  }
  return result;
}

