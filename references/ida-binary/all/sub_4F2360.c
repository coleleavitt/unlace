__int64 __fastcall sub_4F2360(__int64 a1, __int64 a2, double a3)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = *(__int64 **)(a1 + 48);
  v4 = (__int64)&v3[*(_QWORD *)(a1 + 56)];
  if ( (__int64 *)v4 == v3 )
    return 0;
  v5 = *(unsigned int *)(a2 + 12);
  while ( 1 )
  {
    v6 = *v3;
    v7 = *(_QWORD *)(*v3 + 32);
    if ( *(_DWORD *)(v7 + 12) == (_DWORD)v5 )
      break;
    if ( (__int64 *)v4 == ++v3 )
      return 0;
  }
  if ( !*(_BYTE *)(v6 + 24) )
    return *(_QWORD *)(v6 + 16);
  sub_4F1F40(a3, v4, v5, v6, v7);
  return sub_4F23C0(v4, v5, v9, v10);
}
