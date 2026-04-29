__int64 __fastcall sub_1E7190(_QWORD *a1, __m128i *a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // ebp
  unsigned __int8 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // ebx
  int v22; // edi
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i si128; // xmm2
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-B8h] BYREF
  char v30; // [rsp+8h] [rbp-B0h]
  __m128i v31; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+28h] [rbp-90h]
  _OWORD v34[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-40h]

  v8 = a1[8];
  v35 = __readfsqword(0x28u);
  sub_13C3A0(v8, 0);
  if ( (a3[1] & 0xFB) != 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(52047);
LABEL_30:
    BUG();
  }
  v12 = *((_DWORD *)a3 + 3);
  if ( v12 <= 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(52048);
    goto LABEL_30;
  }
  v30 = *((_BYTE *)a3 + 8);
  v13 = *a3;
  v14 = a5 >> 1;
  DWORD1(v34[0]) = v12;
  v15 = a5 & 1;
  v29 = v13;
  LODWORD(v34[0]) = 0;
  v16 = v14 & 1;
  memset((char *)v34 + 8, 0, 24);
  if ( !a4 )
  {
    if ( v15 )
    {
LABEL_20:
      v22 = (_DWORD)a1 + 448;
      goto LABEL_13;
    }
LABEL_12:
    v22 = (_DWORD)a1 + 416;
LABEL_13:
    v21 = sub_1DC500(v22, (unsigned int)v34, (unsigned int)&v29, v16, v10, v11);
    goto LABEL_14;
  }
  v17 = a1[6];
  if ( v17 == a4 )
  {
    if ( v15 )
    {
      if ( v17 != a1[7] )
      {
        v27 = a1[8];
        v33 = 1;
        v31 = (__m128i)v27;
        v32 = 0;
        goto LABEL_7;
      }
      goto LABEL_20;
    }
    goto LABEL_12;
  }
  if ( a1[7] == a4 )
  {
    if ( !v15 )
    {
      v28 = a1[8];
      v33 = 1;
      v31 = (__m128i)v28;
      v32 = 0;
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  v18 = a1[8];
  v33 = 1;
  v31 = (__m128i)v18;
  v32 = 0;
  if ( v15 )
LABEL_7:
    a4 = *(_QWORD *)(a4 + 8);
LABEL_8:
  sub_1E6BF0((__int64)a1, &v31, v17, a4);
  v21 = sub_1DC500((unsigned int)&v31, (unsigned int)v34, (unsigned int)&v29, v16, v19, v20);
  if ( v31.m128i_i64[1] )
  {
    sub_13C270((unsigned __int64 **)&v31.m128i_i64[1]);
    if ( v31.m128i_i64[1] )
      qfree(v31.m128i_i64[1]);
  }
LABEL_14:
  if ( (_BYTE)v21 )
  {
    if ( LODWORD(v34[0]) == 8 )
    {
      v21 = 0;
    }
    else if ( a2 )
    {
      v23 = _mm_loadu_si128(a2);
      v24 = _mm_loadu_si128(a2 + 1);
      *a2 = _mm_load_si128((const __m128i *)v34);
      si128 = _mm_load_si128((const __m128i *)&v34[1]);
      v34[2] = v23;
      v34[3] = v24;
      a2[1] = si128;
      v34[0] = v23;
      v34[1] = v24;
    }
  }
  sub_30EA00(v34);
  return v21;
}
