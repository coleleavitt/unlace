/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume_or_Rethrow
// Address: 0x00000000000E9249

//----- (00000000000E9249) ----------------------------------------------------
void __fastcall __noreturn Unwind_Resume_or_Rethrow(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbx
  _DWORD v15[60]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v16[19]; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v17; // [rsp+188h] [rbp-98h]
  __int64 v18; // [rsp+1E8h] [rbp-38h]
  __int64 v19; // [rsp+1F0h] [rbp-30h]
  __int64 retaddr; // [rsp+228h] [rbp+8h]

  v19 = a3;
  v18 = v7;
  if ( a1[2] )
  {
    sub_E8C20(v15, (__int64)&a7, retaddr);
    v9 = v16;
    v10 = 60;
    v11 = v15;
    while ( v10 )
    {
      *v9++ = *v11++;
      --v10;
    }
    if ( (unsigned int)sub_E8DB0(a1, v16) != 7 )
      abort();
    LOBYTE(v12) = sub_E7A4B((__int64)v15, (__int64)v16);
    v13 = v17;
    v14 = v12;
    nullsub_32(v16[18], v17);
    *(__int64 *)((char *)&retaddr + v14) = v13;
  }
  else
  {
    Unwind_RaiseException(a1, a2, a3, a4, a5, a6, v15[0]);
  }
}
// E925A: variable 'v7' is possibly undefined
// E92C4: variable 'v12' is possibly undefined
// E8F59: using guessed type __int64 __fastcall nullsub_32(_QWORD, _QWORD);
