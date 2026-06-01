unsigned __int64 __fastcall sub_7B3DF0(__int64 a1, __int64 a2, void *a3, signed __int64 a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rsi
  __int64 v12; // rax

  if ( a2 == -1 )
    return -1;
  if ( a5 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      *(_BYTE *)(a1 + 60) = 86;
      *(_WORD *)(a1 + 53) = 6;
      *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
    }
    else
    {
      *(_WORD *)(a1 + 53) = 10;
      v8 = swap64(a2);
      *(_BYTE *)(a1 + 64) = 86;
      *(_QWORD *)(a1 + 56) = v8;
      v7 = *(_QWORD *)(a1 + 8);
      if ( !v7 )
        v7 = *(_QWORD *)a1;
    }
  }
  else
  {
    *(_WORD *)(a1 + 53) = 10;
    v12 = swap64(a2);
    *(_BYTE *)(a1 + 64) = 86;
    *(_QWORD *)(a1 + 56) = v12;
    v7 = *(_QWORD *)a1;
  }
  v9 = (unsigned __int16 *)sub_7443D0(v7, (unsigned __int16 *)(a1 + 53));
  v10 = v9;
  if ( v9 )
    v10 = (unsigned __int16 *)((char *)v9 + *v9 + 2);
  return sub_7AFF00(a3, v10, a4);
}
