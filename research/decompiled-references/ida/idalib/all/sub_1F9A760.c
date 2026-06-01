__int64 __fastcall sub_1F9A760(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  int *v11; // rbp
  __int64 result; // rax
  __int64 v13; // rbx
  int *v14; // rdx
  __int64 *v15; // [rsp+8h] [rbp-20h] BYREF

  v8 = a1[1];
  v9 = (_QWORD *)a1[2];
  v10 = *a1;
  if ( !a2 )
    return sub_1F85840(v8, v10, 0, v9, a5, a6);
  v11 = (int *)(a2 + 1);
  result = sub_1F85840(v8, v10, *a2, v9, a5, a6);
  v13 = *a2;
  v15 = a1;
  if ( v13 )
  {
    do
    {
      sub_1F99BE0((__int64 *)&v15, v13, v11);
      result = sub_F6C7E0(v13, v11);
      v13 = result;
      v11 = v14;
    }
    while ( result );
  }
  return result;
}
