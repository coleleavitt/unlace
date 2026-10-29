__int64 __fastcall sub_163BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  if ( !*(_BYTE *)(a1 + 992) )
  {
    v2 = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 96LL))(v2, (unsigned __int8)a2) + 8;
  }
  if ( *(_QWORD *)(a1 + 480) )
  {
    v2 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v2 = *(_QWORD *)(a1 + 856);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 96LL))(v2, (unsigned __int8)a2) + 8;
  }
  sub_158B30(a1);
  return sub_163BF0(a1, a2, v4);
}

