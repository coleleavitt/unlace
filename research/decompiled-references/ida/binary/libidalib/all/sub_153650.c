unsigned __int64 __fastcall sub_153650(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_QWORD *)(a1 + 744) == *(_QWORD *)(a1 + 752) )
    return 0;
  v1 = sub_FBBB0(*(_QWORD *)(a1 + 856), 0);
  if ( v1 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 8LL))(v1, *(_QWORD *)(a1 + 760));
    v3 = *(_QWORD *)(a1 + 744);
    v4 = v2 - v3;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 744);
    v4 = 0;
  }
  return v4 * *(__int16 *)(a1 + 736) / (unsigned __int64)(*(_QWORD *)(a1 + 752) - v3);
}

