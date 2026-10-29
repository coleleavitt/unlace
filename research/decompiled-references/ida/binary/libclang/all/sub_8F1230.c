__int64 __fastcall sub_8F1230(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  _BYTE v6[88]; // [rsp-58h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v4 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a3;
    sub_A25550(v6, *(_QWORD *)(a1 + 560), a2);
    v5 = sub_A1A4E0(v4, 56);
    sub_A1C070(v5, v6);
    sub_A1C0C0(v6);
  }
  return 1;
}

