__int64 __fastcall sub_98AC50(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ecx
  _DWORD *v4; // rax

  v3 = 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v4 && *v4 == 5 && v4[1] == 3 && *(_DWORD *)(a1 + 24) == 2 )
  {
    v3 = 1;
    *a2 = *(_QWORD *)(a1 + 32);
    *a3 = *(_QWORD *)(a1 + 40);
  }
  return v3;
}

