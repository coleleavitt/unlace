_QWORD *__fastcall sub_2216740(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  char v7; // al
  __int64 v8; // rcx
  void *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v13; // ebp
  __int64 v14; // r12
  __int64 v16; // [rsp+8h] [rbp-120h]
  _QWORD v19[4]; // [rsp+20h] [rbp-108h] BYREF
  __int16 v20; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-D0h]
  _BYTE v23[192]; // [rsp+68h] [rbp-C0h] BYREF

  v20 = 261;
  v19[0] = a3;
  v19[1] = a4;
  ptr = v23;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v7 = sub_228B190(v19, 0);
  v8 = a4;
  v9 = a3;
  if ( v7 )
  {
    si128.m128i_i64[0] = 0;
    sub_A1FE50(&ptr, a3, &a3[a4]);
    v10 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a2 + 16) + 112LL))(*(_QWORD *)(a2 + 16), &ptr);
    if ( v10 )
    {
      v16 = v11;
      v20 = 1283;
      v19[0] = "cannot get absolute path for ";
      v19[2] = a3;
      v13 = v10;
      v19[3] = a4;
      v14 = operator new(0x40u);
      sub_2220550(v14, v13, v16, v19);
      *a1 = v14;
      goto LABEL_6;
    }
    v8 = si128.m128i_i64[0];
    v9 = ptr;
  }
  *(_BYTE *)(a2 + 58) = 1;
  *(_BYTE *)(a2 + 56) = 1;
  sub_2214C50(v19, a2, v9, v8, a5);
  if ( v19[0] )
    *a1 = v19[0];
  else
    sub_2215610(a1, a2, a5);
LABEL_6:
  if ( ptr != v23 )
    free(ptr);
  return a1;
}
