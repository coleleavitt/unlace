__int64 __fastcall sub_4B05F0(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // eax

  if ( !a2 )
    return 0;
  if ( a3 < (unsigned __int64)sub_4AFDE0((int *)a1) >> 2 )
  {
    v5 = 4 * a3;
    v6 = sub_4AFE70(a1, v5);
    *(_DWORD *)(a2 + 1044) = node2ea(v6);
    v7 = sub_4AFE70(a1, v5 + 1);
    *(_DWORD *)(a2 + 1056) = node2ea(v7);
    v8 = sub_4AFE70(a1, v5 + 2);
    *(_WORD *)(a2 + 1050) = v8;
    *(_WORD *)(a2 + 1048) = HIWORD(v8);
    *(_DWORD *)(a2 + 1052) = sub_4AFE70(a1, v5 + 3);
    return 1;
  }
  else
  {
    *(_QWORD *)(a2 + 1044) = 0xFFFFFFFFLL;
    *(_QWORD *)(a2 + 1052) = 0xFFFFFFFF00000000LL;
    return 0;
  }
}

