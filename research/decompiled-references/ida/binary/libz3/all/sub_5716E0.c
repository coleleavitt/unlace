void __fastcall sub_5716E0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rdx
  char *v7; // rax
  char *v8; // rdx
  __int64 v9; // rax
  __m128i si128; // xmm0
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // rax
  char **exception; // rbp
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = a2;
  if ( a2 > 0xFFFFFFFFFFFFFFF7LL )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v14, "overflow resizing data section for sparse table");
    goto LABEL_16;
  }
  v3 = *(_QWORD **)(a1 + 16);
  v4 = a2 + 8;
  if ( !v3 )
  {
    v5 = 0;
    v9 = sub_186B270(0x12u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
    v6 = 2;
    v3 = (_QWORD *)(v9 + 16);
    *(_QWORD *)(a1 + 16) = v9 + 16;
    *(__m128i *)v9 = si128;
    if ( v4 > 2 )
      goto LABEL_8;
    *(_QWORD *)(v9 + 8) = v4;
    v8 = (char *)v3 + v4;
    v7 = (char *)(v9 + 16);
    goto LABEL_6;
  }
  v5 = *(v3 - 1);
  if ( v5 >= v4 )
  {
    *(v3 - 1) = v4;
    return;
  }
  v6 = *(v3 - 2);
  if ( v6 >= v4 )
  {
    *(v3 - 1) = v4;
    v7 = (char *)v3 + v5;
    v8 = (char *)v3 + v4;
LABEL_6:
    memset(v7, 0, v8 - v7);
    return;
  }
  do
  {
LABEL_8:
    v11 = (3 * v6 + 1) >> 1;
    if ( v6 + 16 >= v11 + 16 || v6 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v14, "Overflow encountered when expanding vector");
LABEL_16:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v14);
      sub_233E40((__int64)v14);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned __int64 *)sub_186B300(v3 - 2, v11 + 16);
    v6 = v11;
    v3 = v12 + 2;
    *v12 = v11;
    *(_QWORD *)(a1 + 16) = v12 + 2;
  }
  while ( v11 < v4 );
  v12[1] = v4;
  v8 = (char *)v3 + v4;
  v7 = (char *)v3 + v5;
  if ( v4 != v5 )
    goto LABEL_6;
}

