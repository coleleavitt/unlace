unsigned __int64 __fastcall sub_E4D00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  __int64 *v24; // r15
  __int64 v25; // r14
  __m128i v26; // xmm0
  __int64 v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbx
  char v32; // al
  _QWORD *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rsi
  _DWORD *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  unsigned __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-138h]
  unsigned int v42; // [rsp+8h] [rbp-130h]
  __int64 *v43; // [rsp+8h] [rbp-130h]
  _QWORD *v44; // [rsp+10h] [rbp-128h]
  __int64 v45; // [rsp+18h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-100h]
  _QWORD *v49; // [rsp+50h] [rbp-E8h]
  _BYTE v50[16]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v51[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-B8h]
  __int128 v53; // [rsp+88h] [rbp-B0h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-80h]
  _QWORD v57[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v59; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+F8h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 24) &= ~8u;
  sub_67350(*(_QWORD **)(a1 + 64));
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    goto LABEL_2;
  if ( *(_DWORD *)a2 == 4 || *(_DWORD *)a2 == 67 && *(_DWORD *)(a2 + 68) == *(_DWORD *)(a2 + 36) )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v32 = *(_BYTE *)(a2 + 64);
    if ( v32 == 1 )
    {
      v34 = *(unsigned int *)(a2 + 72);
      if ( *(_DWORD *)(v31 + 68) <= (int)v34 && (_DWORD)v34 != -1 )
        goto LABEL_49;
    }
    else if ( v32 == 15 )
    {
      v33 = *(_QWORD **)(*(_QWORD *)(a2 + 72) + 8LL);
      if ( v33[1] == 1 && (unsigned int)(*(_DWORD *)*v33 - 3) <= 1 )
      {
        v34 = *(unsigned __int16 *)(*v33 + 8LL);
        if ( *(_DWORD *)(v31 + 68) <= (int)v34 )
        {
LABEL_49:
          if ( v5 )
          {
            while ( 1 )
            {
              if ( *(_QWORD *)(v5 + 24) != *(_QWORD *)(a2 + 24)
                || *(_DWORD *)v5 != 4 && (*(_DWORD *)v5 != 67 || *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 68)) )
              {
LABEL_53:
                v34 = (unsigned int)v34;
                goto LABEL_54;
              }
              v35 = *(int *)(a2 + 68);
              if ( *(_BYTE *)(v5 + 32) != 1 )
                break;
              v40 = *(int *)(v5 + 40);
              if ( (int)v40 < *(_DWORD *)(v31 + 68)
                || !*(_DWORD *)(a2 + 68)
                || v40 < (int)v34
                || (int)v34 + v35 - 1 < v40 )
              {
                break;
              }
              sub_11B160(v5);
              v5 = *(_QWORD *)(v5 + 8);
              if ( !v5 )
                goto LABEL_53;
            }
            v34 = (unsigned int)v34;
          }
          else
          {
LABEL_54:
            v35 = *(int *)(a2 + 68);
          }
          sub_135AB0(*(_QWORD *)(a1 + 64), v34, v35);
        }
      }
    }
  }
  v52 = 0;
  v56 = 0;
  v17 = *(_QWORD **)(a2 + 16);
  v54[0] = 0;
  v54[1] = 0;
  v49 = v17;
  v55 = 0;
  v18 = *(_QWORD *)(a3 + 72);
  v53 = 0;
  v19 = *(_QWORD *)(v18 + 24);
  v47 = v19 + 80LL * *(_QWORD *)(v18 + 32);
  if ( v47 != v19 )
  {
    do
    {
      if ( *(_DWORD *)(v19 + 56) != 1 )
      {
        v20 = j__qalloc_or_throw();
        v21 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)(v20 + 40) = 0;
        *(_QWORD *)(v20 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v20 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v20 + 56) = 0;
        *(_QWORD *)(v20 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v20 + 72) = 0;
        sub_32D4D0(v20, v21);
        *(_DWORD *)v20 = 4;
        sub_122C80(v20 + 32);
        sub_1C3590(v50, *(_QWORD *)(a1 + 64), v19 + 56, *(unsigned int *)(v19 + 4));
        sub_123F20(
          v20 + 64,
          *(_QWORD *)(a1 + 64),
          (unsigned int)v50,
          *(_DWORD *)(v19 + 4),
          v22,
          v23,
          v41,
          v42,
          (_DWORD)v44,
          v20 + 32,
          (__int64)v50);
        if ( (get_tinfo_property() & 0xF) == 9 )
          *(_DWORD *)(v20 + 4) |= 0x10u;
        v57[0] = 0;
        v57[1] = 0;
        v58 = 0;
        v59 = 0;
        sub_1219A0(a1, v57, v19, 0, 4294901760LL);
        v44 = v54;
        if ( (unsigned __int8)sub_63E80(v54, v57) || (unsigned __int8)sub_314F20(&v55, &v58) )
        {
          v24 = (__int64 *)v52;
          v43 = (__int64 *)(v52 + 8 * v53);
          if ( v43 == (__int64 *)v52 )
            goto LABEL_39;
          while ( 1 )
          {
            v25 = *v24;
            if ( (unsigned __int8)sub_123660(*v24 + 32, v19, 0) )
              break;
            if ( v43 == ++v24 )
              goto LABEL_39;
          }
          v42 = *(_DWORD *)(v25 + 72);
          if ( v42 == -1 )
          {
LABEL_39:
            v42 = sub_135C40(*(_QWORD *)(a1 + 64), *(int *)(v19 + 4), 1);
            if ( v42 == -1 )
            {
              if ( !under_debugger )
                sub_37EA20(52221);
LABEL_77:
              BUG();
            }
            v27 = j__qalloc_or_throw();
            *(_QWORD *)(v27 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v27 + 40) = 0;
            *(_QWORD *)(v27 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v27 + 56) = 0;
            *(_QWORD *)(v27 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v27 + 72) = 0;
            *(_OWORD *)(v27 + 8) = 0;
            sub_122EA0(v27, v20);
            v28 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 4));
            v51[0] = 1;
            *(_QWORD *)&v51[1] = _mm_unpacklo_epi32(v28, _mm_cvtsi32_si128(v42)).m128i_u64[0];
            sub_122C80(v27 + 64);
            sub_11A960(v51);
            v49 = sub_A23D0(a1, (_QWORD *)v27, (__int64)v49);
            v29 = v53;
            v30 = v52;
            if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
            {
              v52 = qvector_reserve();
              v30 = v52;
              v29 = v53;
            }
            *(_QWORD *)(v30 + 8 * v29) = v49;
            *(_QWORD *)&v53 = v53 + 1;
          }
          v26 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 4));
          v51[0] = 1;
          *(_QWORD *)&v51[1] = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v42)).m128i_u64[0];
          sub_122C80(v45);
          sub_11A960(v51);
        }
        sub_125AC0(a1, v54, v20 + 64, 0);
        sub_A23D0(a1, (_QWORD *)v20, *(_QWORD *)(a2 + 16));
        if ( v58 )
        {
          *(_QWORD *)&v59 = 0;
          qfree();
        }
        qfree();
        cleanup_argloc();
      }
      v19 += 80;
    }
    while ( v19 != v47 );
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree();
    }
  }
  qfree();
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 76) )
  {
    v6 = *(_QWORD *)(a3 + 24);
    sub_11B160(a2);
    v7 = *(_DWORD *)(a1 + 24);
    BYTE1(v7) &= ~2u;
    LOBYTE(v7) = v7 | 0x80;
    *(_DWORD *)(a1 + 24) = v7;
    if ( v5 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v5 + 24);
        if ( v6 != sub_32DAE0(*(_QWORD *)(a1 + 64)) || *(_DWORD *)v5 != 4 )
          break;
        sub_11B160(v5);
        v8 = *(_DWORD *)(a1 + 24);
        BYTE1(v8) &= ~2u;
        LOBYTE(v8) = v8 | 0x80;
        *(_DWORD *)(a1 + 24) = v8;
        v5 = *(_QWORD *)(v5 + 8);
        if ( !v5 )
          goto LABEL_56;
      }
      v10 = *(_QWORD *)(a1 + 64);
      v12 = sub_1D25F0(v10);
      if ( *(_DWORD *)v5 != 55 || *(_BYTE *)(v5 + 32) != 7 )
        goto LABEL_12;
      v14 = *(_QWORD *)(a1 + 64);
      v15 = *(unsigned int *)(v5 + 40);
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
        sub_CE6C0(v10, v9, v14, v11, v13);
      if ( v12 != sub_110EC0(*(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15), 0) )
      {
LABEL_12:
        if ( !under_debugger )
          sub_37EA20(51203);
        goto LABEL_77;
      }
    }
    else
    {
LABEL_56:
      v36 = sub_1D25F0(*(_QWORD *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)(v36 + 72) )
      {
        v37 = *(_DWORD **)(a1 + 56);
        if ( *v37 )
        {
          if ( !under_debugger )
            sub_37EA20(52866);
          goto LABEL_77;
        }
        *v37 = 55;
        v38 = *(_QWORD *)(a1 + 56);
        v39 = *(_DWORD *)(v36 + 72);
        *(_BYTE *)(v38 + 32) = 7;
        *(_DWORD *)(v38 + 40) = v39;
        sub_A6620(a1, v36);
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x40u;
    sub_32D4F0(a1, a2);
  }
  return sub_A17A0(a1, (__int64)"after tail_call_to_ret");
}
