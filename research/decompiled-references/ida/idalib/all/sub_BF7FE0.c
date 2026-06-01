__int64 __fastcall sub_BF7FE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  if ( (*(_QWORD *)a1 & 0x100000LL) != 0 )
  {
    v1 = a1 + 16LL * ((*(_QWORD *)a1 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)a1 & 0x200000LL) != 0);
    if ( *(_DWORD *)(v1 + 32) )
      return *(unsigned int *)(v1 + 36);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  v4 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 4);
  v5 = v3;
  v7 = v4;
  result = sub_B85A10((__int64)&v5);
  if ( !(_DWORD)result )
    return v6;
  return result;
}
