__int64 __fastcall sub_146BBD0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // r15
  __int64 v7; // rax
  int v8; // ebx
  int v9; // ebp
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  const __m128i *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  const __m128i *v23; // rbp
  __m128i *v24; // rax
  char *v25; // rsi
  __int64 v26; // rdx
  __int16 v27; // ax
  unsigned __int16 v28; // cx
  unsigned int v29; // eax
  unsigned __int16 v30; // si
  __int64 v31; // rdx
  unsigned __int16 v32; // cx
  __int64 *v33; // rdi
  __int16 v34; // ax
  __int64 v35; // rsi
  __int16 j; // di
  unsigned __int16 v37; // dx
  __int64 *v38; // rdi
  unsigned __int16 v39; // cx
  unsigned int v40; // eax
  unsigned __int16 v41; // si
  __int64 v42; // rdx
  unsigned __int16 v43; // cx
  unsigned int v44; // eax
  unsigned __int16 v45; // si
  __int64 v46; // rdx
  __int16 i; // ax
  unsigned __int16 v48; // cx
  __int64 *v49; // rdi
  __int64 v50; // rsi
  int v51; // eax
  unsigned int v52; // edx
  unsigned __int16 v53; // cx
  __int64 v54; // rax
  int v55; // edx
  __int64 result; // rax
  __int64 v57; // rsi
  int v58; // eax
  unsigned int v59; // edx
  unsigned __int16 v60; // cx
  __int64 v61; // rax
  int v62; // edx
  unsigned int v63; // ecx
  _WORD *v64; // rax
  unsigned __int16 v65; // cx
  unsigned int v66; // eax
  unsigned __int16 v67; // si
  _WORD *v68; // rdx
  unsigned __int16 v69; // cx
  unsigned int v70; // eax
  unsigned __int16 v71; // si
  __int64 v72; // rdx
  unsigned __int16 v73; // cx
  unsigned int v74; // eax
  unsigned __int16 v75; // si
  _WORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  __int64 v80; // rsi
  unsigned __int64 v81; // rbp
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rax
  unsigned int v85; // eax
  _WORD *v86; // rdx
  int v87; // eax
  __int64 *v88; // rdi
  int v89; // eax
  __int64 *v90; // rdi
  int v91; // eax
  __int64 *v92; // rdi
  __int16 v93; // [rsp+Ch] [rbp-BCh]
  __int16 v94; // [rsp+Eh] [rbp-BAh]
  __int64 v95; // [rsp+18h] [rbp-B0h] BYREF
  _DWORD v96[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+28h] [rbp-A0h]
  int v98; // [rsp+30h] [rbp-98h]
  _BYTE v99[32]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v100; // [rsp+60h] [rbp-68h]
  __int64 v101; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v102; // [rsp+70h] [rbp-58h]
  _DWORD *v103; // [rsp+78h] [rbp-50h]
  int v104; // [rsp+80h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 16);
  v100 = a1;
  v101 = a1;
  v102 = 0;
  v103 = (_DWORD *)(a1 + 2548);
  v104 = 0;
  v5 = sub_154D3C0(a1, &v101, v4);
  v96[1] = 0;
  v98 = 1;
  *v103 += v5;
  v6 = *(_WORD *)(a1 + 92);
  v104 += v5;
  v93 = *(_WORD *)(a1 + 88);
  v94 = *(_WORD *)(a1 + 90);
  v7 = *(_QWORD *)(a2 + 24) + 24LL * *(unsigned int *)(a2 + 32) - 24;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(v7 + 4);
  if ( sub_10CCDE0(*(_WORD *)(v7 + 16)) )
  {
    if ( !v9 )
      v9 = v8;
  }
  else
  {
    v9 += v8;
  }
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(unsigned int *)(a2 + 36);
  v96[0] = v9;
  v12 = *(_QWORD *)(a2 + 24);
  v13 = (const __m128i *)v96;
  v97 = v10;
  v14 = *(unsigned int *)(a2 + 32);
  v15 = v14 + 1;
  v16 = (__m128i *)(v12 + 24 * v14);
  if ( v15 > v11 )
  {
    v82 = a2 + 40;
    v83 = a2 + 24;
    if ( v12 > (unsigned __int64)v96 || v16 <= (__m128i *)v96 )
    {
      sub_2237220(v83, v82, v15, 24);
      v16 = (__m128i *)(*(_QWORD *)(a2 + 24) + 24LL * *(unsigned int *)(a2 + 32));
    }
    else
    {
      sub_2237220(v83, v82, v15, 24);
      v84 = *(_QWORD *)(a2 + 24);
      v13 = (const __m128i *)((char *)v96 + v84 - v12);
      v16 = (__m128i *)(v84 + 24LL * *(unsigned int *)(a2 + 32));
    }
  }
  *v16 = _mm_loadu_si128(v13);
  v17 = v13[1].m128i_i64[0];
  v18 = a1 + 16;
  v16[1].m128i_i64[0] = v17;
  v19 = *(unsigned int *)(a2 + 36);
  v20 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
  v21 = v20 + 1;
  *(_DWORD *)(a2 + 32) = v20;
  if ( v20 + 1 > v19 )
  {
    v79 = *(_QWORD *)(a2 + 24);
    v80 = a2 + 40;
    if ( v79 > v18 || v18 >= v79 + 24 * v20 )
    {
      v23 = (const __m128i *)(a1 + 16);
      sub_2237220(a2 + 24, v80, v21, 24);
      v22 = *(_QWORD *)(a2 + 24);
      v20 = *(unsigned int *)(a2 + 32);
    }
    else
    {
      v81 = v18 - v79;
      sub_2237220(a2 + 24, v80, v21, 24);
      v22 = *(_QWORD *)(a2 + 24);
      v20 = *(unsigned int *)(a2 + 32);
      v23 = (const __m128i *)(v22 + v81);
    }
  }
  else
  {
    v22 = *(_QWORD *)(a2 + 24);
    v23 = (const __m128i *)(a1 + 16);
  }
  v24 = (__m128i *)(v22 + 24 * v20);
  *v24 = _mm_loadu_si128(v23);
  v24[1].m128i_i64[0] = v23[1].m128i_i64[0];
  v25 = *(char **)(a2 + 24);
  v26 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
  *(_DWORD *)(a2 + 32) = v26;
  sub_14368B0(*(_QWORD *)(a1 + 8), v25, v26, 1u, 0, 1u);
  v27 = *(_WORD *)(a1 + 32);
  if ( v27 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_23;
  }
  if ( v27 == 23 )
  {
    v32 = *(_WORD *)(a1 + 88);
    if ( !v32 )
      goto LABEL_23;
    v77 = *(_DWORD *)(a1 + 2792);
    if ( !v77 )
    {
LABEL_170:
      *(_WORD *)(a1 + 88) = v32 - 1;
      goto LABEL_23;
    }
    v78 = *(_QWORD *)(a1 + 2784) + 24LL * v77 - 24;
    while ( 1 )
    {
      if ( v32 == *(_WORD *)(v78 + 14) )
      {
        if ( *(_DWORD *)(v78 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_165;
      }
      else if ( v32 > *(_WORD *)(v78 + 14) )
      {
        goto LABEL_165;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v78 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v78 + 18) )
        goto LABEL_170;
LABEL_165:
      --v77;
      v78 -= 24;
      *(_DWORD *)(a1 + 2792) = v77;
      if ( !v77 )
        goto LABEL_170;
    }
  }
  if ( (unsigned __int16)(v27 - 20) <= 1u )
  {
    v28 = *(_WORD *)(a1 + 90);
    if ( v27 == 20 )
    {
      *(_WORD *)(a1 + 90) = v28 + 1;
    }
    else if ( v28 )
    {
      v29 = *(_DWORD *)(a1 + 2792);
      if ( v29 )
      {
        v30 = *(_WORD *)(a1 + 88);
        v31 = *(_QWORD *)(a1 + 2784) + 24LL * v29 - 24;
        do
        {
          if ( v30 == *(_WORD *)(v31 + 14) )
          {
            if ( *(_DWORD *)(v31 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_15;
          }
          else if ( v30 > *(_WORD *)(v31 + 14) )
          {
            goto LABEL_15;
          }
          if ( *(_WORD *)(v31 + 16) >= v28 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v31 + 18) )
            break;
LABEL_15:
          --v29;
          v31 -= 24;
          *(_DWORD *)(a1 + 2792) = v29;
        }
        while ( v29 );
      }
      *(_WORD *)(a1 + 90) = v28 - 1;
    }
    goto LABEL_23;
  }
  if ( (unsigned __int16)(v27 - 24) <= 1u )
  {
    v69 = *(_WORD *)(a1 + 92);
    if ( v27 == 24 )
    {
      *(_WORD *)(a1 + 92) = v69 + 1;
    }
    else if ( v69 )
    {
      v70 = *(_DWORD *)(a1 + 2792);
      if ( v70 )
      {
        v71 = *(_WORD *)(a1 + 88);
        v72 = *(_QWORD *)(a1 + 2784) + 24LL * v70 - 24;
        do
        {
          if ( v71 == *(_WORD *)(v72 + 14) )
          {
            if ( *(_DWORD *)(v72 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_138;
          }
          else if ( v71 > *(_WORD *)(v72 + 14) )
          {
            goto LABEL_138;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v72 + 16) && *(_WORD *)(v72 + 18) >= v69 )
            break;
LABEL_138:
          --v70;
          v72 -= 24;
          *(_DWORD *)(a1 + 2792) = v70;
        }
        while ( v70 );
      }
      *(_WORD *)(a1 + 92) = v69 - 1;
    }
LABEL_23:
    v33 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v33, (int *)(a1 + 16));
    goto LABEL_24;
  }
  if ( (unsigned __int16)(v27 - 14) <= 1u || (unsigned __int16)(v27 - 17) <= 2u || v27 == 3 || !sub_10CCDE0(v27) )
    goto LABEL_23;
  v87 = *(_DWORD *)(a1 + 20);
  v88 = *(__int64 **)(a1 + 8);
  if ( !v87 )
    v87 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v87;
  sub_14634E0(v88, (int *)(a1 + 16));
LABEL_24:
  sub_146B5E0(&v95, a1, 0x400009u, 1, 0);
  sub_15F3080(v99, *(_QWORD *)(a1 + 96));
  sub_17DE740(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), *(_QWORD *)(a2 + 16), 0, 0);
  v34 = *(_WORD *)(a1 + 32);
  v35 = *(_QWORD *)(a2 + 16);
  if ( v34 == 150 )
  {
    sub_15372E0(a1, v35, &v95);
    goto LABEL_63;
  }
  if ( v34 != 62 )
  {
    sub_187CD10(*(_QWORD *)(a1 + 96), v35);
    goto LABEL_27;
  }
  sub_14A5C50(a1, v35);
  if ( *(_WORD *)(a1 + 32) != 24 )
  {
    if ( v95 )
    {
      sub_1564F70(v95);
      v95 = 0;
    }
    sub_17F10E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(a2 + 16), 0);
LABEL_63:
    for ( i = *(_WORD *)(a1 + 32); i != 1; i = *(_WORD *)(a1 + 32) )
    {
      if ( (unsigned __int16)(i - 22) > 1u )
      {
        if ( (unsigned __int16)(i - 20) > 1u )
        {
          if ( (unsigned __int16)(i - 24) > 1u )
          {
            if ( (unsigned __int16)(i - 14) > 1u && (unsigned __int16)(i - 17) > 2u )
            {
              if ( i == 3 )
              {
                sub_1566D30(a1);
                goto LABEL_63;
              }
              if ( sub_10CCDE0(i) )
              {
                v91 = *(_DWORD *)(a1 + 20);
                v92 = *(__int64 **)(a1 + 8);
                if ( !v91 )
                  v91 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 40) = v91;
                sub_14634E0(v92, (int *)(a1 + 16));
                goto LABEL_63;
              }
            }
          }
          else
          {
            v73 = *(_WORD *)(a1 + 92);
            if ( i == 24 )
            {
              *(_WORD *)(a1 + 92) = v73 + 1;
              goto LABEL_67;
            }
            if ( v73 )
            {
              v74 = *(_DWORD *)(a1 + 2792);
              if ( !v74 )
              {
LABEL_161:
                *(_WORD *)(a1 + 92) = v73 - 1;
                goto LABEL_67;
              }
              v75 = *(_WORD *)(a1 + 88);
              v76 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v74 - 24);
              while ( 2 )
              {
                if ( v75 == v76[7] )
                {
                  if ( *((_DWORD *)v76 + 4) != *(_DWORD *)(a1 + 90) )
                  {
LABEL_159:
                    if ( *(_WORD *)(a1 + 90) <= v76[8] && v76[9] >= v73 )
                      goto LABEL_161;
                  }
                }
                else if ( v75 <= v76[7] )
                {
                  goto LABEL_159;
                }
                --v74;
                v76 -= 12;
                *(_DWORD *)(a1 + 2792) = v74;
                if ( !v74 )
                  goto LABEL_161;
                continue;
              }
            }
          }
        }
        else
        {
          v65 = *(_WORD *)(a1 + 90);
          if ( i == 20 )
          {
            *(_WORD *)(a1 + 90) = v65 + 1;
            goto LABEL_67;
          }
          if ( v65 )
          {
            v66 = *(_DWORD *)(a1 + 2792);
            if ( !v66 )
            {
LABEL_130:
              *(_WORD *)(a1 + 90) = v65 - 1;
              goto LABEL_67;
            }
            v67 = *(_WORD *)(a1 + 88);
            v68 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v66 - 24);
            while ( 2 )
            {
              if ( v67 == v68[7] )
              {
                if ( *((_DWORD *)v68 + 4) != *(_DWORD *)(a1 + 90) )
                {
LABEL_128:
                  if ( v68[8] >= v65 && *(_WORD *)(a1 + 92) <= v68[9] )
                    goto LABEL_130;
                }
              }
              else if ( v67 <= v68[7] )
              {
                goto LABEL_128;
              }
              --v66;
              v68 -= 12;
              *(_DWORD *)(a1 + 2792) = v66;
              if ( !v66 )
                goto LABEL_130;
              continue;
            }
          }
        }
      }
      else
      {
        v48 = *(_WORD *)(a1 + 88);
        if ( i == 22 )
        {
          *(_WORD *)(a1 + 88) = v48 + 1;
          goto LABEL_67;
        }
        if ( v48 )
        {
          v85 = *(_DWORD *)(a1 + 2792);
          if ( !v85 )
          {
LABEL_188:
            *(_WORD *)(a1 + 88) = v48 - 1;
            goto LABEL_67;
          }
          v86 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v85 - 24);
          while ( 2 )
          {
            if ( v86[7] == v48 )
            {
              if ( *((_DWORD *)v86 + 4) != *(_DWORD *)(a1 + 90) )
              {
LABEL_186:
                if ( *(_WORD *)(a1 + 90) <= v86[8] && *(_WORD *)(a1 + 92) <= v86[9] )
                  goto LABEL_188;
              }
            }
            else if ( v86[7] >= v48 )
            {
              goto LABEL_186;
            }
            --v85;
            v86 -= 12;
            *(_DWORD *)(a1 + 2792) = v85;
            if ( !v85 )
              goto LABEL_188;
            continue;
          }
        }
      }
LABEL_67:
      v49 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v49, (int *)(a1 + 16));
    }
    v50 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(a1 + 24) == v50 )
    {
      sub_146AA30(a1);
      v50 = *(_QWORD *)(a2 + 16);
    }
    if ( v50 )
    {
      v51 = *(_BYTE *)(v50 + 28) & 0x7F;
      if ( (unsigned int)(v51 - 34) <= 5 && ((unsigned int)(v51 - 35) <= 3 || *(char *)(v50 + 30) < 0) )
        sub_17A59F0(*(_QWORD *)(a1 + 96));
    }
    sub_15F30C0(v99);
    if ( v95 )
      sub_1564F70(v95);
    v52 = *(_DWORD *)(a1 + 2792);
    if ( !v52 )
    {
LABEL_85:
      *(_WORD *)(a1 + 92) = v6;
      v55 = v104;
      *(_WORD *)(a1 + 88) = v93;
      *(_WORD *)(a1 + 90) = v94;
      *v103 -= v55;
      for ( result = v102; v102; --v102 )
        result = sub_1564F70(v101);
      return result;
    }
    v53 = *(_WORD *)(a1 + 88);
    v54 = *(_QWORD *)(a1 + 2784) + 24LL * v52 - 24;
    while ( 1 )
    {
      if ( v53 == *(_WORD *)(v54 + 14) )
      {
        if ( *(_DWORD *)(v54 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_80;
      }
      else if ( v53 > *(_WORD *)(v54 + 14) )
      {
        goto LABEL_80;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v54 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v54 + 18) )
        goto LABEL_85;
LABEL_80:
      --v52;
      v54 -= 24;
      *(_DWORD *)(a1 + 2792) = v52;
      if ( !v52 )
        goto LABEL_85;
    }
  }
LABEL_27:
  sub_153D670(a1, *(_QWORD *)(a2 + 16), &v95);
  for ( j = *(_WORD *)(a1 + 32); j != 1; j = *(_WORD *)(a1 + 32) )
  {
    if ( (unsigned __int16)(j - 22) <= 1u )
    {
      v37 = *(_WORD *)(a1 + 88);
      if ( j == 22 )
      {
        *(_WORD *)(a1 + 88) = v37 + 1;
      }
      else if ( v37 )
      {
        v63 = *(_DWORD *)(a1 + 2792);
        if ( !v63 )
        {
LABEL_115:
          *(_WORD *)(a1 + 88) = v37 - 1;
          goto LABEL_31;
        }
        v64 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v63 - 24);
        while ( 2 )
        {
          if ( v64[7] == v37 )
          {
            if ( *((_DWORD *)v64 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_113:
              if ( *(_WORD *)(a1 + 90) <= v64[8] && *(_WORD *)(a1 + 92) <= v64[9] )
                goto LABEL_115;
            }
          }
          else if ( v64[7] >= v37 )
          {
            goto LABEL_113;
          }
          --v63;
          v64 -= 12;
          *(_DWORD *)(a1 + 2792) = v63;
          if ( !v63 )
            goto LABEL_115;
          continue;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)(j - 20) <= 1u )
      {
        v39 = *(_WORD *)(a1 + 90);
        if ( j == 20 )
        {
          *(_WORD *)(a1 + 90) = v39 + 1;
        }
        else if ( v39 )
        {
          v40 = *(_DWORD *)(a1 + 2792);
          if ( v40 )
          {
            v41 = *(_WORD *)(a1 + 88);
            v42 = *(_QWORD *)(a1 + 2784) + 24LL * v40 - 24;
            do
            {
              if ( v41 == *(_WORD *)(v42 + 14) )
              {
                if ( *(_DWORD *)(v42 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_40;
              }
              else if ( v41 > *(_WORD *)(v42 + 14) )
              {
                goto LABEL_40;
              }
              if ( *(_WORD *)(v42 + 16) >= v39 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v42 + 18) )
                break;
LABEL_40:
              --v40;
              v42 -= 24;
              *(_DWORD *)(a1 + 2792) = v40;
            }
            while ( v40 );
          }
          *(_WORD *)(a1 + 90) = v39 - 1;
        }
        goto LABEL_31;
      }
      if ( (unsigned __int16)(j - 24) > 1u )
      {
        if ( (unsigned __int16)(j - 14) > 1u && (unsigned __int16)(j - 17) > 2u )
        {
          if ( j == 3 )
          {
            sub_1566D30(a1);
            continue;
          }
          if ( sub_10CCDE0(j) )
          {
            v89 = *(_DWORD *)(a1 + 20);
            v90 = *(__int64 **)(a1 + 8);
            if ( !v89 )
              v89 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v89;
            sub_14634E0(v90, (int *)(a1 + 16));
            continue;
          }
        }
      }
      else
      {
        v43 = *(_WORD *)(a1 + 92);
        if ( j == 24 )
        {
          *(_WORD *)(a1 + 92) = v43 + 1;
        }
        else if ( v43 )
        {
          v44 = *(_DWORD *)(a1 + 2792);
          if ( v44 )
          {
            v45 = *(_WORD *)(a1 + 88);
            v46 = *(_QWORD *)(a1 + 2784) + 24LL * v44 - 24;
            do
            {
              if ( v45 == *(_WORD *)(v46 + 14) )
              {
                if ( *(_DWORD *)(v46 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_53;
              }
              else if ( v45 > *(_WORD *)(v46 + 14) )
              {
                goto LABEL_53;
              }
              if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v46 + 16) && *(_WORD *)(v46 + 18) >= v43 )
                break;
LABEL_53:
              --v44;
              v46 -= 24;
              *(_DWORD *)(a1 + 2792) = v44;
            }
            while ( v44 );
          }
          *(_WORD *)(a1 + 92) = v43 - 1;
        }
      }
    }
LABEL_31:
    v38 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v38, (int *)(a1 + 16));
  }
  v57 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a1 + 24) == v57 )
  {
    sub_146AA30(a1);
    v57 = *(_QWORD *)(a2 + 16);
  }
  if ( v57 )
  {
    v58 = *(_BYTE *)(v57 + 28) & 0x7F;
    if ( (unsigned int)(v58 - 34) <= 5 && ((unsigned int)(v58 - 35) <= 3 || *(char *)(v57 + 30) < 0) )
      sub_17A59F0(*(_QWORD *)(a1 + 96));
  }
  sub_15F30C0(v99);
  if ( v95 )
    sub_1564F70(v95);
  v59 = *(_DWORD *)(a1 + 2792);
  if ( v59 )
  {
    v60 = *(_WORD *)(a1 + 88);
    v61 = *(_QWORD *)(a1 + 2784) + 24LL * v59 - 24;
    do
    {
      if ( v60 == *(_WORD *)(v61 + 14) )
      {
        if ( *(_DWORD *)(v61 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_99;
      }
      else if ( v60 > *(_WORD *)(v61 + 14) )
      {
        goto LABEL_99;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v61 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v61 + 18) )
        break;
LABEL_99:
      --v59;
      v61 -= 24;
      *(_DWORD *)(a1 + 2792) = v59;
    }
    while ( v59 );
  }
  v62 = v104;
  *(_WORD *)(a1 + 92) = v6;
  *(_WORD *)(a1 + 88) = v93;
  *(_WORD *)(a1 + 90) = v94;
  result = (__int64)v103;
  for ( *v103 -= v62; v102; --v102 )
    result = sub_1564F70(v101);
  return result;
}
