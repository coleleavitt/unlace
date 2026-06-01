unsigned __int64 __fastcall sub_1959C20(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  int *v5; // r12
  __int64 v6; // rcx
  __m128 si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  char *v24; // rbx
  char *v25; // r12
  char *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-158h]
  __int64 v29; // [rsp+28h] [rbp-150h]
  char v30; // [rsp+30h] [rbp-148h]
  __int64 v31; // [rsp+38h] [rbp-140h]
  int v32; // [rsp+40h] [rbp-138h]
  int v33; // [rsp+44h] [rbp-134h]
  __int64 v34; // [rsp+48h] [rbp-130h]
  __int64 v35; // [rsp+68h] [rbp-110h]
  void *src; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+88h] [rbp-F0h]
  _BYTE v38[32]; // [rsp+90h] [rbp-E8h] BYREF
  void *v39[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v40[32]; // [rsp+C0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+E0h] [rbp-98h] BYREF
  __m128 v42; // [rsp+E8h] [rbp-90h]
  _BYTE v43[24]; // [rsp+F8h] [rbp-80h] BYREF
  void *v44; // [rsp+110h] [rbp-68h] BYREF
  __int64 v45; // [rsp+118h] [rbp-60h]
  _BYTE v46[88]; // [rsp+120h] [rbp-58h] BYREF

  v5 = (int *)a2;
  v6 = *a1;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v43[16] = 0;
  src = v38;
  v37 = 0x400000000LL;
  v39[1] = (void *)0x400000000LL;
  ptr = v43;
  v8 = *(unsigned int *)(v6 + 4624);
  v39[0] = v40;
  v28 = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 4616) + 640 * v8 - 520);
  v42 = si128;
  sub_18C74E0(v6, 0, v9, 4);
  v10 = *(_DWORD **)(a2 + 24);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 16LL);
  if ( (char *)v11 == (char *)sub_B70840 )
    v12 = v10[6];
  else
    v12 = v11();
  v13 = sub_B978D0(*(_QWORD **)(*a1 + 248), *(_QWORD *)(*a1 + 544), v12);
  v14 = *a1;
  v34 = (__int64)v13;
  v15 = (__int64)(v13 + 5);
  if ( !v13 )
    v15 = 0;
  v29 = *(_QWORD *)(v14 + 544);
  v16 = *(_QWORD *)(v14 + 512);
  *(_QWORD *)(v14 + 544) = v15;
  v31 = v16;
  v17 = *(_QWORD *)(v14 + 9944);
  *(_QWORD *)(v14 + 512) = 0;
  v35 = v17;
  v32 = *(_DWORD *)(v14 + 80);
  v33 = *(_DWORD *)(v14 + 2632);
  *(_DWORD *)(v14 + 80) = *(_DWORD *)(v14 + 40);
  *(_DWORD *)(v14 + 2632) = *(_DWORD *)(v14 + 3688);
  v30 = sub_194F920(
          a1,
          (__int64 *)(a2 + 48),
          *(_DWORD *)(a2 + 16),
          0,
          0,
          (__int64)v39,
          si128,
          a4,
          (__int64)&src,
          (__int64)&ptr);
  v18 = (__int64 *)((char *)src + 8 * (unsigned int)v37);
  v19 = (__int64 *)src;
  if ( src != v18 )
  {
    do
    {
      if ( *v19 )
        sub_B8C080(*v19, v15);
      ++v19;
    }
    while ( v18 != v19 );
  }
  v20 = 1;
  if ( !v30 )
  {
    v22 = *(unsigned int *)(a2 + 20);
    v44 = v46;
    v45 = 0x400000000LL;
    if ( !(unsigned __int8)sub_1959AC0(
                             a1,
                             (__int64 *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 48),
                             v22,
                             (__int64 *)&v44,
                             si128,
                             a4) )
    {
      v23 = (unsigned int)v45;
      v24 = (char *)v44 + 8 * (unsigned int)v45;
      if ( v44 != v24 )
      {
        v25 = (char *)v44 + 8 * (unsigned int)v45;
        v26 = (char *)v44;
        do
        {
          if ( (unsigned int)(**(_DWORD **)v26 - 1) <= 1 )
          {
            v27 = *(_QWORD *)(*(_QWORD *)v26 + 24LL);
            if ( (v27 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v27 & 4) == 0 )
              sub_B8C080(*(_QWORD *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 24), v15);
          }
          v26 += 8;
        }
        while ( v25 != v26 );
        v5 = (int *)a2;
        v24 = (char *)v44;
        v23 = (unsigned int)v45;
      }
      v20 = sub_C0F470(
              *(_QWORD **)(*a1 + 248),
              v5[1],
              v34,
              v5[8],
              (__int64 *)src,
              (unsigned int)v37,
              v5[9],
              v24,
              v23,
              v5[10]);
    }
    if ( v44 != v46 )
      free(v44);
  }
  if ( v29 )
  {
    *(_QWORD *)(v14 + 544) = v29;
    *(_QWORD *)(v14 + 512) = v31;
    *(_QWORD *)(v14 + 9944) = v35;
    *(_DWORD *)(v14 + 80) = v32;
    *(_DWORD *)(v14 + 2632) = v33;
  }
  sub_190D5E0(v28, si128);
  if ( ptr != v43 )
    free(ptr);
  if ( v39[0] != v40 )
    free(v39[0]);
  if ( src != v38 )
    free(src);
  return v20;
}
