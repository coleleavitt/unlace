__int64 __fastcall sub_9501C0(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // r14
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v13; // rbx
  __int64 *v14; // rbp
  void *v15; // rax
  char v16; // bl
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  unsigned __int8 **v20; // rbp
  __int64 v21; // [rsp+8h] [rbp-C0h]
  void *v22; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-B0h]
  char v24; // [rsp+1Ch] [rbp-ACh]
  void *v25; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-A0h]
  char v27; // [rsp+2Ch] [rbp-9Ch]
  void *v28; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-90h]
  unsigned __int8 v30; // [rsp+3Ch] [rbp-8Ch]
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __m128i si128; // [rsp+58h] [rbp-70h]
  _BYTE v33[96]; // [rsp+68h] [rbp-60h] BYREF

  v7 = *a4;
  v8 = sub_2575D20(a1, a2, a3);
  if ( v8 == v7 )
  {
    if ( (*(_BYTE *)(a4[1] + 20) & 7) != 3 )
      goto LABEL_3;
LABEL_11:
    v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v14 = (__int64 *)sub_A2E240(a1, v13, 2306, 0);
    v15 = (void *)sub_AC7B80(*(_QWORD *)(v13 + 24));
    if ( v14 )
    {
      ptr = v15;
      si128.m128i_i8[0] = 1;
      sub_839C90(v14, (__int64 *)&ptr);
    }
    return 1;
  }
  if ( (*((_BYTE *)a4 + 20) & 7) == 3 )
    goto LABEL_11;
LABEL_3:
  if ( v8 == *a3 )
    v9 = sub_257E600(a3);
  else
    v9 = sub_2576430(a3);
  if ( !v9 )
    return 1;
  v11 = a4;
  if ( v8 == *a4 )
    v11 = (__int64 *)a4[1];
  if ( (*((_BYTE *)v11 + 20) & 8) == 0 )
    return 1;
  v21 = sub_2575D00(a3, a2, v10);
  sub_2580BE0(&ptr, -1.0);
  sub_257EDC0(&v28, &ptr, v21);
  sub_25769A0(&ptr);
  sub_2582620(&v28, *a4, 1, &ptr);
  if ( (void *)*a4 != v28 )
  {
    sub_5FF3B0((__int64 *)&v28);
    return 1;
  }
  if ( v8 == *a4 )
    v16 = sub_257E3E0(a4, &v28);
  else
    v16 = sub_25767D0(a4, &v28);
  sub_5FF3B0((__int64 *)&v28);
  if ( !v16 )
    return 1;
  if ( v8 == *a3 )
    sub_25807A0(&ptr, a3);
  else
    sub_2580530(&ptr, a3);
  v24 = 1;
  v23 = si128.m128i_i32[0];
  v22 = ptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  ptr = v33;
  sub_2587D60(&v28, &v22);
  v27 = 1;
  v26 = v29;
  v25 = v28;
  sub_831B20((__int64)&v28, (__int64)&v25);
  sub_2593F40((unsigned int)&v28, (unsigned int)&ptr, 10, v30 ^ 1, 0, 1, 0);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  v17 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v18 = *(_QWORD *)(a1 + 200);
  v28 = v17;
  v19 = sub_A180F0(v18, a2);
  v20 = (unsigned __int8 **)sub_A2E1B0(a1, &v28, 2262, 0);
  if ( v20 )
  {
    sub_838D50(v20, ptr, si128.m128i_u64[0]);
    sub_8D69A0(v20, *(_QWORD *)(v19 + 8));
  }
  if ( ptr != v33 )
    free(ptr);
  if ( v23 > 0x40 )
  {
    if ( v22 )
      operator delete[](v22);
  }
  return 0;
}

