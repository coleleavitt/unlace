__int64 __fastcall sub_921090(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned int v11; // eax
  char v12; // al
  int v13; // eax
  bool v14; // r12
  unsigned int v15; // eax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rbp
  __int64 (*v20)(void); // rax
  _QWORD **v21; // rdi
  __int64 (*v22)(void); // rdx
  unsigned int v23; // r15d
  __int64 v25; // rax
  unsigned int v26; // eax
  void *v27; // rax
  __int64 v28; // [rsp+8h] [rbp-100h]
  __int8 v29; // [rsp+1Fh] [rbp-E9h]
  void *v30; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  __int8 v32; // [rsp+2Ch] [rbp-DCh]
  void *v33; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-D0h]
  __int8 v35; // [rsp+3Ch] [rbp-CCh]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  _BYTE v38[40]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v39; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+88h] [rbp-80h]

  v5 = *(_QWORD *)(a3 + 24);
  v6 = *(_QWORD *)a3;
  if ( *(_DWORD *)(a3 + 48)
    || !*(_BYTE *)(sub_8E5480(a3) + 51)
    || (v25 = *(unsigned int *)(a3 + 32), v8 = v5 + v6 + 72, v6 != v25) )
  {
    v8 = v5 + v6 + 40;
  }
  v9 = 24;
  v10 = sub_A1A4E0(a1[23], 24);
  v11 = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v10 + 8) = v11;
  if ( v11 > 0x40 )
  {
    v9 = v8;
    sub_2585B30(v10);
  }
  else
  {
    *(_QWORD *)v10 = *(_QWORD *)v8;
  }
  v12 = *(_BYTE *)(v8 + 12);
  v31 = 1;
  v30 = nullptr;
  *(_BYTE *)(v10 + 12) = v12;
  v13 = *(_DWORD *)(v8 + 16);
  v32 = 0;
  *(_DWORD *)(v10 + 16) = v13;
  v14 = (*(_BYTE *)(v8 + 19) & 0x20) == 0;
  v15 = *(_DWORD *)(v8 + 8);
  v40 = v15;
  if ( v15 > 0x40 )
  {
    v9 = v8;
    sub_2585B30(&v39);
    v15 = v40;
    v16 = v39;
  }
  else
  {
    v16 = *(unsigned __int8 **)v8;
  }
  si128.m128i_i8[4] = v14;
  si128.m128i_i32[0] = v15;
  ptr = v16;
  sub_2586140(&ptr, v9, v16);
  if ( v31 <= 0x40 && si128.m128i_i32[0] <= 0x40u )
  {
    v31 = si128.m128i_i32[0];
    v30 = ptr;
    v32 = si128.m128i_i8[4];
  }
  else
  {
    sub_2585EA0(&v30, &ptr);
    v32 = si128.m128i_i8[4];
    if ( si128.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
  }
  v17 = sub_A180F0(a1[25], a2);
  v18 = (_QWORD *)a1[3];
  v19 = v17;
  v28 = *(_QWORD *)(v17 + 8);
  v20 = *(__int64 (**)(void))(*v18 + 16LL);
  if ( (char *)v20 == (char *)sub_8D7DB0 )
  {
    v21 = (_QWORD **)v18[3];
    v22 = (__int64 (*)(void))(*v21)[2];
    if ( v22 == v20 )
      v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v21[3] + 16LL))(v21[3]);
    else
      v23 = v22();
  }
  else
  {
    v23 = v20();
  }
  if ( (_BYTE)v23 )
  {
    ptr = v38;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v29 = v32;
    sub_25877E0(&v39, &v30, 0);
    v35 = v29;
    v34 = v40;
    v33 = v39;
    sub_2593F40((unsigned int)&v33, (unsigned int)&ptr, 10, 0, 0, 1, 1);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    v26 = sub_8124E0(v19);
    sub_A2CB00(&v39, a1, v26, 2353);
    sub_838D50(&v39, ptr, si128.m128i_u64[0]);
    sub_8D69A0(&v39, v28);
    v27 = (void *)sub_AC7B80(v19);
    LOBYTE(v34) = 1;
    v33 = v27;
    sub_839C90((__int64 *)&v39, (__int64 *)&v33);
    sub_83BB20((__int64)&v39);
    if ( ptr != v38 )
      free(ptr);
  }
  else
  {
    v23 = sub_8E5250((__int64)a1, a2, (__int64)&v30);
  }
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  return v23;
}

