__int64 __fastcall sub_7D3880(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, *(_QWORD *)(a1 + 72), 0);
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
    return v3 + 8;
  else
    return sub_7D0C20(a1) + 8;
}

