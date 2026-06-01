__int64 __fastcall sub_BC6980(__int64 **a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rdi
  __m128i v12; // xmm0
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r13
  __int64 v19; // r14
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // r14
  __int64 j; // r13
  __int64 *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 (__fastcall *v41)(__int64); // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 *v44; // r13
  __int64 *i; // r14
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // r13
  __int64 v50; // r14
  __m128i v51; // [rsp+0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+10h] [rbp-58h]
  __m128i v53; // [rsp+20h] [rbp-48h] BYREF
  __int64 v54; // [rsp+30h] [rbp-38h]

  v4 = a2[7];
  if ( (v4 & 4) != 0 )
  {
    if ( !*(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
    {
LABEL_18:
      v23 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      v6 = *v23;
      v5 = v23[1];
      goto LABEL_3;
    }
    v21 = 0;
    while ( 1 )
    {
      v22 = v21++;
      sub_BA55A0(a1, *(_QWORD *)(*(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8 * v22));
      v4 = a2[7];
      if ( (v4 & 4) == 0 )
        break;
      if ( *(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) <= v21 )
        goto LABEL_18;
    }
  }
  v5 = 0;
  v6 = 0;
LABEL_3:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 88))(*a1, v6, v5) )
    return 0;
  v9 = *((unsigned int *)a2 + 6);
  v10 = a2[20];
  v11 = *a1;
  v53.m128i_i64[0] = a2[5];
  v53.m128i_i32[2] = v9;
  v12 = _mm_load_si128(&v53);
  v54 = v10;
  v52 = v10;
  v13 = *v11;
  v51 = v12;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v13 + 64))(
          v11,
          v6,
          v9,
          v53.m128i_i64[0],
          v7,
          v8,
          v12.m128i_i64[0],
          v12.m128i_i64[1],
          v52);
  if ( !(_BYTE)v14 )
    return 0;
  v15 = sub_B53DE0((__int64)a2);
  if ( v15 )
  {
    if ( (*(_BYTE *)(v15 + 16) & 6) != 0 )
    {
      v16 = *(_QWORD *)(v15 + 32);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( v17 )
        {
          v18 = v16 + 16;
          v19 = v16 + 32LL * (unsigned int)(v17 - 1) + 48;
          do
          {
            v6 = v18;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(**a1 + 112))(*a1, v18) )
              return 0;
            v18 += 32;
          }
          while ( v19 != v18 );
        }
      }
    }
  }
  else
  {
    v46 = sub_B53F10((__int64)a2);
    if ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 8);
      if ( v47 )
      {
        v48 = *(_DWORD *)(v47 + 8);
        if ( v48 )
        {
          v49 = v47 + 16;
          v50 = v47 + 32LL * (unsigned int)(v48 - 1) + 48;
          do
          {
            v6 = v49;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(**a1 + 112))(*a1, v49) )
              return 0;
            v49 += 32;
          }
          while ( v50 != v49 );
        }
      }
    }
  }
  v24 = a2[7];
  v25 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
  v26 = (v24 >> 2) & 1;
  if ( ((v24 >> 2) & 1) != 0 )
    v25 = (__int64 *)v25[4];
  v27 = *a1;
  if ( v25 )
  {
    v6 = *v25;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64 *))(*v27 + 136))(v27, *v25, v25 + 1) )
      return 0;
  }
  else
  {
    if ( !*((_BYTE *)v27 + 10) )
      goto LABEL_24;
    v44 = (__int64 *)a2[15];
    for ( i = &v44[(unsigned int)sub_B52330((__int64)a2, v6, 0, v24)]; i != v44; ++v44 )
    {
      v6 = *v44;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(**a1 + 56))(*a1, *v44) )
        return 0;
    }
  }
  v24 = a2[7];
  v26 = (v24 >> 2) & 1;
LABEL_24:
  if ( v26 )
  {
    v24 &= 0xFFFFFFFFFFFFFFF8LL;
    v6 = *(_QWORD *)(v24 + 40);
    if ( v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(**a1 + 96))(*a1) )
        return 0;
    }
  }
  if ( (*((_BYTE *)a2 + 28) & 0x7F) == 0x26 )
  {
    v28 = sub_B751E0((__int64)a2) + 8LL * (unsigned __int16)(*((_DWORD *)a2 + 21) >> 13);
    for ( j = sub_B751E0((__int64)a2); v28 != j; j += 8 )
    {
      v6 = *(_QWORD *)j;
      v30 = *a1;
      if ( ((*(_BYTE *)(*(_QWORD *)j + 28LL) & 4) != 0 || *((_BYTE *)v30 + 10))
        && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v30 + 40))(v30) )
      {
        return 0;
      }
    }
  }
  v34 = sub_B4E980((__int64)a2, v6, (__int64)v25, v24);
  if ( v34 && ((*((_BYTE *)a2 + 83) & 2) == 0 || *((_BYTE *)*a1 + 10)) )
  {
    if ( (*((_BYTE *)a2 + 28) & 0x7Fu) - 35 > 3 )
      goto LABEL_44;
  }
  else
  {
    v34 = 0;
    if ( (*((_BYTE *)a2 + 28) & 0x7Fu) - 35 > 3 )
      return v14;
  }
  v35 = *(_QWORD *)(sub_B68470((__int64)(a2 + 9)) + 16);
  if ( (v35 & 4) != 0 )
    v36 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v36
    || (v37 = v36 - 64, v36 == 64)
    || (v38 = *(_QWORD *)(v36 + 64)) == 0
    || (*(_BYTE *)(v38 + 10) & 0x20) == 0
    || (v39 = sub_B73220(v37)) == 0
    || a2 != (_QWORD *)v39
    && (v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39),
        v40 != (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2)) )
  {
    if ( !v34 )
      return v14;
LABEL_44:
    v41 = *(__int64 (__fastcall **)(__int64))(*a2 + 64LL);
    if ( v41 == sub_6CEBD0 )
      v42 = sub_B5BA10(a2, &v51, (__int64)sub_6CEBD0, v31, v32, v33);
    else
      v42 = v41((__int64)a2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(**a1 + 96))(*a1, v42) )
    {
      v43 = sub_B6AC30((__int64)(a2 + 9));
      if ( !v43 )
        return v14;
      while ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 53 > 1
           || (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(**a1 + 56))(*a1, v43) )
      {
        v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v43 )
          return v14;
      }
    }
    return 0;
  }
  if ( v34 && *((_BYTE *)*a1 + 11) )
    goto LABEL_44;
  return v14;
}

