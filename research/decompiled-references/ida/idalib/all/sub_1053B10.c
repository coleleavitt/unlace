__int64 __fastcall sub_1053B10(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r12d
  bool (__fastcall *v3)(__int64, __int64, __int64); // rax

  v3 = *(bool (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 480LL);
  if ( v3 == sub_1035A40 )
    LOBYTE(v2) = sub_10815E0(*a2, a2[1]) != 0;
  else
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v3)(a1, *a2, a2[1]);
  if ( (_BYTE)v2 )
    sub_9EE8A0(a1 + 512, (__int64)a2);
  return v2;
}
