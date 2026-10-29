__int64 __fastcall sub_92F780(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  void *v6; // rdx
  unsigned int v7; // r8d
  char v8; // r14
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned int v12; // r12d
  unsigned int v14; // eax
  void *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // [rsp+10h] [rbp-108h]
  unsigned int v19; // [rsp+10h] [rbp-108h]
  unsigned int v20; // [rsp+10h] [rbp-108h]
  __int8 v21; // [rsp+1Fh] [rbp-F9h]
  void *v22; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-F0h]
  void *v24; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-E0h]
  __int8 v26; // [rsp+3Ch] [rbp-DCh]
  void *v27; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-D0h]
  __int8 v29; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v32[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v33; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+98h] [rbp-80h]

  v23 = 3;
  v22 = &byte_7;
  v4 = sub_8F8D30(a3);
  v5 = *(_DWORD *)(v4 + 8);
  v25 = v5;
  if ( v5 <= 0x40 )
  {
    v6 = *(void **)v4;
    v28 = v5;
    v24 = v6;
    goto LABEL_3;
  }
  sub_2585B30(&v24);
  v5 = v25;
  v28 = v25;
  if ( v25 <= 0x40 )
  {
LABEL_3:
    if ( v5 )
    {
      v34 = v5;
      v7 = v5 + 1;
      v27 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v5) & 1);
      v33 = v27;
      si128.m128i_i32[0] = v5;
    }
    else
    {
      v27 = nullptr;
      v7 = 1;
      v34 = 0;
      v33 = nullptr;
      si128.m128i_i32[0] = 0;
    }
    goto LABEL_5;
  }
  sub_2585A50(&v27, 1, 1);
  v17 = v25;
  v7 = v25 + 1;
  v34 = v28;
  if ( v28 <= 0x40 )
  {
    v33 = v27;
  }
  else
  {
    v19 = v25 + 1;
    sub_2585B30(&v33);
    v17 = v25;
    v7 = v19;
  }
  si128.m128i_i32[0] = v17;
  if ( v17 > 0x40 )
  {
    v20 = v7;
    sub_2585B30(&ptr);
    v7 = v20;
    goto LABEL_6;
  }
LABEL_5:
  ptr = v24;
LABEL_6:
  v8 = sub_92DE90((__int64)&ptr, (__int64)&v33, v7, (__int64)&v22);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v4 + 8);
    v25 = 1;
    v24 = nullptr;
    v26 = 0;
    v10 = (unsigned int)(v9 + 1);
    if ( !(_DWORD)v10 )
      v10 = *(unsigned int *)(v4 + 8);
    sub_2587BE0(&v33, v4, v10);
    si128.m128i_i8[4] = 0;
    si128.m128i_i32[0] = v34;
    ptr = v33;
    sub_25860D0(&ptr);
    if ( v25 <= 0x40 && si128.m128i_i32[0] <= 0x40u )
    {
      v25 = si128.m128i_i32[0];
      v24 = ptr;
      v26 = si128.m128i_i8[4];
    }
    else
    {
      sub_2585EA0(&v24, &ptr);
      v26 = si128.m128i_i8[4];
      if ( si128.m128i_i32[0] > 0x40u && ptr )
        operator delete[](ptr);
    }
    v11 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v18 = *(_QWORD *)(v11 + 8);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v12 )
    {
      ptr = v32;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      v21 = v26;
      sub_25877E0(&v33, &v24, v23);
      v29 = v21;
      v28 = v34;
      v27 = v33;
      sub_2593F40((unsigned int)&v27, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      v14 = sub_8124E0(v11);
      sub_A2CB00(&v33, a1, v14, 2353);
      sub_838D50((unsigned __int8 **)&v33, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v33, v18);
      v15 = (void *)sub_AC7B80(v11);
      LOBYTE(v28) = 1;
      v27 = v15;
      sub_839C90((__int64 *)&v33, (__int64 *)&v27);
      sub_83BB20((__int64)&v33);
      if ( ptr != v32 )
        free(ptr);
    }
    else
    {
      v12 = sub_8E5250(a1, a2, (__int64)&v24);
    }
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  else
  {
    v16 = sub_8F8D30(a3);
    if ( *(_DWORD *)(v16 + 8) <= 0x40u && v23 <= 0x40 )
    {
      *(_QWORD *)v16 = v22;
      *(_DWORD *)(v16 + 8) = v23;
    }
    else
    {
      sub_2585EA0(v16, &v22);
    }
    v12 = 1;
  }
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  return v12;
}

