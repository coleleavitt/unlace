/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063830
// Address: 0x0000000100063830

//----- (0000000100063830) ----------------------------------------------------
__int64 __fastcall sub_100063830(__int64 a1, int *a2, __int64 a3, int a4)
{
  __int64 *v5; // rdi
  int v6; // r12d
  unsigned __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rsi
  char *v10; // r14
  __int64 v11; // rax
  size_t v12; // r13
  bool v13; // cf
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  void *v16; // rax
  size_t v17; // r13
  void *v18; // rbx
  void *v19; // rdi
  void *__src; // [rsp+8h] [rbp-78h]
  __int64 **v23; // [rsp+20h] [rbp-60h]
  __int64 *v24; // [rsp+28h] [rbp-58h]
  unsigned __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 *v27; // [rsp+48h] [rbp-38h] BYREF

  if ( a4 > 0 )
  {
    v23 = (__int64 **)(a1 + 328);
    v5 = (__int64 *)(a1 + 336);
    v6 = 0;
    v24 = v5;
    do
    {
      v7 = *(_QWORD *)a3;
      v26 = *(_QWORD *)a3;
      if ( *(_QWORD *)(a3 + 16) > 1u )
      {
        v27 = &v26;
        v10 = sub_1000648A0(v23, &v26, (__int64)&byte_10009086F, &v27);
        *((_QWORD *)v10 + 5) = *(_QWORD *)a3;
        if ( v10 + 40 != (char *)a3 )
        {
          v11 = *(_QWORD *)(a3 + 16);
          v12 = 0;
          v13 = v11 == 0;
          v14 = v11 - 1;
          if ( !v13 )
            v12 = v14;
          if ( v13 || v14 == 0 )
          {
            *((_QWORD *)v10 + 7) = 0;
          }
          else
          {
            __src = *(void **)(a3 + 8);
            v15 = v12 + 1;
            v16 = *((void **)v10 + 6);
            if ( *((_QWORD *)v10 + 8) <= v12 )
            {
              v16 = qvector_reserve((__int64)(v10 + 48), *((void **)v10 + 6), v15, 1u);
              *((_QWORD *)v10 + 6) = v16;
              v15 = v12 + 1;
            }
            *((_QWORD *)v10 + 7) = v15;
            memmove(v16, __src, v12);
            *(_BYTE *)(*((_QWORD *)v10 + 6) + v12) = 0;
          }
        }
        *((_DWORD *)v10 + 18) = *(_DWORD *)(a3 + 32);
        v17 = *(_QWORD *)(a3 + 48);
        if ( v17 )
        {
          v18 = qalloc_or_throw(*(_QWORD *)(a3 + 48));
          memcpy(v18, *(const void **)(a3 + 40), v17);
        }
        else
        {
          v18 = nullptr;
        }
        v19 = *((void **)v10 + 10);
        if ( v19 )
        {
          *((_QWORD *)v10 + 11) = 0;
          qfree(v19);
        }
        *((_QWORD *)v10 + 10) = v18;
        *((_QWORD *)v10 + 11) = v17;
        *((_QWORD *)v10 + 12) = v17;
        memcpy(v10 + 104, (const void *)(a3 + 64), 0x170u);
      }
      else
      {
        v8 = (__int64 *)*v5;
        if ( !*v5 )
          goto LABEL_5;
        v9 = v5;
        do
        {
          if ( v8[4] >= v7 )
            v9 = v8;
          v8 = (__int64 *)v8[v8[4] < v7];
        }
        while ( v8 );
        if ( v9 == v5 || v7 < v9[4] )
          goto LABEL_5;
        sub_1000647F0((__int64)v23, v9);
      }
      v5 = v24;
LABEL_5:
      ++v6;
      a3 += 432;
    }
    while ( v6 != a4 );
  }
  if ( a2 )
    *a2 = a4;
  return 1;
}
// 10009086F: using guessed type char byte_10009086F;
