__int64 __fastcall _simple_vdprintf(int a1, char *__s)
{
  _BYTE v3[32]; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v4[3]; // [xsp+28h] [xbp-28h] BYREF
  int v5; // [xsp+40h] [xbp-10h]
  __int64 (__fastcall *v6)(); // [xsp+48h] [xbp-8h]

  v5 = a1;
  v4[0] = v3;
  v4[1] = v3;
  v4[2] = v4;
  v6 = _flush_reset;
  __simple_bprintf((int)v4, 0, __s);
  return _flush(v4);
}
