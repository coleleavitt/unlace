__int64 __fastcall sub_21344B0(__int64 a1, char a2)
{
  __int64 result; // rax
  _BOOL8 v4; // rsi
  unsigned __int8 v5; // al
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // [rsp+10h] [rbp-88h] BYREF
  __int64 v9; // [rsp+18h] [rbp-80h] BYREF
  const char *v10; // [rsp+20h] [rbp-78h] BYREF
  __int16 v11; // [rsp+40h] [rbp-58h]
  _QWORD v12[4]; // [rsp+50h] [rbp-48h] BYREF
  __int16 v13; // [rsp+70h] [rbp-28h]

  v8 = 0;
  result = sub_21335C0(a1, &v8);
  if ( !(_BYTE)result && v8 != 255 )
  {
    v4 = 1;
    v10 = "unsupported encoding.";
    v11 = 259;
    if ( (v8 & 0xFFFFFFFFFFFFFF00LL) == 0 && ((unsigned int)(v8 & 7) - 2 <= 2 || (v8 & 7) == 0) )
      v4 = (v8 & 0x60) != 0;
    if ( (unsigned __int8)sub_2154470(a1, v4, &v10) )
      return 1;
    v13 = 259;
    v12[0] = "expected comma";
    if ( (unsigned __int8)sub_2154510(a1, 26, v12) )
      return 1;
    v12[0] = "expected identifier in directive";
    v13 = 259;
    v5 = sub_2153CB0(a1, &v9);
    if ( (unsigned __int8)sub_2154470(a1, v5, v12) || (unsigned __int8)sub_21544B0(a1) )
    {
      return 1;
    }
    else
    {
      v6 = *(__int64 **)(a1 + 24);
      v7 = *v6;
      if ( a2 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 896))(v6, v9, v8);
      else
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 904))(v6, v9, v8);
      return 0;
    }
  }
  return result;
}
