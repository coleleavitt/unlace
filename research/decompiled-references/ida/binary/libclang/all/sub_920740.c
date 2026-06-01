__int64 __fastcall sub_920740(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned __int16 *v6; // r14
  __int16 v7; // r13
  unsigned int v8; // r15d
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned int v14; // eax
  void *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-100h]
  char v17; // [rsp+17h] [rbp-F1h]
  void *v18; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-E0h]
  char v20; // [rsp+2Ch] [rbp-DCh]
  void *v21; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-D0h]
  char v23; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v26[40]; // [rsp+58h] [rbp-B0h] BYREF
  void *v27; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+88h] [rbp-80h]
  char v29; // [rsp+8Ch] [rbp-7Ch]

  v4 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(a3 + 48) && *(_BYTE *)(sub_8E5480(a3) + 51) && (v10 = *(unsigned int *)(a3 + 32), v10 == v5) )
    v6 = (unsigned __int16 *)(v4 + v10 + 72);
  else
    v6 = (unsigned __int16 *)(v4 + v5 + 40);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = *v6;
  if ( __OFSUB__(*v6, 1) )
  {
    v19 = 1;
    v18 = nullptr;
    v20 = 0;
    v11 = *v6;
    v28 = 16;
    v27 = (void *)v11;
    sub_2587E80(&ptr, &v27, 17);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    v29 = 0;
    v28 = si128.m128i_i32[0];
    v27 = ptr;
    sub_2586140(&v27, &v27, v12);
    if ( v28 <= 0x40 )
    {
      v19 = v28;
      v18 = v27;
      v20 = v29;
    }
    else
    {
      sub_2585EA0(&v18, &v27);
      v20 = v29;
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
    }
    v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v16 = *(_QWORD *)(v13 + 8);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v8 )
    {
      ptr = v26;
      v17 = v20;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      sub_25877E0(&v27, &v18, 16);
      v23 = v17;
      v22 = v28;
      v21 = v27;
      sub_2593F40((unsigned int)&v21, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v22 > 0x40 && v21 )
        operator delete[](v21);
      v14 = sub_8124E0(v13);
      sub_A2CB00(&v27, a1, v14, 2353);
      sub_838D50((unsigned __int8 **)&v27, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v27, v16);
      v15 = (void *)sub_AC7B80(v13);
      LOBYTE(v22) = 1;
      v21 = v15;
      sub_839C90((__int64 *)&v27, (__int64 *)&v21);
      sub_83BB20((__int64)&v27);
      if ( ptr != v26 )
        free(ptr);
    }
    else
    {
      v8 = sub_8E5250(a1, a2, (__int64)&v18);
    }
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
  }
  else
  {
    v8 = 1;
    v7 = *v6 - 1;
    *(_WORD *)sub_8F6C20((__int64 *)a3) = v7;
  }
  return v8;
}

