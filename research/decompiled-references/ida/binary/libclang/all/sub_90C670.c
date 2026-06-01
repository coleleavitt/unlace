__int64 __fastcall sub_90C670(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  char v4; // bp
  __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  void *v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // eax
  void *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-F8h]
  char v15; // [rsp+8h] [rbp-F0h]
  void *v16; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-E0h]
  char v18; // [rsp+1Ch] [rbp-DCh]
  void *v19; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-D0h]
  char v21; // [rsp+2Ch] [rbp-CCh]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-C0h]
  _BYTE v24[40]; // [rsp+48h] [rbp-B0h] BYREF
  void *v25; // [rsp+70h] [rbp-88h] BYREF
  unsigned int v26; // [rsp+78h] [rbp-80h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v4 != (char)0x80 )
  {
    v6 = 1;
    *(_BYTE *)sub_A1A4E0(v5, 8) = -v4;
    return v6;
  }
  *(_BYTE *)sub_A1A4E0(v5, 8) = 0;
  v26 = 8;
  v25 = &qword_80;
  sub_2587E80(&ptr, &v25, 9);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  v8 = si128.m128i_i32[0];
  v9 = (unsigned __int64)ptr;
  v21 = 0;
  v20 = si128.m128i_i32[0];
  v19 = ptr;
  v26 = si128.m128i_i32[0];
  if ( si128.m128i_i32[0] <= 0x40u )
    goto LABEL_8;
  sub_2585B30(&v25);
  v8 = v26;
  if ( v26 <= 0x40 )
  {
    v9 = (unsigned __int64)v25;
LABEL_8:
    v10 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v8) & ~v9);
    if ( !v8 )
      v10 = nullptr;
    v25 = v10;
    goto LABEL_11;
  }
  sub_25869C0(&v25, &v19);
LABEL_11:
  sub_25860D0(&v25);
  v18 = 0;
  v17 = v26;
  v16 = v25;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  v11 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v14 = *(_QWORD *)(v11 + 8);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v6 )
  {
    v15 = v18;
    ptr = v24;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_25877E0(&v25, &v16, 8);
    v20 = v26;
    v21 = v15;
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
    v6 = sub_8E5250(a1, a2, (__int64)&v16);
  }
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  return v6;
}

