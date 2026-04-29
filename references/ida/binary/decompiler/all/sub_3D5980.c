unsigned __int64 __fastcall sub_3D5980(_QWORD *a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rax
  const char *v17; // r15
  __int64 v18; // rsi
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  unsigned __int64 v22; // rbp
  __int64 i; // rax
  __int64 v24; // rdx
  signed int v25; // r11d
  __int64 v26; // rsi
  __int64 v29; // [rsp+0h] [rbp-F8h]
  unsigned __int8 (__fastcall *v30)(_QWORD *, __int64, __int64, const char *, _BYTE *); // [rsp+0h] [rbp-F8h]
  __int64 v31; // [rsp+8h] [rbp-F0h]
  __int64 v32; // [rsp+8h] [rbp-F0h]
  __int64 v33; // [rsp+10h] [rbp-E8h]
  __int64 v34; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v35; // [rsp+20h] [rbp-D8h] BYREF
  int v36; // [rsp+30h] [rbp-C8h]
  _BYTE v37[24]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v38[32]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+98h] [rbp-60h] BYREF
  int v42; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( *(int *)(a2 + 32) > 72
    || *(_QWORD *)(a2 + 48) == -1
    || (v8 = a1[8]) == 0
    || (unsigned int)(*(_DWORD *)(v8 + 60) - 1) > 1
    || (v9 = *(_QWORD *)(v8 + 64)) == 0
    || (v10 = sub_3C8680(a1[8], *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24))) == 0 )
  {
    if ( !under_debugger )
      sub_37EA20(0);
    BUG();
  }
  v12 = *a1;
  v35.m128i_i32[0] = 0;
  ((void (__fastcall *)(__int64, __int64, _QWORD, char *, __m128i *, __int64, __int64, __m128i *))callui)(
    56,
    v12,
    0,
    (char *)&v34 + 4,
    &v35,
    v11,
    a3,
    &v35);
  v16 = (const char *)callui(70, *a1, 0, v13, v14, v15, v29, v31, v33, v34);
  v17 = v16;
  if ( v16 )
  {
    memset(v37, 0, sizeof(v37));
    v17 = 0;
    if ( (unsigned __int8)sub_3CA1C0((unsigned __int64)v37, v16, SHIDWORD(v34)) )
    {
      v18 = *(_QWORD *)v37 + 8LL * *(_QWORD *)&v37[8];
      if ( *(_QWORD *)v37 != v18 )
      {
        v19 = *(_QWORD **)v37;
        do
        {
          if ( (*(_DWORD *)v19 & 7) == 1 )
          {
            v20 = *v19 >> 3;
            if ( v20 < *(_QWORD *)(v8 + 144) )
            {
              v17 = *(const char **)(*(_QWORD *)(v8 + 136) + 8 * v20);
              goto LABEL_15;
            }
          }
          ++v19;
        }
        while ( (_QWORD *)v18 != v19 );
        v17 = 0;
      }
    }
LABEL_15:
    if ( *(_QWORD *)v37 )
    {
      *(_QWORD *)&v37[8] = 0;
      qfree();
    }
  }
  *(_OWORD *)v37 = 0xFFFFFFFFFFFFFFFFLL;
  v39[0] = 0xFFFFFFFF00000000LL;
  v40[0] = 0xFFFFFFFF00000000LL;
  v41[0] = 0xFFFFFFFF00000000LL;
  *(_DWORD *)&v37[16] = -1;
  v39[1] = 0;
  v40[1] = 0;
  v41[1] = 0;
  sub_32D4D0(v38, -1);
  v42 = 0;
  sub_3C8720(v32, (__int64)a1, a2);
  v21 = _mm_load_si128(&v35);
  *(_DWORD *)&v37[16] = v36;
  *(__m128i *)v37 = v21;
  if ( v30(a1, v9, v10, v17, v37) )
  {
    sub_2B57C0(*(_QWORD *)a1[6], v9);
    v22 = *(_QWORD *)(v9 + 40);
    for ( i = sub_3CA140(a1[6], v22); i != v24; *(_DWORD *)(v26 + 60) = 4 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)i;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)i + 60LL) - 1) <= 1 && *(_DWORD *)(v26 + 56) >= v25 )
          break;
        i += 8;
        if ( i == v24 )
          goto LABEL_24;
      }
      i += 8;
    }
LABEL_24:
    sub_3D57E0((__int64)a1, v22, v25, 1, 0, *(double *)v21.m128i_i64, a5, a6, a7);
  }
  sub_11A960((__int64)v41);
  sub_11A960((__int64)v40);
  sub_11A960((__int64)v39);
  return v43 - __readfsqword(0x28u);
}
