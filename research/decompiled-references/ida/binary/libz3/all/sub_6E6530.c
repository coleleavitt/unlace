__int64 __fastcall sub_6E6530(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r14d
  __int64 v15; // rdx
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int **v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // r13d
  __int64 v27; // rsi
  unsigned int v28; // r14d
  unsigned int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rcx
  unsigned int v36; // r15d
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // r13
  __int64 i; // r14
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 *v45; // r13
  __int64 *v46; // r14
  __int64 v47; // rax
  unsigned __int8 v48; // [rsp+Fh] [rbp-A9h]
  __int64 v50; // [rsp+18h] [rbp-A0h]
  __int64 *v51; // [rsp+20h] [rbp-98h]
  __int64 v52; // [rsp+28h] [rbp-90h]
  unsigned int v53; // [rsp+3Ch] [rbp-7Ch]
  __int64 v54; // [rsp+40h] [rbp-78h] BYREF
  __int64 v55; // [rsp+48h] [rbp-70h] BYREF
  __int64 v56; // [rsp+50h] [rbp-68h] BYREF
  __int64 v57; // [rsp+58h] [rbp-60h]
  __m128 v58; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v59[4]; // [rsp+70h] [rbp-48h] BYREF

  sub_41D160((__int64 *)a4);
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v48 = sub_168D740(a3 + 4, a2);
  if ( !v48 )
  {
    ++*(_DWORD *)(a2 + 8);
    *(_QWORD *)&v59[0] = a2;
    sub_6DE970((unsigned int **)(a4 + 8), v59);
    return 1;
  }
  if ( a2 == *a3 )
  {
    v20 = a1[4];
    *(_QWORD *)&v59[0] = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v21 = (unsigned int **)(a4 + 8);
    sub_6DE970(v21, v59);
    v22 = a1[6];
    *(_QWORD *)&v59[0] = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_6DE970(v21, v59);
    return 1;
  }
  v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v9 && *v9 == 5 )
  {
    v10 = *a1;
    v11 = v9[1];
    v57 = 0;
    v56 = v10;
    if ( v11 == 8 )
    {
      if ( (unsigned __int8)sub_6E6530((_DWORD)a1, *(_QWORD *)(a2 + 32), (_DWORD)a3, a4, v7, v8) )
      {
        sub_6E08C0((__int64)a1, (__int64 *)a4);
        goto LABEL_87;
      }
LABEL_52:
      v48 = 0;
      goto LABEL_35;
    }
    if ( v11 <= 8 )
    {
      if ( v11 == 6 )
      {
        if ( (unsigned __int8)sub_6E6530((_DWORD)a1, *(_QWORD *)(a2 + 32), (_DWORD)a3, a4, v7, v8) )
        {
          v26 = 1;
          if ( *(_DWORD *)(a2 + 24) <= 1u )
          {
LABEL_35:
            sub_2B4F40(&v56);
            return v48;
          }
          while ( (unsigned __int8)sub_6E6530(
                                     (_DWORD)a1,
                                     *(_QWORD *)(a2 + 8LL * v26 + 32),
                                     (_DWORD)a3,
                                     (unsigned int)&v56,
                                     v24,
                                     v25) )
          {
            v27 = *(_QWORD *)(a4 + 8);
            v28 = 0;
            if ( v27 )
            {
              while ( 1 )
              {
                v29 = *(_DWORD *)(v27 - 4);
                v30 = v57;
                if ( v28 >= v29 )
                  break;
                if ( !v57 )
                  goto LABEL_50;
                if ( v28 >= *(_DWORD *)(v57 - 4) )
                  break;
                v31 = sub_6E1B10(a1, *(_QWORD *)(v27 + 8LL * v28), *(_QWORD *)(v57 + 8LL * v28));
                v58 = _mm_loadh_ps((const double *)a4);
                sub_6DE2E0((__int64 **)&v58, v31);
                v27 = *(_QWORD *)(a4 + 8);
                ++v28;
                if ( !v27 )
                  goto LABEL_44;
              }
            }
            else
            {
LABEL_44:
              v30 = v57;
              v29 = 0;
            }
            while ( v30 && v29 < *(_DWORD *)(v30 - 4) )
            {
              v32 = *(_QWORD *)(v30 + 8LL * v29);
              v54 = v32;
              if ( v32 )
                ++*(_DWORD *)(v32 + 8);
              sub_6DE970((unsigned int **)(a4 + 8), &v54);
              v30 = v57;
              ++v29;
            }
LABEL_50:
            if ( ++v26 >= *(_DWORD *)(a2 + 24) )
              goto LABEL_35;
          }
        }
      }
      else if ( v11 == 7 && (unsigned __int8)sub_6E6530((_DWORD)a1, *(_QWORD *)(a2 + 32), (_DWORD)a3, a4, v7, v8) )
      {
        if ( *(_DWORD *)(a2 + 24) > 1u )
        {
          v14 = 1;
          while ( (unsigned __int8)sub_6E6530(
                                     (_DWORD)a1,
                                     *(_QWORD *)(a2 + 8LL * v14 + 32),
                                     (_DWORD)a3,
                                     (unsigned int)&v56,
                                     v12,
                                     v13) )
          {
            v15 = *(_QWORD *)(a4 + 8);
            v16 = 0;
            if ( v15 )
            {
              while ( 1 )
              {
                v17 = *(_DWORD *)(v15 - 4);
                v18 = v57;
                if ( v16 >= v17 )
                  break;
                if ( !v57 )
                  goto LABEL_34;
                if ( v16 >= *(_DWORD *)(v57 - 4) )
                  break;
                v19 = sub_6E10F0((__int64)a1, *(_QWORD *)(v15 + 8LL * v16), *(_QWORD *)(v57 + 8LL * v16));
                v59[0] = _mm_loadh_ps((const double *)a4);
                sub_6DE2E0((__int64 **)v59, v19);
                v15 = *(_QWORD *)(a4 + 8);
                ++v16;
                if ( !v15 )
                  goto LABEL_21;
              }
            }
            else
            {
LABEL_21:
              v18 = v57;
              v17 = 0;
            }
            while ( v18 && v17 < *(_DWORD *)(v18 - 4) )
            {
              v23 = sub_6E0F30((__int64)a1);
              *(_QWORD *)&v59[0] = v23;
              if ( v23 )
                ++*(_DWORD *)(v23 + 8);
              sub_6DE970((unsigned int **)(a4 + 8), v59);
              v18 = v57;
              ++v17;
            }
LABEL_34:
            if ( ++v14 >= *(_DWORD *)(a2 + 24) )
              goto LABEL_35;
          }
          goto LABEL_52;
        }
LABEL_87:
        sub_2B4F40(&v56);
        return v48;
      }
      goto LABEL_52;
    }
    if ( v11 != 9 || !(unsigned __int8)sub_6E6530((_DWORD)a1, *(_QWORD *)(a2 + 32), (_DWORD)a3, a4, v7, v8) )
      goto LABEL_52;
    v53 = 1;
    if ( *(_DWORD *)(a2 + 24) <= 1u )
      goto LABEL_35;
    while ( 1 )
    {
      if ( !(unsigned __int8)sub_6E6530(
                               (_DWORD)a1,
                               *(_QWORD *)(a2 + 8LL * v53 + 32),
                               (_DWORD)a3,
                               (unsigned int)&v56,
                               v33,
                               v34) )
        goto LABEL_52;
      v35 = v57;
      v36 = 0;
      v51 = nullptr;
      *(_QWORD *)&v59[0] = *a1;
      v37 = *(_QWORD *)(a4 + 8);
      if ( !v37 )
        goto LABEL_72;
LABEL_58:
      v38 = *(_DWORD *)(v37 - 4);
      if ( !v35 )
        goto LABEL_60;
      while ( 1 )
      {
        v38 += *(_DWORD *)(v35 - 4);
LABEL_60:
        if ( v36 + 1 >= v38 )
          break;
        v39 = a1[4];
        v50 = *a1;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        for ( i = 0; v37; v37 = *(_QWORD *)(a4 + 8) )
        {
          if ( (unsigned int)i >= *(_DWORD *)(v37 - 4) )
            break;
          v41 = v36 - (unsigned int)i;
          if ( v57 && (unsigned int)v41 < *(_DWORD *)(v57 - 4) )
          {
            v42 = sub_6E1C90(a1, *(_QWORD *)(v37 + 8 * i), *(_QWORD *)(v57 + 8 * v41));
            v43 = sub_6E1B10(a1, v39, v42);
            if ( v43 )
              ++*(_DWORD *)(v43 + 8);
            v52 = v43;
            sub_6DE2A0(v39, v50);
            v39 = v52;
          }
          if ( v36 < (unsigned int)++i )
            break;
        }
        v58.m128_u64[0] = v39;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        *((_QWORD *)&v59[0] + 1) = v51;
        sub_6DE970((unsigned int **)v59 + 1, &v58);
        v51 = *((__int64 **)&v59[0] + 1);
        sub_6DE2A0(v39, v50);
        v37 = *(_QWORD *)(a4 + 8);
        ++v36;
        v35 = v57;
        if ( v37 )
          goto LABEL_58;
LABEL_72:
        if ( !v35 )
          break;
        v38 = 0;
      }
      sub_41D160((__int64 *)a4);
      if ( v51 )
      {
        v44 = *((unsigned int *)v51 - 1);
        if ( (_DWORD)v44 )
        {
          v45 = &v51[v44];
          v46 = v51;
          do
          {
            v47 = *v46;
            v55 = v47;
            if ( v47 )
              ++*(_DWORD *)(v47 + 8);
            sub_6DE970((unsigned int **)(a4 + 8), &v55);
            ++v46;
          }
          while ( v46 != v45 );
        }
      }
      *((_QWORD *)&v59[0] + 1) = v51;
      sub_2B4F40((__int64 *)v59);
      if ( ++v53 >= *(_DWORD *)(a2 + 24) )
        goto LABEL_35;
    }
  }
  return 0;
}

