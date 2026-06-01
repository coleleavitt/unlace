__int64 __fastcall sub_98ABC0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edx
  _DWORD *v3; // rax

  v2 = 0;
  v3 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v3 && !*v3 && v3[1] == 8 && *(_DWORD *)(a1 + 24) == 1 )
  {
    v2 = 1;
    *a2 = *(_QWORD *)(a1 + 32);
  }
  return v2;
}

