__int64 __fastcall sub_FB7310(__int64 a1, unsigned __int64 *a2)
{
  __int64 **v3; // rbp
  unsigned __int64 i; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  __int64 **v7; // r13
  __int64 *j; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // r15
  __int64 *v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 *v16; // r8
  __int64 v17; // rbp
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 v21; // rcx
  void *v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 *v27; // r15
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __m128i si128; // xmm0
  _DWORD *v38; // r15
  char *v39; // rdi
  int v40; // eax
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rax
  unsigned int v44; // [rsp+8h] [rbp-F0h]
  __int64 v45; // [rsp+8h] [rbp-F0h]
  __int64 *v46; // [rsp+10h] [rbp-E8h]
  __int64 v47; // [rsp+10h] [rbp-E8h]
  __int64 *v48; // [rsp+18h] [rbp-E0h]
  __int64 v49; // [rsp+18h] [rbp-E0h]
  __int64 *v50[7]; // [rsp+28h] [rbp-D0h] BYREF
  void *v51[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v52[32]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v53; // [rsp+90h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-58h]
  int v55; // [rsp+A8h] [rbp-50h]
  char v56; // [rsp+B0h] [rbp-48h]

  v3 = (__int64 **)a2;
  v51[1] = nullptr;
  v52[0] = 0;
  v51[0] = v52;
  v53 = 0;
  v55 = 0;
  v56 = 0;
  for ( i = a2[1]; i; i = *(_QWORD *)(v5 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v5 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v5 )
      break;
    a2 = (unsigned __int64 *)v5;
  }
  if ( (unsigned int)sub_FB41D0((_QWORD *)a1, a2 + 4, *a2, (__int64)v51, 1u, 0) )
  {
    v17 = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 640);
    if ( !v6 )
    {
      v36 = operator new(0x18u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385310);
      v38 = *(_DWORD **)(a1 + 640);
      v6 = v36;
      *(_QWORD *)v36 = 0;
      *(__m128i *)(v36 + 8) = si128;
      *(_QWORD *)(a1 + 640) = v36;
      if ( v38 )
      {
        v39 = *(char **)v38;
        if ( v38[3] )
        {
          v40 = v38[2];
          if ( v40 )
          {
            v41 = 0;
            v42 = 8LL * (unsigned int)(v40 - 1) + 8;
            do
            {
              v43 = *(_QWORD *)&v39[v41];
              if ( v43 != -8 && v43 )
              {
                operator delete();
                v39 = *(char **)v38;
              }
              v41 += 8;
            }
            while ( v41 != v42 );
          }
        }
        free(v39);
        operator delete(v38, 0x18u);
        v6 = *(_QWORD *)(a1 + 640);
      }
    }
    v7 = v3;
    for ( j = v3[1]; j; j = *(__int64 **)(v9 + 8) )
    {
      if ( ((unsigned __int8)j & 4) == 0 )
        break;
      v9 = (unsigned __int64)j & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        break;
      v7 = (__int64 **)v9;
    }
    v10 = *v7;
    v11 = (__int64 *)(v7 + 4);
    v50[1] = v11;
    v50[2] = v10;
    v12 = sub_2220DF0(v11, v10);
    v13 = sub_2220F70(v6, v11, v10, v12);
    v44 = v13;
    v16 = (__int64 *)(*(_QWORD *)v6 + 8LL * v13);
    if ( *v16 )
    {
      if ( *v16 != -8 )
      {
        sub_FB4EA0(v50, v16, 0);
        v17 = *v50[0];
        goto LABEL_15;
      }
      --*(_DWORD *)(v6 + 16);
    }
    v46 = v16;
    v19 = sub_220C370((char *)v10 + 33, 8, v13, v14, v16, v15);
    v20 = v46;
    v21 = v19;
    v22 = (void *)(v19 + 32);
    if ( v10 )
    {
      v49 = v19;
      memcpy(v22, v11, (size_t)v10);
      v21 = v49;
      v20 = v46;
    }
    *((_BYTE *)v10 + v21 + 32) = 0;
    *(_BYTE *)(v21 + 24) |= 1u;
    *(_QWORD *)v21 = v10;
    *(_DWORD *)(v21 + 8) = 2;
    v48 = v20;
    v47 = v21;
    *(_QWORD *)(v21 + 16) = std::_V2::generic_category((std::_V2 *)v22);
    *v48 = v47;
    ++*(_DWORD *)(v6 + 12);
    v23 = sub_2221390(v6, v44);
    sub_FB4EA0(v50, (__int64 *)(*(_QWORD *)v6 + 8LL * v23), 0);
    v26 = *(_QWORD *)(a1 + 48);
    v27 = v50[0];
    *(_QWORD *)(a1 + 128) += 96LL;
    v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 56) >= v28 + 96 && v26 )
    {
      *(_QWORD *)(a1 + 48) = v28 + 96;
      v29 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v45 = v29;
    }
    else
    {
      v29 = sub_962430(a1 + 48, 96, 96, 3, v24, v25);
      v45 = v29;
      v28 = v29 & 0xFFFFFFFFFFFFFFFBLL;
    }
    sub_FB2660(v29);
    v30 = *(unsigned int *)(a1 + 392);
    if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 396) )
    {
      sub_22134E0(a1 + 384, a1 + 400, v30 + 1, 8);
      v30 = *(unsigned int *)(a1 + 392);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 384) + 8 * v30) = v45;
    v31 = *v27;
    ++*(_DWORD *)(a1 + 392);
    v32 = v3[2];
    *(_BYTE *)(v31 + 24) &= ~1u;
    *(_QWORD *)(v31 + 8) = v28;
    *(_QWORD *)(v31 + 16) = v32;
    *(_QWORD *)(v29 + 32) = v54;
    while ( 1 )
    {
      v33 = v3[1];
      if ( !v33 )
        break;
      v3 = (__int64 **)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((unsigned __int8)v33 & 4) == 0 || !v3 )
        goto LABEL_30;
    }
    v3 = nullptr;
LABEL_30:
    v34 = v53;
    *(_QWORD *)(v29 + 48) = v3[6];
    *(_QWORD *)(v29 + 40) = v34 / 1000000000;
    v35 = *(_DWORD *)(a1 + 776);
    *(_DWORD *)(a1 + 776) = v35 + 1;
    v17 = *v27;
    *(_DWORD *)(v29 + 72) = v35;
  }
LABEL_15:
  if ( v51[0] != v52 )
    operator delete(v51[0]);
  return v17;
}

