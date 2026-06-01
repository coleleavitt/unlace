__int64 __fastcall sub_7B92A0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *a2;
    *(_BYTE *)(a1 + 60) = 0;
    *(_WORD *)(a1 + 53) = 6;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(v4);
  }
  else
  {
    v8 = *(_QWORD *)a2;
    v3 = *(_QWORD *)a1;
    *(_WORD *)(a1 + 53) = 10;
    v9 = swap64(v8);
    *(_BYTE *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 56) = v9;
  }
  sub_7443D0(v3, (unsigned __int16 *)(a1 + 53));
  while ( 1 )
  {
    v5 = sub_741450(v3);
    if ( v5 < 2 || *(char *)(v5 + 2) <= 45 )
      break;
    if ( (*(_BYTE *)(v3 + 6016) & 2) != 0 )
      v6 = _byteswap_ulong(*(_DWORD *)(v5 + 3));
    else
      v6 = swap64(*(_QWORD *)(v5 + 3));
    if ( *(_QWORD *)a2 != v6 )
    {
      *(_QWORD *)a2 = v6;
      return 1;
    }
  }
  return 0;
}
