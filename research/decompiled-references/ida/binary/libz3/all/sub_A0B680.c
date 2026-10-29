__int64 __fastcall sub_A0B680(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, char a5)
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
  int *v51; // rax
  int *v52; // rbx
  __int64 v53; // r12
  __int64 v54; // rsi
  __int64 v55; // r12
  int v56; // edx
  __int64 v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rcx
  unsigned int v60; // r12d
  __int64 v61; // rbp
  __int64 v62; // rax
  int *v63; // rax
  _QWORD *v64; // rax
  unsigned __int64 v65; // xmm0_8
  _DWORD *v66; // [rsp+8h] [rbp-90h]
  int *v67; // [rsp+8h] [rbp-90h]
  unsigned int v68; // [rsp+8h] [rbp-90h]
  _DWORD *v69; // [rsp+8h] [rbp-90h]
  int *v70; // [rsp+8h] [rbp-90h]
  int *v71; // [rsp+10h] [rbp-88h]
  void *v73; // [rsp+20h] [rbp-78h]
  unsigned int v76; // [rsp+3Ch] [rbp-5Ch] BYREF
  _DWORD v77[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v78[72]; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 464);
  ++*(_DWORD *)(a1 + 324);
  if ( *(_DWORD *)(a1 + 1116) < *(_DWORD *)(v5 + 96) && *(_DWORD *)(v5 + 20) )
  {
    v68 = a4;
    sub_9D71A0(a1, a2);
    a4 = v68;
  }
  v6 = *(_QWORD *)(a1 + 696);
  v7 = v6 + 24LL * a2;
  v8 = v6 + 24LL * a4;
  result = *(_QWORD *)v7;
  v10 = *(_QWORD *)v7;
  if ( *(_QWORD *)v7 )
  {
    v11 = *(unsigned int *)(result - 4);
    if ( 2 * *(_DWORD *)(v7 + 8) < (unsigned int)v11 )
    {
      sub_9A47C0(v7, (_QWORD *)(a1 + 712));
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
              *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v15) = v14;
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
    sub_9A47C0(v8, (_QWORD *)(a1 + 712));
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
      goto LABEL_66;
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
          v47 = *(unsigned int *)(*(_QWORD *)(a1 + 784) + 4LL * v45);
          if ( (_DWORD)v47 == -1 )
          {
            v48 = sub_9C4650(v37, &v76);
            v48[8] = v45;
            v67 = v48;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v48, v12);
            sub_1831620(qword_1C7F2C0, v67);
            v49 = sub_9CE090(*(_QWORD *)(a1 + 712) + 16LL * v45, v77);
            v50 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v76)).m128i_u64[0];
            v67[9] = v77[0];
            *v49 = v50;
          }
          else
          {
            v38 = 40 * v47;
            v66 = (_DWORD *)(40 * v47 + *(_QWORD *)v37);
            sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v66, (__int64)v12, (__int64)v66);
            if ( !*v66 )
            {
              v39 = (unsigned int)v66[9];
              v40 = *(_QWORD *)v37 + v38;
              *(_DWORD *)(v40 + 36) = *(_DWORD *)(v37 + 16);
              v41 = v39;
              *(_DWORD *)(v40 + 32) = -1;
              v42 = *(_QWORD *)(a1 + 712) + 16 * v46;
              v43 = *(_QWORD *)v42;
              --*(_DWORD *)(v37 + 8);
              v44 = (_DWORD *)(v43 + 8 * v39);
              LODWORD(v39) = *(_DWORD *)(v42 + 12);
              *v44 = -1;
              v44[1] = v39;
              --*(_DWORD *)(v42 + 8);
              *(_DWORD *)(v42 + 12) = v41;
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v46) = -1;
          }
        }
        v12 += 10;
      }
      while ( v12 != v36 );
      goto LABEL_77;
    }
LABEL_15:
    if ( !v12 )
      goto LABEL_28;
LABEL_16:
    v71 = &v12[10 * *(v12 - 1)];
    if ( v71 == v12 )
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
        if ( v12 == v71 )
          goto LABEL_27;
      }
      v25 = v24;
      v26 = *(unsigned int *)(*(_QWORD *)(a1 + 784) + 4LL * v24);
      if ( (_DWORD)v26 != -1 )
      {
        v16 = 40 * v26;
        v17 = (_DWORD *)(40 * v26 + *(_QWORD *)v7);
        sub_3EBE30((__int64)v77, (__int64)v12, a3);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v17, (__int64)v77, (__int64)v17);
        v73 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77);
        sub_182CBA0(v73, v78);
        if ( !*v17 )
        {
          v18 = *(_DWORD *)(v7 + 16);
          v19 = *(_QWORD *)v7 + v16;
          v20 = (unsigned int)v17[9];
          *(_DWORD *)(v19 + 32) = -1;
          *(_DWORD *)(v19 + 36) = v18;
          v21 = *(_QWORD *)(a1 + 712) + 16 * v25;
          v22 = v20;
          --*(_DWORD *)(v7 + 8);
          v23 = (_DWORD *)(*(_QWORD *)v21 + 8 * v20);
          LODWORD(v20) = *(_DWORD *)(v21 + 12);
          *v23 = -1;
          v23[1] = v20;
          --*(_DWORD *)(v21 + 8);
          *(_DWORD *)(v21 + 12) = v22;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v25) = -1;
        goto LABEL_21;
      }
      v27 = sub_9C4650(v7, &v76);
      v27[8] = v24;
      v28 = (__int64)v27;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v27, v12);
      sub_9AF730((__int64)qword_1C7F2C0, v28, a3, v28);
      v29 = *(_QWORD *)(a1 + 712) + 16LL * v24;
      v30 = *(_DWORD *)(v29 + 12);
      ++*(_DWORD *)(v29 + 8);
      if ( v30 == -1 )
      {
        v31 = sub_98C970((_QWORD *)v29, v77);
        v30 = v77[0];
      }
      else
      {
        v31 = (_QWORD *)(*(_QWORD *)v29 + 8LL * v30);
        *(_DWORD *)(v29 + 12) = *((_DWORD *)v31 + 1);
      }
      v32 = _mm_cvtsi32_si128(v76);
      *(_DWORD *)(v28 + 36) = v30;
      v12 += 10;
      *v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), v32).m128i_u64[0];
      if ( v12 == v71 )
      {
LABEL_27:
        result = *(_QWORD *)v7;
        goto LABEL_28;
      }
    }
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_28;
LABEL_66:
  if ( *(_DWORD *)(a3 + 16) != 1 )
    goto LABEL_15;
  if ( !v12 )
    goto LABEL_28;
  v52 = &v12[10 * *(v12 - 1)];
  if ( v52 == v12 )
    goto LABEL_28;
  v37 = v7;
  do
  {
    v60 = v12[8];
    if ( v60 != -1 )
    {
      v61 = v60;
      v62 = *(unsigned int *)(*(_QWORD *)(a1 + 784) + 4LL * v60);
      if ( (_DWORD)v62 == -1 )
      {
        v63 = sub_9C4650(v37, &v76);
        v63[8] = v60;
        v70 = v63;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v63, v12);
        v64 = sub_9CE090(*(_QWORD *)(a1 + 712) + 16LL * v60, v77);
        v65 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v76)).m128i_u64[0];
        v70[9] = v77[0];
        *v64 = v65;
      }
      else
      {
        v53 = 40 * v62;
        v69 = (_DWORD *)(40 * v62 + *(_QWORD *)v37);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v69, (__int64)v12, (__int64)v69);
        if ( !*v69 )
        {
          v54 = (unsigned int)v69[9];
          v55 = *(_QWORD *)v37 + v53;
          *(_DWORD *)(v55 + 36) = *(_DWORD *)(v37 + 16);
          v56 = v54;
          *(_DWORD *)(v55 + 32) = -1;
          v57 = *(_QWORD *)(a1 + 712) + 16 * v61;
          v58 = *(_QWORD *)v57;
          --*(_DWORD *)(v37 + 8);
          v59 = (_DWORD *)(v58 + 8 * v54);
          LODWORD(v54) = *(_DWORD *)(v57 + 12);
          *v59 = -1;
          v59[1] = v54;
          --*(_DWORD *)(v57 + 8);
          *(_DWORD *)(v57 + 12) = v56;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v61) = -1;
      }
    }
    v12 += 10;
  }
  while ( v12 != v52 );
LABEL_77:
  result = *(_QWORD *)v37;
  v7 = v37;
LABEL_28:
  if ( result )
  {
    for ( i = result + 40LL * *(unsigned int *)(result - 4); i != result; result += 40 )
    {
      v34 = *(unsigned int *)(result + 32);
      if ( (_DWORD)v34 != -1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * v34) = -1;
    }
  }
LABEL_33:
  if ( a5 )
  {
    result = *(_QWORD *)(a1 + 720);
    v35 = *(unsigned int *)(v7 + 12);
    if ( (*(_BYTE *)(result + 4 * v35 + 3) & 0x40) != 0 )
    {
      v51 = sub_9AD4F0(a1, v35);
      if ( *v51 )
        return sub_A0ACA0(a1, (__int64 *)v7);
      if ( (v51[13] & 1) != 0 )
        return sub_A0ACA0(a1, (__int64 *)v7);
      if ( v51[12] != 1 )
        return sub_A0ACA0(a1, (__int64 *)v7);
      result = (unsigned int)v51[16];
      if ( (_DWORD)result )
        return sub_A0ACA0(a1, (__int64 *)v7);
    }
  }
  return result;
}

