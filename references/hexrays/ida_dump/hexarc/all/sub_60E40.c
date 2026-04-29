unsigned __int64 __fastcall sub_60E40(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // r12
  int v6; // r13d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rbp
  int i; // r12d
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // eax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 *v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // r14
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v50; // [rsp+10h] [rbp-58h] BYREF
  __int128 v51; // [rsp+18h] [rbp-50h]
  unsigned __int64 v52; // [rsp+28h] [rbp-40h]

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 56);
  v52 = __readfsqword(0x28u);
  v6 = v4;
  v49 = v4;
  if ( a2 != v4 )
  {
    v50 = 0;
    v51 = 0;
    if ( a2 < v4 )
    {
      v31 = a2;
      do
      {
        v32 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33);
        }
        ++v31;
      }
      while ( v31 < v4 );
      *(_QWORD *)(a1 + 56) = a2;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 48);
      v8 = *(_QWORD *)(a1 + 64);
      v9 = a1 + 48;
      if ( (unsigned __int64)&v50 < v7 || (unsigned __int64)&v50 >= v7 + 24 * v8 )
      {
        if ( v8 < v2 )
        {
          v43 = qvector_reserve(v9, v7, v2, 24);
          v4 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = v43;
        }
        if ( v4 < v2 )
        {
          v10 = 24 * v4;
          do
          {
            ++v4;
            v11 = v10 + *(_QWORD *)(a1 + 48);
            v10 += 24;
            *(_QWORD *)v11 = 0;
            *(_OWORD *)(v11 + 8) = 0;
          }
          while ( v2 != v4 );
        }
      }
      else
      {
        if ( v8 < v2 )
        {
          v45 = qvector_reserve(v9, v7, v2, 24);
          v4 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = v45;
        }
        if ( v4 < v2 )
        {
          v40 = 24 * v4;
          do
          {
            ++v4;
            v41 = v40 + *(_QWORD *)(a1 + 48);
            v40 += 24;
            *(_QWORD *)v41 = 0;
            *(_OWORD *)(v41 + 8) = 0;
          }
          while ( v2 != v4 );
        }
      }
      *(_QWORD *)(a1 + 56) = v2;
    }
  }
  v12 = *(_QWORD *)(a1 + 80);
  if ( v2 != v12 )
  {
    v50 = 0;
    v51 = 0;
    if ( v2 < v12 )
    {
      v34 = v2;
      do
      {
        v35 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v34);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
        }
        ++v34;
      }
      while ( v34 < v12 );
      *(_QWORD *)(a1 + 80) = v2;
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 72);
      v14 = *(_QWORD *)(a1 + 88);
      v15 = a1 + 72;
      if ( (unsigned __int64)&v50 < v13 || (unsigned __int64)&v50 >= v13 + 24 * v14 )
      {
        if ( v14 < v2 )
        {
          v44 = qvector_reserve(v15, v13, v2, 24);
          v12 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v44;
        }
        if ( v12 < v2 )
        {
          v16 = 24 * v12;
          do
          {
            ++v12;
            v17 = v16 + *(_QWORD *)(a1 + 72);
            v16 += 24;
            *(_QWORD *)v17 = 0;
            *(_OWORD *)(v17 + 8) = 0;
          }
          while ( v2 != v12 );
        }
      }
      else
      {
        if ( v14 < v2 )
        {
          v46 = qvector_reserve(v15, v13, v2, 24);
          v12 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v46;
        }
        if ( v12 < v2 )
        {
          v38 = 24 * v12;
          do
          {
            ++v12;
            v39 = v38 + *(_QWORD *)(a1 + 72);
            v38 += 24;
            *(_QWORD *)v39 = 0;
            *(_OWORD *)(v39 + 8) = 0;
          }
          while ( v2 != v12 );
        }
      }
      *(_QWORD *)(a1 + 80) = v2;
    }
  }
  v18 = *(_QWORD *)(a1 + 104);
  LODWORD(v50) = -1;
  if ( v2 >= v18 )
  {
    if ( v18 >= v2 )
    {
      if ( v6 < a2 )
        goto LABEL_22;
LABEL_35:
      sub_60CC0(a1);
      v27 = *(_DWORD *)(a1 + 144);
      goto LABEL_36;
    }
    v24 = *(_QWORD *)(a1 + 96);
    v25 = *(_QWORD *)(a1 + 112);
    v26 = a1 + 96;
    if ( (unsigned __int64)&v50 < v24 || (unsigned __int64)&v50 >= v24 + 4 * v25 )
    {
      if ( v25 >= v2
        || (v42 = qvector_reserve(v26, v24, v2, 4),
            v18 = *(_QWORD *)(a1 + 104),
            *(_QWORD *)(a1 + 96) = v42,
            v24 = v42,
            v18 < v2) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v24 + 4 * v18++) = -1;
          if ( v2 == v18 )
            break;
          v24 = *(_QWORD *)(a1 + 96);
        }
      }
    }
    else if ( v25 >= v2
           || (v37 = qvector_reserve(v26, v24, v2, 4),
               v18 = *(_QWORD *)(a1 + 104),
               *(_QWORD *)(a1 + 96) = v37,
               v24 = v37,
               v18 < v2) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v24 + 4 * v18++) = -1;
        if ( v2 == v18 )
          break;
        v24 = *(_QWORD *)(a1 + 96);
      }
    }
  }
  *(_QWORD *)(a1 + 104) = v2;
  if ( v6 >= a2 )
    goto LABEL_35;
LABEL_22:
  v19 = *(_QWORD *)(a1 + 128);
  v20 = v6;
  if ( v6 >= v19 )
  {
    if ( v19 >= v6 )
    {
      v20 = *(_QWORD *)(a1 + 128);
      goto LABEL_24;
    }
    v29 = *(_QWORD *)(a1 + 120);
    v30 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)&v49 < v29 || (unsigned __int64)&v49 >= v29 + 4 * v30 )
    {
      if ( v30 >= v6
        || (v47 = qvector_reserve(a1 + 120, v29, v6, 4),
            v19 = *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 120) = v47,
            v29 = v47,
            v19 < v6) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v29 + 4 * v19++) = v6;
          if ( v6 == v19 )
            break;
          v29 = *(_QWORD *)(a1 + 120);
        }
      }
    }
    else if ( v30 >= v6
           || (v48 = qvector_reserve(a1 + 120, v29, v6, 4),
               v19 = *(_QWORD *)(a1 + 128),
               *(_QWORD *)(a1 + 120) = v48,
               v29 = v48,
               v19 < v6) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v29 + 4 * v19++) = v6;
        if ( v6 == v19 )
          break;
        v29 = *(_QWORD *)(a1 + 120);
      }
    }
  }
  *(_QWORD *)(a1 + 128) = v6;
LABEL_24:
  for ( i = v6 + 1; a2 > i; *(_QWORD *)(a1 + 128) = v20 )
  {
    v22 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v20 + 1) )
    {
      v23 = qvector_reserve(a1 + 120, v22, v20 + 1, 4);
      v20 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = v23;
      v22 = v23;
    }
    *(_DWORD *)(v22 + 4 * v20) = i++;
    v20 = *(_QWORD *)(a1 + 128) + 1LL;
  }
  if ( a2 - 1 != v20 )
  {
    if ( !under_debugger )
      sub_37B760(50651);
LABEL_95:
    BUG();
  }
  v27 = a2 + *(_DWORD *)(a1 + 144) - v6;
  *(_DWORD *)(a1 + 144) = v27;
LABEL_36:
  if ( a2 < v27 )
  {
    if ( !under_debugger )
      sub_37B760(50652);
    goto LABEL_95;
  }
  return v52 - __readfsqword(0x28u);
}
