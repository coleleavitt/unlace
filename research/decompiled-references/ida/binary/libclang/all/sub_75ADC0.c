unsigned __int64 __fastcall sub_75ADC0(_QWORD *a1, const void *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // r15
  unsigned __int8 v8; // bp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char *v11; // rdi
  char *v12; // rax
  char v13; // al

  if ( a5 == 1 )
  {
    v7 = 1;
    v8 = 2;
  }
  else if ( a5 == 2 )
  {
    v7 = 2;
    v8 = 3;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  v9 = sub_7222F0((__int64)(a1 + 274), 48, 3);
  *(_OWORD *)v9 = 0;
  v10 = v9;
  *(_QWORD *)(v9 + 16) = a4;
  *(_BYTE *)(v9 + 34) &= 0xE0u;
  *(_DWORD *)(v9 + 36) = a3;
  *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xFC00000000000000LL
                       | (v7 << 52)
                       | ((unsigned __int64)v8 << 48)
                       | 0x19C00000000LL;
  *(_WORD *)(v9 + 32) = 369;
  v11 = (char *)a1[274];
  a1[284] += (unsigned int)a3;
  v12 = &v11[(unsigned int)a3];
  if ( a1[275] >= (unsigned __int64)v12 && v11 )
    a1[274] = v12;
  else
    v11 = (char *)sub_722150((__int64)(a1 + 274), (unsigned int)a3, 0);
  *(_QWORD *)(v10 + 40) = v11;
  if ( a3 )
    memcpy(v11, a2, *(unsigned int *)(v10 + 36));
  v13 = *(_BYTE *)(v10 + 30);
  *(_BYTE *)(v10 + 34) |= 4u;
  if ( (~v13 & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) = v13 & 0xF;
  return v10;
}

