__int64 __fastcall sub_923DF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  _QWORD *v6; // rdx
  unsigned int v7; // r15d
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // r12
  unsigned int v12; // eax
  void *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-100h]
  char v15; // [rsp+17h] [rbp-F1h]
  void *v16; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-E0h]
  char v18; // [rsp+2Ch] [rbp-DCh]
  void *v19; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-D0h]
  char v21; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v24[40]; // [rsp+58h] [rbp-B0h] BYREF
  void *v25; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v26; // [rsp+88h] [rbp-80h]
  char v27; // [rsp+8Ch] [rbp-7Ch]

  v3 = *(_QWORD *)(a3 + 24);
  v4 = *(_QWORD *)a3;
  if ( *(_DWORD *)(a3 + 48)
    || !*(_BYTE *)(sub_8E5480(a3) + 51)
    || (v9 = *(unsigned int *)(a3 + 32), v6 = (_QWORD *)(v3 + v9 + 72), v9 != v4) )
  {
    v6 = (_QWORD *)(v3 + v4 + 40);
  }
  if ( __OFADD__(1, *v6) )
  {
    v17 = 1;
    v16 = nullptr;
    v18 = 0;
    v10 = (void *)*v6;
    v26 = 64;
    v25 = v10;
    sub_2587E80(&ptr, &v25, 65);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    v27 = 0;
    v26 = si128.m128i_i32[0];
    v25 = ptr;
    sub_25860D0(&v25);
    if ( v26 <= 0x40 )
    {
      v17 = v26;
      v16 = v25;
      v18 = v27;
    }
    else
    {
      sub_2585EA0(&v16, &v25);
      v18 = v27;
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
    }
    v11 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v14 = *(_QWORD *)(v11 + 8);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v7 )
    {
      ptr = v24;
      v15 = v18;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      sub_25877E0(&v25, &v16, 64);
      v21 = v15;
      v20 = v26;
      v19 = v25;
      sub_2593F40((unsigned int)&v19, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v20 > 0x40 && v19 )
        operator delete[](v19);
      v12 = sub_8124E0(v11);
      sub_A2CB00(&v25, a1, v12, 2353);
      sub_838D50((unsigned __int8 **)&v25, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v25, v14);
      v13 = (void *)sub_AC7B80(v11);
      LOBYTE(v20) = 1;
      v19 = v13;
      sub_839C90((__int64 *)&v25, (__int64 *)&v19);
      sub_83BB20((__int64)&v25);
      if ( ptr != v24 )
        free(ptr);
    }
    else
    {
      v7 = sub_8E5250(a1, a2, (__int64)&v16);
    }
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
  }
  else
  {
    ++*v6;
    return 1;
  }
  return v7;
}

