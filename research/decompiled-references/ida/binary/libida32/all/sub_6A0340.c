char **__fastcall sub_6A0340(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v6; // rsi
  char **result; // rax
  __int64 v8; // rax

  if ( *(_BYTE *)(a1 + 51) || (get_tinfo_property(*a3, 2) & 0xF) == 0xE || a4 == 1 )
    return sub_3573A0((char **)(a2 + 16));
  v6 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 32) <= 5u )
  {
    v8 = qvector_reserve(a2 + 16, v6, 6, 1);
    *(_QWORD *)(a2 + 16) = v8;
    v6 = v8;
  }
  *(_QWORD *)(a2 + 24) = 6;
  *(_DWORD *)v6 = 1818585446;
  *(_BYTE *)(v6 + 4) = 100;
  result = *(char ***)(a2 + 16);
  *((_BYTE *)result + 5) = 0;
  return result;
}

