_QWORD *__fastcall sub_21C93F0(_QWORD *a1, int a2, _BYTE *a3)
{
  bool v3; // zf
  __int64 v4; // rbx
  _BYTE *v6; // [rsp+0h] [rbp-48h] BYREF
  __int16 v7; // [rsp+20h] [rbp-28h]

  v3 = *a3 == 0;
  v7 = 257;
  if ( !v3 )
  {
    v6 = a3;
    LOBYTE(v7) = 3;
  }
  v4 = operator new(0x30u);
  *(_DWORD *)(v4 + 8) = a2;
  *(_QWORD *)v4 = &off_2C74C70;
  sub_2253560(v4 + 16, &v6);
  *a1 = v4;
  return a1;
}
