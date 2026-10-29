__int64 __fastcall sub_B720E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r13

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x26 )
    return 0;
  v3 = sub_B685F0(a1);
  v4 = sub_A61710(v3, a1);
  v6 = v5;
  if ( v5 == (_QWORD *)v4 )
    return 0;
  v7 = (_QWORD *)v4;
  while ( 1 )
  {
    v8 = *v7;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7);
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) == v9 || (unsigned __int8)sub_B720E0(v8, a2) )
      break;
    if ( v6 == ++v7 )
      return 0;
  }
  return 1;
}

