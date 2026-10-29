__int64 __fastcall sub_193850(__int64 a1, __int64 a2, char a3)
{
  void (*v5)(void); // rax
  _BYTE *v6; // rdi
  bool v7; // dl
  unsigned int v8; // r13d
  __int64 (*v9)(); // rax

  v5 = *(void (**)(void))(*(_QWORD *)a1 + 392LL);
  if ( v5 != nullsub_121 )
    v5();
  v6 = *(_BYTE **)(a1 + 2520);
  v7 = 1;
  v8 = -1;
  v9 = *(__int64 (**)())(*(_QWORD *)v6 + 136LL);
  if ( (v6[12] & 4) == 0 )
  {
    if ( v9 == sub_91B80 )
      goto LABEL_5;
LABEL_10:
    v8 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64))v9)(v6, a2, 1);
    v7 = v8 == -1;
    goto LABEL_5;
  }
  if ( v9 != sub_B6DB0 )
    goto LABEL_10;
LABEL_5:
  if ( a3 == 1 || !v7 || (*(_BYTE *)(a1 + 2108) & 1) != 0 )
    return v8;
  sub_8F660(
    (__int64)"Impossible to map index %zu to an inode_t. Some features (e.g., drag & drop) will not work.\n",
    a2);
  *(_DWORD *)(a1 + 2108) |= 1u;
  return v8;
}

