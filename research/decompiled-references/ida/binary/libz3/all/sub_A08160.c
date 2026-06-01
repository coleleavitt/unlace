__int64 __fastcall sub_A08160(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int *v12; // r14
  __int64 v13; // r10
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rbp
  _DWORD *v17; // r13
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // ecx
  _DWORD *v23; // rdx
  unsigned int v24; // ebp
  __int64 v25; // rbx
  __int64 v26; // rax
  int *v27; // rax
  __int64 v28; // r13
  __int64 v29; // rbx
  unsigned int v30; // edx
  _QWORD *v31; // rax
  __m128i v32; // xmm1
  __int64 i; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  int *v36; // rbx
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r12
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rcx
  unsigned int v45; // r12d
  __int64 v46; // rbp
  __int64 v47; // rax
  int *v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v50; // xmm0_8
  int *v51; // rbx
  __int64 v52; // r12
  __int64 v53; // rsi
  __int64 v54; // r12
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rcx
  _DWORD *v58; // rcx
  unsigned int v59; // r12d
  __int64 v60; // rbp
  __int64 v61; // rax
  int *v62; // rax
  _QWORD *v63; // rax
  unsigned __int64 v64; // xmm0_8
  _DWORD *v65; // [rsp+8h] [rbp-90h]
  int *v66; // [rsp+8h] [rbp-90h]
  unsigned int v67; // [rsp+8h] [rbp-90h]
  _DWORD *v68; // [rsp+8h] [rbp-90h]
  int *v69; // [rsp+8h] [rbp-90h]
  int *v70; // [rsp+10h] [rbp-88h]
  void *v72; // [rsp+20h] [rbp-78h]
  unsigned int v75; // [rsp+3Ch] [rbp-5Ch] BYREF
  _DWORD v76[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v77[72]; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 336);
  ++*(_DWORD *)(a1 + 196);
  if ( *(_DWORD *)(a1 + 924) < *(_DWORD *)(v5 + 96) && *(_DWORD *)(v5 + 20) )
  {
    v67 = a4;
    sub_9D7990(a1, a2);
    a4 = v67;
  }
  v6 = *(_QWORD *)(a1 + 568);
  v7 = v6 + 24LL * a2;
  v8 = v6 + 24LL * a4;
  result = *(_QWORD *)v7;
  v10 = *(_QWORD *)v7;
  if ( *(_QWORD *)v7 )
  {
    v11 = *(unsigned int *)(result - 4);
    if ( 2 * *(_DWORD *)(v7 + 8) < (unsigned int)v11 )
    {
      sub_99F3A0(v7, (_QWORD *)(a1 + 584));
      v12 = *(int **)v8;
      if ( !*(_QWORD *)v8 || 2 * *(_DWORD *)(v8 + 8) >= (unsigned int)*(v12 - 1) )
      {
        result = *(_QWORD *)v7;
        v10 = *(_QWORD *)v7;
        if ( !*(_QWORD *)v7 )
          goto LABEL_14;
        goto LABEL_8;
      }
    }
    else
    {
      v12 = *(int **)v8;
      if ( !*(_QWORD *)v8 )
        goto LABEL_9;
      if ( 2 * *(_DWORD *)(v8 + 8) >= (unsigned int)*(v12 - 1) )
      {
LABEL_8:
        v11 = *(unsigned int *)(result - 4);
LABEL_9:
        v13 = result + 40 * v11;
        if ( v13 != result )
        {
          v14 = 0;
          do
          {
            v15 = *(unsigned int *)(v10 + 32);
            if ( (_DWORD)v15 != -1 )
              *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4 * v15) = v14;
            v10 += 40;
            ++v14;
          }
          while ( v13 != v10 );
        }
LABEL_14:
        if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
          goto LABEL_15;
        goto LABEL_40;
      }
    }
LABEL_58:
    sub_99F3A0(v8, (_QWORD *)(a1 + 584));
    result = *(_QWORD *)v7;
    v12 = *(int **)v8;
    v10 = *(_QWORD *)v7;
    if ( !*(_QWORD *)v7 )
      goto LABEL_14;
    goto LABEL_8;
  }
  v12 = *(int **)v8;
  if ( *(_QWORD *)v8 )
  {
    if ( 2 * *(_DWORD *)(v8 + 8) >= (unsigned int)*(v12 - 1) )
    {
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
        goto LABEL_16;
LABEL_40:
      if ( *(_DWORD *)a3 != 1 )
      {
        if ( *(_DWORD *)a3 != -1 )
          goto LABEL_15;
        goto LABEL_42;
      }
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
        goto LABEL_15;
      goto LABEL_64;
    }
    goto LABEL_58;
  }
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    goto LABEL_33;
  if ( *(_DWORD *)a3 != 1 )
  {
    if ( *(_DWORD *)a3 != -1 )
      goto LABEL_28;
LABEL_42:
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
    {
      if ( !v12 )
        goto LABEL_28;
      v36 = &v12[10 * *(v12 - 1)];
      if ( v36 == v12 )
        goto LABEL_28;
      v37 = v7;
      do
      {
        v45 = v12[8];
        if ( v45 != -1 )
        {
          v46 = v45;
          v47 = *(unsigned int *)(*(_QWORD *)(a1 + 656) + 4LL * v45);
          if ( (_DWORD)v47 == -1 )
          {
            v48 = sub_9C3770(v37, &v75);
            v48[8] = v45;
            v66 = v48;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v48, v12);
            sub_1831620(qword_1C7F2C0, v66);
            v49 = sub_9CDF50(*(_QWORD *)(a1 + 584) + 16LL * v45, v76);
            v50 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v75)).m128i_u64[0];
            v66[9] = v76[0];
            *v49 = v50;
          }
          else
          {
            v38 = 40 * v47;
            v65 = (_DWORD *)(40 * v47 + *(_QWORD *)v37);
            sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v65, (__int64)v12, (__int64)v65);
            if ( !*v65 )
            {
              v39 = (unsigned int)v65[9];
              v40 = *(_QWORD *)v37 + v38;
              *(_DWORD *)(v40 + 36) = *(_DWORD *)(v37 + 16);
              v41 = v39;
              *(_DWORD *)(v40 + 32) = -1;
              v42 = *(_QWORD *)(a1 + 584) + 16 * v46;
              v43 = *(_QWORD *)v42;
              --*(_DWORD *)(v37 + 8);
              v44 = (_DWORD *)(v43 + 8 * v39);
              LODWORD(v39) = *(_DWORD *)(v42 + 12);
              *v44 = -1;
              v44[1] = v39;
              --*(_DWORD *)(v42 + 8);
              *(_DWORD *)(v42 + 12) = v41;
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4 * v46) = -1;
          }
        }
        v12 += 10;
      }
      while ( v12 != v36 );
      goto LABEL_75;
    }
LABEL_15:
    if ( !v12 )
      goto LABEL_28;
LABEL_16:
    v70 = &v12[10 * *(v12 - 1)];
    if ( v70 == v12 )
      goto LABEL_28;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = v12[8];
        if ( v24 != -1 )
          break;
LABEL_21:
        v12 += 10;
        if ( v12 == v70 )
          goto LABEL_27;
      }
      v25 = v24;
      v26 = *(unsigned int *)(*(_QWORD *)(a1 + 656) + 4LL * v24);
      if ( (_DWORD)v26 != -1 )
      {
        v16 = 40 * v26;
        v17 = (_DWORD *)(40 * v26 + *(_QWORD *)v7);
        sub_3EBE30((__int64)v76, (__int64)v12, a3);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v17, (__int64)v76, (__int64)v17);
        v72 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v76);
        sub_182CBA0(v72, v77);
        if ( !*v17 )
        {
          v18 = *(_DWORD *)(v7 + 16);
          v19 = *(_QWORD *)v7 + v16;
          v20 = (unsigned int)v17[9];
          *(_DWORD *)(v19 + 32) = -1;
          *(_DWORD *)(v19 + 36) = v18;
          v21 = *(_QWORD *)(a1 + 584) + 16 * v25;
          v22 = v20;
          --*(_DWORD *)(v7 + 8);
          v23 = (_DWORD *)(*(_QWORD *)v21 + 8 * v20);
          LODWORD(v20) = *(_DWORD *)(v21 + 12);
          *v23 = -1;
          v23[1] = v20;
          --*(_DWORD *)(v21 + 8);
          *(_DWORD *)(v21 + 12) = v22;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4 * v25) = -1;
        goto LABEL_21;
      }
      v27 = sub_9C3770(v7, &v75);
      v27[8] = v24;
      v28 = (__int64)v27;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v27, v12);
      sub_9AF730((__int64)qword_1C7F2C0, v28, a3, v28);
      v29 = *(_QWORD *)(a1 + 584) + 16LL * v24;
      v30 = *(_DWORD *)(v29 + 12);
      ++*(_DWORD *)(v29 + 8);
      if ( v30 == -1 )
      {
        v31 = sub_98C8C0((_QWORD *)v29, v76);
        v30 = v76[0];
      }
      else
      {
        v31 = (_QWORD *)(*(_QWORD *)v29 + 8LL * v30);
        *(_DWORD *)(v29 + 12) = *((_DWORD *)v31 + 1);
      }
      v32 = _mm_cvtsi32_si128(v75);
      *(_DWORD *)(v28 + 36) = v30;
      v12 += 10;
      *v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), v32).m128i_u64[0];
      if ( v12 == v70 )
      {
LABEL_27:
        result = *(_QWORD *)v7;
        goto LABEL_28;
      }
    }
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_28;
LABEL_64:
  if ( *(_DWORD *)(a3 + 16) != 1 )
    goto LABEL_15;
  if ( !v12 )
    goto LABEL_28;
  v51 = &v12[10 * *(v12 - 1)];
  if ( v51 == v12 )
    goto LABEL_28;
  v37 = v7;
  do
  {
    v59 = v12[8];
    if ( v59 != -1 )
    {
      v60 = v59;
      v61 = *(unsigned int *)(*(_QWORD *)(a1 + 656) + 4LL * v59);
      if ( (_DWORD)v61 == -1 )
      {
        v62 = sub_9C3770(v37, &v75);
        v62[8] = v59;
        v69 = v62;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v62, v12);
        v63 = sub_9CDF50(*(_QWORD *)(a1 + 584) + 16LL * v59, v76);
        v64 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v75)).m128i_u64[0];
        v69[9] = v76[0];
        *v63 = v64;
      }
      else
      {
        v52 = 40 * v61;
        v68 = (_DWORD *)(40 * v61 + *(_QWORD *)v37);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v68, (__int64)v12, (__int64)v68);
        if ( !*v68 )
        {
          v53 = (unsigned int)v68[9];
          v54 = *(_QWORD *)v37 + v52;
          *(_DWORD *)(v54 + 36) = *(_DWORD *)(v37 + 16);
          v55 = v53;
          *(_DWORD *)(v54 + 32) = -1;
          v56 = *(_QWORD *)(a1 + 584) + 16 * v60;
          v57 = *(_QWORD *)v56;
          --*(_DWORD *)(v37 + 8);
          v58 = (_DWORD *)(v57 + 8 * v53);
          LODWORD(v53) = *(_DWORD *)(v56 + 12);
          *v58 = -1;
          v58[1] = v53;
          --*(_DWORD *)(v56 + 8);
          *(_DWORD *)(v56 + 12) = v55;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4 * v60) = -1;
      }
    }
    v12 += 10;
  }
  while ( v12 != v51 );
LABEL_75:
  result = *(_QWORD *)v37;
  v7 = v37;
LABEL_28:
  if ( result )
  {
    for ( i = result + 40LL * *(unsigned int *)(result - 4); i != result; result += 40 )
    {
      v34 = *(unsigned int *)(result + 32);
      if ( (_DWORD)v34 != -1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4 * v34) = -1;
    }
  }
LABEL_33:
  if ( a5 )
  {
    result = *(_QWORD *)(a1 + 592);
    v35 = *(unsigned int *)(v7 + 12);
    if ( (*(_BYTE *)(result + 4 * v35 + 3) & 0x40) != 0 )
    {
      result = sub_999800(a1, v35);
      if ( (*(_BYTE *)(result + 20) & 1) != 0 || *(_DWORD *)(result + 16) != 1 )
        return sub_A077A0(a1, (__int64 *)v7);
    }
  }
  return result;
}

