__int64 __fastcall sub_1DE360(__int64 *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  int v7; // r12d
  bool v8; // zf
  __int64 v9; // rbp
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r13d
  char *v14; // rdi
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rcx
  __m128i v18; // xmm1
  int v19; // [rsp+4h] [rbp-F4h]
  int v20; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v21; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-D8h] BYREF
  char v23; // [rsp+28h] [rbp-D0h]
  __int64 v24; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C0h]
  _DWORD v26[2]; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v27; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-90h]
  _BYTE v29[32]; // [rsp+70h] [rbp-88h] BYREF
  _DWORD v30[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v31; // [rsp+98h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v5 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 1496) + 728LL) & 1) == 0 || *((_BYTE *)a1 + 24) )
    return 0;
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 32) == 4;
  v23 = 0;
  v22 = 0;
  v9 = a2 + 32;
  if ( v8 )
  {
    v14 = *(char **)(a2 + 40);
    v7 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 == 20 || v7 == 13 )
    {
      if ( !(unsigned __int8)sub_11C340(v14 + 48, &v21, 0) )
        return 0;
      v9 = *(_QWORD *)(a2 + 40) + 32LL;
      v5 = *a1;
    }
  }
  if ( (unsigned __int8)sub_1DC2B0((__int64)&v22, *(_QWORD *)(v5 + 1504), &v20, v9) )
  {
    v27 = 0;
    v19 = v20;
    v26[0] = 0;
    v26[1] = v20;
    v28 = 0;
    v12 = 0;
    if ( !(unsigned __int8)sub_1DC500((_DWORD)a1, (unsigned int)v26, (unsigned int)&v22, 0, v10, v11) )
    {
LABEL_14:
      sub_30EA00(v26);
      return v12;
    }
    sub_30EAC0(v29, v26);
    if ( v7 == 20 )
    {
      if ( !(unsigned __int8)sub_3102C0(v26, v26) )
        goto LABEL_30;
      v18 = _mm_loadu_si128(&v27);
      if ( (v21 & ~_mm_or_si128(_mm_srli_si128(v18, 8), v18).m128i_u64[0]) != 0 )
        goto LABEL_30;
      sub_30EFE0(v26, v21 & _mm_movehl_ps(a5, (__m128)v18).m128_u64[0]);
    }
    else if ( v7 == 13 && !(unsigned __int8)sub_310510(v26, -v21) )
    {
LABEL_30:
      v12 = 0;
      goto LABEL_13;
    }
    v31 = 0;
    v30[0] = 0;
    v30[1] = v19;
    v32 = 0;
    if ( (unsigned __int8)sub_1DCE50((__int64)v30, a2, a1) )
    {
      sub_310630(v30, v26);
      if ( v30[0] != 8 )
      {
        if ( !v30[0] )
        {
          v12 = 2;
          goto LABEL_22;
        }
        v12 = 3;
        if ( !(unsigned int)sub_30EC40(v30, v26) )
        {
LABEL_22:
          sub_312530(&v24, v29, v9);
          v17 = s1;
          if ( v25 )
            LODWORD(v17) = v24;
          sub_32CD90(*a1, *(_QWORD *)(a2 + 24), 46, (_DWORD)v17, v15, v16);
          if ( v24 )
          {
            v25 = 0;
            qfree(v24);
          }
          goto LABEL_12;
        }
      }
    }
    v12 = 0;
LABEL_12:
    sub_30EA00(v30);
LABEL_13:
    sub_30EA00(v29);
    goto LABEL_14;
  }
  return 0;
}
