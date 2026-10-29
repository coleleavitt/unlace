unsigned __int64 __fastcall sub_1E48E00(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned __int64 v3; // rdx
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _DWORD *v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v14; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v16; // [rsp+18h] [rbp-80h]
  _BYTE v17[120]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_DWORD *)(a2 + 20);
  v16 = 0x800000000LL;
  v3 = v2 & 0x1FFFFFFF;
  ptr = v17;
  if ( v3 > 8 )
  {
    sub_2237220(&ptr, v17, v3, 8);
    v3 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
  }
  v4 = 0;
  v5 = (unsigned int)v16;
  v6 = a2 + 8 * v3 + 24;
  v7 = (__int64 *)(a2 + 24);
  if ( a2 + 24 == v6 )
    goto LABEL_10;
  do
  {
    v8 = sub_1DBB390(a1, *v7);
    v9 = (unsigned int)v16;
    v10 = (unsigned int)v16 + 1LL;
    if ( v10 > HIDWORD(v16) )
    {
      v14 = v8;
      sub_2237220(&ptr, v17, v10, 8);
      v9 = (unsigned int)v16;
      v8 = v14;
    }
    *((_QWORD *)ptr + v9) = v8;
    v5 = (unsigned int)(v16 + 1);
    LODWORD(v16) = v16 + 1;
    v4 |= v8 == 0;
    if ( !v4 )
      v4 = *(_BYTE *)(v8 + 28) >> 7;
    ++v7;
  }
  while ( (__int64 *)v6 != v7 );
  if ( v4 )
  {
    v12 = 0;
  }
  else
  {
LABEL_10:
    v11 = nullptr;
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 )
      v11 = *(_DWORD **)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
    v12 = sub_BC21A0(
            *(_QWORD **)(*(_QWORD *)a1 + 248LL),
            *(_DWORD *)(a2 + 8),
            *(_DWORD *)(a2 + 12),
            (__int64)ptr,
            v5,
            *(unsigned int *)(a2 + 16),
            v11);
  }
  if ( ptr != v17 )
    free(ptr);
  return v12;
}
