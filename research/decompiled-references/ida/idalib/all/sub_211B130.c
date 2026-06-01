__int64 __fastcall sub_211B130(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rax
  const char *v5; // [rsp+0h] [rbp-38h] BYREF
  __int16 v6; // [rsp+20h] [rbp-18h]

  v1 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v1 )
  {
    result = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v1 - 16);
    if ( result )
      *(_BYTE *)(result + 89) = 1;
  }
  else
  {
    v3 = *(_QWORD **)(a1 + 264);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v6 = 259;
    if ( v3 )
      v3 = (_QWORD *)*v3;
    return sub_2100A30(v4, (__int64)v3, (__int64)&v5);
  }
  return result;
}
