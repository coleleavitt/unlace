__int64 __fastcall sub_D00E60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+0h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
  if ( !*(_DWORD *)(v3 + 24) && *(_QWORD *)(v3 + 32) )
  {
    if ( *(_DWORD *)(v3 + 40) )
    {
      v4 = v3;
      sub_E24D00(v3);
      sub_E23CF0(v4);
    }
  }
  return 1;
}
