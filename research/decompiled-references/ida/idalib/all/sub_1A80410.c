__int64 __fastcall sub_1A80410(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  char *v13; // rax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 result; // rax
  unsigned __int64 i; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  void *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  __int64 v37; // rdi
  char v38; // [rsp+Fh] [rbp-59h] BYREF
  int v39; // [rsp+10h] [rbp-58h] BYREF
  __int64 v40; // [rsp+18h] [rbp-50h]
  void *v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  __int64 v43; // [rsp+30h] [rbp-38h]
  __int64 v44; // [rsp+38h] [rbp-30h]

  sub_1A7C050(a1, a3, a2, *(__int64 **)(a1 + 544), 1, a6);
  v9 = *(unsigned int *)(a1 + 10152);
  v10 = *(unsigned int *)(a1 + 10156);
  v39 = 0;
  v40 = 0;
  v44 = 0;
  v11 = v9 + 1;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  if ( v9 + 1 > v10 )
  {
    v36 = *(_QWORD *)(a1 + 10144);
    v37 = a1 + 10144;
    if ( v36 > (unsigned __int64)&v39 || (unsigned __int64)&v39 >= v36 + 48 * v9 )
    {
      sub_1A7FD60(v37, v11);
      v12 = *(_QWORD *)(a1 + 10144);
      v9 = *(unsigned int *)(a1 + 10152);
      v13 = (char *)&v39;
    }
    else
    {
      sub_1A7FD60(v37, v11);
      v12 = *(_QWORD *)(a1 + 10144);
      v9 = *(unsigned int *)(a1 + 10152);
      v13 = (char *)&v39 + v12 - v36;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 10144);
    v13 = (char *)&v39;
  }
  v14 = *((_DWORD *)v13 + 10);
  v15 = v12 + 48 * v9;
  *(_DWORD *)v15 = *(_DWORD *)v13;
  v16 = *((_QWORD *)v13 + 1);
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 8) = v16;
  *(_QWORD *)(v15 + 16) = *((_QWORD *)v13 + 2);
  v17 = *((_QWORD *)v13 + 3);
  *((_QWORD *)v13 + 2) = 0;
  v18 = *(_QWORD *)(v15 + 24);
  *(_QWORD *)(v15 + 24) = v17;
  v19 = *((_QWORD *)v13 + 4);
  *((_QWORD *)v13 + 3) = v18;
  v20 = *(_QWORD *)(v15 + 32);
  *(_QWORD *)(v15 + 32) = v19;
  *((_QWORD *)v13 + 4) = v20;
  *(_DWORD *)(v15 + 40) = v14 != 0;
  v21 = *((_QWORD *)v13 + 2);
  ++*((_DWORD *)v13 + 10);
  *((_QWORD *)v13 + 3) = v21;
  v22 = v41;
  v23 = (unsigned int)(*(_DWORD *)(a1 + 10152) + 1);
  *(_DWORD *)(a1 + 10152) = v23;
  if ( v22 )
  {
    operator delete(v22);
    v23 = *(unsigned int *)(a1 + 10152);
  }
  v24 = 48 * v23;
  *(_QWORD *)(*(_QWORD *)(a1 + 10144) + v24 - 40) = a3;
  if ( *(char *)(*(_QWORD *)(a1 + 232) + 22LL) < 0 )
  {
    v29 = *(_QWORD *)(a1 + 10144) + v24 - 48;
    *(_QWORD *)(v29 + 32) = 0;
    v30 = *(void **)(v29 + 16);
    *(_OWORD *)(v29 + 16) = 0;
    *(_QWORD *)(v29 + 16) = *(_QWORD *)(a1 + 11128);
    v31 = *(_QWORD *)(a1 + 11136);
    *(_QWORD *)(a1 + 11128) = 0;
    v32 = *(_QWORD *)(v29 + 24);
    *(_QWORD *)(v29 + 24) = v31;
    v33 = *(_QWORD *)(a1 + 11144);
    *(_QWORD *)(a1 + 11136) = v32;
    v34 = *(_QWORD *)(v29 + 32);
    *(_QWORD *)(v29 + 32) = v33;
    *(_QWORD *)(a1 + 11144) = v34;
    if ( v30 )
      operator delete(v30);
    v35 = *(_QWORD *)(a1 + 11128);
    if ( v35 != *(_QWORD *)(a1 + 11136) )
      *(_QWORD *)(a1 + 11136) = v35;
    ++*(_DWORD *)(a1 + 11152);
    ++*(_DWORD *)(v29 + 40);
  }
  sub_FF1730(a1 + 11128, a3, a2, 1, (__int64)nullsub_1204, (__int64)&v38, (char)nullsub_1205);
  result = *(_QWORD *)(a1 + 232);
  if ( *(_BYTE *)(result + 201) >> 5 || *(char *)(result + 22) < 0 )
  {
    for ( i = *(_QWORD *)(a1 + 544); i; i = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFF8LL) + 8) )
    {
      while ( 1 )
      {
        v27 = sub_B8C1B0(i);
        *(_QWORD *)(v27 + 8) = (((unsigned __int64)*(char *)(*(_QWORD *)(a1 + 232) + 22LL) >> 63) + 1)
                             | *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(sub_B8C1B0(i) - 8) = a3;
        result = sub_B8C1B0(i);
        v28 = *(_QWORD *)(result + 16);
        if ( (v28 & 4) != 0 )
          break;
        i = v28 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !i )
          return result;
      }
    }
  }
  return result;
}
