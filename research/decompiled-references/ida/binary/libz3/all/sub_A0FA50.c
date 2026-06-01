__int64 __fastcall sub_A0FA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned __int32 v18; // r8d
  __int64 v19; // rax
  _DWORD *v20; // rdx
  int v21; // esi
  _DWORD *v22; // r10
  __int64 v23; // rsi
  _DWORD *v24; // rdi
  _DWORD *i; // rax
  int v26; // ecx
  void (__fastcall *v27)(__int64, _QWORD, __int64); // r10
  int v28; // eax
  __int64 v29; // r15
  unsigned int v30; // eax
  __int64 v31; // r14
  __int64 v32; // r12
  const __m128i *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // r11
  int v38; // r8d
  int v39; // eax
  int v40; // esi
  int v41; // edi
  unsigned int v42; // eax
  int v43; // esi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  void (__fastcall *v49)(__int64, const __m128i *, __int64, _QWORD, __int64); // rcx
  unsigned __int64 v50; // rax
  __int64 result; // rax
  __int32 v52; // [rsp+0h] [rbp-68h]
  __int64 v53; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v54; // [rsp+18h] [rbp-50h]
  __m128i v55[4]; // [rsp+20h] [rbp-48h] BYREF

  v11 = *(unsigned int *)(a1 + 1320);
  v53 = a1;
  v54 = (__int64 *)(a1 + 48 * v11 + 1176);
  sub_9A4DA0((__int64)v54);
  v12 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 1320);
  (*(void (__fastcall **)(__int64, __int64 *, __int64, bool))(*(_QWORD *)a2 + 24LL))(
    a2,
    &v53,
    a4,
    *(_DWORD *)(v12 + 712) != 0);
  v13 = v54;
  v14 = *v54;
  if ( *v54 )
  {
    v15 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v15 )
    {
      v16 = 4 * v15;
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v14 + v17);
        v19 = *(unsigned int *)(a5 + 8);
        v20 = *(_DWORD **)a5;
        v21 = v19 - 1;
        v19 *= 8;
        v22 = (_DWORD *)(*(_QWORD *)a5 + v19);
        v23 = 8LL * (v18 & v21);
        v24 = (_DWORD *)(*(_QWORD *)a5 + v23);
        if ( v23 != v19 )
        {
          for ( i = (_DWORD *)(*(_QWORD *)a5 + v23); v22 != i; i += 2 )
          {
            v26 = i[1];
            if ( v26 + 0x80000000 > 1 )
            {
              if ( *i == v18 && v18 == v26 )
                goto LABEL_14;
            }
            else if ( v26 == 0x80000000 )
            {
              goto LABEL_11;
            }
          }
        }
        for ( ; v24 != v20; v20 += 2 )
        {
          v28 = v20[1];
          if ( v28 + 0x80000000 > 1 )
          {
            if ( *v20 == v18 && v18 == v28 )
              goto LABEL_14;
          }
          else if ( v28 == 0x80000000 )
          {
            break;
          }
        }
LABEL_11:
        v27 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a3 + 40LL);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
        {
          v27(a3, v18, v13[2] + 8 * v17);
        }
        else
        {
          v52 = v18;
          v27(a3, v18, (__int64)&qword_1C7F2A0);
          v55[0].m128i_i32[0] = v52;
          sub_9E1E20(a5, v55[0].m128i_i32);
        }
        v13 = v54;
LABEL_14:
        v17 += 4;
        if ( v17 == v16 )
          break;
        v14 = *v13;
      }
    }
  }
  v29 = v13[1];
  if ( !v29 )
    goto LABEL_51;
  v30 = *(_DWORD *)(v29 - 4);
  if ( !v30 )
    goto LABEL_51;
  v31 = 0;
  v32 = 16LL * v30;
LABEL_28:
  v33 = (const __m128i *)(v31 + v29);
  v34 = *(unsigned int *)(a6 + 8);
  v35 = *(_QWORD *)a6;
  v36 = v33->m128i_i64[0];
  v37 = v33->m128i_i64[1];
  v38 = *(_DWORD *)(*(_QWORD *)v33->m128i_i64[0] + 12LL);
  v39 = (*(_DWORD *)(*(_QWORD *)v37 + 12LL) - v38) ^ (v38 << 8);
  v40 = (v38 - v39) << 10;
  v41 = v39 - v38 + (v39 ^ ((v38 - v39) << 16));
  v42 = v34 - 1;
  v43 = v41 ^ v40;
  v34 *= 24;
  v44 = *(_QWORD *)a6 + v34;
  v45 = 24LL * (v43 & v42);
  v46 = *(_QWORD *)a6 + v45;
  if ( v45 != v34 )
  {
    v47 = *(_QWORD *)a6 + v45;
    while ( 1 )
    {
      v48 = *(_QWORD *)(v47 + 8);
      if ( v48 > 1 )
      {
        if ( *(_DWORD *)v47 != v43 || v36 != v48 )
          goto LABEL_32;
        if ( v37 == *(_QWORD *)(v47 + 16) )
          goto LABEL_37;
        v47 += 24;
        if ( v44 == v47 )
          break;
      }
      else
      {
        if ( !v48 )
          goto LABEL_35;
LABEL_32:
        v47 += 24;
        if ( v44 == v47 )
          break;
      }
    }
  }
  while ( v46 != v35 )
  {
    v50 = *(_QWORD *)(v35 + 8);
    if ( v50 > 1 )
    {
      if ( *(_DWORD *)v35 == v43 && v36 == v50 && v37 == *(_QWORD *)(v35 + 16) )
      {
        v31 += 16;
        if ( v31 == v32 )
          goto LABEL_51;
LABEL_38:
        v13 = v54;
        v29 = v54[1];
        goto LABEL_28;
      }
    }
    else if ( !v50 )
    {
      break;
    }
    v35 += 24;
  }
LABEL_35:
  v49 = *(void (__fastcall **)(__int64, const __m128i *, __int64, _QWORD, __int64))(*(_QWORD *)a3 + 48LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
  {
    v49(a3, v33, v13[3] + 2 * v31, v49, v46);
  }
  else
  {
    v49(a3, v33, (__int64)&qword_1C7F2A0, v49, v46);
    v55[0] = _mm_loadu_si128(v33);
    sub_A0D2E0(a6, v55);
  }
LABEL_37:
  v31 += 16;
  if ( v31 != v32 )
    goto LABEL_38;
LABEL_51:
  result = v53;
  --*(_DWORD *)(v53 + 1320);
  return result;
}

