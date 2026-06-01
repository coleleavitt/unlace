_QWORD *__fastcall sub_21C5A30(_QWORD *a1, _BYTE *a2)
{
  bool v2; // zf
  __int64 v3; // rbx
  _BYTE *v5; // [rsp+0h] [rbp-48h] BYREF
  __int16 v6; // [rsp+20h] [rbp-28h]

  v2 = *a2 == 0;
  v6 = 257;
  if ( !v2 )
  {
    v5 = a2;
    LOBYTE(v6) = 3;
  }
  v3 = operator new(0x30u);
  *(_DWORD *)(v3 + 8) = 9;
  *(_QWORD *)v3 = &off_2C74C70;
  sub_2253560(v3 + 16, &v5);
  *a1 = v3;
  return a1;
}
