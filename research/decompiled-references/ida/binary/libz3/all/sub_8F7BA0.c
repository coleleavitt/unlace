_DWORD *__fastcall sub_8F7BA0(__int64 a1, __m128i a2, __m128 a3)
{
  char **v3; // r13
  char **exception; // rbp
  int v5; // esi
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, unsigned __int8); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  char v11; // r13
  __int64 v12; // rbp
  char v13; // r12
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  _DWORD *result; // rax
  __int64 v19; // rdx
  int v20; // edx
  int v21; // edx
  __m128i v22; // xmm1
  unsigned int v23; // r13d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // rax
  __int64 v29[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a1 + 9464);
  v6 = *(_DWORD *)(a1 + 9468);
  if ( v5 != v6 )
    sub_8F7780(a1, v5 - v6);
  v7 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)a1 + 8LL);
  if ( v7 == sub_8E5130 )
  {
    v8 = *(_QWORD *)(a1 + 8984);
    v9 = qword_1C7EC50;
    if ( *(_BYTE *)(a1 + 176) )
      goto LABEL_26;
    if ( v8 != qword_1C7EC50 )
    {
      v10 = *(_DWORD *)(a1 + 184);
      if ( v10 > *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL) )
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      *(_DWORD *)(a1 + 184) = v10;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(a1 + 2416) )
    {
LABEL_26:
      v27 = *(_DWORD *)(a1 + 184);
      if ( v27 > *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL) )
        v27 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      *(_DWORD *)(a1 + 184) = v27;
    }
    else
    {
      sub_8E5080(a1, 0);
      v9 = qword_1C7EC50;
      v8 = *(_QWORD *)(a1 + 8984);
    }
  }
  else
  {
    v7(a1, 0);
    v9 = qword_1C7EC50;
    v8 = *(_QWORD *)(a1 + 8984);
  }
  if ( v9 != v8 )
  {
LABEL_9:
    v11 = 1;
    goto LABEL_10;
  }
  v11 = *(_BYTE *)(a1 + 2416);
LABEL_10:
  sub_8EA730(a1);
  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 104)) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_8E4EB0(v29, "push canceled");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v29);
    sub_233E40((__int64)v29);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v12 = *(_QWORD *)(a1 + 104);
  v13 = *(_BYTE *)(v12 + 4);
  *(_BYTE *)(v12 + 4) = 1;
  sub_8F5330(a1, a2, a3);
  if ( !v11
    && *(_QWORD *)(a1 + 8984) != qword_1C7EC50
    && !*(_BYTE *)(a1 + 2416)
    && (**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 3026);
  }
  sub_8EC360(a1);
  v14 = *(_QWORD **)(a1 + 9488);
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v23 = (unsigned int)(3 * v15 + 1) >> 1;
      v24 = 4 * (v23 + ((3 * (_DWORD)v15 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v15 + 8 >= (unsigned int)v24 || (unsigned int)v15 >= v23 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v29, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v14 - 1, v24);
      v14 = v25 + 2;
      *v25 = v23;
      v26 = v25[1];
      *(_QWORD *)(a1 + 9488) = v14;
      v16 = (_QWORD *)((char *)v14 + 12 * v26);
    }
    else
    {
      v16 = (_QWORD *)((char *)v14 + 12 * v15);
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x20u);
    v14 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 9488) = v28 + 1;
    v16 = v28 + 1;
  }
  *v16 = 0;
  *((_DWORD *)v16 + 2) = 0;
  v17 = *((unsigned int *)v14 - 1);
  *((_DWORD *)v14 - 1) = v17 + 1;
  result = (_DWORD *)v14 + 3 * v17;
  v19 = *(_QWORD *)(a1 + 8896);
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4);
  else
    v20 = 0;
  *result = v20;
  v21 = 1;
  if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 )
    v21 = *(unsigned __int8 *)(a1 + 2416);
  v22 = _mm_loadl_epi64((const __m128i *)&qword_18B6000);
  result[2] = v21;
  result[1] = *(_DWORD *)(a1 + 8940);
  *(_QWORD *)(a1 + 9468) = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 9468)), v22).m128i_u64[0];
  *(_BYTE *)(v12 + 4) = v13;
  return result;
}

