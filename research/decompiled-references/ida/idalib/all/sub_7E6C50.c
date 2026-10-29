unsigned __int64 __fastcall sub_7E6C50(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // r13
  size_t v5; // rdx
  const char *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 *v11; // r12
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 *v15; // r12
  __int64 v16; // r13
  __int64 v17; // r12
  size_t v18; // rdx
  const char *v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r12
  const char *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r12
  const char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 *v42; // r12

  v2 = 0;
  sub_3A0970(a2, *(_DWORD *)a1);
  v4 = *(_QWORD *)(a1 + 16);
  sub_3A0970(a2, v4);
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
        v6 = &byte_22F0C30;
      }
      ++v2;
      sub_7DE6E0(a2, v6, v5);
    }
    while ( v4 != v2 );
  }
  v8 = *(_QWORD *)(a1 + 40);
  v9 = 0;
  sub_3A0970(a2, v8);
  if ( v8 )
  {
    do
    {
      v10 = v9++;
      v11 = (__int64 *)(*(_QWORD *)(a1 + 32) + 16 * v10);
      sub_3A0A80(a2, *v11);
      sub_3A0A80(a2, v11[1]);
    }
    while ( v8 != v9 );
  }
  v12 = *(_QWORD *)(a1 + 64);
  v13 = 0;
  sub_3A0970(a2, v12);
  if ( v12 )
  {
    do
    {
      v14 = v13++;
      v15 = (__int64 *)(*(_QWORD *)(a1 + 56) + 16 * v14);
      sub_3A0A80(a2, *v15);
      sub_3A0A80(a2, v15[1]);
    }
    while ( v12 != v13 );
  }
  v16 = *(_QWORD *)(a1 + 88);
  v17 = 0;
  sub_3A0970(a2, v16);
  if ( v16 )
  {
    do
    {
      v19 = haystack;
      v20 = *(_QWORD *)(a1 + 80) + 24 * v17;
      if ( *(_QWORD *)(v20 + 8) )
        v19 = *(const char **)v20;
      if ( v19 )
      {
        v18 = strlen(v19) + 1;
      }
      else
      {
        v18 = 1;
        v19 = &byte_22F0C30;
      }
      ++v17;
      sub_7DE6E0(a2, v19, v18);
    }
    while ( v16 != v17 );
  }
  v21 = *(_QWORD *)(a1 + 112);
  v22 = 0;
  sub_3A0970(a2, v21);
  if ( v21 )
  {
    do
    {
      v23 = haystack;
      v24 = *(_QWORD *)(a1 + 104) + 24 * v22;
      if ( *(_QWORD *)(v24 + 8) )
        v23 = *(const char **)v24;
      ++v22;
      sub_649F10(a2, v23);
    }
    while ( v22 != v21 );
  }
  v25 = *(_QWORD *)(a1 + 136);
  v26 = 0;
  sub_3A0970(a2, v25);
  if ( v25 )
  {
    do
    {
      v27 = haystack;
      v28 = *(_QWORD *)(a1 + 128) + 24 * v26;
      if ( *(_QWORD *)(v28 + 8) )
        v27 = *(const char **)v28;
      ++v26;
      sub_649F10(a2, v27);
    }
    while ( v26 != v25 );
  }
  v29 = *(_QWORD *)(a1 + 160);
  v30 = 0;
  sub_3A0970(a2, v29);
  if ( v29 )
  {
    do
    {
      v31 = haystack;
      v32 = *(_QWORD *)(a1 + 152) + 24 * v30;
      if ( *(_QWORD *)(v32 + 8) )
        v31 = *(const char **)v32;
      ++v30;
      sub_649F10(a2, v31);
    }
    while ( v30 != v29 );
  }
  v33 = *(_QWORD *)(a1 + 184);
  v34 = 0;
  sub_3A0970(a2, v33);
  if ( v33 )
  {
    do
    {
      v35 = v34++;
      sub_7DE6E0(a2, (const void *)(*(_QWORD *)(a1 + 176) + 16 * v35), 0x10u);
    }
    while ( v34 != v33 );
  }
  v36 = *(_QWORD *)(a1 + 208);
  v37 = 0;
  sub_3A0970(a2, v36);
  if ( v36 )
  {
    do
    {
      v38 = v37++;
      sub_7DE6E0(a2, (const void *)(*(_QWORD *)(a1 + 200) + 16 * v38), 0x10u);
    }
    while ( v37 != v36 );
  }
  v39 = *(_QWORD *)(a1 + 232);
  v40 = 0;
  sub_3A0970(a2, v39);
  if ( v39 )
  {
    do
    {
      v41 = v40++;
      v42 = (__int64 *)(*(_QWORD *)(a1 + 224) + 16 * v41);
      sub_3A0A80(a2, *v42);
      sub_3A0A80(a2, v42[1]);
    }
    while ( v40 != v39 );
  }
  return sub_3A0A80(a2, *(_QWORD *)(a1 + 248));
}
