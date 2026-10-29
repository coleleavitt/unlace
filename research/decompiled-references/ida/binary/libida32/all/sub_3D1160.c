__int64 __fastcall sub_3D1160(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // r13
  unsigned int v7; // r12d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d

  if ( !a2 )
    return (unsigned int)-2;
  if ( !*(_QWORD *)(a1 + 768) )
    return (unsigned int)-1;
  lock_segm(a2, 1);
  sub_3E9710(a1, 0, v4, v5);
  v6 = a2[6] & 8;
  if ( a3 )
  {
    if ( !v6 )
      sub_3B7400((int)"Converting storage type for segment %a..%a...", *a2, a2[1]);
    *((_WORD *)a2 + 12) |= 8u;
    update_segm(a2);
  }
  else
  {
    v7 = sub_3EA290(a1, (int)a2);
    if ( v7 )
      goto LABEL_7;
    *((_WORD *)a2 + 12) &= ~8u;
    update_segm(a2);
    if ( v6 )
      callui(1, (int)a2, (int)&callui, v9, v10, v11);
  }
  v7 = 0;
LABEL_7:
  lock_segm(a2, 0);
  return v7;
}

