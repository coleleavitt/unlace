bool __fastcall sub_4D95E0(__int64 a1, __int64 a2)
{
  unsigned __int8 (*v2)(void); // rax
  __int64 v3; // rax
  int v4; // eax
  bool (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  int v8; // eax

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v2 == (char *)sub_4D9420 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL);
    if ( v3 )
      v4 = *(_DWORD *)(v3 - 4);
    else
      v4 = 0;
    if ( *(_DWORD *)(a1 + 24) != v4 )
      return 0;
  }
  else if ( !v2() )
  {
    return 0;
  }
  v6 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v6 != sub_4D9420 )
    return v6(a2);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) + 16LL);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  return *(_DWORD *)(a2 + 24) == v8;
}

