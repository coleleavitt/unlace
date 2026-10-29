_QWORD *__fastcall sub_DA3080(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  char **exception; // r12
  __int64 v7; // rax
  unsigned int *v8; // rbx
  _QWORD *v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // edi
  _QWORD *v21; // rax
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r8
  int v28; // esi
  unsigned int v29; // r8d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  int v33; // edi
  _QWORD *v34; // rax
  __int64 v36; // [rsp+8h] [rbp-70h]
  __int64 v37[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = sub_186B270(0x2A8u);
  *(_DWORD *)v7 = 0;
  v8 = (unsigned int *)v7;
  *(_QWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 16) = 0x7FFFFFFF;
  *(_QWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 48) = 2;
  *(_QWORD *)(v7 + 40) = 0x80000000ALL;
  v9 = (_QWORD *)sub_186B270(0xA0u);
  *v9 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B66F0);
  v9[2] = 1;
  v9[4] = 1;
  v9[6] = 1;
  v9[8] = 1;
  v9[10] = 1;
  v9[12] = 1;
  v9[14] = 1;
  v9[16] = 1;
  v9[18] = 1;
  *((_QWORD *)v8 + 4) = v9;
  *((_QWORD *)v8 + 9) = v9 + 16;
  *((_QWORD *)v8 + 10) = 0;
  *((_QWORD *)v8 + 11) = 0;
  v8[24] = 0;
  *((_QWORD *)v8 + 13) = a2;
  *((_QWORD *)v8 + 14) = 0;
  *(__m128i *)(v8 + 13) = si128;
  sub_17E9B40(v8 + 30, "aig");
  ++v8[24];
  v11 = *(_QWORD *)(a2 + 856);
  *((_QWORD *)v8 + 80) = 0;
  v12 = sub_17E9C90(v8 + 30, 32);
  v13 = *((_QWORD *)v8 + 1);
  v14 = v12;
  if ( v13 && (v15 = *(_DWORD *)(v13 - 4)) != 0 )
  {
    v28 = v15 - 1;
    v16 = *(unsigned int *)(v13 + 4LL * (unsigned int)(v15 - 1));
    *(_DWORD *)(v13 - 4) = v28;
  }
  else
  {
    v16 = *v8;
    *v8 = v16 + 1;
  }
  v17 = *((_QWORD **)v8 + 14);
  *(_BYTE *)(v14 + 24) &= ~1u;
  *(_DWORD *)v14 = v16;
  *(_DWORD *)(v14 + 4) = 0;
  *(_QWORD *)(v14 + 8) = 0;
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( (_DWORD)v16 == v18 )
    {
      if ( v11 )
      {
        ++*(_DWORD *)(v11 + 8);
        v18 = *((_DWORD *)v17 - 1);
      }
      if ( v18 == *((_DWORD *)v17 - 2) )
      {
        v29 = (3 * v18 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v30 || v18 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v37, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v17 - 1, v30);
        v17 = v31 + 2;
        *((_QWORD *)v8 + 14) = v31 + 2;
        *v31 = (3 * v18 + 1) >> 1;
        v32 = v31[1];
        v33 = v32;
        v21 = &v17[v32];
        v20 = v33 + 1;
      }
      else
      {
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v17[v19];
      }
LABEL_10:
      *v21 = v11;
      *((_DWORD *)v17 - 1) = v20;
      goto LABEL_11;
    }
  }
  else if ( !(_DWORD)v16 )
  {
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v34 = (_QWORD *)sub_186B270(0x18u);
    v17 = v34 + 1;
    *v34 = 2;
    v20 = 1;
    *((_QWORD *)v8 + 14) = v34 + 1;
    v21 = v34 + 1;
    goto LABEL_10;
  }
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v23 = v16;
  v24 = &v17[v23];
  v25 = *v24;
  if ( *v24 )
  {
    v26 = *((_QWORD *)v8 + 13);
    if ( (*(_DWORD *)(v25 + 8))-- == 1 )
    {
      v36 = v23 * 8;
      sub_15D7BC0(v26, v25);
      v24 = (__int64 *)(*((_QWORD *)v8 + 14) + v36);
    }
  }
  *v24 = v11;
LABEL_11:
  *((_QWORD *)v8 + 81) = v14;
  *((_QWORD *)v8 + 82) = v14 ^ 1;
  *(_DWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 4) += 2;
  *a1 = v8;
  *((_QWORD *)v8 + 84) = a3;
  *((_BYTE *)v8 + 664) = a4;
  return a1;
}

