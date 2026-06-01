__int64 __fastcall sub_1BCCB70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 47 )
    return 0;
  v8 = sub_F60F10(v6, a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v8 + 77) & 2) == 0 )
    return 0;
  v9 = sub_6F3660((__int64)v8);
  return (unsigned int)((*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL]
                        | (unsigned __int8)*(_QWORD *)(a1 + 24))
                       & 7) != (*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                              | ((unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v9)
                              & 7))
       + 1;
}
