__int64 __fastcall sub_7A4F00(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  int v4; // eax

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v2 = 1;
  if ( *(_BYTE *)(v1 + 81) >> 5 != 2 )
  {
    v2 = 0;
    if ( (a1[5] & 7) == 6 )
    {
      v2 = 1;
      v4 = *(_DWORD *)(a1[5] & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v4 & 0xFFFFFFFD) != 1 )
        LOBYTE(v2) = ((v4 - 2) & 0xFFFFFFFD) == 0;
    }
  }
  return v2;
}

