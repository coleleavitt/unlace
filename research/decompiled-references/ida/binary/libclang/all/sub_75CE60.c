unsigned __int64 __fastcall sub_75CE60(_QWORD *a1, const void *a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v9; // r12
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  char *v14; // rdi
  char *v15; // rax
  char v16; // al
  __int64 v19; // [rsp+18h] [rbp-40h]

  if ( a6 == 1 )
  {
    v9 = 1;
    v10 = 2;
  }
  else if ( a6 == 2 )
  {
    v9 = 2;
    v10 = 3;
  }
  else
  {
    v9 = 0;
    v10 = 1;
  }
  v19 = (__int64)(a1 + 274);
  v11 = sub_7222F0((__int64)(a1 + 274), 56, 3);
  *(_OWORD *)v11 = 0;
  v12 = v11;
  *(_QWORD *)(v11 + 16) = a5;
  *(_BYTE *)(v11 + 34) &= 0xE0u;
  v13 = *(_QWORD *)(v11 + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(v12 + 36) = a3;
  *(_WORD *)(v12 + 32) = 376;
  *(_QWORD *)(v12 + 24) = v13 | (v9 << 52) | (v10 << 48) | 0x19C00000000LL;
  v14 = (char *)a1[274];
  a1[284] += (unsigned int)a3;
  v15 = &v14[(unsigned int)a3];
  if ( a1[275] >= (unsigned __int64)v15 && v14 )
    a1[274] = v15;
  else
    v14 = (char *)sub_722150(v19, (unsigned int)a3, 0);
  *(_QWORD *)(v12 + 40) = v14;
  *(_DWORD *)(v12 + 48) = a4;
  if ( a3 )
    memcpy(v14, a2, *(unsigned int *)(v12 + 36));
  v16 = *(_BYTE *)(v12 + 30);
  *(_BYTE *)(v12 + 34) |= 4u;
  if ( (~v16 & 0xF0) == 0 && !*(_QWORD *)v12 )
    *(_BYTE *)(v12 + 30) = v16 & 0xF;
  return v12;
}

