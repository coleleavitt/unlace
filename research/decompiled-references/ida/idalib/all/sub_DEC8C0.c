__int64 __fastcall sub_DEC8C0(_QWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbx
  __m128i v6; // xmm0
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 result; // rax
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  void *v19; // rbx
  _QWORD *v20; // rax
  __int16 v21; // r8
  __m128i v22; // [rsp+0h] [rbp-A8h] BYREF
  int v23; // [rsp+1Ch] [rbp-8Ch]
  char v24; // [rsp+2Fh] [rbp-79h] BYREF
  __m128i v25; // [rsp+30h] [rbp-78h] BYREF
  void *src; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-60h]
  char v28; // [rsp+4Ch] [rbp-5Ch]
  _QWORD v29[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = a1[22];
  v23 = a4;
  v22 = _mm_loadu_si128((const __m128i *)sub_E21760(v5, 16));
  sub_E21790(v5, 16);
  v6 = _mm_load_si128(&v22);
  v27 = a3;
  v25 = v6;
  if ( a3 > 0x40 )
    sub_2205470(&src, 0, 0);
  else
    src = nullptr;
  v28 = 1;
  sub_CFEAE0((__int64)v29, (__int64)&v25);
  v7 = sub_2202BA0(v29, &src, 0, &v24);
  sub_9955A0(v29);
  if ( (v7 & 1) == 0 )
  {
LABEL_9:
    v16 = (void *)sub_D45A20(a1, a3, v8, v9, v10, v11);
    v18 = v17;
    if ( v27 > 0x40 )
    {
      v19 = v16;
      memcpy(v16, src, 8 * (((unsigned __int64)v27 + 63) >> 6));
    }
    else
    {
      v19 = src;
    }
    v20 = (_QWORD *)sub_E216C0(a1[22], 16);
    v21 = v23;
    *v20 = v19;
    v20[1] = v18;
    result = sub_DCADA0((__int64)a1, a2, (__int64)&v25, v7, v21);
    goto LABEL_12;
  }
  sub_CFEAE0((__int64)v29, (__int64)&v25);
  v13 = sub_21F90D0(v29, &v25, v12);
  v14 = v29;
  if ( v29[0] == v13 )
    v14 = (_QWORD *)v29[1];
  if ( (*((_BYTE *)v14 + 20) & 7u) <= 1 )
  {
    sub_9955A0(v29);
    goto LABEL_9;
  }
  sub_9955A0(v29);
  sub_CFEAE0((__int64)v29, (__int64)&v25);
  v22.m128i_i8[0] = sub_DC2150((__int64)a1, a2, v29);
  sub_9955A0(v29);
  result = v22.m128i_u8[0];
LABEL_12:
  if ( v27 > 0x40 )
  {
    if ( src )
    {
      v22.m128i_i8[0] = result;
      operator delete[](src);
      return v22.m128i_u8[0];
    }
  }
  return result;
}
