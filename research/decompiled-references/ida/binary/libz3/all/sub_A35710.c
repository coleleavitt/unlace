__int64 __fastcall sub_A35710(__int64 a1, const __m128i *a2, unsigned int a3, __int64 *a4, unsigned int *a5)
{
  __int64 v5; // r14
  __int32 v7; // eax
  void *v8; // r15
  __int32 v9; // eax
  __int32 v10; // eax
  void *v11; // r15
  __int32 v12; // eax
  __m128i v13; // xmm0
  __int64 *v14; // r15
  void *v15; // r14
  void *v16; // r14
  __int32 v17; // eax
  unsigned int v18; // r12d
  void *v19; // rbx
  void *v20; // rbx
  unsigned int *v22; // rbx
  unsigned int *v23; // rax
  __int64 v25; // [rsp+20h] [rbp-118h] BYREF
  __int32 v26; // [rsp+28h] [rbp-110h]
  _QWORD v27[2]; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int32 v29; // [rsp+50h] [rbp-E8h]
  _QWORD v30[2]; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD v31[2]; // [rsp+68h] [rbp-D0h] BYREF
  __int16 v32; // [rsp+78h] [rbp-C0h]
  __m128i v33; // [rsp+80h] [rbp-B8h]
  _BYTE v34[16]; // [rsp+90h] [rbp-A8h] BYREF
  char v35[16]; // [rsp+A0h] [rbp-98h] BYREF
  char v36[24]; // [rsp+B0h] [rbp-88h] BYREF
  char v37[16]; // [rsp+C8h] [rbp-70h] BYREF
  char v38[96]; // [rsp+D8h] [rbp-60h] BYREF

  v5 = a3;
  v25 = a2->m128i_i64[0];
  v7 = a2->m128i_i32[2];
  v27[0] = 0;
  v8 = qword_1C7F2C0;
  v26 = v7;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  if ( (a2[1].m128i_i8[4] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v27, &a2[1]);
  else
    LODWORD(v27[0]) = a2[1].m128i_i32[0];
  if ( (a2[2].m128i_i8[4] & 1) != 0 )
  {
    sub_182C690(v8, v28, &a2[2]);
  }
  else
  {
    v9 = a2[2].m128i_i32[0];
    BYTE4(v28[0]) &= ~1u;
    LODWORD(v28[0]) = v9;
  }
  v10 = a2[3].m128i_i32[0];
  v11 = qword_1C7F2C0;
  v30[0] = 0;
  v30[1] = 0;
  v29 = v10;
  v31[0] = 1;
  v31[1] = 0;
  if ( (a2[3].m128i_i8[12] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v30, &a2[3].m128i_u64[1]);
  else
    LODWORD(v30[0]) = a2[3].m128i_i32[2];
  if ( (a2[4].m128i_i8[12] & 1) != 0 )
  {
    sub_182C690(v11, v31, &a2[4].m128i_u64[1]);
  }
  else
  {
    v12 = a2[4].m128i_i32[2];
    BYTE4(v31[0]) &= ~1u;
    LODWORD(v31[0]) = v12;
  }
  v13 = _mm_loadu_si128(a2 + 6);
  v32 = a2[5].m128i_i16[4];
  v33 = v13;
  if ( (_DWORD)v5 )
  {
    v14 = &a4[v5];
    while ( 1 )
    {
      sub_9B2760((__int64)v34, a1, *a4);
      sub_B29360(&v25, v34);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v37);
      sub_182CBA0(v15, v38);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v35);
      sub_182CBA0(v16, v36);
      v17 = v26;
      if ( v26 != 1 && v29 != 1 )
        goto LABEL_16;
      if ( v14 == ++a4 )
        goto LABEL_14;
    }
  }
  v17 = v26;
LABEL_14:
  if ( v17 == 1 && (SLODWORD(v27[0]) > 0 || !LODWORD(v27[0]) && (_BYTE)v32) )
  {
    v22 = (unsigned int *)v33.m128i_i64[0];
  }
  else
  {
    if ( v29 != 1 || SLODWORD(v30[0]) >= 0 && (LODWORD(v30[0]) || !HIBYTE(v32)) )
    {
LABEL_16:
      v18 = 0;
      goto LABEL_17;
    }
    v22 = (unsigned int *)v33.m128i_i64[1];
  }
  if ( v22 )
  {
    if ( a5 != v22 && a5 )
    {
      v23 = (unsigned int *)sub_180C100(*(_QWORD *)(a1 + 768), 24);
      *v22 = (*v22 + 1) & 0x3FFFFFFF | *v22 & 0xC0000000;
      *a5 = (*a5 + 1) & 0x3FFFFFFF | *a5 & 0xC0000000;
      *(_QWORD *)v23 = 0;
      *((_QWORD *)v23 + 2) = a5;
      *((_QWORD *)v23 + 1) = v22;
      v22 = v23;
    }
  }
  else
  {
    v22 = a5;
  }
  sub_A34B60(a1, (__int64)v22);
  v18 = 1;
LABEL_17:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v19, v31);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v20, v28);
  return v18;
}

