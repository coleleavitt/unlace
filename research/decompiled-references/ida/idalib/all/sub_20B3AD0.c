void __fastcall sub_20B3AD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  _QWORD *v5; // r11
  _QWORD **v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // rcx
  int v13; // r10d
  unsigned int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned int v20; // eax
  _QWORD *v21; // rbx
  _QWORD *v22; // rsi
  int v23; // ebx
  unsigned int v24; // r8d
  int i; // edx
  _QWORD **v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+28h] [rbp-80h] BYREF
  __m128i v28[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __m128i v30[5]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a1;
  v3 = sub_2237400(a1, a1 + 16, a2, 16, &v27);
  v4 = v3;
  v5 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 == v5 )
    goto LABEL_23;
  v6 = (_QWORD **)(*(_QWORD *)a1 + 8LL);
  v7 = v3;
  v26 = (_QWORD **)(v5 + 1);
  do
  {
    v10 = *v6;
    *(_DWORD *)v7 = *((_DWORD *)v6 - 2);
    *(_QWORD *)(v7 + 8) = v10;
    if ( v10 )
    {
      v11 = *(unsigned __int8 *)v10;
      if ( (unsigned int)(v11 - 5) <= 0x20 )
      {
        if ( (BYTE1(*v10) & 0x7F) != 2 && !*((_DWORD *)v10 - 2) && *(_BYTE *)v10 != 30 )
          goto LABEL_8;
        v8 = v10[1];
        if ( (v8 & 4) == 0 )
          goto LABEL_8;
        v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v9 )
          goto LABEL_8;
      }
      else
      {
        if ( (_BYTE)v11 != 4 && (unsigned int)(v11 - 1) > 1 )
          goto LABEL_8;
        v9 = (unsigned __int64)(v10 + 1);
      }
      if ( (*(_BYTE *)(v9 + 16) & 1) != 0 )
      {
        v12 = v9 + 24;
        v13 = 3;
        v14 = ((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 3;
        v15 = (__int64 *)(v9
                        + 24
                        + 24LL
                        * (((unsigned __int8)((unsigned int)v6 >> 9) ^ (unsigned __int8)((unsigned int)v6 >> 4)) & 3));
        v16 = *v15;
        if ( (_QWORD **)*v15 == v6 )
        {
LABEL_16:
          v17 = 96;
LABEL_17:
          sub_20ABC20((__m128 *)&v29, v15, (__int64 *)(v12 + v17), v9 + 16, 1);
          v18 = v29;
LABEL_18:
          v19 = _mm_loadu_si128((const __m128i *)(v18 + 8));
          *(_QWORD *)v18 = -8192;
          v20 = *(_DWORD *)(v9 + 16);
          ++*(_DWORD *)(v9 + 20);
          *(_DWORD *)(v9 + 16) = (2 * (v20 >> 1) - 2) | v20 & 1;
          v29 = v7 + 8;
          v30[0] = v19;
          sub_20B2D90(v28, v9 + 16, (__int64 *)&v29, v30);
LABEL_8:
          *v6 = nullptr;
          goto LABEL_9;
        }
      }
      else
      {
        v24 = *(_DWORD *)(v9 + 32);
        if ( !v24 )
        {
LABEL_34:
          v18 = sub_20ABC80(v9 + 16);
          goto LABEL_18;
        }
        v13 = v24 - 1;
        v12 = *(_QWORD *)(v9 + 24);
        v14 = (v24 - 1) & (((unsigned int)v6 >> 4) ^ ((unsigned int)v6 >> 9));
        v15 = (__int64 *)(v12 + 24LL * v14);
        v16 = *v15;
        if ( (_QWORD **)*v15 == v6 )
        {
LABEL_28:
          v17 = 24LL * v24;
          goto LABEL_17;
        }
      }
      if ( v16 == -4096 )
        goto LABEL_34;
      for ( i = 1; ; ++i )
      {
        v14 = v13 & (i + v14);
        v15 = (__int64 *)(v12 + 24LL * v14);
        if ( (_QWORD **)*v15 == v6 )
          break;
        if ( *v15 == -4096 )
          goto LABEL_34;
      }
      if ( (*(_BYTE *)(v9 + 16) & 1) != 0 )
      {
        v12 = v9 + 24;
        goto LABEL_16;
      }
      v12 = *(_QWORD *)(v9 + 24);
      v24 = *(_DWORD *)(v9 + 32);
      goto LABEL_28;
    }
LABEL_9:
    v7 += 16;
    v6 += 2;
  }
  while ( v26 != v6 );
  v2 = a1;
  v21 = *(_QWORD **)a1;
  v5 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 2;
        v22 = (_QWORD *)v5[1];
        if ( !v22 )
          break;
        sub_20A0850((__int64)(v5 + 1), v22);
        if ( v5 == v21 )
        {
          v5 = *(_QWORD **)a1;
          goto LABEL_23;
        }
      }
    }
    while ( v5 != v21 );
    v5 = *(_QWORD **)a1;
  }
LABEL_23:
  v23 = v27;
  if ( (_QWORD *)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)v2 = v4;
  *(_DWORD *)(v2 + 12) = v23;
}
