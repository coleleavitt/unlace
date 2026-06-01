__int64 __fastcall sub_4C6580(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r14

  v5 = *(_QWORD *)(a3 + 8);
  if ( !v5 )
    return sub_4CED80(a4, 0);
  v6 = *(unsigned int *)(v5 - 4);
  result = sub_4CED80(a4, v6);
  if ( (_DWORD)v6 )
  {
    v9 = 8 * v6;
    v10 = 0;
    do
    {
      result = sub_1625190(*(_QWORD *)(a1 + 8) + 56LL, *(_QWORD *)(*(_QWORD *)(a3 + 8) + v10), v10 + *a4);
      if ( !(_BYTE)result )
      {
        sub_1872CE0("");
        sub_1873130(114, 380);
      }
      v10 += 8;
    }
    while ( v9 != v10 );
  }
  return result;
}

