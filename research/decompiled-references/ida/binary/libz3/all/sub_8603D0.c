__int64 __fastcall sub_8603D0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  unsigned int v3; // edx
  _BYTE *v4; // rdx
  __int64 v5; // rcx

  v2 = *(_BYTE **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 - 1) - 1;
    if ( *((_DWORD *)v2 - 1) == 1 )
      return 1;
  }
  else
  {
    v3 = -1;
  }
  v4 = &v2[16 * v3];
  while ( 1 )
  {
    if ( v2[8] != 1 )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v5 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
    if ( !v5 || (unsigned int)(*(_DWORD *)(v5 + 24) - 1) <= 1 || *(_QWORD *)(v5 + 32) != 1 )
      break;
    v2 += 16;
    if ( v4 == v2 )
      return 1;
  }
  return 0;
}

