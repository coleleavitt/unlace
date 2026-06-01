void __fastcall sub_1F1D950(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  char *v9; // rdi
  _BYTE *v10; // rsi
  unsigned int v11; // r15d
  _BYTE *v12; // rax
  char *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23[2]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  _BYTE v26[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 13208LL) == 3 )
      *(_DWORD *)(a1 + 24) += 3;
    v6 = *a2;
    v9 = v26;
    ptr = v26;
    v10 = v26;
    v25 = 0x400000000LL;
    if ( v6 )
    {
      v11 = v6;
      v12 = v26;
      if ( v6 > 4 )
      {
        sub_2237220(&ptr, v26, v6, 8);
        v12 = ptr;
        a3 = (unsigned int)v25;
        v11 = *a2;
        v9 = (char *)ptr + 8 * (unsigned int)v25;
      }
      v13 = &v12[8 * v6];
      if ( v13 != v9 )
      {
        v10 = nullptr;
        memset(v9, 0, 8 * ((unsigned __int64)(v13 - v9 - 8) >> 3) + 8);
      }
      LODWORD(v25) = v6;
      if ( v11 )
      {
        v14 = 0;
        v15 = 8LL * (v11 - 1) + 8;
        do
        {
          v16 = *(_QWORD *)(a1 + 8);
          v23[0] = a1;
          v23[1] = *(_QWORD *)(v16 + 144);
          v17 = sub_1F1C3F0(v23, (__int64)v10, a3, a4, a5, a6);
          a3 = (__int64)ptr;
          *(_QWORD *)((char *)ptr + v14) = v17;
          v14 += 8;
        }
        while ( v15 != v14 );
        v10 = ptr;
        v6 = (unsigned int)v25;
      }
      else
      {
        v10 = ptr;
      }
    }
    sub_EF5300((__int64)a2, v10, v6);
    if ( *((_BYTE *)a2 + 8) )
    {
      v22 = sub_1F68F80(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
      v18 = a2[1];
      *(_QWORD *)&a2[2 * v18 + 4 + 2 * (unsigned __int64)*a2] = v22;
    }
    else
    {
      v18 = a2[1];
    }
    if ( v18 )
    {
      v19 = 0;
      v20 = 8LL * (v18 - 1) + 8;
      do
      {
        v19 += 8;
        v21 = sub_1F68F80(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        *(_QWORD *)(v19 + sub_EF5320(a2) - 8) = v21;
      }
      while ( v19 != v20 );
    }
    if ( ptr != v26 )
      free(ptr);
  }
}
