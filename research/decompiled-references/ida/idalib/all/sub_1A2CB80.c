__int64 __fastcall sub_1A2CB80(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // edi
  __int64 v29; // rax
  int i; // eax
  __int64 v31; // r8
  __int64 v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  int v35; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v36; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = (__int64)a3;
  LODWORD(v9) = a2 - 1;
  if ( (_DWORD)a2 != 1 )
  {
    v10 = a1[(unsigned int)v9];
    if ( (*(_BYTE *)(v10 + 8) & 7) != 3 )
      goto LABEL_7;
    a3 = &a1[(unsigned int)(a2 - 2)];
    while ( 1 )
    {
      LODWORD(v9) = v9 - 1;
      if ( !(_DWORD)v9 )
        break;
      v10 = *a3--;
      if ( (*(_BYTE *)(v10 + 8) & 7) != 3 )
        goto LABEL_7;
    }
  }
  v10 = *a1;
LABEL_7:
  v11 = *(_QWORD *)(v10 + 1592);
  if ( v11 )
    v11 += 72LL;
  if ( v8 )
    goto LABEL_10;
LABEL_29:
  a2 = *(unsigned int *)(v10 + 1280);
  if ( !(_DWORD)a2 && !*(_DWORD *)(v10 + 1312) )
    return 0;
LABEL_31:
  if ( !v11 || (*(_BYTE *)(v11 + 8) & 0x7Fu) - 35 > 3 )
    goto LABEL_16;
LABEL_33:
  v22 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
  if ( (v22 & 4) != 0 )
    v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v23 )
  {
    if ( v23 != 64 )
    {
      v24 = *(_QWORD *)(v23 + 64);
      if ( v24 )
      {
        if ( (*(_BYTE *)(v24 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(v11 - 72) == 42 )
        {
          v25 = sub_B72690(v11);
          v18 = *(_QWORD *)(sub_B8C1B0(v25) + 16);
          if ( (v18 & 4) == 0 )
            goto LABEL_17;
LABEL_41:
          v11 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
          goto LABEL_18;
        }
      }
    }
  }
  while ( 1 )
  {
LABEL_16:
    v18 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
    if ( (v18 & 4) != 0 )
      goto LABEL_41;
LABEL_17:
    v11 = v18 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_18:
    if ( (*(_BYTE *)(v11 + 8) & 0x7F) == 0
      || !(unsigned __int8)sub_B8E180(v11)
      || (*(_BYTE *)(v11 + 8) & 0x7Fu) - 35 > 3 )
    {
      break;
    }
    v19 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
    v20 = (v19 & 4) != 0 ? *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL) : v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v20 )
      break;
    if ( v20 == 64 )
      break;
    v21 = *(_QWORD *)(v20 + 64);
    if ( !v21 || (*(_BYTE *)(v21 + 10) & 0x20) == 0 || (unsigned int)sub_B77890(v11 - 72) != 42 )
      break;
    v9 = (unsigned int)(v9 - 1);
    v10 = a1[v9];
    if ( !v8 )
      goto LABEL_29;
LABEL_10:
    v12 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v12 = (_QWORD *)*v12;
    if ( v11 )
    {
      v34 = v10;
      v33 = sub_B91570((__int64)v12, a2, (__int64)a3, v10, a5, a6);
      v17 = sub_B91570(v11, a2, v13, v14, v15, v16);
      v10 = v34;
      if ( v33 == v17 )
        return 0;
      if ( !*(_DWORD *)(v34 + 1280) )
      {
LABEL_43:
        v26 = *(_DWORD *)(v10 + 1304);
        a2 = *(_QWORD *)(v10 + 1288);
        if ( !v26 )
          return 0;
        v27 = v26 - 1;
        v28 = (v26 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v29 = *(_QWORD *)(a2 + 16LL * v28);
        if ( v8 != v29 )
        {
          if ( v29 == -4096 )
            return 0;
          for ( i = 1; ; ++i )
          {
            v28 = v27 & (i + v28);
            v31 = *(_QWORD *)(a2 + 16LL * v28);
            if ( v8 == v31 )
              break;
            if ( v31 == -4096 )
              return 0;
          }
        }
        goto LABEL_31;
      }
      if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 35 <= 3 )
        goto LABEL_33;
    }
    else if ( !*(_DWORD *)(v10 + 1280) )
    {
      goto LABEL_43;
    }
  }
  if ( (unsigned __int8)sub_B8E180(v11) || (_DWORD)v9 == -1 )
    return 0;
  v35 = v9;
  if ( !v8 )
  {
    if ( !(unsigned __int8)sub_19B4460(
                             a4,
                             (const __m128i *)*(unsigned int *)(a1[(unsigned int)v9] + 1904),
                             0,
                             0,
                             &v35,
                             0) )
      return (unsigned int)(v35 + 1);
    return 0;
  }
  v36 = 0;
  v37[0] = 0;
  if ( (unsigned __int8)sub_1903850(a4, v8, 0, 0, 0, 0, &v36, v37, (unsigned int *)&v35) )
    return 0;
  return (unsigned int)(v35 + 1);
}
