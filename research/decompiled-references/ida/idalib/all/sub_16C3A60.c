void __fastcall sub_16C3A60(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *v3; // r12
  int v4; // r15d
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  int v13; // edx
  unsigned int *v14; // rdi
  __int64 v15; // rcx
  unsigned int *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v20; // [rsp+0h] [rbp-D8h]
  int v21; // [rsp+Ch] [rbp-CCh]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = &a2[a3];
  v4 = *(_DWORD *)(a1 + 1096);
  ptr = v24;
  v23 = 0x2000000000LL;
  if ( a2 != v3 )
  {
    v6 = a2;
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = *(unsigned int *)(a1 + 24);
        v9 = v4 & 0x7FFFFFFF;
        if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
        {
          v20 = *v6;
          sub_2237220(a1 + 16, a1 + 32, v8 + 1, 4);
          v8 = *(unsigned int *)(a1 + 24);
          v9 = v4 & 0x7FFFFFFF;
          v7 = v20;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v8) = v9;
        v10 = *(_DWORD *)(a1 + 24);
        v11 = (unsigned int)v23;
        v12 = HIDWORD(v23);
        *(_DWORD *)(a1 + 1096) = v10;
        *(_DWORD *)(a1 + 24) = v10 + 1;
        if ( v11 + 1 > v12 )
        {
          v21 = v10;
          v19 = v7;
          sub_2237220(&ptr, v24, v11 + 1, 4);
          v11 = (unsigned int)v23;
          v10 = v21;
          v7 = v19;
        }
        *((_DWORD *)ptr + v11) = v10;
        LODWORD(v23) = v23 + 1;
        sub_16C1900(a1, v7);
      }
      ++v6;
    }
    while ( v3 != v6 );
    v13 = v23;
    v14 = (unsigned int *)ptr;
    *(_DWORD *)(a1 + 1096) = v4;
    if ( v13 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      v16 = v14;
      v17 = (__int64)&v14[v13 - 1 + 1];
      do
      {
        v18 = *v16++;
        *(_BYTE *)(v15 + 4 * v18 + 3) |= 0x80u;
      }
      while ( (unsigned int *)v17 != v16 );
    }
    if ( v14 != (unsigned int *)v24 )
      free(v14);
  }
}
