__int64 __fastcall sub_1982A50(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // rax
  char v9; // r14
  unsigned int i; // ebp
  unsigned __int16 **v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rdi
  __int64 v18; // rax
  char v19; // [rsp+18h] [rbp-A0h]
  int v20; // [rsp+1Ch] [rbp-9Ch]
  int v21; // [rsp+20h] [rbp-98h]
  unsigned __int64 v22; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+38h] [rbp-80h]
  _BYTE v25[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20);
  v20 = *(_DWORD *)(a2 + 64);
  v8 = *(_QWORD *)(a2 + 72);
  ptr = v25;
  v21 = v8;
  v24 = 0x800000000LL;
  if ( v7 > 8 )
  {
    sub_2237220(&ptr, v25, v7, 8);
  }
  else if ( !v7 )
  {
    v16 = v25;
    goto LABEL_11;
  }
  v9 = 0;
  v19 = 0;
  for ( i = 0; i != v7; ++i )
  {
    while ( 1 )
    {
      v11 = (unsigned __int16 **)(v6 + 8LL * i);
      v12 = sub_190CCA0(a1, *v11, a3, a4);
      if ( v12 > 1 )
        break;
      ++i;
      v9 = 1;
      if ( v7 == i )
        goto LABEL_9;
    }
    v13 = (unsigned int)v24;
    v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v19 |= *v11 != (unsigned __int16 *)v14;
    v15 = (unsigned int)v24 + 1LL;
    if ( v15 > HIDWORD(v24) )
    {
      v22 = v14;
      sub_2237220(&ptr, v25, v15, 8);
      v13 = (unsigned int)v24;
      v14 = v22;
    }
    *((_QWORD *)ptr + v13) = v14;
    LODWORD(v24) = v24 + 1;
  }
LABEL_9:
  v5 = a2;
  v16 = ptr;
  if ( v9 )
  {
    v5 = 1;
  }
  else if ( v19 )
  {
    v18 = sub_1C54D50(
            *a1,
            *(_DWORD *)(a2 + 8),
            *(_DWORD *)(a2 + 40),
            v21,
            v20,
            *(_DWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 48),
            *(_QWORD *)(a2 + 56),
            *(_DWORD *)(a2 + 20),
            *(_QWORD *)(a2 + 80),
            (unsigned int)(*(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 16)),
            *(_QWORD *)(a2 + 88),
            *(unsigned int *)(a2 + 24),
            (__int64)ptr,
            (unsigned int)v24,
            *(_DWORD *)(a2 + 44));
    v16 = ptr;
    v5 = v18;
  }
LABEL_11:
  if ( v16 != v25 )
    free(v16);
  return v5;
}
