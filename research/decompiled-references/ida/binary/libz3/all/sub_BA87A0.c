__int64 __fastcall sub_BA87A0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rax
  __m128 v8; // xmm0
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r9
  unsigned int *v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // r13
  _QWORD *v16; // r8
  unsigned int v17; // ebx
  unsigned int i; // eax
  unsigned int v19; // edx
  size_t v20; // rsi
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  _QWORD *v25; // rax
  unsigned int *v26; // [rsp+0h] [rbp-88h]
  unsigned int v27; // [rsp+8h] [rbp-80h]
  _QWORD *v28; // [rsp+8h] [rbp-80h]
  __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = sub_186B270(0xC0u);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = v3;
  sub_13716C0(v3, v4, *(unsigned int *)(a1 + 8));
  *(_QWORD *)(v5 + 24) = v4;
  *(_QWORD *)v5 = &off_1C57C68;
  sub_180C5A0(v29, "seq");
  v6 = sub_15DA4C0(v4 + 560, v29);
  v7 = sub_15D2690(v4, v6);
  *(__m128 *)(v5 + 32) = _mm_loadh_ps((const double *)(v7 + 88));
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  *(_QWORD *)(v5 + 104) = 0;
  v8 = _mm_loadh_ps((const double *)(v5 + 24));
  *(_DWORD *)(v5 + 48) = v7;
  *(_DWORD *)(v5 + 72) = v7;
  *(_DWORD *)(v5 + 96) = v7;
  v9 = *(_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 112) = v9;
  *(_QWORD *)(v5 + 128) = 0;
  *(_QWORD *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 144) = 0xFFFFFFFFLL;
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_DWORD *)(v5 + 168) = 65;
  *(_QWORD *)(v5 + 176) = v4;
  *(_QWORD *)(v5 + 184) = 0;
  *(_QWORD *)(a1 + 520) = v5;
  *(__m128 *)(v5 + 56) = v8;
  *(__m128 *)(v5 + 80) = v8;
  result = sub_A6F1C0(a2, v5);
  v11 = *(_QWORD *)(a1 + 208);
  if ( v11 )
  {
    result = v11 + 4LL * *(unsigned int *)(v11 - 4);
    v26 = (unsigned int *)result;
    if ( result != v11 )
    {
      v12 = *(unsigned int **)(a1 + 208);
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == -1 )
          goto LABEL_5;
        v14 = v13 >> 5;
        v15 = *(_QWORD *)(a1 + 520);
        v16 = *(_QWORD **)(v15 + 160);
        if ( !v16 )
          break;
        v17 = v14 + 1;
        v27 = *((_DWORD *)v16 - 1);
        if ( (unsigned int)v14 >= v27 )
        {
          for ( i = *((_DWORD *)v16 - 2); i < v17; i = *((_DWORD *)v16 - 2) )
          {
            v19 = (3 * i + 1) >> 1;
            v20 = 4 * v19 + 8;
            v21 = v19;
            if ( 4 * i + 8 >= (unsigned int)v20 || i >= v19 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v29, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v29);
              sub_233E40((__int64)v29);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v22 = (unsigned int *)sub_186B300(v16 - 1, v20);
            v16 = v22 + 2;
            *(_QWORD *)(v15 + 160) = v22 + 2;
            *v22 = v21;
LABEL_13:
            ;
          }
          *((_DWORD *)v16 - 1) = v17;
          v23 = 4LL * v17;
          v24 = 4LL * v27;
          if ( v24 != v23 )
          {
            v28 = v16;
            memset((char *)v16 + v24, 0, v23 - v24);
            v16 = v28;
          }
        }
        result = (unsigned int)(1 << v13);
        *((_DWORD *)v16 + v14) |= result;
LABEL_5:
        if ( v26 == ++v12 )
          return result;
      }
      v17 = v14 + 1;
      v25 = (_QWORD *)sub_186B270(0x10u);
      v27 = 0;
      v16 = v25 + 1;
      *v25 = 2;
      *(_QWORD *)(v15 + 160) = v25 + 1;
      goto LABEL_13;
    }
  }
  return result;
}

