__int64 __fastcall sub_DA9BE0(__int64 a1, __int64 *a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 v7; // r13
  unsigned int v8; // r15d
  _BYTE *v9; // rsi
  unsigned __int64 v10; // r15
  char *v11; // rdi
  char *v12; // rdx
  __int16 v14; // bp
  unsigned __int8 v16; // [rsp+1Fh] [rbp-A9h] BYREF
  _BYTE v17[48]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __m128i si128; // [rsp+58h] [rbp-70h]
  _BYTE v20[96]; // [rsp+68h] [rbp-60h] BYREF

  v7 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v7, 48);
  sub_DFF520(v17);
  sub_DFDA50(v7, 48);
  v8 = sub_DA8420(a1, a2, (__int64)v17, 0);
  if ( !(_BYTE)v8 )
    goto LABEL_11;
  v9 = v20;
  v10 = a4 >> 3;
  ptr = v20;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
  if ( a4 >> 3 )
  {
    v11 = v20;
    if ( v10 > 0x28 )
    {
      sub_22130D0(&ptr, v20, a4 >> 3, 1);
      v9 = ptr;
      v12 = (char *)ptr + v10;
      v11 = (char *)ptr + si128.m128i_i64[0];
      if ( (char *)ptr + v10 == (char *)ptr + si128.m128i_i64[0] )
        goto LABEL_6;
    }
    else
    {
      v12 = &v20[v10];
      if ( &v20[v10] == v20 )
      {
LABEL_6:
        si128.m128i_i64[0] = a4 >> 3;
        goto LABEL_7;
      }
    }
    memset(v11, 0, v12 - v11);
    v9 = ptr;
    goto LABEL_6;
  }
LABEL_7:
  v16 = 0;
  if ( (unsigned __int8)sub_D856A0(a1, (void **)a2, (__int64)v17, v9, a4, a4, &v16)
    && (v8 = sub_DA9650(a1, a2, v16, a3), (_BYTE)v8) )
  {
    v14 = *(_WORD *)ptr;
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v14;
  }
  else
  {
    v8 = 0;
  }
  if ( ptr != v20 )
    free(ptr);
LABEL_11:
  sub_DFF560(v17);
  return v8;
}

