__int64 __fastcall sub_1286BE0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  _QWORD v6[4]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v7; // [rsp+20h] [rbp-88h]
  void *v8; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[104]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 0;
  v4 = *a1;
  v6[0] = a2;
  v6[1] = a3;
  v7 = 261;
  (*(void (__fastcall **)(void **, __int64 *, _QWORD *))(v4 + 40))(&v8, a1, v6);
  if ( (v9[72] & 1) == 0 )
  {
    LOBYTE(v3) = (v9[60] & 0x49) != 0;
    if ( v8 != v9 )
      operator delete(v8);
  }
  return v3;
}
