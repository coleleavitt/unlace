__int64 __fastcall sub_934810(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // eax
  void *v11; // rdx
  unsigned int v12; // r8d
  char v13; // r14
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v20; // eax
  void *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // [rsp+10h] [rbp-108h]
  unsigned int v25; // [rsp+10h] [rbp-108h]
  unsigned int v26; // [rsp+10h] [rbp-108h]
  __int8 v27; // [rsp+1Fh] [rbp-F9h]
  void *v28; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-F0h]
  void *v30; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-E0h]
  __int8 v32; // [rsp+3Ch] [rbp-DCh]
  void *v33; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-D0h]
  __int8 v35; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v38[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v39; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-80h]

  v5 = sub_8F8D30(a3);
  v6 = *(_QWORD *)(a1 + 184);
  v29 = 3;
  v28 = &byte_7;
  v7 = v5;
  v8 = sub_A1A4E0(v6, 16);
  v9 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 > 0x40 )
  {
    sub_2585B30(v8);
    v10 = *(_DWORD *)(v7 + 8);
    v31 = v10;
    if ( v10 <= 0x40 )
      goto LABEL_3;
  }
  else
  {
    *(_QWORD *)v8 = *(_QWORD *)v7;
    v10 = *(_DWORD *)(v7 + 8);
    v31 = v10;
    if ( v10 <= 0x40 )
    {
LABEL_3:
      v11 = *(void **)v7;
      v34 = v10;
      v30 = v11;
      goto LABEL_4;
    }
  }
  sub_2585B30(&v30);
  v10 = v31;
  v34 = v31;
  if ( v31 <= 0x40 )
  {
LABEL_4:
    if ( v10 )
    {
      v40 = v10;
      v12 = v10 + 1;
      v33 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v10) & 1);
      v39 = v33;
      si128.m128i_i32[0] = v10;
    }
    else
    {
      v33 = nullptr;
      v12 = 1;
      v40 = 0;
      v39 = nullptr;
      si128.m128i_i32[0] = 0;
    }
    goto LABEL_6;
  }
  sub_2585A50(&v33, 1, 1);
  v23 = v31;
  v12 = v31 + 1;
  v40 = v34;
  if ( v34 <= 0x40 )
  {
    v39 = v33;
  }
  else
  {
    v25 = v31 + 1;
    sub_2585B30(&v39);
    v23 = v31;
    v12 = v25;
  }
  si128.m128i_i32[0] = v23;
  if ( v23 > 0x40 )
  {
    v26 = v12;
    sub_2585B30(&ptr);
    v12 = v26;
    goto LABEL_7;
  }
LABEL_6:
  ptr = v30;
LABEL_7:
  v13 = sub_934540((__int64)&ptr, (__int64)&v39, v12, (__int64)&v28);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v7 + 8);
    v31 = 1;
    v30 = nullptr;
    v32 = 0;
    v15 = (unsigned int)(v14 + 1);
    if ( !(_DWORD)v15 )
      v15 = *(unsigned int *)(v7 + 8);
    sub_2587BE0(&v39, v7, v15);
    si128.m128i_i8[4] = 0;
    si128.m128i_i32[0] = v40;
    ptr = v39;
    sub_2586140(&ptr, v7, v16);
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
    v17 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v24 = *(_QWORD *)(v17 + 8);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v18 )
    {
      ptr = v38;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      v27 = v32;
      sub_25877E0(&v39, &v30, v29);
      v35 = v27;
      v34 = v40;
      v33 = v39;
      sub_2593F40((unsigned int)&v33, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
      v20 = sub_8124E0(v17);
      sub_A2CB00(&v39, a1, v20, 2353);
      sub_838D50((unsigned __int8 **)&v39, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v39, v24);
      v21 = (void *)sub_AC7B80(v17);
      LOBYTE(v34) = 1;
      v33 = v21;
      sub_839C90((__int64 *)&v39, (__int64 *)&v33);
      sub_83BB20((__int64)&v39);
      if ( ptr != v38 )
        free(ptr);
    }
    else
    {
      v18 = sub_8E5250(a1, a2, (__int64)&v30);
    }
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
  }
  else
  {
    v22 = sub_8F8D30(a3);
    if ( *(_DWORD *)(v22 + 8) <= 0x40u && v29 <= 0x40 )
    {
      *(_QWORD *)v22 = v28;
      *(_DWORD *)(v22 + 8) = v29;
    }
    else
    {
      sub_2585EA0(v22, &v28);
    }
    v18 = 1;
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v18;
}

