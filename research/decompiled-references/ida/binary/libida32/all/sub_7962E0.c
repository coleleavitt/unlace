__int64 __fastcall sub_7962E0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int32 v5; // eax

  v2 = *a2;
  v3 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 52) = -1;
  *(_DWORD *)(a1 + 53) = -1;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(v2);
  *(_WORD *)(a1 + 45) = 10;
  sub_723E90(v3, (unsigned __int16 *)(a1 + 45));
  while ( 1 )
  {
    sub_720F20(v3);
    if ( v4 < 2 || *(char *)(v4 + 2) > 46 )
      break;
    v5 = _byteswap_ulong(*(_DWORD *)(v4 + 3));
    if ( *a2 != v5 )
    {
      *a2 = v5;
      return 1;
    }
  }
  return 0;
}

