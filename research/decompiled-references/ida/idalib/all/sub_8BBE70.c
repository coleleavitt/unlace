__int64 __fastcall sub_8BBE70(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a2 >= a3 )
    return 0;
  if ( a4 )
    sub_8BBD70((__int64 **)a1, a4, a2, a3);
  v5 = sub_8BAA80((__int64 **)a1, a2, a3);
  result = 4;
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 48) = -1;
    *(_QWORD *)(a1 + 64) = 0;
    v8 = 3 * v7;
    v9 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 72) = -1;
    *(_QWORD *)(a1 + 80) = 0;
    v10 = v9 + 8 * v8;
    *(_QWORD *)(a1 + 88) = v10;
    *(_QWORD *)(a1 + 56) = v10;
    sub_8B9FB0(a1);
    return 0;
  }
  return result;
}
