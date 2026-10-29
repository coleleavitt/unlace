__int64 __fastcall sub_81F590(char *a1)
{
  char v1; // al
  int v2; // ecx
  unsigned int v3; // edx

  v1 = *a1;
  if ( (*a1 & 1) != 0 )
    return 0;
  v2 = *((_DWORD *)a1 + 8);
  if ( v2 == 1 && (v1 & 4) != 0 )
    return 0;
  v3 = *(_DWORD *)a1 >> 4;
  if ( v3 == v2 && (v1 & 8) != 0 )
    return *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL * v3 - 8);
  else
    return (v1 & 2) != 0;
}

