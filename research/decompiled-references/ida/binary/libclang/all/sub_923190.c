__int64 __fastcall sub_923190(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // eax
  char v10; // al
  int v11; // eax
  bool v12; // r12
  unsigned int v13; // eax
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rbp
  __int64 (*v18)(void); // rax
  _QWORD **v19; // rdi
  __int64 (*v20)(void); // rdx
  unsigned int v21; // r15d
  __int64 v23; // rax
  unsigned int v24; // eax
  void *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-100h]
  __int8 v27; // [rsp+1Fh] [rbp-E9h]
  void *v28; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-E0h]
  __int8 v30; // [rsp+2Ch] [rbp-DCh]
  void *v31; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-D0h]
  __int8 v33; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v36[40]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v37; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+88h] [rbp-80h]

  v4 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)a3;
  if ( *(_DWORD *)(a3 + 48)
    || !*(_BYTE *)(sub_8E5480(a3) + 51)
    || (v23 = *(unsigned int *)(a3 + 32), v7 = v4 + v5 + 72, v5 != v23) )
  {
    v7 = v4 + v5 + 40;
  }
  v8 = sub_A1A4E0(a1[23], 24);
  v9 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = *(_QWORD *)v7;
  v10 = *(_BYTE *)(v7 + 12);
  v29 = 1;
  v28 = nullptr;
  *(_BYTE *)(v8 + 12) = v10;
  v11 = *(_DWORD *)(v7 + 16);
  v30 = 0;
  *(_DWORD *)(v8 + 16) = v11;
  v12 = (*(_BYTE *)(v7 + 19) & 0x20) == 0;
  v13 = *(_DWORD *)(v7 + 8);
  v38 = v13;
  if ( v13 > 0x40 )
  {
    sub_2585B30(&v37);
    v13 = v38;
    v14 = v37;
  }
  else
  {
    v14 = *(unsigned __int8 **)v7;
  }
  si128.m128i_i8[4] = v12;
  si128.m128i_i32[0] = v13;
  ptr = v14;
  sub_25860D0(&ptr);
  if ( v29 <= 0x40 && si128.m128i_i32[0] <= 0x40u )
  {
    v29 = si128.m128i_i32[0];
    v28 = ptr;
    v30 = si128.m128i_i8[4];
  }
  else
  {
    sub_2585EA0(&v28, &ptr);
    v30 = si128.m128i_i8[4];
    if ( si128.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
  }
  v15 = sub_A180F0(a1[25], a2);
  v16 = (_QWORD *)a1[3];
  v17 = v15;
  v26 = *(_QWORD *)(v15 + 8);
  v18 = *(__int64 (**)(void))(*v16 + 16LL);
  if ( (char *)v18 == (char *)sub_8D7DB0 )
  {
    v19 = (_QWORD **)v16[3];
    v20 = (__int64 (*)(void))(*v19)[2];
    if ( v20 == v18 )
      v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v19[3] + 16LL))(v19[3]);
    else
      v21 = v20();
  }
  else
  {
    v21 = v18();
  }
  if ( (_BYTE)v21 )
  {
    ptr = v36;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v27 = v30;
    sub_25877E0(&v37, &v28, 0);
    v33 = v27;
    v32 = v38;
    v31 = v37;
    sub_2593F40((unsigned int)&v31, (unsigned int)&ptr, 10, 0, 0, 1, 1);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    v24 = sub_8124E0(v17);
    sub_A2CB00(&v37, a1, v24, 2353);
    sub_838D50(&v37, ptr, si128.m128i_u64[0]);
    sub_8D69A0(&v37, v26);
    v25 = (void *)sub_AC7B80(v17);
    LOBYTE(v32) = 1;
    v31 = v25;
    sub_839C90((__int64 *)&v37, (__int64 *)&v31);
    sub_83BB20((__int64)&v37);
    if ( ptr != v36 )
      free(ptr);
  }
  else
  {
    v21 = sub_8E5250((__int64)a1, a2, (__int64)&v28);
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v21;
}

