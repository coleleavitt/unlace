unsigned __int64 __fastcall sub_14F8800(__int64 *a1, unsigned int a2)
{
  int v3; // r9d
  __int64 v4; // r13
  __int64 v5; // r12
  int v6; // esi
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __m128i *v16; // rdi
  const __m128i *v17; // rcx
  __m128i v18; // xmm0
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  const __m128i *v24; // rdx
  __m128i v25; // xmm1
  __m128i *v26; // rcx
  __int64 v27; // rdx
  char *v28; // rsi
  __int16 v29; // ax
  unsigned __int16 v30; // cx
  int v31; // esi
  unsigned __int16 v32; // cx
  unsigned int v33; // eax
  unsigned __int16 v34; // di
  __int64 v35; // rdx
  unsigned __int16 v36; // cx
  unsigned int v37; // eax
  unsigned __int16 v38; // di
  _WORD *v39; // rdx
  unsigned int v40; // edx
  _WORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 result; // rax
  _QWORD *v46; // rbx
  _QWORD *i; // r12
  unsigned __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdi
  unsigned __int64 v52; // rbx
  bool v53; // cc
  __int64 v54; // rdx
  int v55; // eax
  __int64 *v56; // rdi
  __int64 *v57; // rdi
  __int64 v58; // [rsp-10h] [rbp-C8h]
  __int64 v60; // [rsp+20h] [rbp-98h]
  __int64 v61; // [rsp+20h] [rbp-98h]
  __int64 v62; // [rsp+28h] [rbp-90h]
  __int64 v63; // [rsp+28h] [rbp-90h]
  __int64 v64; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v65[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v66; // [rsp+48h] [rbp-70h]
  int v67; // [rsp+50h] [rbp-68h]
  _BYTE v68[88]; // [rsp+60h] [rbp-58h] BYREF

  sub_1A9F820(*(_QWORD *)(*(_QWORD *)(*a1 + 96) + 736LL), *(_QWORD *)(*(_QWORD *)(*a1 + 96) + 608LL), a1[1], a2);
  v4 = *a1;
  if ( *((_DWORD *)a1 + 8) )
  {
    v5 = 0;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1[3] + 8 * v5);
      v9 = *(_QWORD *)(v8 + 16);
      if ( !v9 || (*(_BYTE *)(v9 + 28) & 0x7F) == 0x12 )
        break;
LABEL_12:
      if ( ++v5 >= (unsigned __int64)*((unsigned int *)a1 + 8) )
        goto LABEL_64;
    }
    v10 = *(unsigned int *)(v8 + 32);
    v11 = *(_DWORD *)(v4 + 16);
    v66 = *(_QWORD *)(v8 + 16);
    v12 = v8 + 24;
    v13 = *(_QWORD *)(v8 + 24);
    v14 = *(unsigned int *)(v8 + 36);
    v65[1] = 0;
    v15 = v10 + 1;
    v65[0] = v11;
    v16 = (__m128i *)(v13 + 24 * v10);
    v67 = 1;
    v17 = (const __m128i *)v65;
    if ( v15 <= v14 )
    {
LABEL_16:
      v18 = _mm_loadu_si128(v17);
      v19 = v4 + 16;
      *v16 = v18;
      v16[1].m128i_i64[0] = v17[1].m128i_i64[0];
      v20 = *(unsigned int *)(v8 + 36);
      v21 = (unsigned int)(*(_DWORD *)(v8 + 32) + 1);
      v22 = v21 + 1;
      *(_DWORD *)(v8 + 32) = v21;
      if ( v21 + 1 > v20 )
      {
        v48 = *(_QWORD *)(v8 + 24);
        v49 = v8 + 40;
        if ( v48 > v19 || v19 >= v48 + 24 * v21 )
        {
          v60 = v8;
          sub_2237220(v12, v49, v22, 24);
          v8 = v60;
          v24 = (const __m128i *)(v4 + 16);
          v23 = *(_QWORD *)(v60 + 24);
          v21 = *(unsigned int *)(v60 + 32);
        }
        else
        {
          v62 = v8;
          sub_2237220(v12, v49, v22, 24);
          v8 = v62;
          v23 = *(_QWORD *)(v62 + 24);
          v24 = (const __m128i *)(v23 + v19 - v48);
          v21 = *(unsigned int *)(v62 + 32);
        }
      }
      else
      {
        v23 = *(_QWORD *)(v8 + 24);
        v24 = (const __m128i *)(v4 + 16);
      }
      v25 = _mm_loadu_si128(v24);
      v26 = (__m128i *)(v23 + 24 * v21);
      *v26 = v25;
      v26[1].m128i_i64[0] = v24[1].m128i_i64[0];
      v27 = (unsigned int)(*(_DWORD *)(v8 + 32) + 1);
      v28 = *(char **)(v8 + 24);
      *(_DWORD *)(v8 + 32) = v27;
      sub_14368B0(*(_QWORD *)(v4 + 8), v28, v27, 1u, 0, 1u);
      sub_149F520(v4, 1);
      sub_146B5E0(&v64, v4, 0x400809u, 1, 0);
      sub_15F3080(v68, *(_QWORD *)(v4 + 96));
      sub_18A40F0(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 736LL), *(_QWORD *)(*(_QWORD *)(v4 + 96) + 608LL), v9);
      v29 = *(_WORD *)(v4 + 32);
      if ( v29 == 150 )
      {
        sub_15372E0(v4, v9, &v64);
      }
      else
      {
        if ( v29 == 62 )
          sub_14A5C50(v4, v9, v18, *(double *)v25.m128i_i64);
        else
          sub_187CD10(*(_QWORD *)(v4 + 96), v9);
        sub_153D670(v4, v9, &v64);
      }
      v6 = *(_DWORD *)(v4 + 16);
      if ( v11 == v6 || !sub_10246C0(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL), v6, v11) )
      {
        v7 = *(_WORD *)(v4 + 32);
LABEL_8:
        if ( v7 == 1 )
        {
LABEL_52:
          if ( v9 == *(_QWORD *)(v4 + 24) )
            sub_149F520(v4, 0);
        }
        sub_15F30C0(v68);
        if ( v64 )
          sub_1564F70(v64);
        v4 = *a1;
        goto LABEL_12;
      }
      while ( 1 )
      {
        v31 = *(_DWORD *)(v4 + 16);
        v7 = *(_WORD *)(v4 + 32);
        if ( v11 == v31 )
          goto LABEL_8;
        if ( v7 == 1 )
          goto LABEL_52;
        if ( (unsigned __int16)(v7 - 22) <= 1u )
        {
          v30 = *(_WORD *)(v4 + 88);
          if ( v7 == 22 )
          {
            *(_WORD *)(v4 + 88) = v30 + 1;
            goto LABEL_23;
          }
          if ( !v30 )
            goto LABEL_23;
          v40 = *(_DWORD *)(v4 + 2792);
          if ( !v40 )
          {
LABEL_62:
            *(_WORD *)(v4 + 88) = v30 - 1;
            goto LABEL_23;
          }
          v41 = (_WORD *)(*(_QWORD *)(v4 + 2784) + 24LL * v40 - 24);
          while ( 2 )
          {
            if ( v41[7] == v30 )
            {
              if ( *((_DWORD *)v41 + 4) != *(_DWORD *)(v4 + 90) )
              {
LABEL_60:
                if ( *(_WORD *)(v4 + 90) <= v41[8] && *(_WORD *)(v4 + 92) <= v41[9] )
                  goto LABEL_62;
              }
            }
            else if ( v41[7] >= v30 )
            {
              goto LABEL_60;
            }
            --v40;
            v41 -= 12;
            *(_DWORD *)(v4 + 2792) = v40;
            if ( !v40 )
              goto LABEL_62;
            continue;
          }
        }
        if ( (unsigned __int16)(v7 - 20) <= 1u )
          break;
        if ( (unsigned __int16)(v7 - 24) > 1u )
        {
          if ( (unsigned __int16)(v7 - 14) <= 1u || (unsigned __int16)(v7 - 17) <= 2u )
            goto LABEL_23;
          if ( v7 == 3 )
          {
            sub_1566D30(v4);
          }
          else if ( sub_10CCDE0(v7) )
          {
            v55 = *(_DWORD *)(v4 + 20);
            v56 = *(__int64 **)(v4 + 8);
            if ( !v55 )
              v55 = *(_DWORD *)(v4 + 16);
            *(_DWORD *)(v4 + 40) = v55;
            sub_14634E0(v56, (int *)(v4 + 16));
          }
          else
          {
            v57 = *(__int64 **)(v4 + 8);
            *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
            sub_14634E0(v57, (int *)(v4 + 16));
          }
        }
        else
        {
          v36 = *(_WORD *)(v4 + 92);
          if ( v7 != 24 )
          {
            if ( !v36 )
              goto LABEL_23;
            v37 = *(_DWORD *)(v4 + 2792);
            if ( !v37 )
            {
LABEL_51:
              *(_WORD *)(v4 + 92) = v36 - 1;
              goto LABEL_23;
            }
            v38 = *(_WORD *)(v4 + 88);
            v39 = (_WORD *)(*(_QWORD *)(v4 + 2784) + 24LL * v37 - 24);
            while ( 2 )
            {
              if ( v38 == v39[7] )
              {
                if ( *((_DWORD *)v39 + 4) != *(_DWORD *)(v4 + 90) )
                {
LABEL_49:
                  if ( *(_WORD *)(v4 + 90) <= v39[8] && v36 <= v39[9] )
                    goto LABEL_51;
                }
              }
              else if ( v38 <= v39[7] )
              {
                goto LABEL_49;
              }
              --v37;
              v39 -= 12;
              *(_DWORD *)(v4 + 2792) = v37;
              if ( !v37 )
                goto LABEL_51;
              continue;
            }
          }
          *(_WORD *)(v4 + 92) = v36 + 1;
LABEL_23:
          *(_DWORD *)(v4 + 40) = v31;
          sub_14634E0(*(__int64 **)(v4 + 8), (int *)(v4 + 16));
        }
      }
      v32 = *(_WORD *)(v4 + 90);
      if ( v7 == 20 )
      {
        *(_WORD *)(v4 + 90) = v32 + 1;
      }
      else if ( v32 )
      {
        v33 = *(_DWORD *)(v4 + 2792);
        if ( v33 )
        {
          v34 = *(_WORD *)(v4 + 88);
          v35 = *(_QWORD *)(v4 + 2784) + 24LL * v33 - 24;
          do
          {
            if ( v34 == *(_WORD *)(v35 + 14) )
            {
              if ( *(_DWORD *)(v35 + 16) == *(_DWORD *)(v4 + 90) )
                goto LABEL_33;
            }
            else if ( v34 > *(_WORD *)(v35 + 14) )
            {
              goto LABEL_33;
            }
            if ( v32 <= *(_WORD *)(v35 + 16) && *(_WORD *)(v4 + 92) <= *(_WORD *)(v35 + 18) )
              break;
LABEL_33:
            --v33;
            v35 -= 24;
            *(_DWORD *)(v4 + 2792) = v33;
          }
          while ( v33 );
        }
        *(_WORD *)(v4 + 90) = v32 - 1;
      }
      goto LABEL_23;
    }
    v50 = v8 + 40;
    if ( v13 <= (unsigned __int64)v65 )
    {
      v53 = v16 <= (__m128i *)v65;
      v63 = v8;
      v51 = v8 + 24;
      v61 = v8 + 24;
      if ( !v53 )
      {
        sub_2237220(v51, v50, v15, 24);
        v8 = v63;
        v12 = v61;
        v54 = *(_QWORD *)(v63 + 24);
        v17 = (const __m128i *)((char *)v65 + v54 - v13);
        v16 = (__m128i *)(v54 + 24LL * *(unsigned int *)(v63 + 32));
        goto LABEL_16;
      }
    }
    else
    {
      v63 = v8;
      v51 = v8 + 24;
      v61 = v8 + 24;
    }
    sub_2237220(v51, v50, v15, 24);
    v8 = v63;
    v12 = v61;
    v16 = (__m128i *)(*(_QWORD *)(v63 + 24) + 24LL * *(unsigned int *)(v63 + 32));
    v17 = (const __m128i *)v65;
    goto LABEL_16;
  }
LABEL_64:
  v42 = *(_QWORD *)(v4 + 96);
  v43 = *(_QWORD *)(v42 + 608);
  sub_18AB010(*(_QWORD *)(v42 + 736), v43, a2, 0, 0, v3, 0, 0);
  v44 = v58;
  if ( *((_BYTE *)a1 + 16) )
  {
    result = *((unsigned int *)a1 + 8);
    v52 = 0;
    if ( !(_DWORD)result )
      goto LABEL_70;
    do
    {
      v43 = *(_QWORD *)(a1[3] + 8 * v52++);
      sub_14F8460(*a1, v43, 0);
      result = *((unsigned int *)a1 + 8);
    }
    while ( v52 < result );
  }
  else
  {
    result = *((unsigned int *)a1 + 8);
  }
  v46 = (_QWORD *)a1[3];
  for ( i = &v46[result]; v46 != i; ++v46 )
  {
    if ( *v46 )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v46 + 8LL))(*v46, v43, v44);
  }
LABEL_70:
  *((_DWORD *)a1 + 8) = 0;
  *((_BYTE *)a1 + 104) = 1;
  return result;
}
