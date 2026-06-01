unsigned __int64 __fastcall sub_755430(__int64 a1, const void *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  void *v12; // rax
  char v13; // al

  if ( a5 == 2 )
  {
    v7 = 2;
    v8 = 3;
  }
  else if ( a5 > 2 )
  {
    v7 = 3;
    v8 = 4;
  }
  else if ( a5 )
  {
    v7 = 1;
    v8 = 2;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  v9 = sub_7222F0(a1 + 2192, 48, 3);
  *(_QWORD *)(v9 + 16) = a4;
  v10 = v9;
  *(_OWORD *)v9 = 0;
  *(_BYTE *)(v9 + 34) &= 0xE0u;
  v11 = *(_QWORD *)(v9 + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(v10 + 36) = a3;
  *(_QWORD *)(v10 + 24) = v11 | (v7 << 52) | (v8 << 48) | 0x19C00000000LL;
  *(_WORD *)(v10 + 32) = 346;
  v12 = (void *)sub_7222C0(a1 + 2192, (unsigned int)a3, 0);
  *(_QWORD *)(v10 + 40) = v12;
  if ( a3 )
    memcpy(v12, a2, *(unsigned int *)(v10 + 36));
  v13 = *(_BYTE *)(v10 + 30);
  *(_BYTE *)(v10 + 34) |= 4u;
  if ( (~v13 & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) = v13 & 0xF;
  return v10;
}

