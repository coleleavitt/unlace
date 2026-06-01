__int64 __fastcall sub_20B3EC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD **v3; // rbp
  _QWORD *v4; // r15
  _QWORD **v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // r10d
  unsigned int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned int v18; // eax
  _QWORD **v19; // r11
  int v20; // ebx
  unsigned int v22; // r8d
  int i; // edx
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+28h] [rbp-80h] BYREF
  __m128i v26[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v27; // [rsp+50h] [rbp-58h] BYREF
  __m128i v28[5]; // [rsp+58h] [rbp-50h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 8, &v25);
  v3 = *(_QWORD ***)a1;
  v4 = (_QWORD *)v2;
  v24 = v2;
  v5 = (_QWORD **)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD ***)a1 == v5 )
    goto LABEL_22;
  do
  {
    *v4 = 0;
    v8 = *v3;
    *v4 = *v3;
    if ( !v8 )
      goto LABEL_8;
    v9 = *(unsigned __int8 *)v8;
    if ( (unsigned int)(v9 - 5) <= 0x20 )
    {
      if ( (BYTE1(*v8) & 0x7F) == 2 || *((_DWORD *)v8 - 2) || *(_BYTE *)v8 == 30 )
      {
        v6 = v8[1];
        if ( (v6 & 4) != 0 )
        {
          v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v7 )
            goto LABEL_13;
        }
      }
    }
    else if ( (_BYTE)v9 == 4 || (unsigned int)(v9 - 1) <= 1 )
    {
      v7 = (unsigned __int64)(v8 + 1);
LABEL_13:
      if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
      {
        v10 = v7 + 24;
        v11 = 3;
        v12 = ((unsigned __int8)((unsigned int)v3 >> 4) ^ (unsigned __int8)((unsigned int)v3 >> 9)) & 3;
        v13 = (__int64 *)(v7
                        + 24
                        + 24LL
                        * (((unsigned __int8)((unsigned int)v3 >> 4) ^ (unsigned __int8)((unsigned int)v3 >> 9)) & 3));
        v14 = *v13;
        if ( (_QWORD **)*v13 == v3 )
          goto LABEL_15;
LABEL_32:
        if ( v14 == -4096 )
        {
LABEL_33:
          v16 = sub_20ABC80(v7 + 16);
          goto LABEL_17;
        }
        for ( i = 1; ; ++i )
        {
          v12 = v11 & (i + v12);
          v13 = (__int64 *)(v10 + 24LL * v12);
          if ( (_QWORD **)*v13 == v3 )
            break;
          if ( *v13 == -4096 )
            goto LABEL_33;
        }
        if ( (*(_BYTE *)(v7 + 16) & 1) == 0 )
        {
          v10 = *(_QWORD *)(v7 + 24);
          v22 = *(_DWORD *)(v7 + 32);
          goto LABEL_27;
        }
        v10 = v7 + 24;
LABEL_15:
        v15 = 96;
      }
      else
      {
        v22 = *(_DWORD *)(v7 + 32);
        if ( !v22 )
          goto LABEL_33;
        v11 = v22 - 1;
        v10 = *(_QWORD *)(v7 + 24);
        v12 = (v22 - 1) & (((unsigned int)v3 >> 4) ^ ((unsigned int)v3 >> 9));
        v13 = (__int64 *)(v10 + 24LL * v12);
        v14 = *v13;
        if ( (_QWORD **)*v13 != v3 )
          goto LABEL_32;
LABEL_27:
        v15 = 24LL * v22;
      }
      sub_20ABC20((__m128 *)&v27, v13, (__int64 *)(v10 + v15), v7 + 16, 1);
      v16 = (unsigned __int64)v27;
LABEL_17:
      v17 = _mm_loadu_si128((const __m128i *)(v16 + 8));
      *(_QWORD *)v16 = -8192;
      v18 = *(_DWORD *)(v7 + 16);
      ++*(_DWORD *)(v7 + 20);
      *(_DWORD *)(v7 + 16) = (2 * (v18 >> 1) - 2) | v18 & 1;
      v27 = v4;
      v28[0] = v17;
      sub_20B2D90(v26, v7 + 16, (__int64 *)&v27, v28);
    }
LABEL_8:
    *v3 = nullptr;
    ++v4;
    ++v3;
  }
  while ( v5 != v3 );
  v19 = *(_QWORD ***)a1;
  v5 = (_QWORD **)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD ***)a1 != v5 )
  {
    do
    {
      while ( *--v5 )
      {
        sub_20A0850((__int64)v5, *v5);
        if ( v5 == v19 )
        {
          v5 = *(_QWORD ***)a1;
          goto LABEL_22;
        }
      }
    }
    while ( v5 != v19 );
    v5 = *(_QWORD ***)a1;
  }
LABEL_22:
  v20 = v25;
  if ( (_QWORD **)(a1 + 16) != v5 )
    free(v5);
  *(_DWORD *)(a1 + 12) = v20;
  *(_QWORD *)a1 = v24;
  return v24;
}
