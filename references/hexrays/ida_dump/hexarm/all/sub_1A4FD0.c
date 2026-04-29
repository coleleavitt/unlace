void __fastcall sub_1A4FD0(__int64 a1, int a2, int a3)
{
  int v3; // r12d
  unsigned __int64 v4; // r14
  bool v5; // zf

  if ( *(_DWORD *)(a1 + 8) == 3 )
    a3 = a2;
  if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)a2 )
  {
    if ( !under_debugger )
      sub_3835A0(52053);
LABEL_15:
    BUG();
  }
  v3 = a3;
  v4 = a3;
  if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)a3 )
  {
    if ( !under_debugger )
      sub_3835A0(52054);
    goto LABEL_15;
  }
  sub_81A00((__int64 *)(a1 + 96), a2);
  sub_81A00((__int64 *)(a1 + 16), a2);
  sub_81A00((__int64 *)(a1 + 120), v4);
  sub_81A00((__int64 *)(a1 + 40), v4);
  v5 = *(_DWORD *)(a1 + 8) == 3;
  *(_DWORD *)(a1 + 12) = a2;
  if ( !v5 )
    *(_DWORD *)(a1 + 12) = v3 + a2;
  if ( (*(_BYTE *)(a1 + 288) & 2) != 0 )
  {
    sub_81A00((__int64 *)(a1 + 232), a2 + 1);
    sub_81A00((__int64 *)(a1 + 152), a2 + 1);
    sub_81A00((__int64 *)(a1 + 256), v4);
    sub_81A00((__int64 *)(a1 + 176), v4);
    v5 = *(_DWORD *)(a1 + 144) == 3;
    *(_DWORD *)(a1 + 148) = a2 + 1;
    if ( !v5 )
      *(_DWORD *)(a1 + 148) = v3 + a2 + 1;
  }
}
