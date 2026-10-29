__int64 __fastcall sub_921400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  unsigned __int8 *v6; // rdx
  unsigned int v7; // r15d
  __int64 v9; // rax
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned int v13; // eax
  void *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-100h]
  char v16; // [rsp+17h] [rbp-F1h]
  void *v17; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-E0h]
  char v19; // [rsp+2Ch] [rbp-DCh]
  void *v20; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-D0h]
  char v22; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v25[40]; // [rsp+58h] [rbp-B0h] BYREF
  void *v26; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+88h] [rbp-80h]
  char v28; // [rsp+8Ch] [rbp-7Ch]

  v3 = *(_QWORD *)(a3 + 24);
  v4 = *(_QWORD *)a3;
  if ( *(_DWORD *)(a3 + 48)
    || !*(_BYTE *)(sub_8E5480(a3) + 51)
    || (v9 = *(unsigned int *)(a3 + 32), v6 = (unsigned __int8 *)(v3 + v9 + 72), v9 != v4) )
  {
    v6 = (unsigned __int8 *)(v3 + v4 + 40);
  }
  if ( __OFSUB__(*v6, 1) )
  {
    v18 = 1;
    v17 = nullptr;
    v19 = 0;
    v10 = *v6;
    v27 = 8;
    v26 = (void *)v10;
    sub_2587E80(&ptr, &v26, 9);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    v28 = 0;
    v27 = si128.m128i_i32[0];
    v26 = ptr;
    sub_2586140(&v26, &v26, v11);
    if ( v27 <= 0x40 )
    {
      v18 = v27;
      v17 = v26;
      v19 = v28;
    }
    else
    {
      sub_2585EA0(&v17, &v26);
      v19 = v28;
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
    }
    v12 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v15 = *(_QWORD *)(v12 + 8);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v7 )
    {
      ptr = v25;
      v16 = v19;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      sub_25877E0(&v26, &v17, 8);
      v22 = v16;
      v21 = v27;
      v20 = v26;
      sub_2593F40((unsigned int)&v20, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v21 > 0x40 && v20 )
        operator delete[](v20);
      v13 = sub_8124E0(v12);
      sub_A2CB00(&v26, a1, v13, 2353);
      sub_838D50((unsigned __int8 **)&v26, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v26, v15);
      v14 = (void *)sub_AC7B80(v12);
      LOBYTE(v21) = 1;
      v20 = v14;
      sub_839C90((__int64 *)&v26, (__int64 *)&v20);
      sub_83BB20((__int64)&v26);
      if ( ptr != v25 )
        free(ptr);
    }
    else
    {
      v7 = sub_8E5250(a1, a2, (__int64)&v17);
    }
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
  }
  else
  {
    --*v6;
    return 1;
  }
  return v7;
}

