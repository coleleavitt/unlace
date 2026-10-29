void __fastcall sub_1703A70(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v6 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 32) = 0;
    v8[0] = v6;
    v7 = sub_16FFA70(a3, a4, v8, a4, a5, a6);
    *(_DWORD *)(a1 + 12) = a2;
    *(_QWORD *)(a1 + 16) = v7;
  }
}
