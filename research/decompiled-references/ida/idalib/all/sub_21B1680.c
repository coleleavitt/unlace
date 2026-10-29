bool __fastcall sub_21B1680(_DWORD *a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  char v3; // al
  _DWORD *v4; // rdx
  _DWORD *v5; // rsi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
    v3 = a1[2] == 12;
  else
    v3 = v2();
  v4 = (_DWORD *)(a2 + 64);
  v5 = (_DWORD *)(a2 + 36);
  if ( v3 )
    v5 = v4;
  return (*v5 & 0x40040000) != 0;
}
