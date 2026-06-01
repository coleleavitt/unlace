__int64 __fastcall sub_90D240(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r12d
  char v7; // bp
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  bool v12; // bp
  unsigned __int64 v13; // rdx
  unsigned __int8 *v14; // rdx
  __int64 v15; // rbp
  unsigned int v16; // r15d
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // eax
  void *v21; // rax
  void *v22; // [rsp+10h] [rbp-138h]
  __int64 v23; // [rsp+10h] [rbp-138h]
  bool v24; // [rsp+1Fh] [rbp-129h]
  void *v25; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-120h]
  bool v27; // [rsp+2Ch] [rbp-11Ch]
  void *v28; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-110h]
  bool v30; // [rsp+3Ch] [rbp-10Ch]
  void *v31; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-100h]
  char v33; // [rsp+4Ch] [rbp-FCh]
  int v34; // [rsp+50h] [rbp-F8h]
  void *v35; // [rsp+60h] [rbp-E8h]
  unsigned int v36; // [rsp+68h] [rbp-E0h]
  char v37; // [rsp+6Ch] [rbp-DCh]
  __int32 v38; // [rsp+70h] [rbp-D8h]
  void *ptr; // [rsp+80h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-C0h]
  _BYTE v41[40]; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int8 *v42; // [rsp+C0h] [rbp-88h] BYREF
  unsigned int v43; // [rsp+C8h] [rbp-80h]
  __int32 v44; // [rsp+D0h] [rbp-78h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v32 = v5;
  v31 = *(void **)v4;
  LOBYTE(v5) = *(_BYTE *)(v4 + 12);
  LODWORD(v4) = *(_DWORD *)(v4 + 16);
  v33 = v5;
  v34 = v4;
  sub_A1A5E0(v3, 24);
  v36 = 0;
  v35 = nullptr;
  v37 = 1;
  v38 = 0;
  LOBYTE(v28) = 0;
  sub_2572AA0(&ptr, &v31, &v28);
  v6 = si128.m128i_i32[0];
  si128.m128i_i32[0] = 0;
  v44 = si128.m128i_i32[2];
  v7 = si128.m128i_i8[4];
  if ( v36 > 0x40 && v35 )
  {
    v22 = ptr;
    operator delete[](v35);
    v36 = v6;
    v37 = v7;
    v35 = v22;
    v38 = v44;
    if ( si128.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
  }
  else
  {
    v35 = ptr;
    v36 = v6;
    v37 = si128.m128i_i8[4];
    v38 = si128.m128i_i32[2];
  }
  v8 = *(_QWORD *)(a1 + 184);
  if ( !(_BYTE)v28 )
  {
    v18 = sub_A1A4E0(v8, 24);
    v19 = v36;
    *(_DWORD *)(v18 + 8) = v36;
    if ( v19 > 0x40 )
      sub_2585B30(v18);
    else
      *(_QWORD *)v18 = v35;
    v16 = 1;
    *(_BYTE *)(v18 + 12) = v37;
    *(_DWORD *)(v18 + 16) = v38;
    goto LABEL_23;
  }
  v9 = sub_A1A4E0(v8, 24);
  v10 = v36;
  *(_DWORD *)(v9 + 8) = v36;
  if ( v10 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v35;
  *(_BYTE *)(v9 + 12) = v37;
  *(_DWORD *)(v9 + 16) = v38;
  v11 = v32;
  v43 = v32;
  v12 = (v34 & 0x20000000) == 0;
  if ( v32 <= 0x40 )
  {
    v13 = (unsigned __int64)v31;
    si128.m128i_i32[0] = v32;
    si128.m128i_i8[4] = (v34 & 0x20000000) == 0;
    ptr = v31;
LABEL_12:
    v14 = (unsigned __int8 *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v11) & ~v13);
    if ( !v11 )
      v14 = nullptr;
    v42 = v14;
    goto LABEL_15;
  }
  sub_2585B30(&v42);
  v11 = v43;
  v13 = (unsigned __int64)v42;
  si128.m128i_i8[4] = v12;
  si128.m128i_i32[0] = v43;
  ptr = v42;
  if ( v43 <= 0x40 )
    goto LABEL_12;
  sub_2585B30(&v42);
  v11 = v43;
  if ( v43 <= 0x40 )
  {
    v13 = (unsigned __int64)v42;
    goto LABEL_12;
  }
  sub_25869C0(&v42, &ptr);
LABEL_15:
  sub_25860D0(&v42);
  v27 = v12;
  v26 = v43;
  v25 = v42;
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  v15 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v23 = *(_QWORD *)(v15 + 8);
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v16 )
  {
    ptr = v41;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v24 = v27;
    sub_25877E0(&v42, &v25, (unsigned __int16)v38);
    v30 = v24;
    v29 = v43;
    v28 = v42;
    sub_2593F40((unsigned int)&v28, (unsigned int)&ptr, 10, (v38 & 0x20000000) != 0, 0, 1, 1);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v20 = sub_8124E0(v15);
    sub_A2CB00(&v42, a1, v20, 2353);
    sub_838D50(&v42, ptr, si128.m128i_u64[0]);
    sub_8D69A0(&v42, v23);
    v21 = (void *)sub_AC7B80(v15);
    LOBYTE(v29) = 1;
    v28 = v21;
    sub_839C90((__int64 *)&v42, (__int64 *)&v28);
    sub_83BB20((__int64)&v42);
    if ( ptr != v41 )
      free(ptr);
  }
  else
  {
    v16 = sub_8E5250(a1, a2, (__int64)&v25);
  }
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
LABEL_23:
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  return v16;
}

