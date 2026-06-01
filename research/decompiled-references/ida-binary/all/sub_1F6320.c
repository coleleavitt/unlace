unsigned __int64 __fastcall sub_1F6320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  bool v5; // zf
  int v7; // eax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD); // rax
  unsigned __int64 result; // rax

  v5 = *(_BYTE *)(a1 + 968) == 0;
  *(_DWORD *)(a1 + 912) = 0;
  if ( v5 )
  {
    v8 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      sub_1E69C0(a5, a1, a2, a3, a4);
      return sub_1F6420();
    }
    v7 = *(_DWORD *)(a1 + 416);
    if ( v7 == 2 )
    {
      v8 = *(_QWORD *)(a1 + 896);
    }
    else if ( v7 == 3 )
    {
      v8 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v8 = 0;
      if ( v7 == 1 )
        v8 = *(_QWORD *)(a1 + 888);
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 416LL))(v8);
  v9 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 312);
  if ( v9 )
    v9(a1, *(_QWORD *)(a1 + 376));
  sub_459BE0(a1);
  result = sub_1F4990(5u, a1);
  if ( !*(_BYTE *)(a1 + 556) && !*(_BYTE *)(a1 + 557) )
    return sub_1E7060(a1 + 528);
  return result;
}
