__int64 __fastcall sub_9240F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rsi
  char v9; // al
  bool v10; // bp
  unsigned int v11; // eax
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbp
  __int64 (*v16)(void); // rax
  _QWORD *v17; // rdi
  __int64 (*v18)(void); // rdx
  _QWORD **v19; // rdi
  unsigned int v20; // r15d
  __int64 v22; // rax
  unsigned int v23; // eax
  void *v24; // rax
  __int64 v25; // [rsp+8h] [rbp-100h]
  __int8 v26; // [rsp+1Fh] [rbp-E9h]
  void *v27; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  __int8 v29; // [rsp+2Ch] [rbp-DCh]
  void *v30; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-D0h]
  __int8 v32; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v35[40]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v36; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+88h] [rbp-80h]

  v5 = *(_QWORD *)(a3 + 24);
  v6 = *(_QWORD *)a3;
  if ( *(_DWORD *)(a3 + 48)
    || !*(_BYTE *)(sub_8E5480(a3) + 51)
    || (v22 = *(unsigned int *)(a3 + 32), v8 = v5 + v22 + 72, v22 != v6) )
  {
    v8 = v5 + v6 + 40;
  }
  v9 = *(_BYTE *)(v8 + 19);
  v29 = 0;
  v28 = 1;
  v27 = nullptr;
  v10 = (v9 & 0x20) == 0;
  v11 = *(_DWORD *)(v8 + 8);
  v37 = v11;
  if ( v11 > 0x40 )
  {
    sub_2585B30(&v36);
    v11 = v37;
    v12 = v36;
  }
  else
  {
    v12 = *(unsigned __int8 **)v8;
  }
  si128.m128i_i32[0] = v11;
  ptr = v12;
  si128.m128i_i8[4] = v10;
  sub_25860D0(&ptr);
  if ( si128.m128i_i32[0] <= 0x40u )
  {
    v28 = si128.m128i_i32[0];
    v27 = ptr;
    v29 = si128.m128i_i8[4];
  }
  else
  {
    sub_2585EA0(&v27, &ptr);
    v29 = si128.m128i_i8[4];
    if ( si128.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
  }
  v13 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v14 = *(_QWORD **)(a1 + 24);
  v15 = v13;
  v25 = *(_QWORD *)(v13 + 8);
  v16 = *(__int64 (**)(void))(*v14 + 16LL);
  if ( (char *)v16 != (char *)sub_8D7DB0 )
  {
LABEL_30:
    v20 = v16();
    goto LABEL_15;
  }
  v17 = (_QWORD *)v14[3];
  v18 = *(__int64 (**)(void))(*v17 + 16LL);
  if ( v18 == v16 )
  {
    v19 = (_QWORD **)v17[3];
    v16 = (__int64 (*)(void))(*v19)[2];
    if ( v16 == v18 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD *))(*v19[3] + 16LL))(v19[3]);
      goto LABEL_15;
    }
    goto LABEL_30;
  }
  v20 = v18();
LABEL_15:
  if ( (_BYTE)v20 )
  {
    ptr = v35;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v26 = v29;
    sub_25877E0(&v36, &v27, 0);
    v32 = v26;
    v31 = v37;
    v30 = v36;
    sub_2593F40((unsigned int)&v30, (unsigned int)&ptr, 10, 0, 0, 1, 1);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    v23 = sub_8124E0(v15);
    sub_A2CB00(&v36, a1, v23, 2353);
    sub_838D50(&v36, ptr, si128.m128i_u64[0]);
    sub_8D69A0(&v36, v25);
    v24 = (void *)sub_AC7B80(v15);
    LOBYTE(v31) = 1;
    v30 = v24;
    sub_839C90((__int64 *)&v36, (__int64 *)&v30);
    sub_83BB20((__int64)&v36);
    if ( ptr != v35 )
      free(ptr);
  }
  else
  {
    v20 = sub_8E5250(a1, a2, (__int64)&v27);
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return v20;
}

