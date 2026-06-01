unsigned __int64 __fastcall sub_79BDC0(unsigned int *a1, __int64 a2, void *a3, signed __int64 a4)
{
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rsi
  unsigned int v10; // esi
  __int64 v11; // rdi

  v10 = *a1;
  v11 = *(_QWORD *)(a2 + 1544);
  if ( v10 == -1 )
    return -1;
  *(_DWORD *)(v11 + 48) = _byteswap_ulong(v10);
  *(_WORD *)(v11 + 45) = 6;
  *(_BYTE *)(v11 + 52) = 86;
  v6 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v11, (unsigned __int16 *)(v11 + 45));
  v7 = v6;
  if ( v6 )
    v7 = (unsigned __int16 *)((char *)v6 + *v6 + 2);
  return sub_78F1B0(a3, v7, a4);
}

