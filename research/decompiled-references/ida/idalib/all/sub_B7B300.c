__int64 __fastcall sub_B7B300(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  char v5; // dl
  unsigned __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *i; // rax
  __int64 v13; // rcx

  if ( !(_BYTE)a2 || (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_3;
  v9 = sub_B8C3D0(a1);
  a2 = (unsigned int)a2;
  v10 = *(__int64 **)v9;
  a4 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
  if ( *(_QWORD *)v9 < a4 )
  {
    v11 = *(__int64 **)v9;
    while ( *(_WORD *)(*v11 + 36) != 136 )
    {
      if ( (__int64 *)a4 == ++v11 )
        goto LABEL_3;
    }
    if ( (__int64 *)a4 == v11 )
      goto LABEL_3;
    return (unsigned int)a2;
  }
  if ( v10 != (__int64 *)a4 )
  {
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 136 )
    {
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( v10 == i )
          break;
        v13 = *i;
        if ( *(_WORD *)(v13 + 36) == 136 )
          return (unsigned int)a2;
      }
      goto LABEL_3;
    }
    return (unsigned int)a2;
  }
LABEL_3:
  if ( (*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) != 0
    && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0
    && (*(_BYTE *)(v4 + 16) == 26
     || (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v8 + 16) == 26)
     && (v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, a4)) != 0)
    && (v5 = *(_BYTE *)(v4 + 19), (v5 & 0x40) != 0)
    && (v6 = (v4 + ((v5 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v4 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL,
        (*(_BYTE *)(v6 + 1) & 4) != 0) )
  {
    return *(_WORD *)(v6 + 8) & 1;
  }
  else
  {
    return 0;
  }
}
