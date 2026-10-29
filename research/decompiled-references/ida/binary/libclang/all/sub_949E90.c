__int64 __fastcall sub_949E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  unsigned __int8 **v17; // rbx
  __int64 v18; // rbx
  __int64 *v19; // rbp
  void *v20; // rax
  unsigned __int64 *v22; // [rsp+8h] [rbp-B0h]
  void *v23; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-A0h]
  char v25; // [rsp+1Ch] [rbp-9Ch]
  void *v26; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-90h]
  char v28; // [rsp+2Ch] [rbp-8Ch]
  void *v29; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-80h]
  unsigned __int8 v31; // [rsp+3Ch] [rbp-7Ch]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _BYTE v34[96]; // [rsp+58h] [rbp-60h] BYREF

  v8 = *(_DWORD *)(a4 + 8);
  if ( v8 > 0x40 )
  {
    if ( v8 != (unsigned int)sub_2587400(a4) )
      goto LABEL_3;
LABEL_24:
    v18 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v19 = (__int64 *)sub_A2E130(a1, v18, 2306, 0);
    v20 = (void *)sub_AC7B80(*(_QWORD *)(v18 + 24));
    if ( v19 )
    {
      ptr = v20;
      v4 = 0;
      si128.m128i_i8[0] = 1;
      sub_839C90(v19, (__int64 *)&ptr);
      return v4;
    }
    return 0;
  }
  if ( !*(_QWORD *)a4 )
    goto LABEL_24;
LABEL_3:
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 <= 0x40 )
    LOBYTE(v4) = *(_QWORD *)a3 == 0;
  else
    LOBYTE(v4) = v9 == (unsigned int)sub_2587400(a3);
  if ( !(_BYTE)v4 )
    return 1;
  v11 = *(_QWORD *)a4;
  v12 = 1LL << ((unsigned __int8)v8 - 1);
  if ( v8 <= 0x40 )
  {
    if ( (v11 & v12) == 0 )
      return v4;
    goto LABEL_10;
  }
  v22 = *(unsigned __int64 **)a4;
  if ( (*(_QWORD *)(v11 + 8LL * ((v8 - 1) >> 6)) & v12) != 0 && v8 - (unsigned int)sub_831980(a4) <= 0x40 )
  {
    v11 = *v22;
LABEL_10:
    if ( v11 != -1 )
      return v4;
    sub_2587BE0(&ptr, a3, v9);
    v25 = 0;
    v24 = si128.m128i_i32[0];
    v13 = (unsigned int)(si128.m128i_i32[0] + 1);
    v23 = ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    ptr = v34;
    sub_2587BE0(&v29, &v23, v13);
    v28 = 0;
    v27 = v30;
    v26 = v29;
    sub_831B20((__int64)&v29, (__int64)&v26);
    sub_2593F40((unsigned int)&v29, (unsigned int)&ptr, 10, v31 ^ 1, 0, 1, 0);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    v14 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v15 = *(_QWORD *)(a1 + 200);
    v29 = v14;
    v16 = sub_A180F0(v15, a2);
    v17 = (unsigned __int8 **)sub_A2E1B0(a1, &v29, 2262, 0);
    if ( v17 )
    {
      sub_838D50(v17, ptr, si128.m128i_u64[0]);
      sub_8D69A0(v17, *(_QWORD *)(v16 + 8));
    }
    if ( ptr != v34 )
      free(ptr);
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    return 0;
  }
  return v4;
}

