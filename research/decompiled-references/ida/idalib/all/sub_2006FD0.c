_QWORD *__fastcall sub_2006FD0(_QWORD *a1, __int64 a2, const void *a3, size_t a4, __int64 a5)
{
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  char *v12; // rdi
  __int64 v14; // [rsp+18h] [rbp-520h] BYREF
  __int64 v15[4]; // [rsp+20h] [rbp-518h] BYREF
  __int16 v16; // [rsp+40h] [rbp-4F8h]
  __int64 v17[4]; // [rsp+50h] [rbp-4E8h] BYREF
  __int16 v18; // [rsp+70h] [rbp-4C8h]
  __int64 *v19[4]; // [rsp+80h] [rbp-4B8h] BYREF
  __int16 v20; // [rsp+A0h] [rbp-498h]
  __int64 v21[4]; // [rsp+B0h] [rbp-488h] BYREF
  __int16 v22; // [rsp+D0h] [rbp-468h]
  void *ptr; // [rsp+E0h] [rbp-458h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-450h]
  _BYTE v25[1088]; // [rsp+F8h] [rbp-440h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  ptr = v25;
  if ( a4 > 0x400 )
  {
    sub_2236E10(&ptr, v25, a4, 1);
    v12 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v8 = a4;
    if ( !a4 )
      goto LABEL_3;
    v12 = v25;
  }
  memcpy(v12, a3, a4);
  v8 = a4 + si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v8;
  v22 = 257;
  v20 = 257;
  v18 = 257;
  v16 = 259;
  v15[0] = (__int64)"compile_commands.json";
  sub_228A3B0(&ptr, v15, v17, v19, v21);
  sub_2006CC0(&v14, ptr, si128.m128i_u64[0], a5, 2);
  if ( v14 )
  {
    sub_22603D0(v15);
    v9 = v14;
    v14 = 0;
    v17[0] = v9;
    sub_1FF5810(v19, v17, v15);
    sub_20034A0(v21, v19);
    sub_1FFA560(a1, v21);
    if ( v21[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21[0] + 8LL))(v21[0]);
    if ( v19[0] )
      (*(void (__fastcall **)(__int64 *))(*v19[0] + 8))(v19[0]);
    if ( v17[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 8LL))(v17[0]);
    v10 = v15[0];
    if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)(v15[0] + 8), 1u) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  else
  {
    *a1 = 0;
  }
  if ( ptr != v25 )
    free(ptr);
  return a1;
}
