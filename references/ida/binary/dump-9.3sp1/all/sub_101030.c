unsigned __int64 __fastcall sub_101030(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
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
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r14
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rax
  int v44; // edx
  unsigned __int64 v45; // rax
  int v46; // [rsp+0h] [rbp-138h]
  int v47; // [rsp+0h] [rbp-138h]
  int v48; // [rsp+8h] [rbp-130h]
  unsigned int v49; // [rsp+8h] [rbp-130h]
  __int64 *v50; // [rsp+8h] [rbp-130h]
  int v51; // [rsp+10h] [rbp-128h]
  __int64 v52; // [rsp+18h] [rbp-120h]
  __int64 v53; // [rsp+20h] [rbp-118h]
  __int64 v54; // [rsp+30h] [rbp-108h]
  __int64 v55; // [rsp+38h] [rbp-100h]
  _QWORD *v57; // [rsp+50h] [rbp-E8h]
  _BYTE v58[16]; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD v59[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v60; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v61; // [rsp+88h] [rbp-B0h]
  _QWORD v62[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-80h]
  __int64 v65[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v67; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+F8h] [rbp-40h]

  v54 = a2;
  v68 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 24) &= ~8u;
  sub_67C50(*(_QWORD **)(a1 + 64));
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a3 + 64) != 8 )
    goto LABEL_2;
  if ( *(_DWORD *)a2 == 4
    || *(_DWORD *)a2 == 67 && (v6 = *(unsigned int *)(a2 + 36), *(_DWORD *)(a2 + 68) == (_DWORD)v6) )
  {
    v37 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v38 = *(_BYTE *)(a2 + 64);
    if ( v38 == 1 )
    {
      a2 = *(unsigned int *)(a2 + 72);
      if ( *(_DWORD *)(v37 + 68) <= (int)a2 && (_DWORD)a2 != -1 )
        goto LABEL_50;
    }
    else if ( v38 == 15 )
    {
      v39 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
      if ( *(_QWORD *)(v39 + 8) == 1 )
      {
        v5 = *(_DWORD **)v39;
        if ( (unsigned int)(**(_DWORD **)v39 - 3) <= 1 )
        {
          a2 = *((unsigned __int16 *)v5 + 4);
          if ( *(_DWORD *)(v37 + 68) <= (int)a2 )
          {
LABEL_50:
            if ( v7 )
            {
              while ( 1 )
              {
                if ( *(_QWORD *)(v7 + 24) != *(_QWORD *)(v54 + 24)
                  || *(_DWORD *)v7 != 4 && (*(_DWORD *)v7 != 67 || *(_DWORD *)(v7 + 36) != *(_DWORD *)(v7 + 68)) )
                {
LABEL_54:
                  a2 = (unsigned int)a2;
                  goto LABEL_55;
                }
                v40 = *(int *)(v54 + 68);
                if ( *(_BYTE *)(v7 + 32) != 1 )
                  break;
                v45 = *(int *)(v7 + 40);
                if ( (int)v45 < *(_DWORD *)(v37 + 68)
                  || !*(_DWORD *)(v54 + 68)
                  || v45 < (int)a2
                  || (int)a2 + v40 - 1 < v45 )
                {
                  break;
                }
                sub_11D5A0(v7);
                v7 = *(_QWORD *)(v7 + 8);
                if ( !v7 )
                  goto LABEL_54;
              }
              a2 = (unsigned int)a2;
            }
            else
            {
LABEL_55:
              v40 = *(int *)(v54 + 68);
            }
            sub_137FB0(*(_QWORD *)(a1 + 64), a2, v40);
          }
        }
      }
    }
  }
  v60 = nullptr;
  v64 = 0;
  v17 = *(_QWORD **)(v54 + 16);
  v62[0] = 0;
  v62[1] = 0;
  v57 = v17;
  v63 = 0;
  v18 = *(_QWORD *)(a3 + 72);
  v61 = 0;
  v19 = *(_QWORD *)(v18 + 24);
  v55 = v19 + 80LL * *(_QWORD *)(v18 + 32);
  if ( v55 == v19 )
  {
    v29 = 0;
  }
  else
  {
    do
    {
      if ( *(_DWORD *)(v19 + 56) != 1 )
      {
        v20 = j__qalloc_or_throw(80, a2, (__int64)v5, v6);
        v21 = *(_QWORD *)(a3 + 24);
        *(_QWORD *)(v20 + 40) = 0;
        *(_QWORD *)(v20 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v20 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v20 + 56) = 0;
        *(_QWORD *)(v20 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v20 + 72) = 0;
        sub_330970(v20, v21);
        *(_DWORD *)v20 = 4;
        sub_125180(v20 + 32);
        sub_1C6010(v58, *(_QWORD *)(a1 + 64), v19 + 56, *(unsigned int *)(v19 + 4));
        sub_126420(
          v20 + 64,
          *(_QWORD *)(a1 + 64),
          (unsigned int)v58,
          *(_DWORD *)(v19 + 4),
          v22,
          v23,
          v46,
          v48,
          v51,
          v20 + 32,
          (__int64)v58);
        if ( (get_tinfo_property() & 0xF) == 9 )
          *(_DWORD *)(v20 + 4) |= 0x10u;
        v65[0] = 0;
        v65[1] = 0;
        v66 = 0;
        v67 = 0;
        sub_123EA0(a1, v65, v19, 0, 4294901760LL);
        if ( (unsigned __int8)sub_64780(v62, v65) || (unsigned __int8)sub_318470(&v63, &v66) )
        {
          v24 = v60;
          v50 = &v60[v61];
          if ( v50 == v60 )
            goto LABEL_40;
          while ( 1 )
          {
            v25 = *v24;
            if ( (unsigned __int8)sub_125B60(*v24 + 32, v19, 0) )
              break;
            if ( v50 == ++v24 )
              goto LABEL_40;
          }
          v49 = *(_DWORD *)(v25 + 72);
          if ( v49 == -1 )
          {
LABEL_40:
            v30 = *(int *)(v19 + 4);
            v49 = sub_138140(*(_QWORD *)(a1 + 64), v30, 1);
            if ( v49 == -1 )
            {
              if ( !under_debugger )
                sub_383060(52221);
LABEL_78:
              BUG();
            }
            v33 = j__qalloc_or_throw(80, v30, v31, v32);
            *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v33 + 40) = 0;
            *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v33 + 56) = 0;
            *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v33 + 72) = 0;
            *(_OWORD *)(v33 + 8) = 0;
            sub_1253A0(v33, v20);
            v34 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 4));
            v59[0] = 1;
            *(_QWORD *)&v59[1] = _mm_unpacklo_epi32(v34, _mm_cvtsi32_si128(v49)).m128i_u64[0];
            sub_125180(v33 + 64);
            sub_11CDA0(v59);
            v57 = sub_A3160(a1, (_QWORD *)v33, (__int64)v57);
            v35 = v61;
            v36 = (__int64)v60;
            if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
            {
              v60 = (__int64 *)qvector_reserve((__int64)&v60, (__int64)v60, v61 + 1, 8);
              v36 = (__int64)v60;
              v35 = v61;
            }
            *(_QWORD *)(v36 + 8 * v35) = v57;
            *(_QWORD *)&v61 = v61 + 1;
          }
          v26 = _mm_cvtsi32_si128(*(_DWORD *)(v19 + 4));
          v59[0] = 1;
          *(_QWORD *)&v59[1] = _mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v49)).m128i_u64[0];
          sub_125180(v52);
          sub_11CDA0(v59);
        }
        sub_127FE0(a1, (__int64)v62, v20 + 64, 0, v27, v28, v47, v49, (int)v62, v52, v53);
        a2 = v20;
        sub_A3160(a1, (_QWORD *)v20, *(_QWORD *)(v54 + 16));
        if ( v66 )
        {
          *(_QWORD *)&v67 = 0;
          qfree(v66);
        }
        qfree(v65[0]);
        cleanup_argloc();
      }
      v19 += 80;
    }
    while ( v19 != v55 );
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree(v63);
    }
    v29 = v62[0];
  }
  qfree(v29);
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree((__int64)v60);
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 76) )
  {
    v8 = *(_QWORD *)(a3 + 24);
    sub_11D5A0(v54);
    v9 = *(_DWORD *)(a1 + 24);
    BYTE1(v9) &= ~2u;
    LOBYTE(v9) = v9 | 0x80;
    *(_DWORD *)(a1 + 24) = v9;
    if ( v7 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v7 + 24);
        if ( v8 != sub_330F80(*(_QWORD *)(a1 + 64)) || *(_DWORD *)v7 != 4 )
          break;
        sub_11D5A0(v7);
        v10 = *(_DWORD *)(a1 + 24);
        BYTE1(v10) &= ~2u;
        LOBYTE(v10) = v10 | 0x80;
        *(_DWORD *)(a1 + 24) = v10;
        v7 = *(_QWORD *)(v7 + 8);
        if ( !v7 )
          goto LABEL_57;
      }
      v12 = *(_QWORD *)(a1 + 64);
      v13 = sub_1D5170(v12);
      if ( *(_DWORD *)v7 != 55 || *(_BYTE *)(v7 + 32) != 7 )
        goto LABEL_12;
      v14 = *(_QWORD *)(a1 + 64);
      v15 = *(unsigned int *)(v7 + 40);
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
        sub_FDB40(v12, v11);
      if ( v13 != sub_1120C0(*(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15), 0) )
      {
LABEL_12:
        if ( !under_debugger )
          sub_383060(51203);
        goto LABEL_78;
      }
    }
    else
    {
LABEL_57:
      v41 = sub_1D5170(*(_QWORD *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 72) + 1 != *(_DWORD *)(v41 + 72) )
      {
        v42 = *(_DWORD **)(a1 + 56);
        if ( *v42 )
        {
          if ( !under_debugger )
            sub_383060(52866);
          goto LABEL_78;
        }
        *v42 = 55;
        v43 = *(_QWORD *)(a1 + 56);
        v44 = *(_DWORD *)(v41 + 72);
        *(_BYTE *)(v43 + 32) = 7;
        *(_DWORD *)(v43 + 40) = v44;
        sub_A73B0(a1, v41);
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) &= ~0x40u;
    sub_330990(a1, v54);
  }
  return sub_A2520(a1, (__int64)"after tail_call_to_ret");
}
