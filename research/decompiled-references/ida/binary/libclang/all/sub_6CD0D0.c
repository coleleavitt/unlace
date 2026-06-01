__int64 __fastcall sub_6CD0D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v8; // rax
  unsigned __int8 v9; // dl

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(v3[1] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]
                                                              & 0xFFFFFFFFFFFFFFF0LL) )
    return 1;
  v5 = *v3;
  if ( (unsigned int)*(unsigned __int8 *)(*v3 + 16) - 56 > 1 )
  {
    v8 = sub_B0D320(*v3);
    v6 = *(_QWORD *)v4;
    v5 = v8;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 16LL) - 56 <= 1 )
    {
LABEL_4:
      if ( *(_DWORD *)(v6 + 20) != *(_DWORD *)(v5 + 20) )
        return 0;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *(_QWORD *)v4;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 16LL) - 56 <= 1 )
      goto LABEL_4;
  }
  v6 = sub_B0D320(v6);
  if ( *(_DWORD *)(v6 + 20) != *(_DWORD *)(v5 + 20) )
    return 0;
LABEL_10:
  if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v5 + 32) & 7LL) != (*(_QWORD *)&byte_8[*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v6 + 32) & 7LL) )
    return 0;
  v9 = (*(_BYTE *)(v5 + 18) >> 3) & 0xF;
  if ( (unsigned int)v9 - 2 <= 1 )
    return 0;
  return (((*(_BYTE *)(v6 + 18) >> 3) & 0xFu) - 2 > 1)
       & (unsigned __int8)(((v9 + 10) & 0xFu) > 6 && ((((*(_BYTE *)(v6 + 18) >> 3) & 0xF) + 10) & 0xFu) > 6);
}

