__int64 __fastcall sub_211B320(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rax
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int16 v8; // [rsp+20h] [rbp-18h]

  v3 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v3 )
  {
    result = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v3 - 16);
    if ( result )
    {
      *(_QWORD *)(result + 24) = a2;
      *(_DWORD *)(result + 64) = a3;
    }
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 264);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v8 = 259;
    if ( v5 )
      v5 = (_QWORD *)*v5;
    return sub_2100A30(v6, (__int64)v5, (__int64)&v7);
  }
  return result;
}
