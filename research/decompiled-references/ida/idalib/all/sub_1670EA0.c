__int64 __fastcall sub_1670EA0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  char v5; // al
  _QWORD *v6; // rbx
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v5 = *(_BYTE *)(a2 + 28);
  v8[0] = a3;
  v6 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  sub_1E69370(a1, v8, a4, *(unsigned int *)(a2 + 24), (v5 & 0x7F) == 43, 1);
  if ( *(_QWORD *)(v8[0] & 0xFFFFFFFFFFFFFFF0LL) != *v6 )
    return v8[0];
  return v4;
}
