/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume
// Address: 0x00000000000E9188

//----- (00000000000E9188) ----------------------------------------------------
void __fastcall __noreturn Unwind_Resume(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rax
  bool v9; // zf
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbx
  _DWORD v17[60]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v18[19]; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v19; // [rsp+188h] [rbp-98h]
  __int64 v20; // [rsp+1E8h] [rbp-38h]
  __int64 v21; // [rsp+1F0h] [rbp-30h]
  __int64 retaddr; // [rsp+228h] [rbp+8h]

  v21 = a3;
  v20 = v7;
  sub_E8C20(v17, (__int64)&a7, retaddr);
  v9 = a1[2] == 0;
  v10 = v18;
  v11 = 60;
  v12 = v17;
  while ( v11 )
  {
    *v10++ = *v12++;
    --v11;
  }
  if ( v9 )
    v13 = sub_E8CFE(a1, v18);
  else
    v13 = sub_E8DB0(a1, v18);
  if ( v13 != 7 )
    abort();
  LOBYTE(v14) = sub_E7A4B((__int64)v17, (__int64)v18);
  v15 = v19;
  v16 = v14;
  nullsub_32(v18[18], v19);
  *(__int64 *)((char *)&retaddr + v16) = v15;
}
// E91AE: variable 'v7' is possibly undefined
// E9206: variable 'v14' is possibly undefined
// E8F59: using guessed type __int64 __fastcall nullsub_32(_QWORD, _QWORD);
