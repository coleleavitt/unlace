__int64 __fastcall sub_157DD40(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax

  v3 = (unsigned __int64)(a2 + 48);
  if ( !a2 )
    v3 = 0;
  if ( (unsigned __int8)sub_B8E180(v3) )
    return 1;
  v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v4 == sub_6EE910 )
  {
    if ( (a2[112] & 1) == 0 && !*((_QWORD *)a2 + 14) )
      return 1;
    goto LABEL_6;
  }
  if ( v4((__int64)a2) )
  {
LABEL_6:
    (*(void (__fastcall **)(_QWORD, _BYTE *))(a1 + 16))(*(_QWORD *)(a1 + 24), a2);
    return 1;
  }
  return 1;
}
