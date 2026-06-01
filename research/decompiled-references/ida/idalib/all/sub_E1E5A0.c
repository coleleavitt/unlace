unsigned __int64 __fastcall sub_E1E5A0(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = *(_QWORD *)(a1[1] + 32LL);
  v3 = a1[2] + 16LL;
  if ( v2 )
    return sub_E32190(v3, v2, a1[17] - 8LL);
  v5 = sub_E32190(v3, 0, 0);
  v6 = HIDWORD(v5);
  if ( (_DWORD)v5 && v6 )
    return (v6 << 32) | (unsigned int)v5;
  else
    return ((unsigned __int64)*(unsigned int *)(a1[2] + 408LL) << 32) | *(unsigned int *)(a1[2] + 408LL);
}
