__int64 __fastcall sub_4A7E40(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  int v6[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v7[24]; // [rsp+8h] [rbp-50h] BYREF
  int v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  void *ptr; // [rsp+30h] [rbp-28h]

  v2 = a1 + 216;
  v4 = *(_QWORD *)(v2 - 216);
  *(_QWORD *)v6 = v2;
  sub_1684300(v7, v4);
  v9 = 0;
  ptr = nullptr;
  sub_4A3F80((__int64)v6, (__int64)&v8, a2);
  if ( ptr )
    sub_186B220(ptr);
  return 1;
}

