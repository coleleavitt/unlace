void __fastcall sub_943E50(__int64 a1)
{
  void **v2; // rsi
  unsigned int v3; // eax
  int v4; // r14d
  unsigned __int8 v5; // bp
  void *v6; // rdx
  __int64 v7; // rsi
  void *v8; // rax
  __int64 v9; // rbp
  unsigned __int8 **v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  void *v14; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-A0h]
  char v16; // [rsp+1Ch] [rbp-9Ch]
  void *v17; // [rsp+20h] [rbp-98h]
  unsigned int v18; // [rsp+28h] [rbp-90h]
  char v19; // [rsp+2Ch] [rbp-8Ch]
  void *v20; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-80h]
  unsigned __int8 v22; // [rsp+3Ch] [rbp-7Ch]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _BYTE v25[96]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *(void ***)a1;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)a1 + 16LL);
  v5 = *(_BYTE *)(*(_QWORD *)a1 + 19LL) & 0x20;
  si128.m128i_i32[0] = v3;
  if ( v3 > 0x40 )
  {
    sub_2585B30(&ptr);
    v3 = si128.m128i_i32[0];
    v6 = ptr;
  }
  else
  {
    v6 = *v2;
  }
  v22 = (v5 >> 5) ^ 1;
  v20 = v6;
  v21 = v3;
  if ( v5 )
    sub_2587BE0(&ptr, &v20, (unsigned int)(v4 + 2));
  else
    sub_2587D60(&ptr, &v20);
  v15 = si128.m128i_i32[0];
  v14 = ptr;
  v16 = 0;
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  v7 = **(_QWORD **)(a1 + 8);
  si128.m128i_i32[0] = v4 + 2;
  if ( (unsigned int)(v4 + 2) <= 0x40 )
  {
    v18 = v4 + 2;
    v19 = 0;
    v8 = (void *)(v7 & (0xFFFFFFFFFFFFFFFFLL >> (62 - (unsigned __int8)v4)));
    v17 = v8;
LABEL_10:
    ptr = v8;
    goto LABEL_11;
  }
  sub_2585A50(&ptr, v7, 1);
  v8 = ptr;
  v19 = 0;
  v18 = si128.m128i_i32[0];
  v17 = ptr;
  if ( si128.m128i_i32[0] <= 0x40u )
    goto LABEL_10;
  sub_2585B30(&ptr);
LABEL_11:
  sub_2586200(&ptr, &v14);
  v9 = *(_QWORD *)(a1 + 16);
  v22 = 0;
  v21 = si128.m128i_i32[0];
  v20 = ptr;
  v13 = sub_A16CE0(*(_QWORD *)(v9 + 200), **(_QWORD **)(a1 + 24));
  v10 = (unsigned __int8 **)sub_A2E1B0(v9, &v13, 2179, 0);
  if ( v10 )
  {
    ptr = v25;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40((unsigned int)&v20, (unsigned int)&ptr, 10, v22 ^ 1, 0, 1, 0);
    sub_838D50(v10, ptr, si128.m128i_u64[0]);
    if ( ptr != v25 )
      free(ptr);
    v11 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v11 + 48) )
      v12 = 1;
    else
      v12 = *(_BYTE *)(sub_8E5480(v11) + 51) ^ 1u;
    sub_8D6BF0(v10, v12);
    sub_8D6E40(v10, **(_QWORD **)(a1 + 40));
  }
  **(_BYTE **)(a1 + 48) = 1;
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v15 > 0x40 )
  {
    if ( v14 )
      operator delete[](v14);
  }
}

