unsigned __int16 *__fastcall sub_7B3000(__int64 a1, __int64 a2, __int64 *a3, char a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax

  if ( a2 == -1 )
    return nullptr;
  if ( a5 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      *(_BYTE *)(a1 + 60) = 78;
      *(_WORD *)(a1 + 53) = 6;
      *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
    }
    else
    {
      *(_WORD *)(a1 + 53) = 10;
      v8 = swap64(a2);
      *(_BYTE *)(a1 + 64) = 78;
      *(_QWORD *)(a1 + 56) = v8;
      v7 = *(_QWORD *)(a1 + 8);
      if ( !v7 )
        v7 = *(_QWORD *)a1;
    }
  }
  else
  {
    *(_WORD *)(a1 + 53) = 10;
    v13 = swap64(a2);
    *(_BYTE *)(a1 + 64) = 78;
    *(_QWORD *)(a1 + 56) = v13;
    v7 = *(_QWORD *)a1;
  }
  v9 = (unsigned __int16 *)sub_7443D0(v7, (unsigned __int16 *)(a1 + 53));
  if ( !v9 )
    return nullptr;
  v10 = (unsigned __int16 *)((char *)v9 + *v9 + 2);
  v11 = *v10;
  if ( *v10 && a4 && !*((_BYTE *)v10 + v11 + 1) )
    v11 = (*((_BYTE *)v10 + 2) == 0) + v11 - 1;
  *a3 = v11;
  return v10 + 1;
}
