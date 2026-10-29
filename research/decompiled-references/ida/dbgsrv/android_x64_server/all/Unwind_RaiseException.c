/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_RaiseException
// Address: 0x00000000000E8F5A

//----- (00000000000E8F5A) ----------------------------------------------------
__int64 __fastcall Unwind_RaiseException(
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
  int v12; // eax
  __int64 v13; // rdx
  __int64 result; // rax
  int v15; // eax
  __int64 CFA; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rdi
  _DWORD *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  _DWORD v24[60]; // [rsp+0h] [rbp-3A0h] BYREF
  _QWORD v25[19]; // [rsp+F0h] [rbp-2B0h] BYREF
  __int64 v26; // [rsp+188h] [rbp-218h]
  unsigned __int64 v27; // [rsp+1B0h] [rbp-1F0h]
  _BYTE v28[336]; // [rsp+1E0h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v29)(__int64, __int64, _QWORD, _QWORD *, _QWORD *); // [rsp+330h] [rbp-70h]
  __int64 v30; // [rsp+368h] [rbp-38h]
  __int64 v31; // [rsp+370h] [rbp-30h]
  __int64 retaddr; // [rsp+3A8h] [rbp+8h]

  v31 = a3;
  v30 = v7;
  sub_E8C20(v24, (__int64)&a7, retaddr);
  v9 = v25;
  v10 = 60;
  v11 = v24;
  while ( v10 )
  {
    *v9++ = *v11++;
    --v10;
  }
  while ( 1 )
  {
    v12 = sub_E891E(v25, (__int64)v28);
    if ( v12 == 5 )
      return 5;
    if ( v12 )
      return 3;
    if ( v29 )
      break;
LABEL_8:
    sub_E88DB((__int64)v25, (__int64)v28, v13);
  }
  v15 = v29(1, 1, *a1, a1, v25);
  if ( v15 != 6 )
  {
    if ( v15 != 8 )
      return 3;
    goto LABEL_8;
  }
  a1[2] = 0;
  CFA = Unwind_GetCFA((__int64)v25);
  v17 = v27;
  v18 = 60;
  v19 = v25;
  v20 = v24;
  while ( v18 )
  {
    *v19++ = *v20++;
    --v18;
  }
  a1[3] = CFA - (v17 >> 63);
  result = sub_E8CFE(a1, v25);
  if ( (_DWORD)result == 7 )
  {
    LOBYTE(v21) = sub_E7A4B((__int64)v24, (__int64)v25);
    v22 = v26;
    v23 = v21;
    nullsub_32(v25[18], v26);
    *(__int64 *)((char *)&retaddr + v23) = v22;
    return v30;
  }
  return result;
}
// E8F87: variable 'v7' is possibly undefined
// E8FD7: variable 'v13' is possibly undefined
// E905B: variable 'v21' is possibly undefined
// E8F59: using guessed type __int64 __fastcall nullsub_32(_QWORD, _QWORD);
