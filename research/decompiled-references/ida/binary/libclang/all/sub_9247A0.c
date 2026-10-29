__int64 __fastcall sub_9247A0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  __int64 v6; // rdi
  __int16 v7; // r14
  void *v11; // rax
  __int64 v12; // rax
  _QWORD **v13; // rdi
  __int64 v14; // r13
  __int64 (__fastcall *v15)(__int64); // rax
  char v16; // al
  unsigned int v17; // ebp
  unsigned int v19; // eax
  void *v20; // rax
  __int64 v21; // [rsp+0h] [rbp-118h]
  char v22; // [rsp+1Fh] [rbp-F9h]
  void *v23; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-F0h]
  char v25; // [rsp+2Ch] [rbp-ECh]
  void *v26; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-E0h]
  char v28; // [rsp+3Ch] [rbp-DCh]
  void *v29; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-D0h]
  char v31; // [rsp+4Ch] [rbp-CCh]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  _BYTE v34[40]; // [rsp+68h] [rbp-B0h] BYREF
  void *v35; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v36; // [rsp+98h] [rbp-80h]

  v6 = a1[23];
  v7 = *a5 * *a4;
  if ( is_mul_ok(*a5, *a4) )
  {
    v17 = 1;
    *(_WORD *)sub_A1A4E0(v6, 8) = v7;
  }
  else
  {
    *(_WORD *)sub_A1A4E0(v6, 8) = v7;
    v11 = (void *)*a5;
    v36 = 16;
    v35 = v11;
    sub_2587E80(&ptr, &v35, a3);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    v31 = 0;
    v30 = si128.m128i_i32[0];
    v36 = 16;
    v29 = ptr;
    v35 = (void *)*a4;
    sub_2587E80(&ptr, &v35, a3);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    v28 = 0;
    v27 = si128.m128i_i32[0];
    v26 = ptr;
    sub_258C0C0(&v35, &v26, &v29);
    v25 = 0;
    v24 = v36;
    v23 = v35;
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    v12 = sub_A180F0(a1[25], a2);
    v13 = (_QWORD **)a1[3];
    v14 = v12;
    v21 = *(_QWORD *)(v12 + 8);
    v15 = (__int64 (__fastcall *)(__int64))(*v13)[2];
    if ( v15 == sub_8D7DB0 )
      v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 16LL))(v13[3]);
    else
      v16 = v15((__int64)v13);
    if ( v16 )
    {
      ptr = v34;
      v22 = v25;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      sub_25877E0(&v35, &v23, 16);
      v31 = v22;
      v30 = v36;
      v29 = v35;
      sub_2593F40((unsigned int)&v29, (unsigned int)&ptr, 10, 1, 0, 1, 1);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      v19 = sub_8124E0(v14);
      sub_A2CB00(&v35, a1, v19, 2353);
      sub_838D50((unsigned __int8 **)&v35, ptr, si128.m128i_u64[0]);
      sub_8D69A0((unsigned __int8 **)&v35, v21);
      v20 = (void *)sub_AC7B80(v14);
      LOBYTE(v30) = 1;
      v29 = v20;
      sub_839C90((__int64 *)&v35, (__int64 *)&v29);
      sub_83BB20((__int64)&v35);
      if ( ptr != v34 )
        free(ptr);
    }
    v17 = sub_8E5250((__int64)a1, a2, (__int64)&v23);
    if ( !(_BYTE)v17 )
      sub_915930(a1[23]);
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
  }
  return v17;
}

