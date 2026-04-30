__int64 __fastcall sub_211B40(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  __int64 v4; // r12
  unsigned int v5; // eax
  int v6; // r13d
  unsigned int v7; // r12d

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 && (v4 = *(_QWORD *)(a1 + 120) + 16 * v1 - 16, LOBYTE(v5) = sub_2110C0(a1, *(int **)v4), v2 = v5, (_BYTE)v5) )
  {
    v6 = 4;
    *(_BYTE *)(v4 + 8) = *(_BYTE *)(a1 + 153);
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(a1 + 152);
    v7 = 1;
    if ( (*(_BYTE *)(a1 + 153) & 1) != 0 )
      goto LABEL_8;
    while ( 1 )
    {
      v7 *= 2;
      if ( !--v6 )
        break;
      if ( (v7 & *(char *)(a1 + 153)) != 0 )
LABEL_8:
        sub_210D40((unsigned int *)a1, v7, -1, 0);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 152) = 0;
    return 0;
  }
  return v2;
}
