void __fastcall sub_139F430(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  void **v12; // r12
  unsigned __int64 v13; // rax
  void **v14; // r13
  void **v15; // rbx
  void **v16; // rdi
  void **v17; // rdi
  void **v18; // rbx
  void **v19; // r13
  __int64 v20; // rdx
  void *v21; // [rsp+0h] [rbp-1A8h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-1A0h]
  __int64 v23; // [rsp+10h] [rbp-198h]
  void *v24; // [rsp+20h] [rbp-188h]
  __int64 v25; // [rsp+30h] [rbp-178h] BYREF
  __int16 v26; // [rsp+40h] [rbp-168h]
  void *ptr; // [rsp+50h] [rbp-158h] BYREF
  __m128i si128; // [rsp+58h] [rbp-150h]
  _QWORD v29[40]; // [rsp+68h] [rbp-140h] BYREF

  if ( !*(_BYTE *)(a1 + 26) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v7 = a3 & 0xFFFFFFFFFFFFFFFBLL;
    if ( a2 == 1 )
    {
      *(_QWORD *)(v6 + 2056) = 0;
      sub_FCA320(a3, (_QWORD *)(v6 + 2048));
      if ( !*(_DWORD *)(a3 + 8) )
      {
        sub_A25970(*(_QWORD *)(a1 + 32) + 1312LL, 9u, 4u);
        sub_139EAF0(
          a1,
          0,
          0,
          nullptr,
          0,
          0,
          1u,
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2048LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2056LL),
          v7);
        sub_A25550(*(_QWORD *)(a1 + 32) + 1312LL);
        return;
      }
    }
    else
    {
      v8 = v6 + 1312;
      if ( *(_BYTE *)(v6 + 2400) )
      {
        sub_A25550(v8);
        v8 = *(_QWORD *)(a1 + 32) + 1312LL;
      }
      sub_A25970(v8, 9u, 4u);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + 2400LL) = 1;
      v9 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v9 + 2056) = 0;
      sub_FCA320(a3, (_QWORD *)(v9 + 2048));
      if ( !*(_DWORD *)(a3 + 8) )
      {
        sub_139EAF0(
          a1,
          0,
          0,
          nullptr,
          0,
          0,
          a2,
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2048LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2056LL),
          v7);
        return;
      }
    }
    sub_13616B0((__int64)&ptr, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32));
    v10 = *(_QWORD *)(a3 + 48);
    ptr = &off_2C44220;
    v29[2] = a1;
    sub_1361E30(
      &ptr,
      (char *)*(unsigned int *)(a3 + 8),
      *(__int64 (__fastcall ***)())(*(_QWORD *)a3 + 64LL),
      a2,
      *(char **)(*(_QWORD *)(a1 + 32) + 2048LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2056LL),
      *(void **)(v10 + 416),
      *(unsigned int *)(v10 + 424),
      *(int **)(v10 + 528),
      *(unsigned int *)(v10 + 536),
      v7);
    ptr = &off_2C44220;
    nullsub_647();
    return;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v29;
  sub_FCA320(a3, &ptr);
  v11 = sub_1396D90(a1, (__int64)&ptr);
  sub_FC70B0((__int64)&v21, v11, 0, 833);
  sub_AEC220((unsigned __int8 **)&v21, ptr, si128.m128i_i64[0]);
  if ( (_BYTE)v26 )
  {
    sub_FC7790(v23, (__int64 *)&v21, SHIBYTE(v26));
    v23 = 0;
    v26 = 0;
  }
  if ( v24 != &v25 )
    operator delete(v24);
  v12 = (void **)v21;
  if ( v21 )
  {
    v13 = v22;
    if ( v22 )
    {
      if ( (unsigned __int64)v21 < v22 || (unsigned __int64)v21 > v22 + 14848 )
      {
        v14 = *((void ***)v21 + 66);
        v15 = &v14[8 * (unsigned __int64)*((unsigned int *)v21 + 134)];
        if ( v14 != v15 )
        {
          do
          {
            while ( 1 )
            {
              v15 -= 8;
              v16 = (void **)v15[3];
              if ( v16 == v15 + 5 )
                break;
              operator delete(v16);
              if ( v14 == v15 )
                goto LABEL_20;
            }
          }
          while ( v14 != v15 );
LABEL_20:
          v15 = (void **)v12[66];
        }
        if ( v15 != v12 + 68 )
          free(v15);
        v17 = (void **)v12[52];
        if ( v17 != v12 + 54 )
          free(v17);
        v18 = v12 + 48;
        v19 = v12 + 8;
        do
        {
          while ( *v18 != v18 + 2 )
          {
            operator delete(*v18);
            v18 -= 4;
            if ( v19 == v18 )
              goto LABEL_28;
          }
          v18 -= 4;
        }
        while ( v18 != v19 );
LABEL_28:
        operator delete(v12, 0x3A0u);
      }
      else
      {
        v20 = *(unsigned int *)(v22 + 14976);
        *(_DWORD *)(v22 + 14976) = v20 + 1;
        *(_QWORD *)(v13 + 8 * v20 + 14848) = v12;
      }
    }
  }
  if ( ptr != v29 )
    free(ptr);
}
