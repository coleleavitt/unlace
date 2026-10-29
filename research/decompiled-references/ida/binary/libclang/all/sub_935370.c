__int64 __fastcall sub_935370(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // eax
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  unsigned int v17; // ebp
  __int64 v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // eax
  void *v22; // rax
  char v23; // [rsp+10h] [rbp-108h]
  char v24; // [rsp+18h] [rbp-100h]
  char v25; // [rsp+18h] [rbp-100h]
  void *v26; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-F0h]
  void *v28; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-E0h]
  char v30; // [rsp+3Ch] [rbp-DCh]
  void *v31; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-D0h]
  char v33; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v36[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v37; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-80h]

  v9 = *(_DWORD *)(a5 + 8);
  v27 = 3;
  v26 = &byte_7;
  v38 = v9;
  if ( v9 > 0x40 )
    sub_2585B30(&v37);
  else
    v37 = *(void **)a5;
  si128.m128i_i32[0] = *(_DWORD *)(a4 + 8);
  if ( si128.m128i_i32[0] > 0x40u )
    sub_2585B30(&ptr);
  else
    ptr = *(void **)a4;
  v10 = sub_934540((__int64)&ptr, (__int64)&v37, a3, (__int64)&v26);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
  {
    v24 = v10;
    operator delete[](ptr);
    v10 = v24;
  }
  if ( v38 > 0x40 && v37 )
  {
    v25 = v10;
    operator delete[](v37);
    v10 = v25;
  }
  v11 = *(_QWORD *)(a1 + 184);
  if ( !v10 )
  {
    v19 = sub_A1A4E0(v11, 16);
    v20 = v27;
    *(_DWORD *)(v19 + 8) = v27;
    if ( v20 > 0x40 )
      sub_2585B30(v19);
    else
      *(_QWORD *)v19 = v26;
    v17 = 1;
    goto LABEL_28;
  }
  v12 = sub_A1A4E0(v11, 16);
  v13 = v27;
  *(_DWORD *)(v12 + 8) = v27;
  if ( v13 > 0x40 )
  {
    sub_2585B30(v12);
    if ( !a3 )
      goto LABEL_14;
LABEL_33:
    sub_2587BE0(&v37, a5, a3);
    si128.m128i_i8[4] = 0;
    si128.m128i_i32[0] = v38;
    ptr = v37;
    goto LABEL_15;
  }
  *(_QWORD *)v12 = v26;
  if ( a3 )
    goto LABEL_33;
LABEL_14:
  sub_2587BE0(&v37, a5, *(unsigned int *)(a5 + 8));
  si128.m128i_i8[4] = 0;
  a3 = *(_DWORD *)(a4 + 8);
  si128.m128i_i32[0] = v38;
  ptr = v37;
LABEL_15:
  sub_2587BE0(&v37, a4, a3);
  v33 = 0;
  v32 = v38;
  v31 = v37;
  if ( v38 > 0x40 )
    sub_2585B30(&v37);
  sub_25863C0(&v37, &ptr);
  v30 = 0;
  v29 = v38;
  v28 = v37;
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v15 = *(_QWORD *)(v14 + 8);
  v16 = v14;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
  {
    ptr = v36;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v23 = v30;
    sub_25877E0(&v37, &v28, v27);
    v33 = v23;
    v32 = v38;
    v31 = v37;
    sub_2593F40((unsigned int)&v31, (unsigned int)&ptr, 10, 1, 0, 1, 1);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    v21 = sub_8124E0(v16);
    sub_A2CB00(&v37, a1, v21, 2353);
    sub_838D50((unsigned __int8 **)&v37, ptr, si128.m128i_u64[0]);
    sub_8D69A0((unsigned __int8 **)&v37, v15);
    v22 = (void *)sub_AC7B80(v16);
    LOBYTE(v32) = 1;
    v31 = v22;
    sub_839C90((__int64 *)&v37, (__int64 *)&v31);
    sub_83BB20((__int64)&v37);
    if ( ptr != v36 )
      free(ptr);
  }
  v17 = sub_8E5250(a1, a2, (__int64)&v28);
  if ( !(_BYTE)v17 )
  {
    sub_91A020((__int64)&v37, *(_QWORD *)(a1 + 184));
    if ( v38 > 0x40 )
    {
      if ( v37 )
        operator delete[](v37);
    }
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
LABEL_28:
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  return v17;
}

