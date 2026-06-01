__int64 __fastcall sub_1813BC0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  _BYTE v10[184]; // [rsp+0h] [rbp-B8h] BYREF

  v8 = a2[6];
  if ( (*(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 || (v4 = sub_1809200(a1, v8), (_BYTE)v4) )
  {
    sub_18134D0(a1, a2, a3, a4, 0, 0);
    LOBYTE(v4) = *(_DWORD *)(a4 + 8) != 0;
  }
  else
  {
    sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1D0Bu, 0);
    sub_15DD120((__int64)v10, a3);
    sub_15F7200(v10);
  }
  return v4;
}
