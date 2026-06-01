/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006D140
// Address: 0x000000014006D140

//----- (000000014006D140) ----------------------------------------------------
__int64 __fastcall sub_14006D140(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rsi

  v6 = 0;
  if ( *(int *)(a3 + 4) >= 0 )
    v7 = (__int64 *)(*a2 + *(unsigned int *)(a3 + 12));
  else
    v7 = a2;
  result = (unsigned int)sub_14006CF48(a1, a2, a3, a4) - 1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v9 = _AdjustPointer(*(_QWORD *)(a1 + 40), a4 + 8);
      v10 = *(int *)(a4 + 24);
      if ( (_DWORD)v10 )
        v6 = GetThrowImageBase() + v10;
      return unknown_libname_14(v7, v6, v9, 1);
    }
  }
  else
  {
    v11 = _AdjustPointer(*(_QWORD *)(a1 + 40), a4 + 8);
    v12 = *(int *)(a4 + 24);
    if ( (_DWORD)v12 )
      v6 = GetThrowImageBase() + v12;
    return unknown_libname_13(v7, v6, v11);
  }
  return result;
}
// 14006BBB4: using guessed type __int64 __fastcall _AdjustPointer(_QWORD, _QWORD);
// 14006C384: using guessed type __int64 GetThrowImageBase(void);
// 14006EBE4: using guessed type __int64 __fastcall unknown_libname_13(_QWORD, _QWORD, _QWORD);
// 14006EBF0: using guessed type __int64 __fastcall unknown_libname_14(_QWORD, _QWORD, _QWORD, _QWORD);
