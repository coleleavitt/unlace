__int64 __fastcall sub_1887B70(_QWORD *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  __int64 result; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rbp

  v8 = *(_QWORD *)(sub_B8C1B0(a1[1] + 72LL) + 16);
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
    v9 -= 64LL;
  v10 = *(_QWORD *)(v9 + 104);
  v11 = (__int64 *)(v10 + 96);
  if ( a2 == 2 )
  {
    sub_7052B0(v11, v10, v4, v5, v6, v7);
    v10 = *(_QWORD *)(v9 + 104);
    a2 = 0;
    v11 = (__int64 *)(v10 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 128) + 1LL) & 8) == 0 )
      a2 = 3;
  }
  sub_7052B0(v11, v10, v4, v5, v6, v7);
  v16 = *(_QWORD *)(v9 + 128);
  if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
    v17 = sub_B96980(v16);
  else
    v17 = *(_QWORD *)(v16 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v12, v13, v14, v15);
  v18 = *(_QWORD *)(v9 + 104);
  v19 = v17 + 24LL * *(unsigned int *)(*(_QWORD *)(v9 + 128) + 16LL);
  sub_7052B0((__int64 *)(v18 + 96), v18, v20, v21, v22, v23);
  v28 = *(_QWORD *)(v9 + 128);
  if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
    v29 = sub_B96980(v28);
  else
    v29 = *(_QWORD *)(v28 + 24);
  if ( v29 == v19 )
  {
LABEL_15:
    if ( a2 == 3 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v24, v25, v26, v27);
      v37 = *(_QWORD *)(v9 + 128);
      if ( (*(_BYTE *)(v37 + 32) & 1) != 0 )
        v38 = sub_B969C0(v37);
      else
        v38 = *(_QWORD *)(v37 + 32);
      sub_7052B0((__int64 *)(*(_QWORD *)(v9 + 104) + 96LL), *(_QWORD *)(v9 + 104), v33, v34, v35, v36);
      v18 = *(_QWORD *)(v9 + 104);
      v39 = v38 + 24LL * *(unsigned int *)(*(_QWORD *)(v9 + 128) + 20LL);
      sub_7052B0((__int64 *)(v18 + 96), v18, v40, v41, v42, v43);
      v44 = *(_QWORD *)(v9 + 128);
      if ( (*(_BYTE *)(v44 + 32) & 1) != 0 )
        v45 = sub_B969C0(v44);
      else
        v45 = *(_QWORD *)(v44 + 32);
      while ( v39 != v45 )
      {
        v18 = v45;
        result = sub_18878F0(a1, v45, v24, v25, v26);
        if ( (_BYTE)result )
          return result;
        v45 += 24;
      }
    }
LABEL_16:
    v30 = sub_B7E900(v9, v18, v24, v25, v26, v27);
    if ( v30 )
    {
LABEL_17:
      if ( *(char *)(v30 + 28) >= 0 && ((*(_BYTE *)(v30 + 68) & 1) == 0 || *(_QWORD *)(v30 + 40)) )
      {
        result = sub_187B030((__int64)a1, v30);
        if ( (_BYTE)result )
          return result;
      }
      while ( 1 )
      {
        v32 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v30 = v32;
        if ( !v32 )
          break;
        if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_17;
      }
    }
    return 0;
  }
  if ( a2 == 1 )
  {
    while ( 1 )
    {
      v18 = v29;
      if ( (unsigned __int8)sub_18878F0(a1, v29, v24, v25, v26) )
        break;
      v29 += 24;
      if ( v19 == v29 )
        goto LABEL_16;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v29 + 12) & 1) == 0 )
      {
        v18 = v29;
        if ( (unsigned __int8)sub_18878F0(a1, v29, v24, v25, v26) )
          break;
      }
      v29 += 24;
      if ( v19 == v29 )
        goto LABEL_15;
    }
  }
  return 1;
}
