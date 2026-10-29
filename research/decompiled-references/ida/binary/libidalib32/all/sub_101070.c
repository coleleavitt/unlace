__int64 __fastcall sub_101070(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // r14d
  int v7; // r12d
  const __m128i *v8; // rax
  __int64 v9; // rcx
  __int64 addr; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  char v13; // al
  __int64 v14; // rax
  __int16 v15; // dx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  unsigned int v19; // eax
  char v20; // al
  unsigned int v21; // r12d
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // [rsp+8h] [rbp-F0h]
  unsigned int v26; // [rsp+8h] [rbp-F0h]
  unsigned int v27; // [rsp+8h] [rbp-F0h]
  unsigned int v28; // [rsp+8h] [rbp-F0h]
  unsigned int v29; // [rsp+18h] [rbp-E0h] BYREF
  unsigned int v30; // [rsp+1Ch] [rbp-DCh] BYREF
  __int128 v31; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (**v32)(); // [rsp+30h] [rbp-C8h] BYREF
  int v33; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+3Ch] [rbp-BCh]
  __m128i v35; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+60h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-88h]
  __m128i v38; // [rsp+80h] [rbp-78h] BYREF
  __m128i v39; // [rsp+90h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-58h]
  __int64 (***v41)(); // [rsp+A8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+B8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v2 = sub_15CFF0(a1 + 440);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(__int16 *)(v2 + 28);
  *(_QWORD *)&v31 = -1;
  *((_QWORD *)&v31 + 1) = -1;
  v5 = sub_100950(a1, &v31, v3, v4, 1, 0);
  v6 = v31;
  v7 = v5;
  v25 = HIDWORD(v31);
  v8 = (const __m128i *)sub_15CFF0(a1 + 440);
  v12 = v8[2].m128i_i64[1];
  v35 = _mm_loadu_si128(v8);
  v36 = _mm_loadu_si128(v8 + 1);
  v37 = v8[2].m128i_i64[0];
  if ( a2 > 1 )
  {
    if ( a2 - 2 <= 1 )
    {
      if ( a2 == 2 )
      {
        v28 = *(_DWORD *)(v12 + 16);
        v20 = is_mapped();
        addr = v28;
        if ( !v20 )
          addr = (unsigned int)next_addr();
      }
      else
      {
        v26 = *(_DWORD *)(v12 + 16)
            + *(_DWORD *)(*(_QWORD *)(a1 + 752) + 28LL) * *(_DWORD *)(*(_QWORD *)(a1 + 752) + 24LL)
            - 1;
        v13 = is_mapped();
        addr = v26;
        if ( !v13 )
          addr = (unsigned int)prev_addr();
      }
LABEL_6:
      if ( (_DWORD)addr != -1 )
      {
        if ( (_DWORD)addr != v7 )
          goto LABEL_8;
LABEL_23:
        sub_16AB10(a1, &v35, 0, v9, addr, v11);
        return 1;
      }
      return 0;
    }
    if ( under_debugger )
      BUG();
    interr();
    goto LABEL_49;
  }
  if ( v7 != -1 )
  {
    if ( a2 )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
          goto LABEL_32;
        goto LABEL_50;
      }
LABEL_49:
      v23 = sub_FF570((_DWORD *)(*(_QWORD *)(a1 + 752) + 16LL));
      v9 = v25;
      if ( v23 - 1 > (int)v25 )
        goto LABEL_32;
LABEL_50:
      v24 = next_addr();
      addr = v24;
      if ( v7 != v24 )
        goto LABEL_6;
      if ( v24 == -1 )
        return 0;
LABEL_32:
      ++v36.m128i_i16[6];
      goto LABEL_23;
    }
    if ( v6 == 1 )
    {
      if ( v25 )
        goto LABEL_22;
    }
    else if ( v6 != 2 )
    {
      goto LABEL_22;
    }
    v19 = prev_addr();
    addr = v19;
    if ( v19 != v7 )
      goto LABEL_6;
    if ( v19 == -1 )
      return 0;
LABEL_22:
    --v36.m128i_i16[6];
    goto LABEL_23;
  }
  v21 = *(_DWORD *)(v12 + 16);
  if ( (unsigned __int8)is_mapped() )
    v21 = v21 + *(_DWORD *)(*(_QWORD *)(a1 + 752) + 28LL) * *(_DWORD *)(*(_QWORD *)(a1 + 752) + 24LL) - 1;
  if ( a2 )
    v22 = ((__int64 (__fastcall *)(_QWORD))next_addr)(v21);
  else
    v22 = prev_addr(v21);
  LODWORD(addr) = v22;
  if ( v22 != -1 )
  {
LABEL_8:
    v32 = off_2301D8;
    v27 = addr;
    v33 = 0;
    v34 = _mm_shuffle_epi32(_mm_cvtsi32_si128(addr), 224).m128i_u64[0];
    hexplace_t__adjust();
    v14 = *(_QWORD *)(a1 + 752);
    LODWORD(v34) = v27;
    if ( (unsigned __int8)sub_1000F0((_DWORD *)(v14 + 16), &v29, &v30, (__int64)&v32, v27, v6, 1) )
    {
      v15 = v29;
      if ( v6 != 2 )
      {
        if ( a2 && a2 != 3 )
        {
          v36.m128i_i16[6] = v29;
          if ( *(_DWORD *)(v12 + 16) != HIDWORD(v34) )
          {
LABEL_13:
            sub_FB9D0(&v38, *(_QWORD *)(a1 + 848));
            if ( a2 == 1 && v36.m128i_i16[7] < v39.m128i_i64[0] - unk_2440C8 )
              ++v36.m128i_i16[7];
            goto LABEL_16;
          }
          goto LABEL_16;
        }
        v15 = v30 - 2;
      }
      v36.m128i_i16[6] = v15;
      if ( HIDWORD(v34) != *(_DWORD *)(v12 + 16) )
      {
        if ( a2 )
          goto LABEL_13;
        if ( v36.m128i_i16[7] <= unk_2440C8 )
          sub_FB9D0(&v38, *(_QWORD *)(a1 + 848));
        else
          --v36.m128i_i16[7];
      }
LABEL_16:
      v16 = _mm_load_si128(&v35);
      v41 = &v32;
      v38 = v16;
      v17 = _mm_load_si128(&v36);
      v40 = v37;
      v39 = v17;
      v41 = (__int64 (***)())hexplace_t__clone();
      sub_16A8C0(a1 + 440, &v38);
      if ( v41 )
        qfree();
      return 1;
    }
    return 0;
  }
  return 0;
}

