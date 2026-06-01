__int64 __fastcall sub_933A70(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // eax
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rbp
  unsigned int v15; // ebp
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax
  void *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-110h]
  char v22; // [rsp+10h] [rbp-108h]
  char v23; // [rsp+10h] [rbp-108h]
  char v24; // [rsp+1Fh] [rbp-F9h]
  void *v25; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-F0h]
  void *v27; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-E0h]
  char v29; // [rsp+3Ch] [rbp-DCh]
  void *v30; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-D0h]
  char v32; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v35[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v36; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+98h] [rbp-80h]

  v9 = *(_DWORD *)(a5 + 8);
  v26 = 3;
  v25 = &byte_7;
  v37 = v9;
  if ( v9 > 0x40 )
    sub_2585B30(&v36);
  else
    v36 = *(void **)a5;
  si128.m128i_i32[0] = *(_DWORD *)(a4 + 8);
  if ( si128.m128i_i32[0] > 0x40u )
    sub_2585B30(&ptr);
  else
    ptr = *(void **)a4;
  v10 = sub_9337C0((__int64)&ptr, (__int64)&v36, a3, (__int64)&v25);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
  {
    v22 = v10;
    operator delete[](ptr);
    v10 = v22;
  }
  if ( v37 > 0x40 && v36 )
  {
    v23 = v10;
    operator delete[](v36);
    v10 = v23;
  }
  v11 = *(_QWORD *)(a1 + 184);
  if ( !v10 )
  {
    v17 = sub_A1A4E0(v11, 16);
    v18 = v26;
    *(_DWORD *)(v17 + 8) = v26;
    if ( v18 > 0x40 )
      sub_2585B30(v17);
    else
      *(_QWORD *)v17 = v25;
    v15 = 1;
    goto LABEL_26;
  }
  v12 = sub_A1A4E0(v11, 16);
  v13 = v26;
  *(_DWORD *)(v12 + 8) = v26;
  if ( v13 > 0x40 )
  {
    sub_2585B30(v12);
    if ( !a3 )
      goto LABEL_14;
  }
  else
  {
    *(_QWORD *)v12 = v25;
    if ( !a3 )
    {
LABEL_14:
      sub_2587BE0(&v36, a5, *(unsigned int *)(a5 + 8));
      si128.m128i_i8[4] = 0;
      a3 = *(_DWORD *)(a4 + 8);
      si128.m128i_i32[0] = v37;
      ptr = v36;
      goto LABEL_15;
    }
  }
  sub_2587BE0(&v36, a5, a3);
  si128.m128i_i8[4] = 0;
  si128.m128i_i32[0] = v37;
  ptr = v36;
LABEL_15:
  sub_2587BE0(&v36, a4, a3);
  v32 = 0;
  v31 = v37;
  v30 = v36;
  sub_258C0C0(&v36, &v30, &ptr);
  v29 = 0;
  v28 = v37;
  v27 = v36;
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  if ( si128.m128i_i32[0] > 0x40u && ptr )
    operator delete[](ptr);
  v14 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v21 = *(_QWORD *)(v14 + 8);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24)) )
  {
    ptr = v35;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v24 = v29;
    sub_25877E0(&v36, &v27, v26);
    v32 = v24;
    v31 = v37;
    v30 = v36;
    sub_2593F40((unsigned int)&v30, (unsigned int)&ptr, 10, 1, 0, 1, 1);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    v19 = sub_8124E0(v14);
    sub_A2CB00(&v36, a1, v19, 2353);
    sub_838D50((unsigned __int8 **)&v36, ptr, si128.m128i_u64[0]);
    sub_8D69A0((unsigned __int8 **)&v36, v21);
    v20 = (void *)sub_AC7B80(v14);
    LOBYTE(v31) = 1;
    v30 = v20;
    sub_839C90((__int64 *)&v36, (__int64 *)&v30);
    sub_83BB20((__int64)&v36);
    if ( ptr != v35 )
      free(ptr);
  }
  v15 = sub_8E5250(a1, a2, (__int64)&v27);
  if ( !(_BYTE)v15 )
  {
    sub_91A020((__int64)&v36, *(_QWORD *)(a1 + 184));
    if ( v37 > 0x40 )
    {
      if ( v36 )
        operator delete[](v36);
    }
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
LABEL_26:
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  return v15;
}

