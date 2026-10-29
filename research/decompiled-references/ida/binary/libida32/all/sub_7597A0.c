__int64 __fastcall sub_7597A0(_QWORD *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  unsigned int v5; // ecx
  __int64 v6; // r12
  void (*v7)(); // rax

  v5 = 2;
  if ( (unsigned __int64)a2 >= a1[7] )
    return v5;
  if ( !a3 )
  {
    sub_7579F0(a1, a2, 4, 0, a4);
    return 0;
  }
  v6 = a1[6] + 176LL * a2;
  if ( (*(_BYTE *)(v6 + 164) & 4) != 0 )
    return 0;
  v5 = 9;
  if ( (*(_BYTE *)(a1[5] + 8LL) & 4) != 0 )
  {
    v7 = *(void (**)())(*a1 + 168LL);
    if ( v7 != nullsub_219 )
      ((void (__fastcall *)(_QWORD *, _QWORD, void (*)(), __int64))v7)(a1, a2, nullsub_219, 9);
    sub_7549C0(v6);
    if ( !a4 )
    {
      sub_396090(0x5Au, a1[4], a2, 1);
      sub_754740((__int64)a1, 90, a2, 1);
    }
    return 0;
  }
  return v5;
}

