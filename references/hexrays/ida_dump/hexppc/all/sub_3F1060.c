__int64 __fastcall sub_3F1060(__int64 a1, double a2)
{
  char v4; // r15
  char v5; // r14
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(_DWORD *, unsigned int); // rax
  int v9; // eax
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rsi
  int v14; // r13d
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // r14
  int dtype_size; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r12
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 (__fastcall *v35)(_DWORD *, unsigned int); // rax
  int v36; // eax
  __int64 (__fastcall *v37)(_DWORD *, unsigned int); // rax
  int v38; // eax
  __int64 (__fastcall *v39)(_DWORD *, unsigned int); // rax
  int v40; // eax
  __int64 v41; // [rsp+8h] [rbp-B8h]
  int v42; // [rsp+24h] [rbp-9Ch]
  int v43; // [rsp+28h] [rbp-98h]
  int v44; // [rsp+2Ch] [rbp-94h]
  _QWORD v45[2]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v46[2]; // [rsp+40h] [rbp-80h] BYREF
  unsigned __int8 v47[16]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-60h] BYREF
  int v49; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+74h] [rbp-4Ch]
  unsigned __int64 v51; // [rsp+88h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a1 + 48) )
  {
    case '=':
      v42 = 69;
      v4 = 0;
      v5 = 0;
      goto LABEL_4;
    case '>':
      v42 = 69;
      v4 = 1;
      v5 = 0;
      goto LABEL_4;
    case '@':
      v42 = 70;
      v4 = 0;
      v5 = 0;
      goto LABEL_4;
    case 'A':
      v42 = 70;
      v4 = 1;
      v5 = 0;
      goto LABEL_4;
    case 'F':
      v42 = 69;
      v4 = 0;
      v5 = 1;
      goto LABEL_4;
    case 'G':
      v42 = 69;
      v4 = 1;
      v5 = 1;
      goto LABEL_4;
    case 'H':
      v42 = 70;
      v4 = 0;
      v5 = 1;
      goto LABEL_4;
    case 'I':
      v42 = 70;
      v4 = 1;
      v5 = 1;
LABEL_4:
      v6 = *(_DWORD **)(a1 + 832);
      v7 = *(unsigned __int16 *)(a1 + 70);
      v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v8 == sub_3E59C0 )
      {
        v9 = sub_3E59C0(v6, v7);
        LODWORD(v7) = *(unsigned __int16 *)(a1 + 110);
        v44 = v9;
LABEL_6:
        v10 = sub_3E59C0(v6, v7);
        LODWORD(v7) = *(unsigned __int16 *)(a1 + 150);
        v11 = v10;
LABEL_7:
        v12 = sub_3E59C0(v6, v7);
        v13 = (unsigned int)*(char *)(a1 + 176);
        v43 = v12;
LABEL_8:
        v14 = sub_3E59C0(v6, v13);
        goto LABEL_9;
      }
      v34 = v8(v6, v7);
      v6 = *(_DWORD **)(a1 + 832);
      v7 = *(unsigned __int16 *)(a1 + 110);
      v44 = v34;
      v35 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v35 == sub_3E59C0 )
        goto LABEL_6;
      v36 = v35(v6, v7);
      v6 = *(_DWORD **)(a1 + 832);
      v7 = *(unsigned __int16 *)(a1 + 150);
      v11 = v36;
      v37 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v37 == sub_3E59C0 )
        goto LABEL_7;
      v38 = v37(v6, v7);
      v6 = *(_DWORD **)(a1 + 832);
      v13 = (unsigned int)*(char *)(a1 + 176);
      v43 = v38;
      v39 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v39 == sub_3E59C0 )
        goto LABEL_8;
      v14 = v39(v6, v13);
LABEL_9:
      if ( v4 )
      {
        v41 = *(_QWORD *)(a1 + 40);
        v45[0] = 0xFFFFFFFF00000000LL;
        v45[1] = 0;
        sub_3F0D20(a1, (__int64)v45, v11, v41);
        v46[0] = 0xFFFFFFFF00000000LL;
        v46[1] = 0;
        sub_3F0D20(a1, (__int64)v46, v43, v41);
        v15 = *(_QWORD *)(a1 + 832);
        v16 = _mm_cvtsi32_si128(HIDWORD(v45[0]));
        v17 = *(_QWORD *)(v15 + 4464);
        if ( !v17 )
          sub_3E6800(*(double *)v16.m128i_i64, a1, (__int64)v46);
        v18 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v15 + 4456) + 4 * v17 - 4));
        *(_DWORD *)v47 = 1;
        *(_QWORD *)(v15 + 4464) = v17 - 1;
        *(_QWORD *)&v47[4] = _mm_unpacklo_epi32(v16, v18).m128i_u64[0];
        sub_1D2850(a1, 71, (unsigned __int8 *)v45, (unsigned __int8 *)v46, v47);
        v48[1] = 0;
        v48[0] = 0xFFFFFFFF00000000LL;
        sub_3F0D20(a1, (__int64)v48, v14, v41);
        v19 = *(_QWORD *)(a1 + 832);
        v20 = _mm_cvtsi32_si128(HIDWORD(v45[0]));
        v21 = *(_QWORD *)(v19 + 4464);
        if ( !v21 )
          sub_3E6800(*(double *)v20.m128i_i64, a1, (__int64)v48);
        v22 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v19 + 4456) + 4 * v21 - 4));
        v49 = 1;
        *(_QWORD *)(v19 + 4464) = v21 - 1;
        v50 = _mm_unpacklo_epi32(v20, v22).m128i_u64[0];
        sub_1D2850(a1, v42, v47, (unsigned __int8 *)v48, (unsigned __int8 *)&v49);
        if ( v5 )
        {
          v23 = SHIDWORD(v50);
          dtype_size = get_dtype_size(2);
          sub_1D2710(a1, 0x44u, dtype_size, v23, 0x3BEA45E214ADDC55LL, v23, 0);
        }
        sub_3F0E20(a1, SHIDWORD(v50), v44);
        sub_119360((__int64)&v49);
        sub_119360((__int64)v48);
        sub_119360((__int64)v47);
        sub_119360((__int64)v46);
        sub_119360((__int64)v45);
      }
      else
      {
        v25 = *(_QWORD *)(a1 + 832);
        v26 = *(_QWORD *)(v25 + 4464);
        if ( !v26
          || (v27 = *(int *)(*(_QWORD *)(v25 + 4456) + 4 * v26 - 4),
              *(_QWORD *)(v25 + 4464) = v26 - 1,
              v28 = get_dtype_size(7),
              v13 = 71,
              v6 = (_DWORD *)a1,
              sub_1D2710(a1, 0x47u, v28, v11, v43, v27, 0),
              v29 = *(_QWORD *)(a1 + 832),
              (v30 = *(_QWORD *)(v29 + 4464)) == 0) )
        {
          sub_3E6800(a2, (__int64)v6, v13);
        }
        v31 = *(int *)(*(_QWORD *)(v29 + 4456) + 4 * v30 - 4);
        *(_QWORD *)(v29 + 4464) = v30 - 1;
        v32 = get_dtype_size(7);
        sub_1D2710(a1, v42, v32, v27, v14, v31, 0);
        if ( v5 )
        {
          v40 = get_dtype_size(7);
          sub_1D2710(a1, 0x44u, v40, v31, 0x3BEA45E214ADDC55LL, v31, 0);
        }
        v33 = get_dtype_size(7);
        sub_1D2710(a1, 4u, v33, v31, 0x3BEA45E214ADDC55LL, v44, 0);
      }
      sub_3EC840(a1, v44, 8);
      return 1;
    default:
      return 0;
  }
}
