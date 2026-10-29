/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_ForcedUnwind
// Address: 0x00000000000E90B4

//----- (00000000000E90B4) ----------------------------------------------------
__int64 __fastcall Unwind_ForcedUnwind(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  _DWORD v18[60]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v19[19]; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v20; // [rsp+188h] [rbp-98h]
  __int64 v21; // [rsp+1E8h] [rbp-38h]
  __int64 v22; // [rsp+1F0h] [rbp-30h]
  __int64 retaddr; // [rsp+228h] [rbp+8h]

  v22 = a3;
  v21 = v7;
  sub_E8C20(v18, (__int64)&a7, retaddr);
  a1[3] = a3;
  v11 = v19;
  v12 = 60;
  v13 = v18;
  a1[2] = a2;
  while ( v12 )
  {
    *v11++ = *v13++;
    --v12;
  }
  result = sub_E8DB0(a1, v19);
  if ( (_DWORD)result == 7 )
  {
    LOBYTE(v15) = sub_E7A4B((__int64)v18, (__int64)v19);
    v16 = v20;
    v17 = v15;
    nullsub_32(v19[18], v20);
    *(__int64 *)((char *)&retaddr + v17) = v16;
    return v21;
  }
  return result;
}
// E90D9: variable 'v7' is possibly undefined
// E912F: variable 'v15' is possibly undefined
// E8F59: using guessed type __int64 __fastcall nullsub_32(_QWORD, _QWORD);
