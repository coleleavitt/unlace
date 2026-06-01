__int64 __fastcall sub_14B5980(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = a1[2];
  if ( !v2 )
    return -((*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1) ^ 1);
  if ( !*(_DWORD *)(a2 + 24) )
    return -((*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1) ^ 1);
  if ( *(_BYTE *)(a2 + 61) )
    return -((*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1) ^ 1);
  if ( (*(_QWORD *)a2 & 7) != 0 )
    return -((*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1) ^ 1);
  if ( v2 != (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) )
    return -((*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1) ^ 1);
  result = 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a2 + 8) != a1[3] )
    return -((*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1) ^ 1);
  return result;
}
