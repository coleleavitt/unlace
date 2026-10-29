__int64 __fastcall sub_D06380(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  char v4; // dl
  __int64 v5; // r13
  __int64 v6; // rax
  _BYTE v7[88]; // [rsp-58h] [rbp-58h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1240) = *a3;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
    result = 0;
    if ( !v4 )
    {
      v5 = *(_QWORD *)(a1 + 560);
      sub_E20A90(v7, *(_QWORD *)(a1 + 784), a2);
      v6 = sub_E216C0(v5, 48);
      sub_E23260(v6);
      sub_E232A0(v7);
      return 1;
    }
  }
  return result;
}
