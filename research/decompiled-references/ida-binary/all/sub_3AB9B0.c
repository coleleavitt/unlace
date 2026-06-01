_BOOL8 __fastcall sub_3AB9B0(
        __int64 a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  _BOOL4 v18; // ebx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // [rsp+0h] [rbp-D0h]
  __int128 v23; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-B8h]
  __int128 v25; // [rsp+20h] [rbp-B0h]
  __int64 v26; // [rsp+30h] [rbp-A0h]
  __int128 v27; // [rsp+38h] [rbp-98h]
  _OWORD v28[3]; // [rsp+48h] [rbp-88h] BYREF
  __int64 v29; // [rsp+78h] [rbp-58h]
  int v30; // [rsp+80h] [rbp-50h]
  __int64 v31; // [rsp+88h] [rbp-48h]
  char v32; // [rsp+90h] [rbp-40h]
  unsigned __int64 v33; // [rsp+A0h] [rbp-30h]

  v12 = *(const char **)(a1 + 208);
  v33 = __readfsqword(0x28u);
  v32 = 0;
  v24 = 0;
  v26 = 0;
  v29 = 1;
  v30 = -1;
  v31 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v28[0] = 0;
  v14 = sub_3AB1C0((__int64)&v23, (__int64)v12, (__m128)0LL, a5, a6, a7, a8, a9, a10, a11);
  v15 = v14;
  if ( v14 < 0 )
  {
    v18 = v14 != -1;
  }
  else
  {
    v16 = *((_QWORD *)&v28[0] + 1);
    if ( a2 == (BYTE8(v28[0]) & 0xF) )
    {
      a2 = 0;
      if ( a3 )
      {
        v22 = v15;
        v20 = *(_DWORD *)(get_ph(&v23, v12) + 8);
        v15 = v22;
        a2 = 4;
        v16 = *((_QWORD *)&v28[0] + 1);
        v21 = v20 & 0xC0;
        if ( v21 != 128 )
        {
          a2 = 1;
          if ( v21 != 192 )
            a2 = (v21 != 64) + 2LL;
        }
      }
    }
    v17 = *(_QWORD *)(a1 + 208);
    v12 = byte_9 + 5;
    *((_QWORD *)&v28[0] + 1) = a2 | v16 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = set_tinfo_property4(v17 + 8, 14, v15, (char *)v28 + 8, 0, 0) == 0;
  }
  clear_tinfo_t(v28);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, v12);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, v12);
  }
  return v18;
}
