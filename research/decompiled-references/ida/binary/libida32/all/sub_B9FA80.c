__int64 __fastcall sub_B9FA80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = *(_QWORD *)(sub_B685F0((__int64)a1) + 18360);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 80LL))(v2, a1[9], 0);
  v3 = a1[10];
  if ( v3 )
    return v3 + 8;
  else
    return sub_B9F7C0(a1) + 8;
}

