__int64 __fastcall sub_201800(_QWORD *a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  int v8; // eax
  unsigned int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v28; // rax
  unsigned __int64 *v29; // rsi
  __int64 v30; // rdi
  __m128i v31; // xmm0
  int v32; // r12d
  __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // r12d
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r12
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  int v41; // r12d
  _DWORD *v42; // r13
  __int64 v43; // rdx
  _DWORD *v44; // rax
  char v45; // al
  __int64 v47[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v49; // [rsp+38h] [rbp-E0h]
  __int64 v50[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v52; // [rsp+68h] [rbp-B0h]
  __int64 v53; // [rsp+80h] [rbp-98h] BYREF
  __int128 v54; // [rsp+88h] [rbp-90h] BYREF
  __int128 v55; // [rsp+98h] [rbp-80h]
  __int128 v56; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v57; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v58; // [rsp+D8h] [rbp-40h]

  v5 = *(int *)(a1[9] + 44LL);
  v58 = __readfsqword(0x28u);
  v6 = a1[1];
  v7 = *(_QWORD *)(v6 + 432) + 104 * v5;
  v8 = *(_DWORD *)(v7 + 24);
  if ( (v8 & 0x40) != 0 )
    return 0;
  if ( (v8 & 0x100) == 0 )
    goto LABEL_5;
  v11 = *(unsigned __int8 *)(v6 + 320);
  if ( (_BYTE)v11 )
    return 0;
  if ( (v8 & 0x8000) != 0 )
    return v11;
LABEL_5:
  v12 = a1[2];
  v47[0] = 0;
  v47[1] = 0;
  v48 = 0;
  v49 = 0;
  sub_123420(v12, v47, a2, 0);
  v13 = a1[1];
  v50[0] = 0;
  v50[1] = 0;
  v51 = 0;
  v52 = 0;
  sub_1BE600(v7, v13, v50, 0);
  sub_5FBC0(v47, v50, v14, v15, v16, v17);
  sub_3123A0(&v48, &v51);
  v21 = *(unsigned int *)(v7 + 92);
  if ( (_DWORD)v21 )
    goto LABEL_22;
  v22 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)v22 == 2 )
  {
    v43 = *(_QWORD *)(v22 + 8);
    v44 = *(_DWORD **)v43;
    v19 = *(_QWORD *)v43 + 24LL * *(_QWORD *)(v43 + 8);
    if ( *(_QWORD *)v43 == v19 )
      goto LABEL_8;
    while ( (unsigned int)(*v44 - 3) > 1 )
    {
      v44 += 6;
      if ( (_DWORD *)v19 == v44 )
        goto LABEL_8;
    }
LABEL_57:
    if ( (unsigned int)sub_1BE780((_DWORD *)v22) != -1 )
      goto LABEL_19;
    goto LABEL_8;
  }
  if ( (unsigned int)(*(_DWORD *)v22 - 3) <= 1 )
    goto LABEL_57;
LABEL_8:
  v23 = a1[1];
  v18 = *(unsigned int *)(v23 + 792);
  if ( (_DWORD)v18 )
  {
    v24 = *(_DWORD *)(a1[9] + 44LL);
    if ( (int)v18 > v24 && a3 != -1 )
      goto LABEL_19;
    if ( (int)v18 > 0 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v24 != (_DWORD)v25 )
        {
          v53 = 0;
          v55 = 0;
          v54 = 0u;
          sub_1BE600(*(_QWORD *)(v23 + 432) + 104 * v25, v23, &v53, 0);
          if ( (unsigned __int8)sub_5FD00(&v53, v47) )
          {
            v26 = *((_QWORD *)&v54 + 1);
LABEL_16:
            if ( v26 )
            {
              *(_QWORD *)&v55 = 0;
              qfree(v26);
            }
            qfree(v53);
            goto LABEL_19;
          }
          v45 = sub_312BB0((char *)&v54 + 8, &v48);
          v26 = *((_QWORD *)&v54 + 1);
          if ( v45 )
            goto LABEL_16;
          if ( *((_QWORD *)&v54 + 1) )
          {
            *(_QWORD *)&v55 = 0;
            qfree(*((_QWORD *)&v54 + 1));
          }
          qfree(v53);
          v23 = a1[1];
        }
        if ( *(_DWORD *)(v23 + 792) <= (int)++v25 )
          break;
        v24 = *(_DWORD *)(a1[9] + 44LL);
      }
    }
  }
LABEL_22:
  sub_5FBC0(v47, a1 + 18, v18, v19, v21, v20);
  sub_3123A0(&v48, a1 + 20);
  if ( (unsigned __int8)sub_5FE00(v47) && !(_QWORD)v49 )
    goto LABEL_24;
  v57 = 0u;
  v56 = 0;
  v28 = operator new(0x18u);
  *(_QWORD *)v28 = v47;
  v29 = (unsigned __int64 *)a1[8];
  *(_QWORD *)(v28 + 8) = v7;
  v30 = a1[1];
  v31 = _mm_loadl_epi64((const __m128i *)&off_4B2888);
  *(_DWORD *)(v28 + 16) = a3;
  *(_QWORD *)&v56 = v28;
  v57 = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)sub_1FC300);
  v32 = sub_1FC6C0(v30, v29, v47, (__int64)&v56);
  if ( v57.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v57.m128i_i64[0])(&v56, &v56, 3);
  if ( !v32 )
  {
    if ( a4 || (unsigned __int8)sub_5FE00(v47) && !(_QWORD)v49 )
    {
LABEL_24:
      v11 = 1;
      goto LABEL_25;
    }
    v56 = (unsigned __int64)v47;
    v33 = a1[1];
    v34 = a1[23];
    v57 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4B2890), (__m128i)(unsigned __int64)sub_1FC250);
    v35 = sub_1FC6C0(v33, (unsigned __int64 *)(**(_QWORD **)(v34 + 72) + 24LL * *(int *)(v7 + 92)), v47, (__int64)&v56);
    if ( v57.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v57.m128i_i64[0])(&v56, &v56, 3);
    if ( !v35 )
    {
      if ( !*(_DWORD *)(v7 + 92) )
      {
        v36 = a1[1];
        v53 = 0;
        v54 = 0;
        v37 = *(_QWORD *)(v36 + 664);
        v38 = *(_QWORD *)(v36 + 672);
        if ( v37 + v38 - 1 >= v37 )
        {
          v53 = qvector_reserve(&v53, 0, 1, 16);
          *(__m128i *)(v53 + 16 * v54) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v38);
          *(_QWORD *)&v54 = v54 + 1;
        }
        sub_312800(&v48, &v53);
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree(v53);
        }
        if ( !(unsigned __int8)sub_5FE00(v47) || (_QWORD)v49 )
        {
          v39 = a1[1];
          v40 = *(int *)(v39 + 792);
          v41 = *(_DWORD *)(v39 + 792);
          if ( v40 < *(_QWORD *)(v39 + 440) )
          {
            while ( 1 )
            {
              v42 = (_DWORD *)(*(_QWORD *)(v39 + 432) + 104 * v40);
              if ( !v42[23] )
              {
                v53 = 0;
                v54 = 0u;
                v55 = 0;
                sub_1BE600((__int64)v42, v39, &v53, 0);
                if ( (unsigned __int8)sub_5FD00(v47, &v53) || (unsigned __int8)sub_312BB0(&v48, (char *)&v54 + 8) )
                {
                  if ( *v42 != 2 )
                  {
                    if ( !under_debugger )
                      sub_37CFE0(52930);
                    BUG();
                  }
                  sub_8EF80(&v53);
                  goto LABEL_19;
                }
                if ( *((_QWORD *)&v54 + 1) )
                {
                  *(_QWORD *)&v55 = 0;
                  qfree(*((_QWORD *)&v54 + 1));
                }
                qfree(v53);
                v39 = a1[1];
              }
              v40 = ++v41;
              if ( (unsigned __int64)v41 >= *(_QWORD *)(v39 + 440) )
                goto LABEL_24;
            }
          }
        }
      }
      goto LABEL_24;
    }
  }
LABEL_19:
  v11 = 0;
LABEL_25:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  qfree(v50[0]);
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  qfree(v47[0]);
  return v11;
}
