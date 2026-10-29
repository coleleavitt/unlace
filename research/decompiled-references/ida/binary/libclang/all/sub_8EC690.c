__int64 __fastcall sub_8EC690(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  _BYTE v7[64]; // [rsp-40h] [rbp-98h] BYREF
  _BYTE v8[88]; // [rsp+0h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = sub_A1A5A0(v3, 56);
    sub_A1C070(v8, v4);
    sub_A1A5E0(v3, 56);
    v5 = *(_QWORD *)(a1 + 568);
    sub_8E54E0((__int64)v7, (__int64)v8);
    v6 = sub_A1A4E0(v5, 56);
    sub_A1C070(v6, v7);
    sub_A1C0C0(v7);
    sub_A1C0C0(v8);
  }
  return 1;
}

