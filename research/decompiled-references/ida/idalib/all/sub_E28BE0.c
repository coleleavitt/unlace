__int64 __fastcall sub_E28BE0(__int64 a1, const __m128i *a2, __int64 *a3, unsigned __int64 a4)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // r8
  __m128i v9; // xmm1
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __m128i v12; // xmm0
  __int64 (__fastcall *v13)(void **, const __m128i **, int); // rax
  __int32 v14; // eax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const __m128i *v19; // rax
  bool v20; // cc
  __int64 v21; // rax
  __int64 *v22; // rax
  unsigned __int8 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 *v27; // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rax
  unsigned __int16 *v30; // rax
  unsigned __int16 *v31; // rax
  unsigned __int8 *v32; // rax
  unsigned __int8 *v33; // rax
  __int64 v34; // rax
  _QWORD v35[4]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v36; // [rsp+20h] [rbp-98h] BYREF
  __int64 (__fastcall *v37)(void **, const __m128i **, int); // [rsp+30h] [rbp-88h]
  __int64 (__fastcall *v38)(__int64 **, unsigned __int64 *, __int64, __int64, __int64); // [rsp+38h] [rbp-80h]
  __m128i v39; // [rsp+40h] [rbp-78h] BYREF
  __int64 (__fastcall *v40)(void **, const __m128i **, int); // [rsp+50h] [rbp-68h]
  unsigned __int64 v41; // [rsp+58h] [rbp-60h]

  v6 = *a3;
  v37 = nullptr;
  v40 = nullptr;
  v7 = (_QWORD *)operator new(0x18u);
  v9 = _mm_load_si128(&v36);
  v10 = (unsigned __int64)v38;
  v11 = (unsigned __int64)sub_E229C0;
  v39.m128i_i64[0] = (__int64)v7;
  v12 = _mm_load_si128(&v39);
  *v7 = &v36;
  v7[1] = a3;
  v7[2] = v6;
  v13 = v37;
  v39 = v9;
  v36 = v12;
  v40 = v37;
  v37 = sub_E229C0;
  v41 = v10;
  v38 = sub_E28BD0;
  if ( v40 )
    v13((void **)&v39, (const __m128i **)&v39, 3);
  v14 = a2[1].m128i_i32[2];
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( a2[2].m128i_i64[1] )
        goto LABEL_25;
      goto LABEL_30;
    }
    if ( v14 == 2 )
    {
      v18 = a2[2].m128i_i64[0];
      if ( !v18 )
        goto LABEL_25;
      if ( (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v18 + 32) + 28LL) >= a2->m128i_i64[0] )
        goto LABEL_12;
    }
    else
    {
      v10 = a2->m128i_i64[0];
      if ( v14 == 3 )
      {
        if ( v10 <= *(unsigned int *)(*(_QWORD *)(a2[2].m128i_i64[0] + 32) + 28LL) )
          goto LABEL_12;
      }
      else
      {
        if ( !a2[2].m128i_i64[1] && !v10 )
          goto LABEL_30;
        v11 = *(unsigned int *)(*(_QWORD *)(a2[2].m128i_i64[0] + 32) + 28LL);
        if ( v11 >= v10 )
        {
          if ( a2[2].m128i_i64[1] )
          {
LABEL_31:
            if ( v14 != 1 )
              goto LABEL_12;
LABEL_25:
            sub_E25340((__int64)&v39, a2, v6);
            goto LABEL_26;
          }
LABEL_30:
          if ( !a2->m128i_i64[0] )
            goto LABEL_25;
          goto LABEL_31;
        }
      }
    }
LABEL_6:
    *(_BYTE *)(a1 + 56) = 0;
    goto LABEL_7;
  }
  v15 = a2[2].m128i_i64[0];
  if ( !v15 )
    goto LABEL_6;
  v10 = *(_QWORD *)(v15 + 32);
  if ( *(_BYTE *)(v10 + 61) || *(_BYTE *)(v15 + 26) || (unsigned __int64)*(unsigned int *)(v10 + 28) < a2->m128i_i64[0] )
    goto LABEL_6;
LABEL_12:
  v17 = sub_CE6180((__int64)a3, a4, v10, v11, v8);
  if ( !BYTE4(v17) )
  {
LABEL_13:
    v39.m128i_i8[4] &= ~1u;
    v39.m128i_i32[0] = 0;
    v35[0] = a4;
    if ( !v37 )
      std::__throw_bad_function_call();
    if ( !((unsigned __int8 (__fastcall *)(__m128i *, _QWORD *, const __m128i *, __m128i *))v38)(&v36, v35, a2, &v39) )
    {
      *(_BYTE *)(a1 + 56) = 0;
      goto LABEL_27;
    }
LABEL_26:
    sub_A4F8A0(a1, (__int64)&v39);
    *(_BYTE *)(a1 + 56) = 1;
LABEL_27:
    if ( v39.m128i_i32[0] <= 1u )
      goto LABEL_7;
    goto LABEL_28;
  }
  switch ( v17 )
  {
    case 0LL:
      v33 = (unsigned __int8 *)sub_D0C5D0((__int64)a2);
      sub_E22B10((__int64)&v39, v33);
      break;
    case 1LL:
      v32 = (unsigned __int8 *)sub_D0C7E0((__int64)a2);
      sub_E22DF0((__int64)&v39, v32);
      break;
    case 2LL:
      v31 = (unsigned __int16 *)sub_D0CBD0((__int64)a2);
      sub_E22E90((__int64)&v39, v31);
      break;
    case 3LL:
      v30 = (unsigned __int16 *)sub_D0CDE0((__int64)a2);
      sub_E22E30((__int64)&v39, v30);
      break;
    case 4LL:
      v29 = (unsigned int *)sub_D0D1D0((__int64)a2);
      sub_E22EB0((__int64)&v39, v29);
      break;
    case 5LL:
      v28 = (unsigned int *)sub_D0D3E0((__int64)a2);
      sub_E22CA0((__int64)&v39, v28);
      break;
    case 6LL:
      v27 = (__int64 *)sub_D0D9C0((__int64)a2);
      sub_E22E70((__int64)&v39, v27);
      break;
    case 7LL:
      v26 = (__int64 *)sub_D0DBD0((__int64)a2);
      sub_E22E10((__int64)&v39, v26);
      break;
    case 8LL:
      v25 = sub_D0E1E0((__int64)a2);
      sub_E22CC0((__int64)&v39, v25);
      break;
    case 9LL:
      v24 = (__int64 *)sub_D0E230((__int64)a2);
      sub_E22B30((__int64)&v39, v24);
      break;
    case 10LL:
      v23 = (unsigned __int8 *)sub_D0E7B0((__int64)a2);
      sub_E22E50((__int64)&v39, v23);
      break;
    case 11LL:
      v22 = (__int64 *)sub_D0F1C0((__int64)a2);
      sub_E22A50((__int64)&v39, v22);
      break;
    case 12LL:
      v21 = sub_D0E280((__int64)a2);
      sub_CFEAE0((__int64)v35, v21);
      sub_C18B90((__int64)&v39, v35);
      sub_9955A0(v35);
      break;
    case 13LL:
      v19 = (const __m128i *)sub_D0EA30((__int64)a2);
      sub_E25340((__int64)&v39, v19, v6);
      break;
    case 14LL:
      v34 = sub_D0EF40((__int64)a2);
      sub_E34130(&v39, v34, v6);
      break;
    default:
      goto LABEL_13;
  }
  sub_A4F8A0(a1, (__int64)&v39);
  v20 = v39.m128i_i32[0] <= 1u;
  *(_BYTE *)(a1 + 56) = 1;
  if ( !v20 )
LABEL_28:
    sub_A4F8E0(v39.m128i_i32);
LABEL_7:
  if ( v37 )
    v37((void **)&v36, (const __m128i **)&v36, 3);
  return a1;
}
