__int64 __fastcall sub_6BB860(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  _QWORD *v20; // r14
  __int64 v21; // rdx
  int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // r12
  _QWORD *v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r13
  _DWORD *v34; // rax
  int v35; // edx
  unsigned int v37; // eax
  char v38; // al
  __int64 v39; // rdx
  __int64 *v40; // r13
  __int64 *v43; // [rsp+18h] [rbp-70h]
  __int64 v44; // [rsp+28h] [rbp-60h] BYREF
  __int64 *v45; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v46; // [rsp+38h] [rbp-50h] BYREF
  __m128i v47[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *a2;
  v7 = a2[1];
  if ( *a2 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = *(_QWORD **)(a1 + 112);
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 104);
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_12;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_12:
    v9 = *(_QWORD **)(a1 + 112);
    if ( v9 )
LABEL_13:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = *(_QWORD *)(a1 + 144);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  sub_6BADC0(a1 + 56);
  sub_6BADC0(a1 + 80);
  sub_6B9380((_QWORD *)a1, a2, 1u);
  v15 = *(_QWORD *)(a1 + 496);
  v16 = *a2;
  if ( !v15 || (v17 = *(_DWORD *)(v15 - 4), v17 == *(_DWORD *)(v15 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 496));
    v15 = *(_QWORD *)(a1 + 496);
    v20 = *(_QWORD **)(a1 + 472);
    v37 = *(_DWORD *)(v15 - 4);
    *(_QWORD *)(v15 + 8LL * v37) = v16;
    v19 = v37 + 1;
    *(_DWORD *)(v15 - 4) = v19;
  }
  else
  {
    v18 = v17;
    v19 = v17 + 1;
    v20 = *(_QWORD **)(a1 + 472);
    *(_QWORD *)(v15 + 8 * v18) = v16;
    *(_DWORD *)(v15 - 4) = v19;
  }
  for ( ; v19; v19 = *(_DWORD *)(v15 - 4) )
  {
    if ( sub_6A98D0(v20, *(_DWORD *)(a1 + 480), *(_QWORD *)(v15 + 8LL * (v19 - 1))) )
    {
      *(_DWORD *)(v15 - 4) = v22;
    }
    else
    {
      if ( *(_WORD *)(v21 + 4) )
      {
        *(_DWORD *)(v15 - 4) = v22;
        v47[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
        sub_686B20(a1 + 472, v47);
        v15 = *(_QWORD *)(a1 + 496);
        v20 = *(_QWORD **)(a1 + 472);
      }
      else
      {
        v38 = sub_6B9F50((__int64 *)(a1 + 448), v21);
        v15 = *(_QWORD *)(a1 + 496);
        if ( v38 )
        {
          --*(_DWORD *)(v15 - 4);
          v20 = *(_QWORD **)(a1 + 472);
          continue;
        }
        v20 = *(_QWORD **)(a1 + 472);
      }
      if ( !v15 )
        break;
    }
  }
  v24 = sub_6A98D0(v20, *(_DWORD *)(a1 + 480), *a2)[1];
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_6A99C0(v23, a2[1]);
  *a2 = v24;
  sub_6BADC0(a1 + 472);
  v25 = *(_QWORD *)(a1 + 496);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v26 = *(_QWORD **)(a1 + 512);
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = *(_QWORD *)(a1 + 504);
          v13 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_34;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_34:
    v26 = *(_QWORD **)(a1 + 512);
    if ( v26 )
LABEL_35:
      *((_DWORD *)v26 - 1) = 0;
  }
  v44 = *a2;
  sub_6ACBA0((_QWORD *)(a1 + 384), &v44);
  while ( 1 )
  {
    v30 = *(_QWORD *)(a1 + 384);
    if ( !v30 )
      break;
    v31 = *(_DWORD *)(v30 - 4);
    if ( !v31 )
      break;
    v32 = (unsigned int)(v31 - 1);
    v33 = *(_QWORD *)(v30 + 8 * v32);
    *(_DWORD *)(v30 - 4) = v32;
    if ( !(unsigned __int8)sub_15D37A0(a1 + 392, v33) )
    {
      sub_15D0A90(a1 + 392, v33, 1);
      if ( !*(_WORD *)(v33 + 4) )
      {
        if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, __int64))(a1 + 376))(*(_QWORD *)(a1 + 376), v33) )
        {
          if ( *(_WORD *)(v33 + 4) || (v34 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL)) == nullptr || *v34 )
          {
LABEL_57:
            v45 = (__int64 *)v33;
            sub_6B1CA0(a3, &v45);
          }
          else
          {
            v35 = v34[1];
            if ( v35 == 5 || v35 == 6 )
            {
              v39 = *(unsigned int *)(v33 + 24);
              v40 = (__int64 *)(v33 + 32);
              v39 *= 8;
              v43 = (__int64 *)((char *)v40 + v39);
              if ( v39 )
              {
                do
                {
                  v47[0].m128i_i64[0] = *v40;
                  sub_6ACBA0((_QWORD *)(a1 + 384), v47);
                  ++v40;
                }
                while ( v43 != v40 );
              }
            }
            else
            {
              if ( v34[1] != 8 || *(_DWORD *)(v33 + 24) != 1 || *(_WORD *)(*(_QWORD *)(v33 + 32) + 4LL) )
                goto LABEL_57;
              v46 = *(__int64 **)(v33 + 32);
              sub_6B1CA0(a4, &v46);
            }
          }
        }
      }
    }
  }
  sub_15D08E0(a1 + 392);
  return sub_6A99C0(v6, v7);
}

