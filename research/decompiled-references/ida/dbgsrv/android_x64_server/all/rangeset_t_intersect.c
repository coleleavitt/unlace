/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_intersect
// Address: 0x00000000000CA100

//----- (00000000000CA100) ----------------------------------------------------
__int64 __fastcall rangeset_t_intersect(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r13
  __int64 *v3; // r14
  int v4; // eax
  char v5; // al
  __int128 *v6; // rbx
  int v7; // eax
  char v8; // al
  unsigned __int64 v9; // rdx
  int v10; // r12d
  int v11; // ebp
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int64 *v18; // r9
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  int v21; // r10d
  unsigned __int64 v22; // rax
  __int128 *v23; // r15
  __int64 v24; // r13
  __int128 *v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rdx
  __int128 *v28; // r15
  __int64 v29; // r13
  int v30; // ebp
  int v31; // eax
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rcx
  __int128 *v35; // r13
  __int64 v38; // [rsp+10h] [rbp-98h]
  unsigned __int64 *v39; // [rsp+10h] [rbp-98h]
  unsigned __int64 v40; // [rsp+10h] [rbp-98h]
  unsigned __int64 v41; // [rsp+10h] [rbp-98h]
  char v42; // [rsp+18h] [rbp-90h]
  __int64 v43; // [rsp+18h] [rbp-90h]
  _QWORD *v44; // [rsp+20h] [rbp-88h]
  int v45; // [rsp+28h] [rbp-80h]
  unsigned __int64 v46; // [rsp+28h] [rbp-80h]
  void *ptr[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h]
  int v49; // [rsp+48h] [rbp-60h]
  char v50; // [rsp+4Ch] [rbp-5Ch]
  __int128 v51; // [rsp+50h] [rbp-58h] BYREF
  char v52; // [rsp+60h] [rbp-48h]
  unsigned __int64 v53; // [rsp+70h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
  {
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
  v3 = (__int64 *)a1;
  if ( !a2[1] )
  {
    v7 = *(_DWORD *)(a1 + 32);
    *(_OWORD *)ptr = 0;
    v48 = 0;
    v49 = v7;
    if ( v7 == -1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = must_journal();
      v2 = *(_QWORD *)(a1 + 8);
    }
    v50 = v8;
    v6 = *(__int128 **)a1;
    if ( v8 )
    {
      v35 = &v6[v2];
      if ( v6 < v35 )
      {
        do
        {
          v51 = *v6;
          v52 = 1;
          sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v51);
          ++v6;
        }
        while ( v6 < v35 );
        v6 = *(__int128 **)a1;
      }
    }
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v6);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_QWORD *)(a1 + 24) = 0;
    sub_C9640((__int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v48 = 0;
    }
    LOBYTE(v6) = 1;
    return (unsigned int)v6;
  }
  v4 = *(_DWORD *)(a1 + 32);
  *(_OWORD *)ptr = 0;
  v48 = 0;
  v49 = v4;
  v44 = a2;
  if ( v4 == -1 )
  {
    v50 = 0;
  }
  else
  {
    v5 = must_journal();
    v2 = *(_QWORD *)(a1 + 8);
    v50 = v5;
    if ( !v2 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      LODWORD(v6) = 0;
      goto LABEL_51;
    }
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v42 = 0;
LABEL_11:
  v12 = v2;
  v13 = *v3;
  v14 = 16 * v9;
  v6 = (__int128 *)(*v3 + v14);
  v15 = *a2;
  v16 = *(_QWORD *)v6;
  do
  {
    v17 = 16LL * v10;
    if ( *(_QWORD *)(v15 + v17 + 8) > v16 )
    {
      if ( v50 )
      {
        v38 = v14;
        v51 = *v6;
        v52 = 1;
        sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v51);
        a2 = v44;
        v15 = *v44;
        v16 = *(_QWORD *)v6;
        v14 = v38;
      }
      v18 = (unsigned __int64 *)(v13 + v14 + 8);
      v19 = *v18;
      v20 = *(_QWORD *)(v15 + 16LL * v10);
      if ( v20 > v16 )
      {
        v21 = v11;
        if ( v20 >= v19 )
          goto LABEL_22;
        *(_QWORD *)v6 = v20;
        v42 = 1;
      }
      v21 = v11 + 1;
      v22 = *(_QWORD *)(v15 + v17 + 8);
      if ( v22 < v19 )
      {
        *v18 = v22;
        v42 = 1;
      }
LABEL_22:
      v45 = v21;
      if ( v50 )
      {
        v39 = v18;
        v51 = *v6;
        v52 = 0;
        sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v51);
        a2 = v44;
        v18 = v39;
        v21 = v45;
      }
      v6 = *(__int128 **)a1;
      do
      {
        if ( *((_QWORD *)&v6[v11] + 1) > *(_QWORD *)(v17 + v15) )
          break;
        ++v11;
      }
      while ( *(_QWORD *)(a1 + 8) != v11 );
      if ( v11 <= v21 )
      {
        if ( v19 > *v18 )
        {
          v46 = *v18;
          v41 = v19;
          v26 = a1;
          v27 = *(_QWORD *)(a1 + 8);
          v28 = *(__int128 **)a1;
          if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v27 + 1) )
          {
            v28 = (__int128 *)qvector_reserve(a1, (char *)v6, v27 + 1, 0x10u);
            v26 = a1;
            *(_QWORD *)a1 = v28;
            v27 = *(_QWORD *)(a1 + 8);
          }
          v29 = (16LL * v11 + 16) >> 4;
          memmove(&v28[v29 + 1], &v28[v29], 16 * v27 - v29 * 16);
          *(_QWORD *)&v28[v29] = v46;
          *((_QWORD *)&v28[v29] + 1) = v41;
          ++*(_QWORD *)(v26 + 8);
          a2 = v44;
          if ( v50 )
          {
            *(_QWORD *)&v51 = v46;
            *((_QWORD *)&v51 + 1) = v41;
            v52 = 0;
            sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v51);
            a2 = v44;
          }
        }
        v30 = v11 + 1;
        v3 = (__int64 *)a1;
        v2 = *(_QWORD *)(a1 + 8);
        v9 = v30;
        v31 = v30;
      }
      else
      {
        v23 = &v6[v21];
        v24 = v11;
        v25 = &v6[v24];
        v40 = v21;
        if ( v50 && v23 < v25 )
        {
          v43 = 16LL * v21;
          do
          {
            v51 = *v23;
            v52 = 1;
            sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v51);
            ++v23;
          }
          while ( v23 < v25 );
          v3 = (__int64 *)a1;
          v6 = *(__int128 **)a1;
          v23 = (__int128 *)(*(_QWORD *)a1 + v43);
          v25 = (__int128 *)(*(_QWORD *)a1 + v24 * 16);
        }
        else
        {
          v3 = (__int64 *)a1;
        }
        memmove(v23, v25, (char *)&v6[v3[1]] - (char *)v25);
        v2 = v3[1] - (v25 - v23);
        v3[1] = v2;
        v42 = 1;
        a2 = v44;
        v9 = v40;
        v31 = v45;
      }
      v11 = v31;
      if ( v2 <= v9 )
      {
        v3[3] = 0;
        if ( (v42 & 1) != 0 )
        {
          LOBYTE(v6) = 1;
          sub_C9640((__int64)ptr);
        }
        else
        {
          LODWORD(v6) = 0;
        }
        goto LABEL_51;
      }
      goto LABEL_11;
    }
    ++v10;
  }
  while ( a2[1] != v10 );
  v32 = 16 * v12 + v13;
  if ( v50 && (unsigned __int64)v6 < v32 )
  {
    v33 = v14;
    do
    {
      v51 = *v6;
      v52 = 1;
      sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v51);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v32 );
    v34 = a1;
    v32 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
    v6 = (__int128 *)(*(_QWORD *)a1 + v33);
  }
  else
  {
    v34 = a1;
  }
  *(_QWORD *)(v34 + 8) -= (__int64)(v32 - (_QWORD)v6) >> 4;
  *(_QWORD *)(v34 + 24) = 0;
  LOBYTE(v6) = 1;
  sub_C9640((__int64)ptr);
LABEL_51:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v48 = 0;
  }
  return (unsigned int)v6;
}
