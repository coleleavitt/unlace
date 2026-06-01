__int64 __fastcall sub_1EC120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 (__fastcall *(__fastcall *v9)(__int64, __int64))(__int64, __int64, _QWORD); // rax
  void (__fastcall *v10)(__int64, __int64, _QWORD); // rax

  if ( *(_BYTE *)(a1 + 968) )
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      sub_1E69C0(a5, a1, a2, a3, a4);
      return sub_1EC200(a1);
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
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 160LL))(v7, a2);
  if ( (_BYTE)v8 )
  {
    v9 = *(__int64 (__fastcall *(__fastcall **)(__int64, __int64))(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 584LL);
    if ( v9 == sub_1E6700 )
    {
      v10 = *(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 336);
      if ( v10 )
        v10(a1, a2, *(_QWORD *)(a1 + 376));
    }
    else
    {
      v9(a1, a2);
    }
  }
  return v8;
}
