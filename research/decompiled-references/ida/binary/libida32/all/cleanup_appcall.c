__int64 __fastcall cleanup_appcall(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  int v8; // [rsp+Ch] [rbp-1Ch] BYREF

  v8 = a1;
  v6 = *(_QWORD *)(qword_2CA1698 + 536);
  if ( v6 )
  {
    if ( !v8 )
      callui(1067, a2, 0, a4, a5, a6);
    if ( (*(_BYTE *)(v6 + 37) & 0x10) == 0 )
      callui(1082, 0, (int)&v8, 0xFFFF, a5, a6);
    callui(1107, v8, v8, a4, a5, a6);
  }
  return set_qerrno(1556, a2);
}

