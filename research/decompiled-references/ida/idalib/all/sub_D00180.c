__int64 __fastcall sub_D00180(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  v4 = sub_E21760(*(_QWORD *)(a1 + 560), 48);
  return sub_DCC8F0(a1 + 384, v3, v4);
}
