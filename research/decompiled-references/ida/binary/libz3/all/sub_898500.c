__int64 __fastcall sub_898500(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 result; // rax

  v4 = *a3;
  v5 = *(_QWORD *)(a1 + 1592) + 232LL * a2;
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
  {
    sub_182EA00(v4, a3 + 1, v5 + 136);
    if ( (*(_BYTE *)(v5 + 156) & 1) == 0 )
    {
LABEL_3:
      v7 = *(_DWORD *)(v5 + 152);
      *((_BYTE *)a3 + 28) &= ~1u;
      *((_DWORD *)a3 + 6) = v7;
      if ( (*(_BYTE *)(v5 + 172) & 1) == 0 )
        goto LABEL_4;
LABEL_8:
      sub_182EA00(v4, a3 + 5, v5 + 168);
      if ( (*(_BYTE *)(v5 + 188) & 1) == 0 )
        goto LABEL_5;
      return sub_182EA00(v4, a3 + 7, v5 + 184);
    }
  }
  else
  {
    v6 = *(_DWORD *)(v5 + 136);
    *((_BYTE *)a3 + 12) &= ~1u;
    *((_DWORD *)a3 + 2) = v6;
    if ( (*(_BYTE *)(v5 + 156) & 1) == 0 )
      goto LABEL_3;
  }
  sub_182EA00(v4, a3 + 3, v5 + 152);
  if ( (*(_BYTE *)(v5 + 172) & 1) != 0 )
    goto LABEL_8;
LABEL_4:
  v8 = *(_DWORD *)(v5 + 168);
  *((_BYTE *)a3 + 44) &= ~1u;
  *((_DWORD *)a3 + 10) = v8;
  if ( (*(_BYTE *)(v5 + 188) & 1) == 0 )
  {
LABEL_5:
    result = *(unsigned int *)(v5 + 184);
    *((_BYTE *)a3 + 60) &= ~1u;
    *((_DWORD *)a3 + 14) = result;
    return result;
  }
  return sub_182EA00(v4, a3 + 7, v5 + 184);
}

