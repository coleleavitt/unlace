void __fastcall sub_172BDF0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int16 v8; // [rsp+8h] [rbp-40h]
  char v9; // [rsp+Ah] [rbp-3Eh]
  void *ptr; // [rsp+10h] [rbp-38h]
  int v11; // [rsp+18h] [rbp-30h]
  int v12; // [rsp+1Ch] [rbp-2Ch]
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 && (a4 = a3, (*(_BYTE *)(a3 + 28) & 0x7Fu) - 26 <= 0x1A) )
  {
    v9 = 0;
    v8 = 0;
    v6 = *(_QWORD *)(a3 + 48);
    ptr = v13;
    v12 = 4;
    v7 = v6;
    v13[0] = a3;
    v11 = 1;
    sub_172AF50(a1, a2, (__int64)&v7, a3, a5, a6);
    if ( ptr != v13 )
      free(ptr);
  }
  else
  {
    sub_172A9A0(a1, a2, 7u, a4, a5, a6);
  }
}
