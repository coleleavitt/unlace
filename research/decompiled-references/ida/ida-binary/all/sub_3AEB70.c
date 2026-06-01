_BOOL8 __fastcall sub_3AEB70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v11; // eax
  _BOOL4 v12; // ebp
  const char *v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  const char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 tinfo_size; // rax
  __int64 v21; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-B8h]
  __int128 v24; // [rsp+28h] [rbp-B0h]
  __int64 v25; // [rsp+38h] [rbp-A0h]
  __int128 v26; // [rsp+40h] [rbp-98h]
  __int128 v27; // [rsp+50h] [rbp-88h] BYREF
  int tinfo_property; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  int v30; // [rsp+88h] [rbp-50h]
  __int64 v31; // [rsp+90h] [rbp-48h]
  char v32; // [rsp+98h] [rbp-40h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-30h]

  v11 = *(_DWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  if ( v11 == 25 || (v12 = 0, v11 == 58) )
  {
    v12 = 0;
    v14 = (const char *)itext(1191, a2, a3);
    sub_1AB560(&v21, v14, 0);
    if ( !(_BYTE)v21 )
    {
LABEL_5:
      clear_tinfo_t(&v21);
      return v12;
    }
    v17 = *(const char **)(a1 + 208);
    v23 = 0;
    v22 = 0;
    v25 = 0;
    v29 = 1;
    v30 = -1;
    v31 = 0;
    v32 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v18 = sub_3AB1C0((__int64)&v22, (__int64)v17, (__m128)0LL, a5, a6, a7, v15, v16, a10, a11);
    v19 = v18;
    if ( v18 < 0 )
    {
      v12 = v18 != -1;
    }
    else
    {
      tinfo_size = get_tinfo_size(0, v21, 0);
      if ( tinfo_size != *((_QWORD *)&v22 + 1) >> 3 )
      {
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&v27 + 1) & 0xFFFFFFFFFFFFFFF0LL | 8;
        tinfo_property = get_tinfo_property(v21, 7);
LABEL_9:
        v17 = byte_9 + 5;
        v12 = set_tinfo_property4(*(_QWORD *)(a1 + 208) + 8LL, 14, v19, (char *)&v27 + 8, 0, 0) == 0;
        goto LABEL_10;
      }
      v17 = byte_9 + 3;
      if ( !(unsigned int)set_tinfo_property4(*(_QWORD *)(a1 + 208) + 8LL, 12, v19, &v21, 0, 0) )
      {
        *((_QWORD *)&v27 + 1) = 0;
        goto LABEL_9;
      }
      v12 = 0;
    }
LABEL_10:
    clear_tinfo_t(&v27);
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, v17);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, v17);
      clear_tinfo_t(&v21);
      return v12;
    }
    goto LABEL_5;
  }
  return v12;
}
