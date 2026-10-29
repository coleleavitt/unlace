unsigned __int64 __fastcall sub_750CD0(_QWORD *a1, const void *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char *v11; // rdi
  char *v12; // rax
  char v13; // al

  v5 = (__int64)(a1 + 274);
  v8 = sub_7222F0((__int64)(a1 + 274), 48, 3);
  *(_QWORD *)(v8 + 16) = a4;
  v9 = *(_QWORD *)(v8 + 24) & 0xFC00000000000000LL;
  v10 = v8;
  *(_OWORD *)v8 = 0;
  *(_BYTE *)(v8 + 34) &= 0xE0u;
  *(_QWORD *)(v8 + 24) = v9 | 0xFA019C00000000LL;
  *(_WORD *)(v8 + 32) = 322;
  *(_DWORD *)(v8 + 36) = a3;
  v11 = (char *)a1[274];
  a1[284] += (unsigned int)a3;
  v12 = &v11[(unsigned int)a3];
  if ( a1[275] >= (unsigned __int64)v12 && v11 )
    a1[274] = v12;
  else
    v11 = (char *)sub_722150(v5, (unsigned int)a3, 0);
  *(_QWORD *)(v10 + 40) = v11;
  if ( a3 )
    memcpy(v11, a2, *(unsigned int *)(v10 + 36));
  v13 = *(_BYTE *)(v10 + 30);
  *(_BYTE *)(v10 + 34) |= 4u;
  if ( (~v13 & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) = v13 & 0xF;
  return v10;
}

