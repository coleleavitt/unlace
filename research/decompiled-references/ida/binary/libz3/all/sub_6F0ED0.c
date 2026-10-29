__int64 __fastcall sub_6F0ED0(__int64 a1, __int64 **a2, __int64 *a3, int a4, int a5, int a6, __int64 a7)
{
  __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // rsi
  int v14; // [rsp+18h] [rbp-D8h]
  _BYTE v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v8 = *a3;
  v9 = *(_DWORD *)(*a3 + 712);
  v10 = **a2;
  *(_DWORD *)(*a3 + 712) = 0;
  v14 = (int)a3;
  sub_E98EB0(v15, v10);
  sub_E99040(a1, (unsigned int)v15, v14, a4, a5, a6, a7);
  ((void (__fastcall *)(_BYTE *, _BYTE *))sub_E98B60)(v15, v15);
  *(_DWORD *)(v8 + 712) = v9;
  return a1;
}

