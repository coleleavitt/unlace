__int64 __fastcall sub_D06DC0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  char v5; // bl

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = a1 + 384;
    v4 = *(_QWORD *)(v3 + 176);
    *(_QWORD *)(v3 + 856) = *a2;
    v5 = sub_E21C70(v3);
    *(_BYTE *)sub_E216C0(v4, 8) = v5;
  }
  return 1;
}
