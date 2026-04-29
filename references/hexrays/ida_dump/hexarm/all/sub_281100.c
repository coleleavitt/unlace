__int64 __fastcall sub_281100(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 80) - 53) <= 1
    && *(_DWORD *)(a2 + 8) == 57
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 68
    && (unsigned __int8)sub_256260(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 64)) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( sub_259E60(a2, *(_QWORD *)(a1 + 72)) )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 == 58 )
  {
    if ( *(_QWORD *)(v2 + 24) == a2 )
      return 0xFFFFFFFFLL;
    goto LABEL_10;
  }
  if ( v3 > 0x3A )
  {
    if ( v3 == 60 )
      return 0xFFFFFFFFLL;
    goto LABEL_10;
  }
  if ( v3 <= 0x24 )
  {
    if ( v3 > 0x22 )
    {
      v5 = *(_QWORD *)(v2 + 32);
      if ( *(_DWORD *)(v5 + 8) != 61 || sub_255DF0(*(__int64 **)(v5 + 24), (_QWORD *)(v5 + 48)) != 1 )
        goto LABEL_8;
    }
  }
  else if ( v3 - 37 <= 4 )
  {
LABEL_8:
    if ( *(_QWORD *)(v2 + 24) == a2 && (unsigned int)(*(_DWORD *)(a1 + 80) - 53) <= 1
      || *(_QWORD *)(v2 + 32) == a2 && (unsigned int)(*(_DWORD *)(a1 + 80) - 55) <= 1 )
    {
      return 0xFFFFFFFFLL;
    }
  }
LABEL_10:
  if ( (unsigned __int8)sub_2453D0(v2, a2) )
    return 0xFFFFFFFFLL;
  v6 = j__qalloc_or_throw(64);
  *(_QWORD *)v6 = -1;
  *(_QWORD *)(v6 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(v6 + 24) = v6;
  *(_DWORD *)(v6 + 8) = v7;
  copy_tinfo_t(v6 + 48, a2 + 48);
  v8 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)v6;
  v9 = *(_DWORD *)(v6 + 8);
  *(_QWORD *)v6 = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v9;
  v10 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 8) = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v10;
  v11 = *(_QWORD *)(v6 + 24);
  *(_DWORD *)(v6 + 12) = v8;
  v12 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v11;
  v13 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 24) = v12;
  v14 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v13;
  v15 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 32) = v14;
  v16 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v15;
  v17 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 40) = v16;
  v18 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v17;
  LODWORD(v17) = *(_DWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 48) = v18;
  LODWORD(v18) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v17;
  *(_DWORD *)(v6 + 56) = v18;
  return 1;
}
