unsigned __int64 __fastcall sub_3DBE60(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const char *v18; // rax
  const char *v19; // r15
  __int64 v20; // rsi
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  unsigned __int64 v24; // rbp
  __int64 i; // rax
  __int64 v26; // rdx
  signed int v27; // r11d
  __int64 v28; // rsi
  __int64 v31; // [rsp+0h] [rbp-F8h]
  unsigned __int8 (__fastcall *v32)(__int64, unsigned __int64, __int64, const char *, _BYTE *); // [rsp+0h] [rbp-F8h]
  __int64 v33; // [rsp+8h] [rbp-F0h]
  _QWORD *v34; // [rsp+8h] [rbp-F0h]
  __int64 v35; // [rsp+10h] [rbp-E8h]
  __int64 v36; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v37; // [rsp+20h] [rbp-D8h] BYREF
  int v38; // [rsp+30h] [rbp-C8h]
  _BYTE v39[24]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v40[32]; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v42[2]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-60h] BYREF
  int v44; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( *(int *)(a2 + 32) > 72
    || *(_QWORD *)(a2 + 48) == -1
    || (v8 = *(_QWORD *)(a1 + 64)) == 0
    || (unsigned int)(*(_DWORD *)(v8 + 60) - 1) > 1
    || (v9 = *(_QWORD *)(v8 + 64)) == 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEEDu, a2, a4);
LABEL_31:
    BUG();
  }
  v10 = *(_DWORD *)(a2 + 24);
  v11 = *(unsigned int *)(a2 + 20);
  v12 = sub_3CCAE0(*(_QWORD *)(a1 + 64), v11, v10);
  if ( !v12 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEEEu, v11, a4);
    goto LABEL_31;
  }
  v14 = *(_QWORD *)a1;
  v37.m128i_i32[0] = 0;
  ((void (__fastcall *)(__int64, __int64, _QWORD, char *, __m128i *, __int64, __int64, __m128i *))callui)(
    56,
    v14,
    0,
    (char *)&v36 + 4,
    &v37,
    v13,
    a3,
    &v37);
  v18 = (const char *)callui(70, *(_QWORD *)a1, 0, v15, v16, v17, v31, v33, v35, v36);
  v19 = v18;
  if ( v18 )
  {
    a4 = 0.0;
    memset(v39, 0, sizeof(v39));
    v19 = nullptr;
    if ( (unsigned __int8)sub_3CE440((unsigned __int64)v39, v18, SHIDWORD(v36)) )
    {
      v20 = *(_QWORD *)v39 + 8LL * *(_QWORD *)&v39[8];
      if ( *(_QWORD *)v39 != v20 )
      {
        v21 = *(_QWORD **)v39;
        do
        {
          if ( (*(_DWORD *)v21 & 7) == 1 )
          {
            v22 = *v21 >> 3;
            if ( v22 < *(_QWORD *)(v8 + 144) )
            {
              v19 = *(const char **)(*(_QWORD *)(v8 + 136) + 24 * v22);
              goto LABEL_15;
            }
          }
          ++v21;
        }
        while ( (_QWORD *)v20 != v21 );
        v19 = nullptr;
      }
    }
LABEL_15:
    if ( *(_QWORD *)v39 )
    {
      *(_QWORD *)&v39[8] = 0;
      qfree(*(_QWORD *)v39);
    }
  }
  *(_OWORD *)v39 = 0xFFFFFFFFFFFFFFFFLL;
  v41[0] = 0xFFFFFFFF00000000LL;
  v42[0] = 0xFFFFFFFF00000000LL;
  v43[0] = 0xFFFFFFFF00000000LL;
  *(_DWORD *)&v39[16] = -1;
  v41[1] = 0;
  v42[1] = 0;
  v43[1] = 0;
  sub_32ADE0((__int64)v40, -1);
  v44 = 0;
  sub_3CB2D0(v34, a1, a2, a4);
  v23 = _mm_load_si128(&v37);
  *(_DWORD *)&v39[16] = v38;
  *(__m128i *)v39 = v23;
  if ( v32(a1, v9, v12, v19, v39) )
  {
    sub_2B3220(**(_QWORD **)(a1 + 48), v9);
    v24 = *(_QWORD *)(v9 + 40);
    for ( i = sub_3CE3C0(*(_QWORD *)(a1 + 48), v24); i != v26; *(_DWORD *)(v28 + 60) = 4 )
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)i;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)i + 60LL) - 1) <= 1 && *(_DWORD *)(v28 + 56) >= v27 )
          break;
        i += 8;
        if ( i == v26 )
          goto LABEL_24;
      }
      i += 8;
    }
LABEL_24:
    sub_3DBCC0(a1, v24, v27, 1, nullptr, *(double *)v23.m128i_i64, a5, a6, a7);
  }
  sub_1181E0((__int64)v43);
  sub_1181E0((__int64)v42);
  sub_1181E0((__int64)v41);
  return v45 - __readfsqword(0x28u);
}
