__m128 *__fastcall sub_6581A0(__m128 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  _DWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // r14
  _QWORD *v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  __int64 v29; // rax
  __m128i v30; // xmm3
  __int64 v31; // r14
  int v32; // edx
  __int64 v33; // rbx
  __int64 v34; // rax
  int v36[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v37; // [rsp+18h] [rbp-50h]
  __m128i v38[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a6[1];
  *(_QWORD *)v36 = *a2;
  if ( v7 && *(_DWORD *)(v7 - 4) )
  {
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v10 = *(_QWORD *)(a4 + 8);
    if ( v10 && (v11 = *(_DWORD *)(v10 - 4)) != 0 )
    {
      if ( v11 != 1 )
        sub_15E1AF0(v36[0]);
      v12 = sub_15E1B70(v36[0]);
      a5 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v13 = *a2;
    }
    else
    {
      if ( a5 )
        ++*(_DWORD *)(a5 + 8);
      v13 = *(_QWORD *)v36;
    }
    v14 = *(_QWORD *)(a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 24) - 1) + 32);
    if ( *(_WORD *)(v14 + 4) )
      goto LABEL_15;
    v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
    if ( !v15 || *v15 )
      goto LABEL_15;
    v31 = a3;
    if ( v15[1] == 2 )
    {
      if ( (unsigned __int8)sub_15D2CB0(v13, *(_QWORD *)(v14 + 32)) )
      {
        v34 = sub_15DFF60(*a2);
        v31 = v34;
        if ( v34 )
          ++*(_DWORD *)(v34 + 8);
        v27 = (*(_DWORD *)(a3 + 8))-- == 1;
        if ( v27 )
          sub_15D7BC0(*(_QWORD *)v36, a3);
        v14 = *(_QWORD *)(v31 + 8LL * (unsigned int)(*(_DWORD *)(v31 + 24) - 1) + 32);
      }
      if ( *(_WORD *)(v14 + 4) )
        goto LABEL_15;
      v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
      if ( !v15 || *v15 )
        goto LABEL_15;
    }
    v32 = v15[1];
    v33 = v31;
    if ( v32 != 10 && v32 != 2 )
    {
LABEL_15:
      sub_1872CE0("");
      sub_1873130(114, 471);
    }
    v16 = sub_15E2A20(*a2);
    v17 = *a2;
    v18 = v16;
    if ( v16 )
    {
      v19 = *(_DWORD *)(v16 + 8) + 1;
      v20 = *(_QWORD *)(v31 + 8LL * (unsigned int)(*(_DWORD *)(v31 + 24) - 1) + 32);
      *(_DWORD *)(v18 + 8) = v19;
      if ( *(_QWORD *)(v20 + 32) == *(_QWORD *)(v20 + 40) )
      {
        v37 = v18;
        goto LABEL_21;
      }
      v21 = *(_QWORD *)(v18 + 8LL * (unsigned int)(*(_DWORD *)(v18 + 24) - 1) + 32);
      if ( *(_QWORD *)(v21 + 32) == *(_QWORD *)(v21 + 40) )
      {
        v37 = v31;
        v19 = *(_DWORD *)(v31 + 8);
        goto LABEL_21;
      }
    }
    else
    {
      v29 = *(_QWORD *)(v31 + 8LL * (unsigned int)(*(_DWORD *)(v31 + 24) - 1) + 32);
      if ( *(_QWORD *)(v29 + 32) == *(_QWORD *)(v29 + 40) )
      {
        v23 = (_QWORD *)a6[1];
        v37 = 0;
        v30 = (__m128i)_mm_loadh_ps((const double *)v36);
        v38[0] = v30;
        if ( !v23 )
        {
          *a1 = (__m128)v30;
          if ( !a5 )
          {
LABEL_37:
            v27 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v27 )
              sub_15D7BC0(*(_QWORD *)v36, v33);
            return a1;
          }
          goto LABEL_32;
        }
LABEL_23:
        v24 = &v23[*((unsigned int *)v23 - 1)];
        if ( v23 >= v24 )
          goto LABEL_30;
        do
        {
          while ( 1 )
          {
            v25 = *v23;
            if ( *v23 )
            {
              v26 = *a6;
              v27 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v27 )
                break;
            }
            if ( ++v23 >= v24 )
              goto LABEL_29;
          }
          sub_15D7BC0(v26, v25);
          ++v23;
        }
        while ( v23 < v24 );
LABEL_29:
        v23 = (_QWORD *)a6[1];
        if ( v23 )
LABEL_30:
          *((_DWORD *)v23 - 1) = 0;
LABEL_31:
        *(__m128i *)a1 = _mm_load_si128(v38);
        if ( !a5 )
        {
LABEL_34:
          if ( v18 )
          {
            v27 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v27 )
              sub_15D7BC0(*(_QWORD *)v36, v18);
          }
          goto LABEL_37;
        }
LABEL_32:
        v27 = (*(_DWORD *)(a5 + 8))-- == 1;
        if ( v27 )
          sub_15D7BC0(*(_QWORD *)v36, a5);
        goto LABEL_34;
      }
    }
    v22 = sub_15E2470(v17, v31, v18);
    v37 = v22;
    if ( !v22 )
      goto LABEL_22;
    v19 = *(_DWORD *)(v22 + 8);
LABEL_21:
    *(_DWORD *)(v37 + 8) = v19 + 1;
LABEL_22:
    v23 = (_QWORD *)a6[1];
    v38[0] = (__m128i)_mm_loadh_ps((const double *)v36);
    if ( !v23 )
      goto LABEL_31;
    goto LABEL_23;
  }
  *a1 = _mm_loadh_ps((const double *)v36);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  return a1;
}

