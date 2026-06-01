__int64 __fastcall sub_E10800(__int64 a1, char a2)
{
  _DWORD *v2; // rdi
  __int64 (*v3)(void); // rdx
  __int64 result; // rax

  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 17448LL);
  if ( !a2 && v2[65] == 15 && v2[66] == 1 && v2[62] == 37 )
    return 3;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 752LL);
  result = 0;
  if ( v3 != sub_6CE300 )
    return v3();
  return result;
}

