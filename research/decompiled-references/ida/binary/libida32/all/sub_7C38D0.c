unsigned __int64 __fastcall sub_7C38D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  size_t v5; // rdx
  const char *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r12
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  __int64 v29; // r12
  const char *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  const char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r12
  const char *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r12
  const char *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // rsi
  __int64 v50; // r14
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r12
  __int64 *v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8

  v2 = 0;
  sub_407AD0(a2, *(_DWORD *)a1);
  v4 = *(_QWORD *)(a1 + 16);
  sub_407AD0(a2, v4);
  if ( v4 )
  {
    do
    {
      v6 = haystack;
      v7 = *(_QWORD *)(a1 + 8) + 24 * v2;
      if ( *(_QWORD *)(v7 + 8) )
        v6 = *(const char **)v7;
      if ( v6 )
      {
        v5 = strlen(v6) + 1;
      }
      else
      {
        v5 = 1;
        v6 = &byte_22CD811;
      }
      ++v2;
      sub_7BB300(a2, v6, v5);
    }
    while ( v4 != v2 );
  }
  v8 = *(_QWORD *)(a1 + 40);
  v9 = 0;
  sub_407AD0(a2, v8);
  if ( v8 )
  {
    do
    {
      v13 = v9++;
      v14 = (__int64 *)(*(_QWORD *)(a1 + 32) + 16 * v13);
      sub_7BE190(a2, *v14, v10, v11, v12);
      sub_7BE190(a2, v14[1], v15, v16, v17);
    }
    while ( v8 != v9 );
  }
  v18 = *(_QWORD *)(a1 + 64);
  v19 = 0;
  sub_407AD0(a2, v18);
  if ( v18 )
  {
    do
    {
      v23 = v19++;
      v24 = (__int64 *)(*(_QWORD *)(a1 + 56) + 16 * v23);
      sub_7BE190(a2, *v24, v20, v21, v22);
      sub_7BE190(a2, v24[1], v25, v26, v27);
    }
    while ( v18 != v19 );
  }
  v28 = *(_QWORD *)(a1 + 88);
  v29 = 0;
  sub_407AD0(a2, v28);
  if ( v28 )
  {
    do
    {
      v30 = haystack;
      v31 = *(_QWORD *)(a1 + 80) + 24 * v29;
      if ( *(_QWORD *)(v31 + 8) )
        v30 = *(const char **)v31;
      ++v29;
      sub_62C910(a2, v30);
    }
    while ( v28 != v29 );
  }
  v32 = *(_QWORD *)(a1 + 112);
  v33 = 0;
  sub_407AD0(a2, v32);
  if ( v32 )
  {
    do
    {
      v34 = haystack;
      v35 = *(_QWORD *)(a1 + 104) + 24 * v33;
      if ( *(_QWORD *)(v35 + 8) )
        v34 = *(const char **)v35;
      ++v33;
      sub_62C910(a2, v34);
    }
    while ( v33 != v32 );
  }
  v36 = *(_QWORD *)(a1 + 136);
  v37 = 0;
  sub_407AD0(a2, v36);
  if ( v36 )
  {
    do
    {
      v38 = haystack;
      v39 = *(_QWORD *)(a1 + 128) + 24 * v37;
      if ( *(_QWORD *)(v39 + 8) )
        v38 = *(const char **)v39;
      ++v37;
      sub_62C910(a2, v38);
    }
    while ( v37 != v36 );
  }
  v40 = *(_QWORD *)(a1 + 160);
  v41 = 0;
  sub_407AD0(a2, v40);
  if ( v40 )
  {
    do
    {
      v42 = haystack;
      v43 = *(_QWORD *)(a1 + 152) + 24 * v41;
      if ( *(_QWORD *)(v43 + 8) )
        v42 = *(const char **)v43;
      ++v41;
      sub_62C910(a2, v42);
    }
    while ( v41 != v40 );
  }
  v44 = *(_QWORD *)(a1 + 184);
  v45 = 0;
  sub_407AD0(a2, v44);
  if ( v44 )
  {
    do
    {
      v46 = v45++;
      sub_7BB300(a2, (const void *)(*(_QWORD *)(a1 + 176) + 16 * v46), 0x10u);
    }
    while ( v45 != v44 );
  }
  v47 = *(_QWORD *)(a1 + 208);
  v48 = 0;
  sub_407AD0(a2, v47);
  if ( v47 )
  {
    do
    {
      v49 = v48++;
      sub_7BB300(a2, (const void *)(*(_QWORD *)(a1 + 200) + 16 * v49), 0x10u);
    }
    while ( v48 != v47 );
  }
  v50 = *(_QWORD *)(a1 + 232);
  v51 = 0;
  sub_407AD0(a2, v50);
  if ( v50 )
  {
    do
    {
      v55 = v51++;
      v56 = (__int64 *)(*(_QWORD *)(a1 + 224) + 16 * v55);
      sub_7BE190(a2, *v56, v52, v53, v54);
      sub_7BE190(a2, v56[1], v57, v58, v59);
    }
    while ( v51 != v50 );
  }
  return sub_7BE190(a2, *(_QWORD *)(a1 + 248), v52, v53, v54);
}

