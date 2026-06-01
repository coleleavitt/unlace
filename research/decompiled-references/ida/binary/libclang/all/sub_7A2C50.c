_BOOL8 __fastcall sub_7A2C50(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  _BOOL8 result; // rax

  v1 = sub_789AD0(a1, 1);
  if ( !v1 )
    v1 = (_QWORD *)a1;
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 32LL))(v1);
  result = 0;
  if ( (*(_BYTE *)(v2 + 82) & 0x40) == 0 )
    return (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v1 + 32LL))(v1) + 83) & 2) == 0;
  return result;
}

