__int64 __fastcall sub_1AE95A0(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD, __int64, _QWORD), __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v12; // rbx

  v3 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v3 )
    return 0;
  v5 = *(unsigned int *)(a1 + 27504);
  v6 = *(_QWORD *)(a1 + 336) + 6776 * v3 - 6776;
  v7 = *(unsigned int *)(v6 + 8);
  v8 = v7 - v5;
  if ( *(_QWORD *)(v6 + 6768) == *(_QWORD *)(a1 + 328) )
    v8 -= (unsigned int)v5 < (unsigned int)v7;
  v9 = *(_QWORD *)v6;
  v10 = *(_QWORD *)v6 + 1688 * v8;
  if ( *(_QWORD *)v6 == v10 )
    return 0;
  v12 = v10 - 704;
  for ( result = a2(a3, *(unsigned int *)(v12 - 8), v12, *(unsigned int *)(v12 + 40));
        !(_BYTE)result;
        result = a2(a3, *(unsigned int *)(v12 - 8), v12, *(unsigned int *)(v12 + 40)) )
  {
    if ( v9 == v12 - 984 )
      return 0;
    v12 -= 1688;
  }
  return result;
}
