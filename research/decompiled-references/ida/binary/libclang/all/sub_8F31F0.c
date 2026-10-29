__int64 __fastcall sub_8F31F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  _BYTE v5[88]; // [rsp-58h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = sub_A1A5A0(v3, 56);
    sub_A1C070(v5, v4);
    sub_A1A5E0(v3, 56);
    sub_A1C0C0(v5);
  }
  return 1;
}

