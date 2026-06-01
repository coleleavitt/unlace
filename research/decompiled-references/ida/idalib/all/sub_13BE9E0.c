__int64 __fastcall sub_13BE9E0(__int64 a1, _BYTE *a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  const char *v9; // rbp
  unsigned int v10; // eax

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v4 = *(_DWORD *)(v3 + 8);
  if ( a2[8] )
    v4 = _byteswap_ulong(v4);
  v5 = v4 + a3;
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 16LL) - v3;
  if ( v5 >= v6
    || (v7 = v6 - v5, (_DWORD)v6 == (_DWORD)v5)
    || (v9 = (const char *)(v3 + v5), v10 = strnlen(v9, v7), v7 == v10) && v9[v7 - 1] )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *(_BYTE *)(a1 + 16) = 1;
    return a1;
  }
}
