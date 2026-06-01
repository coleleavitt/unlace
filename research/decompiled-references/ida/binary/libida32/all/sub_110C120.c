_QWORD *__fastcall sub_110C120(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  __int64 (*v7)(); // rax
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[4]; // [rsp+0h] [rbp-178h] BYREF
  __int16 v20; // [rsp+20h] [rbp-158h]
  __int64 v21; // [rsp+30h] [rbp-148h] BYREF
  __int64 v22; // [rsp+38h] [rbp-140h]
  __int16 v23; // [rsp+50h] [rbp-128h]
  _BYTE v24[32]; // [rsp+60h] [rbp-118h] BYREF
  __int16 v25; // [rsp+80h] [rbp-F8h]
  _BYTE v26[32]; // [rsp+90h] [rbp-E8h] BYREF
  __int16 v27; // [rsp+B0h] [rbp-C8h]
  void *ptr; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-B0h]
  _BYTE v30[160]; // [rsp+D8h] [rbp-A0h] BYREF

  v4 = a2[1];
  v5 = *(_BYTE **)(v4 + 248);
  v6 = *(_QWORD *)(v4 + 256);
  ptr = v30;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  sub_9FC110(&ptr, v5, &v5[v6]);
  v7 = *(__int64 (**)())(*a2 + 504);
  if ( v7 == sub_10B4590 || !((unsigned __int8 (__fastcall *)(__int64 *))v7)(a2) )
  {
    v8 = *((_DWORD *)a2 + 15);
    v27 = 257;
    v25 = 257;
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 336))(a2);
      v23 = 261;
      v21 = v9;
      v22 = v10;
    }
    else
    {
      v23 = 257;
    }
    v19[0] = "lib";
    v20 = 259;
    sub_2266670(&ptr, v19, &v21, v24, v26);
  }
  else
  {
    v14 = *a2;
    v27 = 257;
    v25 = 257;
    v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 336))(a2);
    v23 = 261;
    v21 = v15;
    v22 = v16;
    v20 = 259;
    v19[0] = "lib";
    sub_2266670(&ptr, v19, &v21, v24, v26);
    v17 = *((unsigned int *)a2 + 546);
    if ( (_DWORD)v17 )
    {
      v18 = a2[272] + 192 * v17 - 192;
      sub_9FC110(&ptr, *(_BYTE **)v18, (_BYTE *)(*(_QWORD *)v18 + *(_QWORD *)(v18 + 8)));
    }
  }
  v11 = ptr;
  v12 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_1107830(a1, v11, (__int64)&v11[v12]);
  if ( ptr != v30 )
    free(ptr);
  return a1;
}

