__int64 __fastcall sub_30C830(__int64 a1, int a2, char a3)
{
  unsigned int v5; // esi
  int v7; // esi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  v5 = 0;
  if ( *(_DWORD *)a1 != 8 )
  {
    if ( !a3 || (*(_DWORD *)a1 & 0xF) != 2 )
      goto LABEL_3;
    v7 = *(_DWORD *)(a1 + 4);
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16) - 16);
    v9 = *v8 + v8[1];
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    v11 = v9 - 1;
    if ( v7 != 8 )
      v10 = (1LL << (8 * (unsigned __int8)v7 - 1)) - 1;
    v5 = 0;
    if ( v10 >= v11 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 4) = a2;
      return 1;
    }
  }
  return v5;
}
