__int64 __fastcall sub_7B91A0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *a2;
    *(_BYTE *)(a1 + 60) = -1;
    *(_WORD *)(a1 + 53) = 10;
    *(_DWORD *)(a1 + 61) = -1;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(v4);
  }
  else
  {
    v8 = *(_QWORD *)a2;
    v3 = *(_QWORD *)a1;
    *(_WORD *)(a1 + 53) = 10;
    v9 = swap64(v8);
    v10 = *(unsigned __int16 *)(a1 + 53);
    *(_BYTE *)(a1 + 64) = -1;
    *(_QWORD *)(a1 + 56) = v9;
    if ( v10 + 8 > 0xFFFF )
      abort();
    *(_WORD *)(a1 + 53) = v10 + 8;
    *(_QWORD *)(a1 + 65) = swap64(-1);
  }
  sub_7443D0(v3, (unsigned __int16 *)(a1 + 53));
  while ( 1 )
  {
    sub_741460(v3);
    if ( v5 < 2 || *(char *)(v5 + 2) > 46 )
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
