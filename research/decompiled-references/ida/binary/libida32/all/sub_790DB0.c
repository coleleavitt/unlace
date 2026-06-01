unsigned __int16 *__fastcall sub_790DB0(__int64 a1, unsigned int a2, __int64 *a3, char a4)
{
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rcx
  __int64 v8; // rax

  if ( a2 == -1 )
    return nullptr;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
  *(_WORD *)(a1 + 45) = 6;
  *(_BYTE *)(a1 + 52) = 78;
  v6 = (unsigned __int16 *)sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
  if ( !v6 )
    return nullptr;
  v7 = (unsigned __int16 *)((char *)v6 + *v6 + 2);
  v8 = *v7;
  if ( *v7 && a4 && !*((_BYTE *)v7 + v8 + 1) )
    v8 = (*((_BYTE *)v7 + 2) == 0) + v8 - 1;
  *a3 = v8;
  return v7 + 1;
}

