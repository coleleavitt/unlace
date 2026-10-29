__int64 __fastcall sub_1584910(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rsi
  char *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rsi
  __int64 v22; // r12
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r12
  int v26; // r14d
  __int64 v27; // rax
  _BYTE *v28; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-38h]

  v5 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  sub_1583880(a1, a3);
  if ( *(_BYTE *)(a2 + 64) && *(_QWORD *)(a2 + 56) )
  {
    sub_168B9B0(&v28, *(_QWORD *)(a2 + 16) + 8LL, 6416);
    v7 = *(__int64 **)(a2 + 56);
    sub_157E260(&v28, (__int64)v7);
    v11 = *(_QWORD **)(a2 + 56);
    v12 = *(__int64 (**)(void))(*v11 + 64LL);
    if ( (char *)v12 == (char *)sub_6EF210 )
    {
      v7 = &v30;
      v13 = sub_B7F750(v11, &v30, (__int64)sub_6EF210, v8, v9, v10);
    }
    else
    {
      v13 = v12();
    }
    LODWORD(v30) = sub_EEB7E0(v13, (__int64)v7, a4);
    sub_1582CA0((__int64)&v31, &v28);
    if ( v28 && v29 )
      sub_1580C40(v29, (unsigned __int64)v28);
    v14 = *(unsigned int *)(a1 + 8);
    v15 = *(__int64 **)a1;
    v16 = (char *)&v30;
    v17 = v14 + 1;
    v18 = *(_QWORD *)a1 + 32 * v14;
    if ( v17 > *(unsigned int *)(a1 + 12) )
    {
      if ( v15 > &v30 || v18 <= (unsigned __int64)&v30 )
      {
        v25 = sub_2237400(a1, v5, v17, 32, &v28);
        sub_15825A0(a1, v25);
        v26 = (int)v28;
        if ( v5 != *(_QWORD *)a1 )
          free(*(void **)a1);
        v27 = *(unsigned int *)(a1 + 8);
        *(_QWORD *)a1 = v25;
        v16 = (char *)&v30;
        *(_DWORD *)(a1 + 12) = v26;
        v18 = v25 + 32 * v27;
      }
      else
      {
        v22 = sub_2237400(a1, v5, v17, 32, &v28);
        sub_15825A0(a1, v22);
        v23 = (int)v28;
        if ( v5 != *(_QWORD *)a1 )
          free(*(void **)a1);
        v24 = *(unsigned int *)(a1 + 8);
        *(_QWORD *)a1 = v22;
        v16 = (char *)(v22 + (char *)&v30 - (char *)v15);
        *(_DWORD *)(a1 + 12) = v23;
        v18 = v22 + 32 * v24;
      }
    }
    v19 = *(_DWORD *)v16;
    *(_QWORD *)(v18 + 16) = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_DWORD *)v18 = v19;
    *(_DWORD *)(v18 + 24) = *((_DWORD *)v16 + 6);
    *(_QWORD *)(v18 + 16) = *((_QWORD *)v16 + 2);
    *(_QWORD *)(v18 + 8) = *((_QWORD *)v16 + 1);
    *((_QWORD *)v16 + 1) = 0;
    v20 = v31;
    ++*(_DWORD *)(a1 + 8);
    if ( v20 && v32 )
      sub_1580C40(v32, v20);
  }
  return a1;
}
