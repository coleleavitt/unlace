__int64 __fastcall sub_15092F0(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  char v5; // bp
  __int16 v7; // r13
  const __m128i *v8; // rdx
  __int64 v9; // rcx
  unsigned int *v11; // r12
  size_t v12; // r14
  _BYTE *v13; // r12
  char v14; // al
  size_t v15; // rax
  char v16; // r11
  __int64 *v17; // rcx
  unsigned int v18; // r10d
  int v19; // eax
  __int16 v20; // ax
  __int64 *v21; // rdi
  __int64 v22; // rax
  int v23; // edx
  int v24; // edx
  unsigned int v25; // r12d
  _BYTE *v26; // rax
  signed __int64 v27; // rdx
  _BYTE *v28; // rax
  signed __int64 v29; // rdx
  size_t v30; // rax
  int v31; // eax
  const __m128i *v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rax
  int *m128i_i32; // [rsp+20h] [rbp-E8h]
  bool v38; // [rsp+29h] [rbp-DFh]
  char v39; // [rsp+2Ah] [rbp-DEh]
  char v40; // [rsp+2Bh] [rbp-DDh]
  unsigned __int32 v41; // [rsp+2Ch] [rbp-DCh]
  __int64 *v42; // [rsp+30h] [rbp-D8h]
  char v43; // [rsp+3Bh] [rbp-CDh]
  unsigned int v44; // [rsp+3Ch] [rbp-CCh]
  int v45; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v46; // [rsp+48h] [rbp-C0h]
  int v47; // [rsp+50h] [rbp-B8h]
  __int64 v48; // [rsp+54h] [rbp-B4h]
  int v49; // [rsp+5Ch] [rbp-ACh]
  __m128i v50; // [rsp+60h] [rbp-A8h] BYREF
  char v51; // [rsp+74h] [rbp-94h]
  const __m128i *v52; // [rsp+80h] [rbp-88h] BYREF
  int v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]

  v5 = 0;
  v41 = 0;
  v39 = 0;
  if ( a1[2].m128i_i16[0] == 449 )
  {
LABEL_8:
    if ( *(_BYTE *)(a2 + 40) )
      goto LABEL_9;
    goto LABEL_11;
  }
  v7 = a1[2].m128i_i16[0];
  m128i_i32 = a1[1].m128i_i32;
  while ( 1 )
  {
    v45 = 0;
    if ( v7 != 5 )
    {
      if ( *(_DWORD *)(a2 + 28) != 15 )
      {
        if ( v7 == 22 )
        {
LABEL_6:
          v8 = a1 + 1;
          v9 = 1777;
        }
        else
        {
LABEL_67:
          v8 = a1 + 1;
          v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) < 0x34u) + 1788;
        }
        sub_1564840(&v52, a1, v8, v9);
        sub_AEA040((__int64)&v52);
        goto LABEL_8;
      }
      v19 = 0;
      goto LABEL_31;
    }
    v11 = *(unsigned int **)(a1[1].m128i_i64[1] + 16);
    v12 = *v11;
    v13 = v11 + 4;
    if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x31u )
    {
      v46 = sub_20EF010(v13, v12);
      v38 = (_DWORD)v46 == 27;
      v5 = (_DWORD)v46 == 27;
      v22 = *(_QWORD *)(a1->m128i_i64[1] + 56);
      v47 = v23;
      if ( *(_DWORD *)(v22 + 64) <= 0x32u )
      {
        v5 = (_DWORD)v46 == 27;
        v40 = 0;
      }
      else
      {
        v40 = 0;
        v48 = sub_20EF010(v13, v12);
        v49 = v24;
        if ( (_DWORD)v48 == 48 )
        {
          v5 = *(_BYTE *)(a2 + 40);
          if ( v5 )
          {
            v25 = *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 232) + 64LL);
            sub_1564840(&v52, a1, &a1[1], 45);
            v26 = (_BYTE *)sub_20EAB70(15, v25);
            sub_AEC220((unsigned __int8 **)&v52, v26, v27);
            v28 = (_BYTE *)sub_20EB760(48, 0);
            sub_AEC220((unsigned __int8 **)&v52, v28, v29);
            sub_15038B0((unsigned __int8 **)&v52);
            sub_AEA040((__int64)&v52);
            goto LABEL_8;
          }
          v5 = 1;
          v40 = 1;
        }
      }
    }
    else
    {
      v38 = 0;
      v5 = 0;
      v40 = 0;
    }
    v14 = sub_B15820((__int64)v13, v12, &v45);
    v42 = (__int64 *)a1->m128i_i64[1];
    v43 = v14;
    v44 = *(_DWORD *)(v42[7] + 64);
    if ( v44 > 0x33 )
      break;
    v15 = j__strlen("enter");
    v16 = v43;
    v17 = v42;
    v18 = v44;
    if ( v12 == v15 )
    {
      if ( !v12 || (v34 = memcmp(v13, "enter", v12), v16 = v43, v17 = v42, v18 = v44, !v34) )
      {
        v32 = a1 + 1;
        v33 = 1786;
        goto LABEL_55;
      }
    }
LABEL_17:
    if ( !v5 )
    {
      if ( *(_DWORD *)(a2 + 28) == 7 )
      {
        sub_1564840(&v52, a1, &a1[1], 1784);
        sub_AEC220((unsigned __int8 **)&v52, v13, v12);
        v35 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) >= 0x33u ? 3 : 0;
      }
      else
      {
        if ( v16 )
          goto LABEL_20;
        sub_1564840(&v52, a1, &a1[1], (unsigned int)(v18 > 0x33) + 1784);
        sub_AEC220((unsigned __int8 **)&v52, v13, v12);
        v35 = 4;
        v36 = *(_QWORD *)(a1->m128i_i64[1] + 56);
        if ( *(_DWORD *)(v36 + 64) <= 0x32u )
          v35 = (*(_DWORD *)(v36 + 64) == 50) + 1LL;
      }
      v5 = 1;
      sub_1503AF0((unsigned __int8 **)&v52, v35);
      sub_AEA040((__int64)&v52);
      goto LABEL_8;
    }
    if ( v16 || v38 )
    {
      if ( !v40 )
      {
        if ( !v16 )
        {
          v38 = v39;
LABEL_21:
          sub_1508400(&v50, (__int64)a1, 0x1Bu);
          v5 = v51;
          if ( v51 )
          {
            if ( v41 )
            {
              sub_1564820(&v52, a1, v50.m128i_u32[1], 2175);
              sub_AEA040((__int64)&v52);
              v39 = v38;
              if ( !*(_BYTE *)(a2 + 40) )
                goto LABEL_11;
              goto LABEL_9;
            }
            if ( v50.m128i_i32[0] == 1 )
            {
              *(_DWORD *)(a2 + 24) = 1;
            }
            else if ( v50.m128i_i32[0] )
            {
              if ( v50.m128i_i32[0] == 2 )
                *(_DWORD *)(a2 + 24) = 2;
            }
            else
            {
              *(_DWORD *)(a2 + 24) = 0;
            }
            v41 = v50.m128i_u32[1];
          }
          v39 = v38;
          goto LABEL_29;
        }
LABEL_20:
        if ( !v38 )
          goto LABEL_60;
        goto LABEL_21;
      }
    }
    else if ( !v40 )
    {
LABEL_60:
      v5 = 1;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v17, m128i_i32);
      v19 = v45;
      v39 = 1;
LABEL_31:
      v53 = v19;
      v50.m128i_i64[0] = (__int64)sub_1517C50;
      v52 = a1;
      v54 = a2;
      v50.m128i_i64[1] = (__int64)&v52;
      if ( (unsigned __int8)sub_1508730(a1, 0xFu, (__int64)&v50, 1, *(double *)a3.m128i_i64, a4) )
        goto LABEL_39;
      v20 = a1[2].m128i_i16[0];
      if ( v20 == 22 )
        goto LABEL_6;
      if ( v7 != 5 && v20 != 449 )
        goto LABEL_67;
      if ( v20 == 66 )
      {
        v21 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v21, m128i_i32);
        v20 = a1[2].m128i_i16[0];
      }
      v7 = v20;
      goto LABEL_38;
    }
    v39 = sub_15091A0((__int64)a1, a2, 0, a3);
    if ( !v39 )
    {
      v39 = v5;
      if ( !*(_BYTE *)(a2 + 40) )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_29:
    v7 = a1[2].m128i_i16[0];
    v5 = 1;
LABEL_38:
    if ( v7 == 449 )
    {
LABEL_39:
      if ( !*(_BYTE *)(a2 + 40) )
        goto LABEL_11;
      goto LABEL_9;
    }
  }
  v30 = j__strlen("to");
  v16 = v43;
  v17 = v42;
  v18 = v44;
  if ( v12 != v30 )
    goto LABEL_17;
  if ( v12 )
  {
    v31 = memcmp(v13, "to", v12);
    v16 = v43;
    v17 = v42;
    v18 = v44;
    if ( v31 )
      goto LABEL_17;
  }
  v32 = a1 + 1;
  v33 = 1787;
LABEL_55:
  v5 = 1;
  sub_1564840(&v52, a1, v32, v33);
  sub_AEA040((__int64)&v52);
  if ( !*(_BYTE *)(a2 + 40) )
    goto LABEL_11;
LABEL_9:
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    sub_1564820(&v52, a1, v41, 1780);
    sub_AEA040((__int64)&v52);
  }
LABEL_11:
  if ( *(_DWORD *)(a2 + 28) == 15 && v39 != 1 && v5 )
  {
    sub_1564820(
      &v52,
      a1,
      *(unsigned int *)(a2 + 48),
      (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) < 0x34u) + 1781);
    sub_1503AF0((unsigned __int8 **)&v52, *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x32u);
    sub_AEA040((__int64)&v52);
  }
  LOWORD(v52) = 449;
  return sub_15680D0(a1, &v52, 1, 2);
}
