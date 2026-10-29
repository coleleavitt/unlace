__int64 __fastcall sub_1EB330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 968) )
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      sub_1E69C0(a5, a1, a2, a3, a4);
      return sub_1EB3E0();
    }
    v6 = *(_DWORD *)(a1 + 416);
    if ( v6 == 2 )
    {
      v7 = *(_QWORD *)(a1 + 896);
    }
    else if ( v6 == 3 )
    {
      v7 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v7 = 0;
      if ( v6 == 1 )
        v7 = *(_QWORD *)(a1 + 888);
    }
  }
  else
  {
    v7 = 0;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 256LL))(v7);
  if ( !*(_BYTE *)(a1 + 556) && !*(_BYTE *)(a1 + 557) )
    return sub_1E7060(a1 + 528);
  return result;
}
