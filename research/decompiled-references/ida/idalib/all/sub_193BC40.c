__int64 __fastcall sub_193BC40(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  int v5; // eax
  int v6; // r9d
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  unsigned int v11; // r15d
  char v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rdi
  __int64 v18; // rbx
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // [rsp+14h] [rbp-A4h]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+20h] [rbp-98h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h]
  _BYTE v28[120]; // [rsp+40h] [rbp-78h] BYREF

  v5 = *(_DWORD *)(a2 + 64);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 32);
  v27 = 0x800000000LL;
  v23 = v5;
  v24 = *(_QWORD *)(a2 + 72);
  v8 = *(_DWORD *)(a2 + 20);
  ptr = v28;
  v9 = (unsigned int)(v6 + v8);
  v10 = v9;
  if ( (unsigned int)v9 > 8 )
  {
    sub_2237220(&ptr, v28, v9, 8);
  }
  else if ( !(_DWORD)v9 )
  {
    v20 = 0;
    v17 = v28;
    v21 = 0;
    goto LABEL_15;
  }
  v11 = 0;
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v13 = sub_1933BC0(a1, *(_QWORD *)(v7 + 8LL * v11), a3, a4);
      if ( v13 > 1 )
        break;
      ++v11;
      v12 = 1;
      if ( v10 == v11 )
        goto LABEL_9;
    }
    v14 = (unsigned int)v27;
    v15 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v16 = (unsigned int)v27 + 1LL;
    if ( v16 > HIDWORD(v27) )
    {
      v25 = v15;
      sub_2237220(&ptr, v28, v16, 8);
      v14 = (unsigned int)v27;
      v15 = v25;
    }
    ++v11;
    *((_QWORD *)ptr + v14) = v15;
    LODWORD(v27) = v27 + 1;
  }
  while ( v10 != v11 );
LABEL_9:
  v17 = ptr;
  v18 = 1;
  if ( !v12 )
  {
    v8 = *(_DWORD *)(a2 + 20);
    v6 = *(_DWORD *)(a2 + 16);
    v20 = (unsigned int)v27;
    v21 = (unsigned int)(v8 + v6);
LABEL_15:
    v22 = sub_1C54D50(
            *a1,
            *(_DWORD *)(a2 + 8),
            *(_DWORD *)(a2 + 40),
            v24,
            v23,
            v6,
            *(_QWORD *)(a2 + 48),
            *(_QWORD *)(a2 + 56),
            v8,
            *(_QWORD *)(a2 + 80),
            v21,
            *(_QWORD *)(a2 + 88),
            *(unsigned int *)(a2 + 24),
            (__int64)v17,
            v20,
            *(_DWORD *)(a2 + 44));
    v17 = ptr;
    v18 = v22;
  }
  if ( v17 != v28 )
    free(v17);
  return v18;
}
