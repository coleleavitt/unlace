__int64 __fastcall sub_92E160(__int64 a1, __int64 a2, __int64 *a3)
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
  __int64 v16; // rbx
  unsigned int v17; // r12d
  unsigned int v19; // eax
  void *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // [rsp+10h] [rbp-108h]
  unsigned int v24; // [rsp+10h] [rbp-108h]
  unsigned int v25; // [rsp+10h] [rbp-108h]
  __int8 v26; // [rsp+1Fh] [rbp-F9h]
  void *v27; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-F0h]
  void *v29; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-E0h]
  __int8 v31; // [rsp+3Ch] [rbp-DCh]
  void *v32; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-D0h]
  __int8 v34; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v37[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v38; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+98h] [rbp-80h]

  v5 = sub_8F8D30(a3);
  v6 = *(_QWORD *)(a1 + 184);
  v28 = 3;
  v27 = &byte_7;
  v7 = v5;
  v8 = sub_A1A4E0(v6, 16);
  v9 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 > 0x40 )
  {
    sub_2585B30(v8);
    v10 = *(_DWORD *)(v7 + 8);
    v30 = v10;
    if ( v10 <= 0x40 )
      goto LABEL_3;
  }
  else
  {
    *(_QWORD *)v8 = *(_QWORD *)v7;
    v10 = *(_DWORD *)(v7 + 8);
    v30 = v10;
    if ( v10 <= 0x40 )
    {
LABEL_3:
      v11 = *(void **)v7;
      v33 = v10;
      v29 = v11;
      goto LABEL_4;
    }
  }
  sub_2585B30(&v29);
  v10 = v30;
  v33 = v30;
  if ( v30 <= 0x40 )
  {
LABEL_4:
    if ( v10 )
    {
      v39 = v10;
      v12 = v10 + 1;
      v32 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v10) & 1);
      v38 = v32;
      si128.m128i_i32[0] = v10;
    }
    else
    {
      v32 = nullptr;
      v12 = 1;
      v39 = 0;
      v38 = nullptr;
      si128.m128i_i32[0] = 0;
    }
    goto LABEL_6;
  }
  sub_2585A50(&v32, 1, 1);
  v22 = v30;
  v12 = v30 + 1;
  v39 = v33;
  if ( v33 <= 0x40 )
  {
    v38 = v32;
  }
  else
  {
    v24 = v30 + 1;
    sub_2585B30(&v38);
    v22 = v30;
    v12 = v24;
  }
  si128.m128i_i32[0] = v22;
  if ( v22 > 0x40 )
  {
    v25 = v12;
    sub_2585B30(&ptr);
    v12 = v25;
    goto LABEL_7;
  }
LABEL_6:
  ptr = v29;
LABEL_7:
  v13 = sub_92DE90((__int64)&ptr, (__int64)&v38, v12, (__int64)&v27);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v7 + 8);
    v30 = 1;
    v29 = nullptr;
    v31 = 0;
    v15 = (unsigned int)(v14 + 1);
    if ( !(_DWORD)v15 )
      v15 = *(unsigned int *)(v7 + 8);
    sub_2587BE0(&v38, v7, v15);
    si128.m128i_i8[4] = 0;
    si128.m128i_i32[0] = v39;
    ptr = v38;
    sub_25860D0(&ptr);
    if ( v30 <= 0x40 && si128.m128i_i32[0] <= 0x40u )
    {
      v30 = si128.m128i_i32[0];
      v29 = ptr;
      v31 = si128.m128i_i8[4];
    }
    else
    {
      sub_2585EA0(&v29, &ptr);
      v31 = si128.m128i_i8[4];
      if ( si128.m128i_i32[0] > 0x40u && ptr )
        operator delete[](ptr);
    }
    v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v23 = *(_QWORD *)(v16 + 8);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)v17 )
    {
      ptr = v37;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      v26 = v31;
      sub_25877E0(&v38, &v29, v28);
      v34 = v26;
      v33 = v39;
      v32 = v38;
      sub_2593F40((unsigned int)&v32, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      v19 = sub_8124E0(v16);
      sub_A2CB00(&v38, a1, v19, 2353);
      sub_838D50((unsigned __int8 **)&v38, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v38, v23);
      v20 = (void *)sub_AC7B80(v16);
      LOBYTE(v33) = 1;
      v32 = v20;
      sub_839C90((__int64 *)&v38, (__int64 *)&v32);
      sub_83BB20((__int64)&v38);
      if ( ptr != v37 )
        free(ptr);
    }
    else
    {
      v17 = sub_8E5250(a1, a2, (__int64)&v29);
    }
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
  }
  else
  {
    v21 = sub_8F8D30(a3);
    if ( *(_DWORD *)(v21 + 8) <= 0x40u && v28 <= 0x40 )
    {
      *(_QWORD *)v21 = v27;
      *(_DWORD *)(v21 + 8) = v28;
    }
    else
    {
      sub_2585EA0(v21, &v27);
    }
    v17 = 1;
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return v17;
}

