__int64 __fastcall sub_1BDCB60(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  _QWORD *v7; // r10
  char v8; // r14
  _QWORD *v9; // r13
  unsigned __int64 v10; // rbx
  char v11; // r15
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rax
  __m128i v28; // xmm1
  signed __int64 v29; // r15
  __int64 v30; // rax
  const void *v31; // r14
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdi
  char v35; // al
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  char v39; // al
  _QWORD *v40; // [rsp+0h] [rbp-128h]
  unsigned int v41; // [rsp+0h] [rbp-128h]
  __int64 v42; // [rsp+18h] [rbp-110h]
  unsigned __int64 v43; // [rsp+18h] [rbp-110h]
  __int64 v46; // [rsp+30h] [rbp-F8h]
  __int64 v48; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD *v49; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-D8h]
  _OWORD v51[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-80h]
  __int64 v53; // [rsp+B0h] [rbp-78h]
  __m128i v54; // [rsp+B8h] [rbp-70h]
  __int64 v55; // [rsp+C8h] [rbp-60h]
  __int64 v56; // [rsp+D0h] [rbp-58h]
  __int64 v57; // [rsp+D8h] [rbp-50h]
  __int16 v58; // [rsp+E0h] [rbp-48h]
  char v59; // [rsp+E2h] [rbp-46h]
  __int16 v60; // [rsp+E3h] [rbp-45h]
  char v61; // [rsp+E5h] [rbp-43h]
  char v62; // [rsp+E6h] [rbp-42h]
  char v63; // [rsp+E7h] [rbp-41h]

  v7 = *(_QWORD **)(a4 + 8);
  v46 = a2;
  v40 = &v7[*(unsigned int *)(a4 + 16)];
  if ( v7 != v40 )
  {
    v8 = a6;
    v9 = *(_QWORD **)(a4 + 8);
    while ( 1 )
    {
      v10 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 53 <= 1 )
      {
        if ( v8 )
          goto LABEL_20;
        v19 = *(_QWORD *)(v10 + 64);
        v11 = 1;
      }
      else
      {
        v11 = 0;
        v12 = 0;
        if ( !v8 )
          goto LABEL_5;
        v19 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( (*(_BYTE *)(v10 + 8) & 6) != 0 )
      {
        a2 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
        v43 = v19;
        v35 = sub_1A427C0(a1, a2, 0, v19, (__int64)a5, a6);
        v19 = v43;
        if ( !v35 )
          goto LABEL_20;
      }
      if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) + 70) & 0x7Fu) <= 3 )
      {
        v10 = v19;
        v12 = (*(_WORD *)(a3 + 30) & 0x180) == 0;
LABEL_5:
        v13 = sub_B8BF30(v10);
        if ( !v13 )
          goto LABEL_17;
        goto LABEL_6;
      }
      v10 = v19;
      v12 = 0;
      v13 = sub_B8BF30(v19);
      if ( !v13 )
      {
LABEL_17:
        v20 = *(_BYTE *)(v10 + 28) & 0x7F;
        v21 = ((_BYTE)v20 + 73) & 0x7F;
        if ( (unsigned __int8)v21 <= 0x1Au )
        {
          v34 = 67109113;
          if ( !_bittest64(&v34, v21) )
            goto LABEL_36;
        }
        else
        {
          if ( (_BYTE)v20 != 28 )
            goto LABEL_36;
          if ( sub_E917A0(*(_QWORD *)(v10 + 64), a2, v20, v14, (__int64)a5, a6) )
          {
            v38 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
              v38 = *(_QWORD *)v38;
            v39 = *(_BYTE *)(v38 + 8) & 0x7F;
            if ( v39 == 62 )
              v39 = *(_BYTE *)(sub_B8EAA0(v38) + 8) & 0x7F;
            if ( ((v39 + 70) & 0x7Fu) > 3 )
            {
LABEL_36:
              *a5 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
              return 2;
            }
          }
        }
        goto LABEL_20;
      }
LABEL_6:
      v42 = v13;
      if ( (unsigned __int8)sub_1BDBDD0((_QWORD *)a1, a3, v13, v12, 1, 0) )
      {
        a2 = v42;
        if ( !(unsigned __int8)sub_A63A50(*(_QWORD **)(a1 + 248), v42) )
        {
          *a5 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
          return 2;
        }
LABEL_20:
        if ( v40 == ++v9 )
          break;
      }
      else
      {
        a2 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v12 || !v11 )
        {
          if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x47 || (*(_BYTE *)(a2 + 8) & 6) == 0 )
            goto LABEL_11;
          if ( sub_1A427C0(a1, a2, 0, v15, v16, v17) )
            goto LABEL_48;
          v36 = sub_B81B70(a3);
          if ( !v36 )
LABEL_61:
            BUG();
          if ( v36 > 3u )
          {
            if ( v36 > 6u )
              goto LABEL_61;
            if ( !sub_B72C70(a3) )
            {
LABEL_48:
              a2 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_11:
              *a5 = a2;
              return 1;
            }
          }
          goto LABEL_20;
        }
        v37 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
        a2 = v46;
        ++v9;
        sub_183D570(a1, v46, v37, v15, v16, v17);
        if ( v40 == v9 )
          break;
      }
    }
  }
  if ( (*(_WORD *)(a3 + 30) & 0x180) == 0 )
    return 0;
  v22 = *(_QWORD *)(a3 + 56);
  if ( (v22 & 4) == 0 )
    return 0;
  if ( !*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL) )
    return 0;
  if ( sub_B77A30(a3) )
    return 0;
  v23 = sub_B77C50(a3);
  if ( v23 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  v48 = 0;
  v25 = *(_QWORD *)(a4 + 152);
  v26 = *(unsigned int *)(a4 + 16);
  v50 = 0x800000000LL;
  v27 = *(_QWORD *)(a4 + 112);
  v28 = _mm_loadu_si128((const __m128i *)(a4 + 120));
  v49 = v51;
  v57 = v25;
  v29 = 8 * v26;
  LOWORD(v25) = *(_WORD *)(a4 + 160);
  v53 = v27;
  v30 = *(_QWORD *)(a4 + 136);
  v51[4] = 0;
  v31 = *(const void **)(a4 + 8);
  v55 = v30;
  LOBYTE(v30) = *(_BYTE *)(a4 + 162);
  v52 = 0;
  v59 = v30;
  v61 = *(_BYTE *)(a4 + 165);
  LOBYTE(v30) = *(_BYTE *)(a4 + 167);
  v54 = v28;
  v56 = 0;
  v58 = v25;
  v60 = 0;
  v62 = 0;
  v63 = v30;
  if ( (unsigned __int64)v29 > 0x40 )
  {
    sub_2237220(&v49, v51, v29 >> 3, 8);
    goto LABEL_60;
  }
  if ( v29 )
LABEL_60:
    memcpy(&v49[(unsigned int)v50], v31, v29);
  LODWORD(v50) = (v29 >> 3) + v50;
  LODWORD(v48) = 2;
  if ( (unsigned __int8)sub_1CC2B70(a1, a3, 0, &v48, 1, v24, v28.m128i_i64[0], v28.m128i_i64[1]) )
  {
    sub_B88650(a3, 1);
    v33 = 0;
  }
  else
  {
    if ( (_DWORD)v48 == 2 )
    {
      v32 = sub_16C47B0(*v49 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 34 <= 5 )
        v23 = v32;
    }
    *a5 = v23;
    v33 = 1;
  }
  v41 = v33;
  sub_169D230((__int64)&v48);
  return v41;
}
