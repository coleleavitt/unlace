unsigned __int64 __fastcall sub_21B13C0(__int64 a1)
{
  void (*v1)(void); // rax
  unsigned __int16 v2; // bx
  char v3; // al

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v1 != (char *)sub_21B1110 )
  {
    v1();
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 64LL);
  }
  v2 = __ROL2__(*(_WORD *)(*(_QWORD *)(a1 + 48) + 2LL), 8);
  if ( (char *)v1 == (char *)sub_21B1110 )
    v3 = *(_DWORD *)(a1 + 8) == 12;
  else
    v3 = ((__int64 (__fastcall *)(__int64))v1)(a1);
  return ((-(__int64)(v3 == 0) & 0xFFFFFFFFFFFFFFE0LL) + 72) * v2 + *(_QWORD *)(a1 + 64);
}
