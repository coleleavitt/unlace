unsigned __int64 __fastcall sub_19A27D0(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned int v21; // ebp
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  int v33; // eax
  const __m128i *v34; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 ***v44; // rcx
  __int64 *v45; // rdi
  __int64 v46; // rdx
  int v47; // r13d
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // rdx
  bool v51; // dl
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 *v57; // rax
  unsigned __int64 v58; // [rsp+0h] [rbp-68h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  __m128i v60; // [rsp+10h] [rbp-58h] BYREF
  __m128i v61; // [rsp+20h] [rbp-48h]

  v1 = 0;
  v3 = sub_15F1540(a1, 0);
  v4 = *(_QWORD *)(a1 + 9944);
  v5 = v3;
  if ( (*(_BYTE *)(v3 + 8) & 0x7Fu) - 35 <= 3 && v3 != 72 && (unsigned __int8)sub_B98200((_QWORD *)(v3 - 72), 0) )
  {
    v60.m128i_i64[0] = sub_B98760(v5 - 72, 0);
    v4 = sub_C1BEF0((__int64)&v60, 0, v37, v38);
  }
  v6 = *(_QWORD *)(a1 + 544);
  v7 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    if ( !v6
      || (*(_BYTE *)(v6 + 8) & 0x7Fu) - 35 > 3
      || !sub_C1DDA0(v6 - 72)
      || (*(_QWORD *)(v6 - 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_B981D0((_QWORD *)(v6 - 72), 0)
      || *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596)
      || (*(_BYTE *)(v5 + 8) & 0x7Fu) - 59 > 2 )
    {
      return v4;
    }
    v13 = *(_QWORD *)(v5 - 16);
    v14 = *(_QWORD *)(a1 + 248);
    if ( v13 )
    {
      v1 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v56 = sub_A7AA70(v14, v5 - 64, v9, v10, v11, v12);
      v14 = *(_QWORD *)(a1 + 248);
      v1 = v56;
    }
    v4 = sub_A70010(v14, v1);
    v7 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v4;
    v6 = *(_QWORD *)(a1 + 544);
  }
  if ( !v6 || (*(_BYTE *)(v6 + 8) & 0x7Fu) - 35 > 3 || !sub_C1DDA0(v6 - 72) )
    return v4;
  v18 = *(_QWORD *)(a1 + 32);
  v19 = *(_QWORD *)(a1 + 248);
  v20 = *(_QWORD *)(a1 + 544);
  v21 = *(_DWORD *)(a1 + 40);
  v22 = *v7;
  v23 = 8LL * (int)v21;
  v59 = v19;
  v24 = v18 + v23;
  v25 = sub_F68450(v22, v1, v15, v16, v17);
  v27 = nullptr;
  v58 = v25;
  v28 = v18 + v23 - 8LL * v21;
  while ( v28 != v24 )
  {
    v29 = *(_QWORD *)(v24 - 8);
    if ( (*(_BYTE *)(v29 + 8) & 7) != 2 )
      break;
    if ( v27 )
    {
      v30 = v27[198];
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 16);
        v27 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v31 & 4) != 0 )
          v27 = (_QWORD *)*v27;
        v32 = *(_QWORD **)(v29 + 1592);
        v1 = (unsigned __int64)(v32 + 9);
        if ( v32 )
          v32 += 9;
        if ( v32 != v27 )
          goto LABEL_45;
      }
    }
    v33 = *(_DWORD *)(v29 + 1312);
    if ( v33 )
    {
      v34 = (const __m128i *)(*(_QWORD *)(v29 + 1320) + 32LL * (unsigned int)(v33 - 1));
      v60 = _mm_loadu_si128(v34);
      v61 = _mm_loadu_si128(v34 + 1);
      if ( (v61.m128i_i8[8] & 3) == 0 )
      {
        if ( (unsigned __int8)sub_15EEB70(v29, v1, v26, (__int64)v27) )
LABEL_70:
          v58 = v58 & 0xFFFFFFFFFFFFFFF8LL | v58 & 7 | 1;
        return sub_A70010(v59, v58);
      }
    }
    if ( v20 && (*(_BYTE *)(v20 + 8) & 0x7Fu) - 35 <= 3 && sub_C1DDA0(v20 - 72) )
    {
      v39 = *(_QWORD *)(sub_B8C1B0(v20) + 16);
      if ( (v39 & 4) != 0 )
        v35 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v35 = v39 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v35 = v20;
    }
    v36 = *(_QWORD *)(sub_B8C1B0(v35) + 16);
    if ( (v36 & 4) != 0 )
      v20 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v20 = v36 & 0xFFFFFFFFFFFFFFF8LL;
    v24 -= 8;
    v27 = (_QWORD *)v29;
  }
  if ( !v27 )
    return v4;
LABEL_45:
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 8) & 0x7Fu) - 35 <= 3 && sub_C1DDA0(v20 - 72) )
    {
      v40 = sub_B72690(v20);
      if ( v40 )
      {
        while ( 1 )
        {
          v41 = v40 - 64;
          v42 = v41;
          if ( !v41 )
            return v4;
          v43 = *(_QWORD *)(v41 + 128);
          if ( !v43 || (*(_BYTE *)(v43 + 10) & 0x20) == 0 )
            return v4;
          v44 = (__int64 ***)(*(_QWORD *)(v43 + 128) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v43 + 128) & 4) != 0 )
          {
            v1 = *((unsigned int *)v44 + 2);
            v57 = nullptr;
            if ( (_DWORD)v1 )
              v57 = **v44;
            v45 = nullptr;
            v46 = (__int64)&v57[2 * ((*(_DWORD *)(v43 + 104) >> 5) & 0x7FFF)];
            if ( *((_DWORD *)v44 + 2) )
              v45 = **v44;
          }
          else if ( v44 )
          {
            v45 = (__int64 *)(*(_QWORD *)(v43 + 128) & 0xFFFFFFFFFFFFFFF8LL);
            v46 = (__int64)&v44[2 * ((*(_DWORD *)(v43 + 104) >> 5) & 0x7FFF)];
          }
          else
          {
            v45 = nullptr;
            v46 = 16LL * ((*(_DWORD *)(v43 + 104) >> 5) & 0x7FFF);
          }
          if ( v45 == (__int64 *)v46 )
            return v4;
          while ( (*v45 & 0xFFFFFFFFFFFFFFF8LL) != 0 || (*v45 & 4) == 0 )
          {
            v45 += 2;
            if ( (__int64 *)v46 == v45 )
              return v4;
          }
          v47 = sub_C94E40(v45);
          v49 = *(_QWORD *)(*(_QWORD *)(sub_B96F60(v42) + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v50 = *(unsigned __int8 *)(v49 + 16);
          if ( (unsigned int)(v50 - 25) > 1 )
          {
            v55 = sub_F63050(v49, v1, v50, v48);
            v49 = v55;
            if ( *(_BYTE *)(v55 + 16) == 26 )
              goto LABEL_74;
          }
          else if ( (_BYTE)v50 == 26 )
          {
            goto LABEL_60;
          }
          v55 = sub_199F9B0(v49, v1, v50, v48);
LABEL_74:
          v51 = 0;
          if ( v55 )
LABEL_60:
            v51 = (*(_BYTE *)(v49 + 18) & 0x20) != 0;
          if ( v47 == 1 )
          {
            if ( !v51 )
              return sub_A70010(v59, v58);
            goto LABEL_70;
          }
          v52 = v42 + 64;
          v53 = sub_B72690(v52);
          if ( v53 )
          {
            if ( (*(_BYTE *)(v53 + 8) & 0x7Fu) - 35 <= 3 && sub_C1DDA0(v53 - 72) )
            {
              v54 = sub_B72690(v52);
              v40 = sub_B72690(v54);
              if ( v40 )
                continue;
            }
          }
          return v4;
        }
      }
    }
  }
  return v4;
}
