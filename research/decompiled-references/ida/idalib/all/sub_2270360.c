void *__fastcall sub_2270360(void *a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  void *v6; // r13
  void *v8; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-50h]
  _BYTE v10[16]; // [rsp+10h] [rbp-48h] BYREF
  void (__fastcall *v11)(_BYTE *, _BYTE *, __int64); // [rsp+20h] [rbp-38h]

  v8 = a1;
  v9 = a2;
  v4 = sub_2247130(&v8, "\r\n \t", 4, 0xFFFFFFFFFFFFFFFFLL) + 1;
  v11 = nullptr;
  if ( v4 > v9 )
    v4 = v9;
  v5 = v9 - a2 + v4;
  if ( v5 > v9 )
    v5 = v9;
  v9 = v5;
  v6 = sub_226FD50(v8, v5, a3, (unsigned __int8 *)"\r\n", 2, (__int64)v10);
  if ( v11 )
    v11(v10, v10, 3);
  return v6;
}
