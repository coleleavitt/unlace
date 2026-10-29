__int64 __fastcall sub_936780(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  void *v6; // rdx
  unsigned int v7; // r8d
  char v8; // r14
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int v13; // r12d
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // [rsp+10h] [rbp-108h]
  unsigned int v20; // [rsp+10h] [rbp-108h]
  unsigned int v21; // [rsp+10h] [rbp-108h]
  __int8 v22; // [rsp+1Fh] [rbp-F9h]
  void *v23; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-F0h]
  void *v25; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-E0h]
  __int8 v27; // [rsp+3Ch] [rbp-DCh]
  void *v28; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-D0h]
  __int8 v30; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v33[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v34; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+98h] [rbp-80h]

  v24 = 3;
  v23 = &byte_7;
  v4 = sub_8F8D30(a3);
  v5 = *(_DWORD *)(v4 + 8);
  v26 = v5;
  if ( v5 <= 0x40 )
  {
    v6 = *(void **)v4;
    v29 = v5;
    v25 = v6;
    goto LABEL_3;
  }
  sub_2585B30(&v25);
  v5 = v26;
  v29 = v26;
  if ( v26 <= 0x40 )
  {
LABEL_3:
    if ( v5 )
    {
      v35 = v5;
      v7 = v5 + 1;
      v28 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v5) & 1);
      v34 = v28;
      si128.m128i_i32[0] = v5;
    }
    else
    {
      v28 = nullptr;
      v7 = 1;
      v35 = 0;
      v34 = nullptr;
      si128.m128i_i32[0] = 0;
    }
    goto LABEL_5;
  }
  sub_2585A50(&v28, 1, 1);
  v18 = v26;
  v7 = v26 + 1;
  v35 = v29;
  if ( v29 <= 0x40 )
  {
    v34 = v28;
  }
  else
  {
    v20 = v26 + 1;
    sub_2585B30(&v34);
    v18 = v26;
    v7 = v20;
  }
  si128.m128i_i32[0] = v18;
  if ( v18 > 0x40 )
  {
    v21 = v7;
    sub_2585B30(&ptr);
    v7 = v21;
    goto LABEL_6;
  }
LABEL_5:
  ptr = v25;
LABEL_6:
  v8 = sub_934540((__int64)&ptr, (__int64)&v34, v7, (__int64)&v23);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  if ( v35 > 0x40 && v34 )
    operator delete[](v34);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v4 + 8);
    v26 = 1;
    v25 = nullptr;
    v27 = 0;
    v10 = (unsigned int)(v9 + 1);
    if ( !(_DWORD)v10 )
      v10 = *(unsigned int *)(v4 + 8);
    sub_2587BE0(&v34, v4, v10);
    si128.m128i_i8[4] = 0;
    si128.m128i_i32[0] = v35;
    ptr = v34;
    sub_2586140(&ptr, v4, v11);
    if ( v26 <= 0x40 && si128.m128i_i32[0] <= 0x40u )
    {
      v26 = si128.m128i_i32[0];
      v25 = ptr;
      v27 = si128.m128i_i8[4];
    }
    else
    {
      sub_2585EA0(&v25, &ptr);
      v27 = si128.m128i_i8[4];
      if ( si128.m128i_i32[0] > 0x40u && ptr )
        operator delete[](ptr);
    }
    v12 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v19 = *(_QWORD *)(v12 + 8);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v13 )
    {
      ptr = v33;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      v22 = v27;
      sub_25877E0(&v34, &v25, v24);
      v30 = v22;
      v29 = v35;
      v28 = v34;
      sub_2593F40((unsigned int)&v28, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      v15 = sub_8124E0(v12);
      sub_A2CB00(&v34, a1, v15, 2353);
      sub_838D50((unsigned __int8 **)&v34, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v34, v19);
      v16 = (void *)sub_AC7B80(v12);
      LOBYTE(v29) = 1;
      v28 = v16;
      sub_839C90((__int64 *)&v34, (__int64 *)&v28);
      sub_83BB20((__int64)&v34);
      if ( ptr != v33 )
        free(ptr);
    }
    else
    {
      v13 = sub_8E5250(a1, a2, (__int64)&v25);
    }
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
  }
  else
  {
    v17 = sub_8F8D30(a3);
    if ( *(_DWORD *)(v17 + 8) <= 0x40u && v24 <= 0x40 )
    {
      *(_QWORD *)v17 = v23;
      *(_DWORD *)(v17 + 8) = v24;
    }
    else
    {
      sub_2585EA0(v17, &v23);
    }
    v13 = 1;
  }
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  return v13;
}

