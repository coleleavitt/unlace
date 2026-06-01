__int64 __fastcall sub_7F0CC0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  char v8; // al
  unsigned int v9; // r12d
  unsigned __int32 v11; // r12d
  const __m128i *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 **j; // r14
  __int64 *v28; // r15
  __int64 v29; // rax
  __int64 *v30; // rax
  char v31; // al
  char v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(__int64); // rax
  __int64 v39; // rsi
  __int64 v40; // r13
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  __int64 *v43; // r15
  __int64 *i; // r13
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r13
  __m128i v55; // [rsp+0h] [rbp-68h]
  __int64 v56[8]; // [rsp+28h] [rbp-40h] BYREF

  v7 = a2[7];
  if ( (v7 & 4) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = (const __m128i *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v11 >= v12[1].m128i_i32[0] )
        break;
      v13 = v11++;
      sub_7ECC20(a1, *(_QWORD *)(v12[1].m128i_i64[1] + 8 * v13));
      v7 = a2[7];
      if ( (v7 & 4) == 0 )
        goto LABEL_2;
    }
    v55 = _mm_loadu_si128(v12);
    v8 = sub_7EF1F0((__int64)a1, v55.m128i_i64[0], v55.m128i_i64[1], a4, a5, a6);
  }
  else
  {
LABEL_2:
    v8 = sub_7EF1F0((__int64)a1, 0, 0, a4, a5, a6);
  }
  if ( !v8 )
    return 0;
  v9 = sub_7F0C20(a1, a2[5], (__int64 *)a2[20]);
  if ( !(_BYTE)v9 )
    return 0;
  v14 = sub_780F50((__int64)a2);
  if ( v14 )
  {
    if ( (*(_BYTE *)(v14 + 16) & 6) != 0 )
    {
      v19 = *(_QWORD *)(v14 + 32);
      if ( v19 )
      {
        v20 = *(unsigned int *)(v19 + 8);
        if ( (_DWORD)v20 )
        {
          v21 = v19 + 16;
          v22 = 32 * v20 + v21;
          while ( (unsigned __int8)sub_7EF520(a1, v21, v15, v16, v17, v18) )
          {
            v21 += 32;
            if ( v22 == v21 )
              goto LABEL_19;
          }
          return 0;
        }
      }
    }
  }
  else
  {
    v46 = sub_781080((__int64)a2);
    if ( v46 )
    {
      v51 = *(_QWORD *)(v46 + 8);
      if ( v51 )
      {
        v52 = *(unsigned int *)(v51 + 8);
        if ( (_DWORD)v52 )
        {
          v53 = v51 + 16;
          v54 = 32 * v52 + v53;
          while ( (unsigned __int8)sub_7EF520(a1, v53, v47, v48, v49, v50) )
          {
            v53 += 32;
            if ( v54 == v53 )
              goto LABEL_19;
          }
          return 0;
        }
      }
    }
  }
LABEL_19:
  v23 = (__int64 *)(a2[7] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[7] & 4) != 0 )
    v23 = (__int64 *)v23[4];
  if ( v23 )
  {
    if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v23, (__int64)(v23 + 1)) )
      return 0;
  }
  else
  {
    v43 = (__int64 *)a2[15];
    for ( i = &v43[(unsigned int)sub_77F620((__int64)a2)]; i != v43; ++v43 )
    {
      v45 = *a1;
      v56[0] = *v43;
      if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v56[0], v56[0], v56, a1, v45) )
        return 0;
    }
  }
  v24 = a2[7];
  if ( (v24 & 4) != 0 )
  {
    v25 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    if ( v25 )
    {
      if ( !(unsigned __int8)sub_7EBA80(a1, v25) )
        return 0;
    }
  }
  if ( (*((_BYTE *)a2 + 28) & 0x7F) == 0x24 )
  {
    v26 = sub_7A62D0((__int64)a2) + 8LL * (unsigned __int16)(*((_DWORD *)a2 + 21) >> 13);
    for ( j = (__int64 **)sub_7A62D0((__int64)a2); (__int64 **)v26 != j; ++j )
    {
      v28 = *j;
      v29 = **j;
      if ( v29 )
      {
        if ( (v29 & 6) == 0 )
        {
          v30 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v30 )
          {
            if ( !(unsigned __int8)sub_7EEDC0((__int64)a1, *v30, (__int64)(v30 + 1)) )
              return 0;
          }
        }
      }
      if ( !(unsigned __int8)sub_7EBA80(a1, v28[1]) )
        return 0;
    }
  }
  v31 = *((_BYTE *)a2 + 83);
  if ( (*((_BYTE *)a2 + 82) & 0x40) != 0
    || (*((_BYTE *)a2 + 83) & 2) != 0
    || (v31 & 8) == 0 && ((a2[16] & 1) != 0 || a2[16])
    || (v31 & 0x40) != 0
    || (*((_BYTE *)a2 + 84) & 0x60) != 0 )
  {
    v33 = (*((_BYTE *)a2 + 28) & 0x7F) - 33;
  }
  else
  {
    v32 = sub_799100((__int64)a2);
    v33 = (*((_BYTE *)a2 + 28) & 0x7F) - 33;
    if ( !v32 )
    {
      if ( v33 > 3 )
        return v9;
      goto LABEL_48;
    }
  }
  v32 = v9;
  if ( v33 > 3 )
    goto LABEL_57;
LABEL_48:
  v34 = *(_QWORD *)(sub_79A2E0((__int64)(a2 + 9)) + 16);
  v35 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v34 & 4) != 0 )
    v35 = (_QWORD *)*v35;
  if ( v35 )
  {
    v36 = v35[8];
    if ( v36 )
    {
      if ( (*(_BYTE *)(v36 + 10) & 0x20) != 0 )
      {
        v37 = sub_7A3750((__int64)(v35 - 8));
        if ( v37 )
        {
          if ( (_QWORD *)v37 != a2 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
            (*(void (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
          }
        }
      }
    }
  }
  if ( v32 )
  {
LABEL_57:
    v38 = *(__int64 (__fastcall **)(__int64))(*a2 + 64LL);
    if ( v38 == sub_5F7E00 )
      v39 = sub_78BC30(a2, (unsigned __int64 *)v56);
    else
      v39 = v38((__int64)a2);
    if ( (unsigned __int8)sub_7EBA80(a1, v39) )
    {
      v40 = sub_79C190((__int64)(a2 + 9));
      if ( !v40 )
        return v9;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 51 <= 1 )
        {
          v42 = *a1;
          v56[0] = v40;
          if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v40, v40, v56, a1, v42) )
            break;
        }
        v41 = *(_QWORD *)(v40 + 8);
        v40 = v41 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v41 <= 7 )
          return v9;
      }
    }
    return 0;
  }
  return v9;
}

