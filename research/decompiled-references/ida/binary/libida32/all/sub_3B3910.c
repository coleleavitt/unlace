__int64 __fastcall sub_3B3910(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rax
  unsigned __int64 v9; // rax

  v4 = pack_dd(a2, a3, *a1);
  if ( v4 >= a3 )
    return -1;
  v5 = pack_dd(v4, a3, a1[1] - *a1);
  if ( v5 >= a3 )
    return -1;
  v6 = pack_ds(v5, a3, *((_QWORD *)a1 + 1), 0);
  if ( v6 >= a3 )
    return -1;
  v7 = pack_ds(v6, a3, *((_QWORD *)a1 + 2), 0);
  if ( v7 >= a3 )
    return -1;
  v8 = (_BYTE *)pack_ds(v7, a3, *((_QWORD *)a1 + 3), 0);
  if ( (unsigned __int64)v8 >= a3 )
    return -1;
  *v8 = *((_BYTE *)a1 + 32);
  if ( (unsigned __int64)(v8 + 1) >= a3 )
    return -1;
  v9 = pack_dd(v8 + 1, a3, a1[9] + 1);
  if ( v9 >= a3 )
    return -1;
  else
    return v9 - a2;
}

