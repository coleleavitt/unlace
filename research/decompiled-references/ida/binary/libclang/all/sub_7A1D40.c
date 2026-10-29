__int64 __fastcall sub_7A1D40(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbp

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x24 )
    return 0;
  v3 = sub_798D40(a1);
  v4 = sub_6BE420(v3, a1);
  v6 = v5;
  if ( v5 == v4 )
    return 0;
  while ( 1 )
  {
    v7 = *v4;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 32LL))(*v4);
    if ( v8 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) || (unsigned __int8)sub_7A1D40(v7, a2) )
      break;
    if ( v6 == ++v4 )
      return 0;
  }
  return 1;
}

