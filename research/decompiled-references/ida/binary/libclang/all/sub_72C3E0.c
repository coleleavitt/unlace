unsigned __int64 __fastcall sub_72C3E0(_QWORD *a1, const void *a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  char *v13; // rdi
  char *v14; // rax

  v5 = (__int64)(a1 + 274);
  v10 = sub_7222F0((__int64)(a1 + 274), 56, 3);
  *(_QWORD *)(v10 + 16) = a5;
  v11 = *(_QWORD *)(v10 + 24) & 0xFC00000000000000LL;
  v12 = v10;
  *(_OWORD *)v10 = 0;
  *(_BYTE *)(v10 + 34) &= 0xE0u;
  *(_QWORD *)(v10 + 24) = v11 | 0x6019C00000000LL;
  *(_WORD *)(v10 + 32) = 131;
  *(_DWORD *)(v10 + 36) = a3;
  v13 = (char *)a1[274];
  a1[284] += (unsigned int)a3;
  v14 = &v13[(unsigned int)a3];
  if ( a1[275] >= (unsigned __int64)v14 && v13 )
    a1[274] = v14;
  else
    v13 = (char *)sub_722150(v5, (unsigned int)a3, 0);
  *(_QWORD *)(v12 + 40) = v13;
  *(_BYTE *)(v12 + 48) = a4;
  if ( a3 )
    memcpy(v13, a2, *(unsigned int *)(v12 + 36));
  if ( (~*(_BYTE *)(v12 + 30) & 0xF0) == 0 && !*(_QWORD *)v12 )
    *(_BYTE *)(v12 + 30) &= 0xFu;
  return v12;
}

