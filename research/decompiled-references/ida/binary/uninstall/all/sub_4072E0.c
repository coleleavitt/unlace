void __fastcall sub_4072E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi

  if ( a2 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      sub_48EDF0(a3, *(_QWORD *)(v4 + 8), 0xFFFFFFFFLL);
      if ( a2[1] != *(_QWORD *)(a1 + 40) )
        sub_48EDF0(a3, "::", 2);
    }
    v5 = *a2;
    if ( *a2 )
    {
      v6 = v5 + 32;
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 8) + 60LL) == 1 || *(_DWORD *)(*(_QWORD *)(v5 + 8) + 60LL) == -1 )
        v6 = *(_QWORD *)(v5 + 32);
      sub_48EDF0(a3, v6, 0xFFFFFFFFLL);
    }
  }
}

