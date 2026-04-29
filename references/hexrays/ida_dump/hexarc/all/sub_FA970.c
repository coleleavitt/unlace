unsigned __int64 __fastcall sub_FA970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __int64 *v20; // r15
  __int64 v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // r14
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rbx
  char v29; // al
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  _DWORD *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  unsigned __int64 v37; // rax
  int v38; // [rsp+0h] [rbp-138h]
  unsigned int v39; // [rsp+8h] [rbp-130h]
  __int64 *v40; // [rsp+8h] [rbp-130h]
  _QWORD *v41; // [rsp+10h] [rbp-128h]
  __int64 v42; // [rsp+18h] [rbp-120h]
  __int64 v43; // [rsp+20h] [rbp-118h]
  __int64 v45; // [rsp+38h] [rbp-100h]
  _QWORD *v47; // [rsp+50h] [rbp-E8h]
  _BYTE v48[16]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v49[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+88h] [rbp-B0h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-80h]
  _QWORD v55[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v57; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+F8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 24) &= ~8u;
  sub_616D0(*(_QWORD **)(a1 + 64));
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    goto LABEL_2;
  if ( *(_DWORD *)a2 == 4 || *(_DWORD *)a2 == 67 && *(_DWORD *)(a2 + 68) == *(_DWORD *)(a2 + 36) )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v29 = *(_BYTE *)(a2 + 64);
    if ( v29 == 1 )
    {
      v31 = *(unsigned int *)(a2 + 72);
      if ( *(_DWORD *)(v28 + 68) <= (int)v31 && (_DWORD)v31 != -1 )
        goto LABEL_50;
    }
    else if ( v29 == 15 )
    {
      v30 = *(_QWORD **)(*(_QWORD *)(a2 + 72) + 8LL);
      if ( v30[1] == 1 && (unsigned int)(*(_DWORD *)*v30 - 3) <= 1 )
      {
        v31 = *(unsigned __int16 *)(*v30 + 8LL);
        if ( *(_DWORD *)(v28 + 68) <= (int)v31 )
        {
LABEL_50:
          if ( v5 )
          {
            while ( 1 )
            {
              if ( *(_QWORD *)(v5 + 24) != *(_QWORD *)(a2 + 24)
                || *(_DWORD *)v5 != 4 && (*(_DWORD *)v5 != 67 || *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 68)) )
              {
LABEL_54:
                v31 = (unsigned int)v31;
                goto LABEL_55;
              }
              v32 = *(int *)(a2 + 68);
              if ( *(_BYTE *)(v5 + 32) != 1 )
                break;
              v37 = *(int *)(v5 + 40);
              if ( (int)v37 < *(_DWORD *)(v28 + 68)
                || !*(_DWORD *)(a2 + 68)
                || v37 < (int)v31
                || (int)v31 + v32 - 1 < v37 )
              {
                break;
              }
              sub_116EE0(v5);
              v5 = *(_QWORD *)(v5 + 8);
              if ( !v5 )
                goto LABEL_54;
            }
            v31 = (unsigned int)v31;
          }
          else
          {
LABEL_55:
            v32 = *(int *)(a2 + 68);
          }
          sub_1318F0(*(_QWORD *)(a1 + 64), v31, v32);
        }
      }
    }
  }
  v50 = 0;
  v54 = 0;
  v13 = *(_QWORD **)(a2 + 16);
  v52[0] = 0;
  v52[1] = 0;
  v47 = v13;
  v53 = 0;
  v14 = *(_QWORD *)(a3 + 72);
  v51 = 0;
  v15 = *(_QWORD *)(v14 + 24);
  v45 = v15 + 80LL * *(_QWORD *)(v14 + 32);
  if ( v45 == v15 )
  {
    v23 = 0;
  }
  else
  {
    do
    {
      if ( *(_DWORD *)(v15 + 56) != 1 )
      {
        v16 = j__qalloc_or_throw(80);
        v17 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)(v16 + 40) = 0;
        *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v16 + 56) = 0;
        *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v16 + 72) = 0;
        sub_329320(v16, v17);
        *(_DWORD *)v16 = 4;
        sub_11EAC0(v16 + 32);
        sub_1BF790(v48, *(_QWORD *)(a1 + 64), v15 + 56, *(unsigned int *)(v15 + 4));
        sub_11FD60(
          v16 + 64,
          *(_QWORD *)(a1 + 64),
          (unsigned int)v48,
          *(_DWORD *)(v15 + 4),
          v18,
          v19,
          v38,
          v39,
          (_DWORD)v41,
          v16 + 32,
          (__int64)v48);
        if ( (get_tinfo_property(*(_QWORD *)(v15 + 24), 2) & 0xF) == 9 )
          *(_DWORD *)(v16 + 4) |= 0x10u;
        v55[0] = 0;
        v55[1] = 0;
        v56 = 0;
        v57 = 0;
        sub_11D7E0(a1, v55, v15, 0, 4294901760LL);
        v41 = v52;
        if ( (unsigned __int8)sub_5E200(v52, v55) || (unsigned __int8)sub_3110F0(&v53, &v56) )
        {
          v20 = (__int64 *)v50;
          v40 = (__int64 *)(v50 + 8 * v51);
          if ( v40 == (__int64 *)v50 )
            goto LABEL_40;
          while ( 1 )
          {
            v21 = *v20;
            if ( (unsigned __int8)sub_11F4A0(*v20 + 32, v15, 0) )
              break;
            if ( v40 == ++v20 )
              goto LABEL_40;
          }
          v39 = *(_DWORD *)(v21 + 72);
          if ( v39 == -1 )
          {
LABEL_40:
            v39 = sub_131A80(*(_QWORD *)(a1 + 64), *(int *)(v15 + 4), 1);
            if ( v39 == -1 )
            {
              if ( !under_debugger )
                sub_37B760(52221);
LABEL_78:
              BUG();
            }
            v24 = j__qalloc_or_throw(80);
            *(_QWORD *)(v24 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 40) = 0;
            *(_QWORD *)(v24 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 56) = 0;
            *(_QWORD *)(v24 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v24 + 72) = 0;
            *(_OWORD *)(v24 + 8) = 0;
            sub_11ECE0(v24, v16);
            v25 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 4));
            v49[0] = 1;
            *(_QWORD *)&v49[1] = _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(v39)).m128i_u64[0];
            sub_11EAC0(v24 + 64);
            sub_1166E0(v49);
            v47 = sub_9CAA0(a1, (_QWORD *)v24, (__int64)v47);
            v26 = v51;
            v27 = v50;
            if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v51 + 1) )
            {
              v50 = qvector_reserve(&v50, v50, v51 + 1, 8);
              v27 = v50;
              v26 = v51;
            }
            *(_QWORD *)(v27 + 8 * v26) = v47;
            *(_QWORD *)&v51 = v51 + 1;
          }
          v22 = _mm_cvtsi32_si128(*(_DWORD *)(v15 + 4));
          v49[0] = 1;
          *(_QWORD *)&v49[1] = _mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(v39)).m128i_u64[0];
          sub_11EAC0(v42);
          sub_1166E0(v49);
        }
        sub_121920(a1, v52, v16 + 64, 0);
        sub_9CAA0(a1, (_QWORD *)v16, *(_QWORD *)(a2 + 16));
        if ( v56 )
        {
          *(_QWORD *)&v57 = 0;
          qfree(v56);
        }
        qfree(v55[0]);
        cleanup_argloc(v43);
      }
      v15 += 80;
    }
    while ( v15 != v45 );
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    v23 = v52[0];
  }
  qfree(v23);
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 76) )
  {
    v6 = *(_QWORD *)(a3 + 24);
    sub_116EE0(a2);
    v7 = *(_DWORD *)(a1 + 24);
    BYTE1(v7) &= ~2u;
    LOBYTE(v7) = v7 | 0x80;
    *(_DWORD *)(a1 + 24) = v7;
    if ( v5 )
    {
      while ( v6 == sub_329920(*(_QWORD *)(a1 + 64), *(_QWORD *)(v5 + 24)) && *(_DWORD *)v5 == 4 )
      {
        sub_116EE0(v5);
        v8 = *(_DWORD *)(a1 + 24);
        BYTE1(v8) &= ~2u;
        LOBYTE(v8) = v8 | 0x80;
        *(_DWORD *)(a1 + 24) = v8;
        v5 = *(_QWORD *)(v5 + 8);
        if ( !v5 )
          goto LABEL_57;
      }
      v9 = sub_1CE070(*(_QWORD *)(a1 + 64));
      if ( *(_DWORD *)v5 != 55 || *(_BYTE *)(v5 + 32) != 7 )
        goto LABEL_12;
      v10 = *(_QWORD *)(a1 + 64);
      v11 = *(unsigned int *)(v5 + 40);
      if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
        sub_F7480();
      if ( v9 != sub_10BA00(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11), 0) )
      {
LABEL_12:
        if ( !under_debugger )
          sub_37B760(51203);
        goto LABEL_78;
      }
    }
    else
    {
LABEL_57:
      v33 = sub_1CE070(*(_QWORD *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)(v33 + 72) )
      {
        v34 = *(_DWORD **)(a1 + 56);
        if ( *v34 )
        {
          if ( !under_debugger )
            sub_37B760(52866);
          goto LABEL_78;
        }
        *v34 = 55;
        v35 = *(_QWORD *)(a1 + 56);
        v36 = *(_DWORD *)(v33 + 72);
        *(_BYTE *)(v35 + 32) = 7;
        *(_DWORD *)(v35 + 40) = v36;
        sub_A0CF0(a1, v33);
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x40u;
    sub_329340(a1, a2);
  }
  return sub_9BE60(a1, (__int64)"after tail_call_to_ret");
}
