__int64 __fastcall sub_785D60(__int64 a1, char a2)
{
  __int64 v2; // rdi
  char v3; // al
  unsigned __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  if ( !a2 )
    goto LABEL_2;
  v5 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_2;
  v7 = sub_79A2B0(a1);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( v8 < v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 128 )
    {
      v8 += 8LL;
      if ( v9 == v8 )
        goto LABEL_2;
    }
LABEL_18:
    if ( v8 != v9 )
      return v5;
    goto LABEL_2;
  }
  if ( v8 != v9 )
  {
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 128 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        goto LABEL_2;
    }
    goto LABEL_18;
  }
LABEL_2:
  if ( (*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && (v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0
    && (*(_BYTE *)(v2 + 16) == 26
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && (v2 = sub_B0D320(v2)) != 0)
    && (v3 = *(_BYTE *)(v2 + 23), (v3 & 8) != 0)
    && (v4 = (v2 + 4LL * ((v3 & 0x10) != 0) + 8LL * (unsigned __int16)(*(_DWORD *)(v2 + 20) >> 6) + 48 + 7)
           & 0xFFFFFFFFFFFFFFF8LL,
        (*(_BYTE *)(v4 + 1) & 4) != 0) )
  {
    return *(_WORD *)(v4 + 8) & 1;
  }
  else
  {
    return 0;
  }
}

