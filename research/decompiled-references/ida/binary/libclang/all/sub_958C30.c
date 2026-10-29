void __fastcall sub_958C30(_QWORD *a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rsi
  void *v4; // rsi
  __int64 v5; // r13
  unsigned __int8 **v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // [rsp+8h] [rbp-A0h] BYREF
  void *v10; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-90h]
  char v12; // [rsp+1Ch] [rbp-8Ch]
  void *v13; // [rsp+20h] [rbp-88h]
  unsigned int v14; // [rsp+28h] [rbp-80h]
  char v15; // [rsp+2Ch] [rbp-7Ch]
  void *v16; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-70h]
  unsigned __int8 v18; // [rsp+3Ch] [rbp-6Ch]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  _BYTE v21[80]; // [rsp+58h] [rbp-50h] BYREF

  v2 = *(_DWORD *)(*a1 + 8LL);
  sub_2587BE0(&ptr, *a1, v2);
  v18 = 0;
  v17 = si128.m128i_i32[0];
  v16 = ptr;
  sub_2587BE0(&ptr, &v16, v2 + 2);
  v12 = 0;
  v11 = si128.m128i_i32[0];
  v10 = ptr;
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  v3 = *(_QWORD *)a1[1];
  si128.m128i_i32[0] = v2 + 2;
  if ( v2 + 2 <= 0x40 )
  {
    v14 = v2 + 2;
    v15 = 0;
    v4 = (void *)((0xFFFFFFFFFFFFFFFFLL >> (-2 - (unsigned __int8)v2)) & v3);
    if ( v2 == -2 )
      v4 = nullptr;
    v13 = v4;
    goto LABEL_8;
  }
  sub_2585A50(&ptr, v3, 1);
  v4 = ptr;
  v15 = 0;
  v14 = si128.m128i_i32[0];
  v13 = ptr;
  if ( si128.m128i_i32[0] <= 0x40u )
  {
LABEL_8:
    ptr = v4;
    goto LABEL_9;
  }
  sub_2585B30(&ptr);
LABEL_9:
  sub_25863C0(&ptr, &v10);
  v5 = a1[2];
  v18 = 0;
  v17 = si128.m128i_i32[0];
  v16 = ptr;
  v9 = sub_A16CE0(*(_QWORD *)(v5 + 200), *(_QWORD *)a1[3]);
  v6 = (unsigned __int8 **)sub_A2E1B0(v5, &v9, 2179, 0);
  if ( v6 )
  {
    ptr = v21;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40((unsigned int)&v16, (unsigned int)&ptr, 10, v18 ^ 1, 0, 1, 0);
    sub_838D50(v6, ptr, si128.m128i_u64[0]);
    if ( ptr != v21 )
      free(ptr);
    v7 = a1[4];
    if ( *(_DWORD *)(v7 + 48) )
      v8 = 1;
    else
      v8 = *(_BYTE *)(sub_8E5480(v7) + 51) ^ 1u;
    sub_8D6BF0(v6, v8);
    sub_8D6E40(v6, *(_QWORD *)a1[5]);
  }
  *(_BYTE *)a1[6] = 1;
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v11 > 0x40 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

