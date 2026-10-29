__int64 __fastcall sub_1012D0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // r12
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
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v26; // [rsp+0h] [rbp-F8h]
  __int64 v27; // [rsp+8h] [rbp-F0h]
  unsigned int v28; // [rsp+18h] [rbp-E0h] BYREF
  unsigned int v29; // [rsp+1Ch] [rbp-DCh] BYREF
  __int128 v30; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (**v31)(); // [rsp+30h] [rbp-C8h] BYREF
  int v32; // [rsp+38h] [rbp-C0h]
  __m128i v33; // [rsp+40h] [rbp-B8h]
  __m128i v34; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+60h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-88h]
  __m128i v37; // [rsp+80h] [rbp-78h] BYREF
  __m128i v38; // [rsp+90h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-58h]
  __int64 (***v40)(); // [rsp+A8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v2 = sub_15D8D0(a1 + 440);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(__int16 *)(v2 + 28);
  *(_QWORD *)&v30 = -1;
  *((_QWORD *)&v30 + 1) = -1;
  v5 = sub_100B80(a1, &v30, v3, v4, 1, 0);
  v6 = v30;
  v7 = v5;
  LODWORD(v25) = HIDWORD(v30);
  v8 = (const __m128i *)sub_15D8D0(a1 + 440);
  v12 = v8[2].m128i_i64[1];
  v34 = _mm_loadu_si128(v8);
  v35 = _mm_loadu_si128(v8 + 1);
  v36 = v8[2].m128i_i64[0];
  if ( a2 > 1 )
  {
    if ( a2 - 2 <= 1 )
    {
      if ( a2 == 2 )
      {
        v25 = *(_QWORD *)(v12 + 24);
        v20 = is_mapped();
        addr = v25;
        if ( !v20 )
          addr = next_addr();
      }
      else
      {
        v27 = *(_QWORD *)(v12 + 24)
            + *(_DWORD *)(*(_QWORD *)(a1 + 760) + 28LL) * *(_DWORD *)(*(_QWORD *)(a1 + 760) + 24LL);
        v25 = v27 - 1;
        v13 = is_mapped();
        addr = v27 - 1;
        if ( !v13 )
          addr = prev_addr();
      }
LABEL_6:
      if ( addr != -1 )
      {
        if ( addr != v7 )
          goto LABEL_8;
LABEL_23:
        sub_16B4D0(a1, &v34, 0, v9, addr, v11, v25, v27);
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
      v23 = sub_FF780((_DWORD *)(*(_QWORD *)(a1 + 760) + 16LL));
      v9 = (unsigned int)v25;
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
      ++v35.m128i_i16[6];
      goto LABEL_23;
    }
    if ( v6 == 1 )
    {
      if ( (_DWORD)v25 )
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
    --v35.m128i_i16[6];
    goto LABEL_23;
  }
  v21 = *(_QWORD *)(v12 + 24);
  if ( (unsigned __int8)is_mapped() )
    v21 += *(_DWORD *)(*(_QWORD *)(a1 + 760) + 28LL) * *(_DWORD *)(*(_QWORD *)(a1 + 760) + 24LL) - 1;
  if ( a2 )
    v22 = ((__int64 (__fastcall *)(__int64))next_addr)(v21);
  else
    v22 = prev_addr(v21);
  addr = v22;
  if ( v22 != -1 )
  {
LABEL_8:
    v26 = addr;
    v32 = 0;
    v31 = off_231218;
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)addr, (__m128i)(unsigned __int64)addr);
    hexplace_t__adjust();
    v14 = *(_QWORD *)(a1 + 760);
    v33.m128i_i64[0] = v26;
    if ( (unsigned __int8)sub_100310((_DWORD *)(v14 + 16), &v28, &v29, (__int64)&v31, v26, v6, 1) )
    {
      v15 = v28;
      if ( v6 != 2 )
      {
        if ( a2 && a2 != 3 )
        {
          v35.m128i_i16[6] = v28;
          if ( *(_QWORD *)(v12 + 24) != v33.m128i_i64[1] )
          {
LABEL_13:
            sub_FBBC0(&v37, *(_QWORD *)(a1 + 856));
            if ( a2 == 1 && v35.m128i_i16[7] < v38.m128i_i64[0] - unk_245114 )
              ++v35.m128i_i16[7];
            goto LABEL_16;
          }
          goto LABEL_16;
        }
        v15 = v29 - 2;
      }
      v35.m128i_i16[6] = v15;
      if ( *(_QWORD *)(v12 + 24) != v33.m128i_i64[1] )
      {
        if ( a2 )
          goto LABEL_13;
        if ( v35.m128i_i16[7] <= unk_245114 )
          sub_FBBC0(&v37, *(_QWORD *)(a1 + 856));
        else
          --v35.m128i_i16[7];
      }
LABEL_16:
      v16 = _mm_load_si128(&v34);
      v40 = &v31;
      v37 = v16;
      v17 = _mm_load_si128(&v35);
      v39 = v36;
      v38 = v17;
      v40 = (__int64 (***)())hexplace_t__clone();
      sub_16B280(a1 + 440, &v37);
      if ( v40 )
        qfree();
      return 1;
    }
    return 0;
  }
  return 0;
}

