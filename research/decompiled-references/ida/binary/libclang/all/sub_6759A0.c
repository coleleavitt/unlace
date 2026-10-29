__int64 __fastcall sub_6759A0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  char v8; // al
  unsigned int v9; // r15d
  unsigned __int32 v11; // r14d
  const __m128i *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r12
  __int64 i; // r14
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 *v32; // rax
  char v33; // al
  char v34; // dl
  char v35; // r12
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 (__fastcall *v39)(__int64); // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // r14
  __int64 v48; // rax
  char v49[64]; // [rsp+28h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 4) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = (const __m128i *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v11 >= v12[1].m128i_i32[0] )
        break;
      v13 = v11++;
      sub_673240(a1, *(_QWORD *)(v12[1].m128i_i64[1] + 8 * v13), a3, a4, a5, a6);
      v7 = *(_QWORD *)(a2 + 56);
      if ( (v7 & 4) == 0 )
        goto LABEL_2;
    }
    a4 = _mm_loadu_si128(v12);
    v8 = sub_674510(a1, a4.m128i_i64[0], a4.m128i_i64[1], a3, a4, a5, a6);
  }
  else
  {
LABEL_2:
    a3 = 0.0;
    v8 = sub_674510(a1, 0, 0, 0.0, a4, a5, a6);
  }
  if ( !v8 )
    return 0;
  v14 = *(_QWORD *)(a2 + 40);
  v9 = sub_675910(a1, v14, *(__int64 **)(a2 + 160), a3, a4, a5, a6);
  if ( !(_BYTE)v9 )
    return 0;
  v19 = sub_780F50(a2, v14, v15, v16, v17, v18);
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 16) & 6) != 0 )
    {
      v20 = *(_QWORD *)(v19 + 32);
      if ( v20 )
      {
        v21 = *(unsigned int *)(v20 + 8);
        if ( (_DWORD)v21 )
        {
          v22 = v20 + 16;
          v23 = v20 + 16 + 32 * v21;
          while ( (unsigned __int8)sub_674590(a1, v22, a3, a4, a5, a6) )
          {
            v22 += 32;
            if ( v23 == v22 )
              goto LABEL_19;
          }
          return 0;
        }
      }
    }
  }
  else
  {
    v43 = sub_781080(a2);
    if ( v43 )
    {
      v44 = *(_QWORD *)(v43 + 8);
      if ( v44 )
      {
        v45 = *(unsigned int *)(v44 + 8);
        if ( (_DWORD)v45 )
        {
          v46 = v44 + 16;
          v47 = v44 + 16 + 32 * v45;
          while ( (unsigned __int8)sub_674590(a1, v46, a3, a4, a5, a6) )
          {
            v46 += 32;
            if ( v47 == v46 )
              goto LABEL_19;
          }
          return 0;
        }
      }
    }
  }
LABEL_19:
  v24 = *(_QWORD *)(a2 + 56);
  v25 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v24 & 4) != 0 )
  {
    if ( !v25[4] )
      goto LABEL_25;
    v25 = (__int64 *)v25[4];
  }
  else if ( v24 <= 7 )
  {
    goto LABEL_27;
  }
  if ( !(unsigned __int8)sub_673BB0(a1, *v25, (unsigned __int64)(v25 + 1), a3, a4, a5, a6) )
    return 0;
  v26 = *(_QWORD *)(a2 + 56);
  if ( (v26 & 4) == 0 )
    goto LABEL_27;
  v25 = (__int64 *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_25:
  v27 = v25[5];
  if ( v27 && !(unsigned __int8)sub_672CC0(a1, v27, a3, a4, a5, a6) )
    return 0;
LABEL_27:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x24 )
  {
    v28 = sub_7A62D0(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
    for ( i = sub_7A62D0(a2); v28 != i; i += 8 )
    {
      v30 = *(__int64 **)i;
      if ( (*(_BYTE *)(*(_QWORD *)i + 28LL) & 4) != 0 )
      {
        v31 = *v30;
        if ( !*v30 )
          goto LABEL_83;
        if ( (v31 & 6) != 0 )
          goto LABEL_83;
        v32 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v32 )
          goto LABEL_83;
        if ( !(unsigned __int8)sub_673BB0(a1, *v32, (unsigned __int64)(v32 + 1), a3, a4, a5, a6) )
          return 0;
        if ( (*((_BYTE *)v30 + 28) & 4) != 0 )
        {
LABEL_83:
          if ( !(unsigned __int8)sub_672CC0(a1, v30[1], a3, a4, a5, a6) )
            return 0;
        }
      }
    }
  }
  v33 = *(_BYTE *)(a2 + 83);
  v34 = v33 & 2;
  if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 )
  {
    if ( v34 )
      goto LABEL_39;
  }
  else if ( v34
         || ((v33 & 8) != 0 || (*(_BYTE *)(a2 + 128) & 1) == 0 && !*(_QWORD *)(a2 + 128))
         && (v33 & 0x40) == 0
         && (*(_BYTE *)(a2 + 84) & 0x60) == 0
         && (!(unsigned __int8)sub_799100(a2) || (*(_BYTE *)(a2 + 83) & 2) != 0) )
  {
LABEL_39:
    v35 = 0;
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 33 > 3 )
      return v9;
    goto LABEL_40;
  }
  v35 = v9;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 33 > 3 )
    goto LABEL_46;
LABEL_40:
  v36 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
  v37 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v36 & 4) != 0 )
    v37 = (_QWORD *)*v37;
  if ( v37 )
  {
    v38 = v37[8];
    if ( v38 )
    {
      if ( (*(_BYTE *)(v38 + 10) & 0x20) != 0 )
      {
        v48 = sub_7A3750(v37 - 8);
        if ( v48 )
        {
          if ( v48 != a2 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
          }
        }
      }
    }
  }
  if ( v35 )
  {
LABEL_46:
    v39 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v39 == sub_5F7E00 )
      v40 = sub_78BC30(a2, v49);
    else
      v40 = v39(a2);
    if ( (unsigned __int8)sub_672CC0(a1, v40, a3, a4, a5, a6) )
    {
      v41 = sub_79C190(a2 + 72);
      if ( !v41 )
        return v9;
      while ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 51 > 1 || (unsigned __int8)sub_66D270(a1, v41, a3, a4, a5, a6) )
      {
        v42 = *(_QWORD *)(v41 + 8);
        v41 = v42 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v42 <= 7 )
          return v9;
      }
    }
    return 0;
  }
  return v9;
}

