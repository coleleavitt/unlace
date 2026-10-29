_DWORD *__fastcall sub_ACF4A0(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  int v5; // edx
  char *v6; // r12
  char *v7; // r13
  __int64 v8; // rbp
  bool v9; // zf
  __int64 v10; // rax
  int v11; // edi
  _DWORD **v12; // rcx
  unsigned int v13; // edx
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  _DWORD **v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbx
  __m128 *v21; // rsi
  __int64 *v22; // rax
  __m128i v23; // xmm1
  unsigned __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // esi
  __int64 *v29; // rcx
  unsigned int v30; // edx
  __int64 *v31; // r8
  __int64 v32; // rdx
  __int64 *v33; // rdi
  __int64 *i; // rax
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int16 v37; // r8
  __int64 v38; // r14
  _DWORD *v39; // rsi
  __int64 v40; // r13
  unsigned int v41; // ebp
  __int64 v42; // rcx
  __int16 j; // dx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm1
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // edi
  _DWORD **v53; // rcx
  unsigned int v54; // edx
  _DWORD *v55; // rsi
  __int64 v56; // rdx
  _DWORD **v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // rbp
  _QWORD *v61; // rax
  __int64 v62; // rsi
  __m128i v63; // xmm0
  _QWORD *v64; // r13
  __int64 v65; // rdi
  __int16 v66; // [rsp+0h] [rbp-78h]
  __int64 v67; // [rsp+18h] [rbp-60h] BYREF
  __int64 v68; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v69; // [rsp+28h] [rbp-50h] BYREF
  __int64 *v70; // [rsp+30h] [rbp-48h] BYREF
  __int64 v71; // [rsp+38h] [rbp-40h]

  result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !result || (v5 = *result) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 392);
    v70 = *(__int64 **)(a2 + 16);
    sub_656920(v18 + 40, &v70);
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !result || (v5 = *result, *result == -1) )
    {
      v19 = *(unsigned int *)(a2 + 24);
      v20 = 0;
      if ( !(_DWORD)v19 )
        return result;
      while ( 1 )
      {
        v25 = *(_QWORD *)(a2 + 8 * v20 + 32);
        if ( *(_WORD *)(v25 + 4) == 1 )
        {
          v45 = sub_186B270(0x20u);
          v46 = *(_QWORD *)(a1 + 8);
          v47 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 16));
          v48 = (_QWORD *)v45;
          v49 = *(_QWORD *)(a2 + 16);
          *v48 = off_1C56870;
          v50 = *(_QWORD *)(a1 + 392);
          v48[1] = v46;
          v48[2] = v49;
          v48[3] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), v47).m128i_u64[0];
          result = (_DWORD *)sub_ACE600(v50, v48);
        }
        else
        {
          v26 = *(_QWORD *)(a1 + 8);
          v70 = nullptr;
          v71 = v26;
          if ( !(unsigned __int8)sub_13926A0(a1 + 16, v25, &v69, &v67, &v70) || (_BYTE)v69 )
          {
            v9 = *(_WORD *)(v25 + 4) == 0;
            v68 = v25;
            if ( !v9 || (*(_BYTE *)(v25 + 30) & 1) == 0 )
            {
              v27 = *(unsigned int *)(a1 + 408);
              v28 = *(_DWORD *)(v25 + 12);
              v29 = *(__int64 **)(a1 + 400);
              v30 = v27 - 1;
              v27 *= 8;
              v31 = (__int64 *)((char *)v29 + v27);
              v32 = 8LL * (v28 & v30);
              v33 = &v29[(unsigned __int64)v32 / 8];
              if ( v32 != v27 )
              {
                for ( i = &v29[(unsigned __int64)v32 / 8]; v31 != i; ++i )
                {
                  v35 = *i;
                  if ( (unsigned __int64)*i > 1 )
                  {
                    if ( *(_DWORD *)(v35 + 12) == v28 && v25 == v35 )
                      goto LABEL_40;
                  }
                  else if ( !v35 )
                  {
                    goto LABEL_39;
                  }
                }
              }
              for ( ; v33 != v29; ++v29 )
              {
                v44 = *v29;
                if ( (unsigned __int64)*v29 > 1 )
                {
                  if ( *(_DWORD *)(v44 + 12) == v28 && v25 == v44 )
                    goto LABEL_40;
                }
                else if ( !v44 )
                {
                  break;
                }
              }
LABEL_39:
              sub_AC8490((_QWORD *)(a1 + 456), &v68);
              v69 = (__int64 *)v25;
              sub_4A3CA0(a1 + 400, &v69);
            }
LABEL_40:
            result = (_DWORD *)sub_AC6F60((__int64)v70, v71);
          }
          else
          {
            v21 = (__m128 *)sub_186B270(0x30u);
            v22 = v70;
            v23 = _mm_cvtsi32_si128(*(_DWORD *)(v67 + 16));
            v24 = *(_QWORD *)(a2 + 16);
            v21->m128_u64[1] = *(_QWORD *)(a1 + 8);
            v21->m128_u64[0] = (unsigned __int64)&off_1C568C8;
            v21[1].m128_u64[0] = v24;
            v21[1].m128_u64[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), v23).m128i_u64[0];
            v21[2] = _mm_loadh_ps((const double *)(a1 + 8));
            if ( v22 )
              ++*((_DWORD *)v22 + 2);
            sub_ACE600(*(_QWORD *)(a1 + 392), v21);
            result = (_DWORD *)sub_AC6F60((__int64)v70, v71);
          }
        }
        if ( ++v20 == v19 )
          return result;
      }
    }
  }
  else if ( *(_WORD *)(a2 + 4) )
  {
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 336) != v5 || result[1] != 1 )
  {
LABEL_5:
    v6 = (char *)(a2 + 32);
    result = (_DWORD *)(8LL * *(unsigned int *)(a2 + 24));
    v7 = (char *)result + a2 + 32;
    if ( result )
      goto LABEL_6;
    return result;
  }
  v36 = *(_QWORD *)(a2 + 32);
  v37 = *(_WORD *)(v36 + 4);
  if ( v37 || (*(_BYTE *)(v36 + 30) & 1) == 0 )
  {
    v66 = *(_WORD *)(v36 + 4);
    result = (_DWORD *)sub_ACD3D0(a1, *(_QWORD *)(a2 + 32));
    v37 = v66;
    if ( (_BYTE)result )
    {
      v38 = *(unsigned int *)(a2 + 24);
      v39 = (_DWORD *)(a2 + 32);
      v40 = 2 * v38;
      v41 = *(_DWORD *)(a2 + 24);
      v42 = a2 + 32 + 8 * v38;
      if ( 8 * v38 )
        goto LABEL_53;
LABEL_71:
      v69 = (__int64 *)v36;
      if ( v37 )
        goto LABEL_73;
      goto LABEL_72;
    }
    goto LABEL_5;
  }
  v38 = *(unsigned int *)(a2 + 24);
  v39 = (_DWORD *)(a2 + 32);
  v40 = 2 * v38;
  v41 = *(_DWORD *)(a2 + 24);
  v42 = a2 + 32 + 8 * v38;
  if ( !(8 * v38) )
  {
    v69 = *(__int64 **)(a2 + 32);
LABEL_72:
    if ( (*(_BYTE *)(v36 + 30) & 1) != 0 )
    {
LABEL_81:
      if ( v41 > 1 )
      {
        v59 = 1;
        do
        {
          v60 = *(_QWORD *)(a2 + 8 * v59 + 32);
          if ( *(_WORD *)(v60 + 4) == 1 )
          {
            v61 = (_QWORD *)sub_186B270(0x30u);
            v62 = *(_QWORD *)(a1 + 8);
            v63 = _mm_cvtsi32_si128(*(_DWORD *)(v60 + 16));
            v64 = v61;
            v61[1] = v62;
            *v61 = off_1C56920;
            sub_1684300(v61 + 2, v62);
            v64[4] = a2;
            v65 = *(_QWORD *)(a1 + 392);
            v64[5] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), v63).m128i_u64[0];
            result = (_DWORD *)sub_ACE600(v65, v64);
          }
          ++v59;
        }
        while ( v59 != v38 );
      }
      return result;
    }
LABEL_73:
    v51 = *(unsigned int *)(a1 + 408);
    v52 = *(_DWORD *)(v36 + 12);
    v53 = *(_DWORD ***)(a1 + 400);
    v54 = v51 - 1;
    v51 *= 8;
    v55 = (_DWORD *)((char *)v53 + v51);
    v56 = 8LL * (v52 & v54);
    v57 = &v53[(unsigned __int64)v56 / 8];
    if ( v56 != v51 )
    {
      for ( result = &v53[(unsigned __int64)v56 / 8]; v55 != result; result += 2 )
      {
        v58 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v58 + 12) == v52 && v36 == v58 )
            goto LABEL_81;
        }
        else if ( !v58 )
        {
          goto LABEL_80;
        }
      }
    }
    for ( ; v57 != v53; ++v53 )
    {
      result = *v53;
      if ( (unsigned __int64)*v53 > 1 )
      {
        if ( result[3] == v52 && (_DWORD *)v36 == result )
          goto LABEL_81;
      }
      else if ( !result )
      {
        break;
      }
    }
LABEL_80:
    sub_AC8490((_QWORD *)(a1 + 456), &v69);
    v70 = (__int64 *)v36;
    result = sub_4A3CA0(a1 + 400, &v70);
    goto LABEL_81;
  }
LABEL_53:
  result = v39;
  for ( j = v37; !j; j = *(_WORD *)(*(_QWORD *)result + 4LL) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)result + 30LL) & 1) == 0 )
      goto LABEL_56;
LABEL_67:
    result += 2;
    if ( (_DWORD *)v42 == result )
      goto LABEL_71;
  }
  if ( j == 1 )
    goto LABEL_67;
LABEL_56:
  v6 = (char *)v39;
  v7 = (char *)&v39[v40];
  do
  {
LABEL_6:
    v8 = *(_QWORD *)v6;
    v9 = *(_WORD *)(*(_QWORD *)v6 + 4LL) == 0;
    v69 = *(__int64 **)v6;
    if ( !v9 || (*(_BYTE *)(v8 + 30) & 1) == 0 )
    {
      v10 = *(unsigned int *)(a1 + 408);
      v11 = *(_DWORD *)(v8 + 12);
      v12 = *(_DWORD ***)(a1 + 400);
      v13 = v10 - 1;
      v10 *= 8;
      v14 = (_DWORD *)((char *)v12 + v10);
      v15 = 8LL * (v11 & v13);
      v16 = &v12[(unsigned __int64)v15 / 8];
      if ( v15 != v10 )
      {
        for ( result = &v12[(unsigned __int64)v15 / 8]; v14 != result; result += 2 )
        {
          v17 = *(_QWORD *)result;
          if ( *(_QWORD *)result > 1u )
          {
            if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
              goto LABEL_16;
          }
          else if ( !v17 )
          {
            goto LABEL_15;
          }
        }
      }
      for ( ; v16 != v12; ++v12 )
      {
        result = *v12;
        if ( (unsigned __int64)*v12 > 1 )
        {
          if ( result[3] == v11 && (_DWORD *)v8 == result )
            goto LABEL_16;
        }
        else if ( !result )
        {
          break;
        }
      }
LABEL_15:
      sub_AC8490((_QWORD *)(a1 + 456), &v69);
      v70 = (__int64 *)v8;
      result = sub_4A3CA0(a1 + 400, &v70);
    }
LABEL_16:
    v6 += 8;
  }
  while ( v7 != v6 );
  return result;
}

