unsigned __int64 __fastcall sub_7B28C0(unsigned __int8 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  void *v14; // rdi
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int8 v17; // r14
  unsigned __int16 *v18; // rax
  unsigned __int16 *i; // r15
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r14
  unsigned int v24; // edi
  int v25; // r13d
  __int64 v26; // rdx
  char *v27; // rax
  __int64 v28; // rdi
  char v29; // cl
  char *v30; // rsi
  const void *v31; // rax
  char *v33; // rdi
  unsigned __int16 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r13
  char v38; // r12
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  char *v43; // [rsp+0h] [rbp-4A8h]
  unsigned __int16 v44; // [rsp+8h] [rbp-4A0h]
  char v45; // [rsp+8h] [rbp-4A0h]
  char *s2; // [rsp+10h] [rbp-498h]
  int v47; // [rsp+18h] [rbp-490h]
  unsigned __int8 v48; // [rsp+1Fh] [rbp-489h]
  char *v49; // [rsp+20h] [rbp-488h] BYREF
  __int64 v50; // [rsp+28h] [rbp-480h] BYREF
  void *ptr; // [rsp+30h] [rbp-478h] BYREF
  __int128 v52; // [rsp+38h] [rbp-470h]
  int v53; // [rsp+4Bh] [rbp-45Dh] BYREF
  char v54; // [rsp+4Fh] [rbp-459h]
  _OWORD v55[32]; // [rsp+50h] [rbp-458h] BYREF
  int v56; // [rsp+250h] [rbp-258h]
  __int16 v57; // [rsp+254h] [rbp-254h]
  char v58; // [rsp+256h] [rbp-252h]
  char v59; // [rsp+260h] [rbp-248h] BYREF
  unsigned __int16 v60[259]; // [rsp+261h] [rbp-247h] BYREF
  unsigned __int64 v61; // [rsp+468h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v3 = *((_QWORD *)a1 + 1);
  if ( !v3 )
    return v61 - __readfsqword(0x28u);
  if ( *(_QWORD *)a1 == v3 )
  {
    if ( !under_debugger )
      interr(2812);
    BUG();
  }
  sub_7B0B60(a2, 0, nullptr, 0);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(v3 + 5928);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 5928LL);
  if ( v6 == v5 )
  {
LABEL_17:
    if ( !v5 )
      goto LABEL_22;
    goto LABEL_18;
  }
  ptr = nullptr;
  v52 = 0;
  if ( v5 < v6 )
  {
    v12 = v5;
    do
    {
      v13 = *(_QWORD *)(v4 + 5920) + 24 * v12;
      v14 = *(void **)v13;
      if ( *(_QWORD *)v13 )
      {
        *(_QWORD *)(v13 + 8) = 0;
        qfree(v14);
      }
      ++v12;
    }
    while ( v12 < v6 );
    *(_QWORD *)(v4 + 5928) = v5;
    v4 = *(_QWORD *)a1;
    goto LABEL_17;
  }
  v7 = *(_QWORD *)(v4 + 5920);
  v8 = *(_QWORD *)(v4 + 5936);
  v9 = v4 + 5920;
  if ( (unsigned __int64)&ptr >= v7 && (unsigned __int64)&ptr < v7 + 24 * v8 )
  {
    if ( v8 >= v5
      || (v42 = qvector_reserve(v9, v7, v5, 24),
          v6 = *(_QWORD *)(v4 + 5928),
          *(_QWORD *)(v4 + 5920) = v42,
          v7 = v42,
          v6 < v5) )
    {
      v10 = 24 * v6;
      while ( 1 )
      {
        v11 = v10 + v7;
        ++v6;
        v10 += 24;
        *(_QWORD *)v11 = 0;
        *(_OWORD *)(v11 + 8) = 0;
        if ( v5 == v6 )
          break;
        v7 = *(_QWORD *)(v4 + 5920);
      }
    }
    goto LABEL_11;
  }
  if ( v8 < v5 )
  {
    v41 = qvector_reserve(v9, v7, v5, 24);
    v6 = *(_QWORD *)(v4 + 5928);
    *(_QWORD *)(v4 + 5920) = v41;
    v7 = v41;
    if ( v6 >= v5 )
    {
LABEL_11:
      *(_QWORD *)(v4 + 5928) = v5;
      v4 = *(_QWORD *)a1;
      goto LABEL_18;
    }
  }
  v39 = 24 * v6;
  while ( 1 )
  {
    v40 = v39 + v7;
    ++v6;
    v39 += 24;
    *(_QWORD *)v40 = 0;
    *(_OWORD *)(v40 + 8) = 0;
    if ( v5 == v6 )
      break;
    v7 = *(_QWORD *)(v4 + 5920);
  }
  *(_QWORD *)(v4 + 5928) = v5;
  v4 = *(_QWORD *)a1;
LABEL_18:
  v15 = 0;
  do
  {
    v16 = *(_QWORD *)(v3 + 5920) + 24 * v15;
    if ( *(_QWORD *)(v16 + 8) > 1u )
    {
      sub_7B02D0((_QWORD *)v4, v15, v16);
      v4 = *(_QWORD *)a1;
    }
    ++v15;
  }
  while ( v15 != v5 );
LABEL_22:
  *(_DWORD *)(v4 + 6016) |= 1u;
  v17 = a1[1093];
  *(_QWORD *)&v55[0] = 0x656D616E4E232300LL;
  memset(&v55[1], 0, 0x1F0u);
  *(_WORD *)(a1 + 1091) = 1;
  *((_QWORD *)&v55[0] + 1) = 0;
  v48 = v17;
  v57 = 0;
  v56 = 0;
  v58 = 0;
  sub_7443D0(v3, (unsigned __int16 *)(a1 + 1091));
  v47 = v17;
  sub_741460(v3);
  for ( i = v18; v18; i = v18 )
  {
    v43 = (char *)v18 - 1;
    if ( v18 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return v61 - __readfsqword(0x28u);
    v20 = *i;
    v21 = (unsigned int)*((char *)i + 2);
    v22 = (__int64)(i + 1);
    v23 = (__int64)i + (unsigned __int16)v20 + 2;
    if ( (_DWORD)v21 != v47 )
    {
      if ( *((_BYTE *)i + 2) < v48 )
        sub_378C70((__int64)"database is corrupted - incorrect order", v22, (unsigned __int16)v20, v21, *i);
      return v61 - __readfsqword(0x28u);
    }
    if ( v20 != 6 || *((_BYTE *)i + 3) )
    {
      v44 = *i;
      v25 = v20 - 1;
      __memcpy_chk((char *)v55 + 3, v22, (unsigned __int16)v20, 516);
      s2 = (char *)v55 + 4;
      *(_WORD *)((char *)v55 + 1) = v44;
      if ( (*(_BYTE *)(v3 + 6016) & 2) != 0 )
      {
LABEL_28:
        v27 = (char *)*(unsigned int *)(v23 + 2);
        goto LABEL_29;
      }
    }
    else
    {
      v24 = *((_DWORD *)i + 1);
      v25 = 5;
      LOWORD(v20) = 10;
      v53 = *(_DWORD *)((char *)i + 3);
      v54 = *((_BYTE *)i + 7);
      v22 = 78;
      *(_QWORD *)((char *)v55 + 5) = swap64(_byteswap_ulong(v24));
      s2 = (char *)&v53;
      *(_DWORD *)((char *)v55 + 1) = 5111818;
      if ( (*(_BYTE *)(v3 + 6016) & 2) != 0 )
        goto LABEL_28;
    }
    v27 = *(char **)(v23 + 2);
LABEL_29:
    v28 = *(_QWORD *)a1;
    v49 = v27;
    if ( *(_BYTE *)(v28 + 6020) && (unsigned __int8)must_journal(v28, v22, v26) )
    {
      v52 = 0;
      ptr = nullptr;
      v45 = sub_73D2C0(v28, (unsigned __int16 *)((char *)v55 + 1), 8, &v49, (__int64)&ptr);
      add_undo_record(1, ptr, v52);
      v29 = v45;
      if ( ptr )
      {
        *(_QWORD *)&v52 = 0;
        qfree(ptr);
        v29 = v45;
      }
    }
    else
    {
      v29 = sub_73D2C0(v28, (unsigned __int16 *)((char *)v55 + 1), 8, &v49, 0);
    }
    if ( !v29 )
      goto LABEL_43;
    __memcpy_chk(&v59, v43, *i + 3LL, 519);
    v30 = v49;
    v31 = (const void *)sub_7B3000(a1, v49, &v50, 1, 1);
    if ( !v31 || v25 == v50 && (v30 = s2, !memcmp(v31, s2, v25)) )
    {
      v33 = v49;
      *(_WORD *)(a1 + 53) = 10;
      v34 = v20 - 1;
      v35 = swap64(v33);
      v37 = *(_QWORD *)a1;
      a1[64] = 78;
      *((_QWORD *)a1 + 7) = v35;
      if ( *(_BYTE *)(v37 + 6020) && (unsigned __int8)must_journal(v33, v30, v36) )
      {
        v52 = 0;
        ptr = nullptr;
        v38 = sub_73D2C0(v37, (unsigned __int16 *)(a1 + 53), v34, (_OWORD *)((char *)v55 + 4), (__int64)&ptr);
        add_undo_record(1, ptr, v52);
        if ( ptr )
        {
          *(_QWORD *)&v52 = 0;
          qfree(ptr);
        }
      }
      else
      {
        v38 = sub_73D2C0(v37, (unsigned __int16 *)(a1 + 53), v34, (_OWORD *)((char *)v55 + 4), 0);
      }
      if ( !v38 )
LABEL_43:
        sub_743130();
    }
    sub_7443D0(v3, v60);
    sub_741460(v3);
  }
  return v61 - __readfsqword(0x28u);
}
