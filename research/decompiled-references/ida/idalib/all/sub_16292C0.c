__int64 __fastcall sub_16292C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // dl
  unsigned __int64 v8; // rax
  __int16 v9; // ax
  __int64 v11; // rdx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v12 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
    v13 = *v12;
    a4 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( *v12 >= a4 )
    {
      if ( v13 != a4 )
      {
        while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 136 )
        {
          a4 += 8LL;
          if ( v13 == a4 )
            goto LABEL_2;
        }
        return 1;
      }
    }
    else
    {
      v14 = *v12;
      while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 136 )
      {
        v14 += 8LL;
        if ( a4 == v14 )
          goto LABEL_2;
      }
      if ( a4 != v14 )
        return 1;
    }
  }
LABEL_2:
  if ( (*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v6 )
    return 0;
  if ( *(_BYTE *)(v6 + 16) != 26 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 26 )
      return 0;
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, a4);
    if ( !v6 )
      return 0;
  }
  v7 = *(_BYTE *)(v6 + 19);
  if ( (v7 & 0x40) == 0 )
    return 0;
  v8 = (v6 + ((v7 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v6 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v8 + 1) & 4) == 0 )
    return 0;
  v9 = *(_WORD *)(v8 + 8);
  if ( (v9 & 1) != 0 )
    return 1;
  if ( (v9 & 2) != 0 )
    return 2;
  else
    return 0;
}
