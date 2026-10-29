__int64 __fastcall sub_1764430(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // ebx
  __int64 v5; // rax
  char v6; // r14
  unsigned int i; // r12d
  unsigned __int16 **v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  char v18; // [rsp+1Bh] [rbp-9Dh]
  int v19; // [rsp+1Ch] [rbp-9Ch]
  int v20; // [rsp+20h] [rbp-98h]
  unsigned __int64 v21; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v23; // [rsp+38h] [rbp-80h]
  _BYTE v24[120]; // [rsp+40h] [rbp-78h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20);
  v19 = *(_DWORD *)(a2 + 64);
  v5 = *(_QWORD *)(a2 + 72);
  ptr = v24;
  v20 = v5;
  v23 = 0x800000000LL;
  if ( v4 > 8 )
  {
    sub_2237220(&ptr, v24, v4, 8);
  }
  else if ( !v4 )
  {
    v16 = *a1;
    v13 = v24;
    goto LABEL_14;
  }
  v6 = 0;
  v18 = 0;
  for ( i = 0; i != v4; ++i )
  {
    while ( 1 )
    {
      v8 = (unsigned __int16 **)(v3 + 8LL * i);
      v9 = sub_175B800(a1, *v8);
      if ( v9 > 1 )
        break;
      ++i;
      v6 = 1;
      if ( v4 == i )
        goto LABEL_9;
    }
    v10 = (unsigned int)v23;
    v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
    v18 |= *v8 != (unsigned __int16 *)v11;
    v12 = (unsigned int)v23 + 1LL;
    if ( v12 > HIDWORD(v23) )
    {
      v21 = v11;
      sub_2237220(&ptr, v24, v12, 8);
      v10 = (unsigned int)v23;
      v11 = v21;
    }
    *((_QWORD *)ptr + v10) = v11;
    LODWORD(v23) = v23 + 1;
  }
LABEL_9:
  v2 = a2;
  v13 = ptr;
  v14 = 1;
  if ( !v6 )
  {
    v16 = *a1;
    if ( v18 )
    {
LABEL_15:
      v17 = sub_1C54D50(
              v16,
              *(_DWORD *)(v2 + 8),
              *(_DWORD *)(v2 + 40),
              v20,
              v19,
              *(_DWORD *)(v2 + 16),
              *(_QWORD *)(v2 + 48),
              *(_QWORD *)(v2 + 56),
              *(_DWORD *)(v2 + 20),
              *(_QWORD *)(v2 + 80),
              (unsigned int)(*(_DWORD *)(v2 + 20) + *(_DWORD *)(v2 + 16)),
              *(_QWORD *)(v2 + 88),
              *(unsigned int *)(v2 + 24),
              (__int64)v13,
              (unsigned int)v23,
              *(_DWORD *)(v2 + 44));
      v13 = ptr;
      v14 = v17;
      goto LABEL_10;
    }
LABEL_14:
    v14 = v2;
    if ( !*(_DWORD *)(v16 + 12632) )
      goto LABEL_10;
    goto LABEL_15;
  }
LABEL_10:
  if ( v13 != v24 )
    free(v13);
  return v14;
}
