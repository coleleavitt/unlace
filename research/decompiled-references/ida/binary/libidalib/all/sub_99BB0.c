__int64 __fastcall sub_99BB0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD *, _QWORD); // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  *a2 = 0;
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *a3;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD))(v3 + 496);
  if ( v5 )
  {
    if ( *(_BYTE *)(v3 + 532) )
    {
      return v5(v3, v4, a2, *(_QWORD *)(v3 + 536));
    }
    else
    {
      v7 = 0;
      if ( !*(_BYTE *)(v3 + 248) )
        v7 = *(_QWORD *)(v3 + 240);
      return v5(v3, v4, a2, *(_QWORD *)(v7 + 760));
    }
  }
  else
  {
    v8 = 0;
    if ( !*(_BYTE *)(v3 + 248) )
      v8 = *(_QWORD *)(v3 + 240);
    *a2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v4 + 8LL))(*a3, *(_QWORD *)(v8 + 760));
    return 1;
  }
}

