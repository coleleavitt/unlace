__int64 __fastcall sub_1599C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 (__fastcall *(__fastcall *v5)(__int64, __int64))(__int64, __int64, _QWORD); // rax
  void (__fastcall *v6)(__int64, __int64, _QWORD); // rax

  if ( *(_BYTE *)(a1 + 984) )
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      sub_1582F0(a1);
      return sub_159A60();
    }
    v3 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v3 = *(_QWORD *)(a1 + 848);
  }
  else
  {
    v3 = 0;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, a2);
  if ( !(_BYTE)v4 )
    return v4;
  v5 = *(__int64 (__fastcall *(__fastcall **)(__int64, __int64))(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 304LL);
  if ( v5 == sub_157C40 )
  {
    v6 = *(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 392);
    if ( v6 )
      v6(a1, a2, *(_QWORD *)(a1 + 432));
    return v4;
  }
  v5(a1, a2);
  return v4;
}

