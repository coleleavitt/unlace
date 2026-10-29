__int64 __fastcall sub_211B230(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rax
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int16 v7; // [rsp+20h] [rbp-18h]

  v2 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v2 )
  {
    result = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v2 - 16);
    if ( result )
      *(_DWORD *)(result + 84) = a2;
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 264);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v7 = 259;
    if ( v4 )
      v4 = (_QWORD *)*v4;
    return sub_2100A30(v5, (__int64)v4, (__int64)&v6);
  }
  return result;
}
