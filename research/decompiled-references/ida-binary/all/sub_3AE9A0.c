_BOOL8 __fastcall sub_3AE9A0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  _BOOL4 v10; // ebp
  double v12; // xmm4_8
  double v13; // xmm5_8
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  int tinfo_property; // eax
  __int64 v18; // rdi
  int v19[2]; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-B8h]
  __int128 v22; // [rsp+28h] [rbp-B0h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int128 v24; // [rsp+40h] [rbp-98h]
  __int128 v25; // [rsp+50h] [rbp-88h] BYREF
  __int64 v26; // [rsp+60h] [rbp-78h]
  int v27; // [rsp+68h] [rbp-70h]
  __int64 v28; // [rsp+80h] [rbp-58h]
  int v29; // [rsp+88h] [rbp-50h]
  __int64 v30; // [rsp+90h] [rbp-48h]
  char v31; // [rsp+98h] [rbp-40h]
  int v32[2]; // [rsp+A8h] [rbp-30h]

  v9 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)v32 = __readfsqword(0x28u);
  if ( v9 == 25 || (v10 = 0, v9 == 58) )
  {
    v10 = 1;
    sub_1ADE30(v19, "Choose a structure");
    if ( !LOBYTE(v19[0]) )
      goto LABEL_5;
    v14 = *(const char **)(a1 + 208);
    v21 = 0;
    v20 = 0;
    v23 = 0;
    v28 = 1;
    v29 = -1;
    v30 = 0;
    v31 = 0;
    v22 = 0;
    v24 = 0;
    v25 = 0;
    v15 = sub_3AB1C0((__int64)&v20, (__int64)v14, (__m128)0LL, a3, a4, a5, v12, v13, a8, a9);
    v16 = v15;
    if ( v15 < 0 )
    {
      v10 = v15 != -1;
    }
    else
    {
      *((_QWORD *)&v25 + 1) = *((_QWORD *)&v25 + 1) & 0xFFFFFFFFFFFFFFF0LL | 0xB;
      tinfo_property = get_tinfo_property(*(_QWORD *)v19, 7);
      v18 = *(_QWORD *)(a1 + 208);
      v14 = byte_9 + 5;
      v27 = tinfo_property;
      v26 = 0;
      v10 = set_tinfo_property4(v18 + 8, 14, v16, (char *)&v25 + 8, 0, 0) == 0;
    }
    clear_tinfo_t(&v25);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, v14);
    }
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, v14);
      clear_tinfo_t(v19);
    }
    else
    {
LABEL_5:
      clear_tinfo_t(v19);
    }
  }
  return v10;
}
