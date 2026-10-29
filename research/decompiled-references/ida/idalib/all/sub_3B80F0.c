__int64 __fastcall sub_3B80F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rax
  unsigned __int64 v9; // rax

  v4 = pack_dq(a2, a3, *(_QWORD *)a1);
  if ( v4 >= a3 )
    return -1;
  v5 = pack_dq(v4, a3, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( v5 >= a3 )
    return -1;
  v6 = pack_ds(v5, a3, *(_QWORD *)(a1 + 16), 0);
  if ( v6 >= a3 )
    return -1;
  v7 = pack_ds(v6, a3, *(_QWORD *)(a1 + 24), 0);
  if ( v7 >= a3 )
    return -1;
  v8 = (_BYTE *)pack_ds(v7, a3, *(_QWORD *)(a1 + 32), 0);
  if ( (unsigned __int64)v8 >= a3 )
    return -1;
  *v8 = *(_BYTE *)(a1 + 40);
  if ( (unsigned __int64)(v8 + 1) >= a3 )
    return -1;
  v9 = pack_dd(v8 + 1, a3, (unsigned int)(*(_DWORD *)(a1 + 44) + 1));
  if ( v9 >= a3 )
    return -1;
  else
    return v9 - a2;
}
