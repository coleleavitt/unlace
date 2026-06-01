__int64 __fastcall sub_CE28C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a3;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408))
    || !(unsigned __int8)sub_DA69E0(a1 + 384, v4, *(_QWORD *)(a1 + 784) + 40LL) )
  {
    return 0;
  }
  else
  {
    return sub_CDA290(a1 + 384, a2, *(_QWORD *)(a1 + 784) + 40LL);
  }
}

