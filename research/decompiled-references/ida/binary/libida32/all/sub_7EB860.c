void *__fastcall sub_7EB860(__int64 a1, __int64 *a2, int a3)
{
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // rax
  const char *v11; // r14
  size_t v12; // rdx
  __int64 v13; // r14
  size_t v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r13
  size_t v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  size_t v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rax
  size_t v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  size_t v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  size_t v31; // rax
  const char *v32; // rbx
  size_t v33; // rdx
  size_t v35; // rax
  _BYTE v36[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v37[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v38[8]; // [rsp+28h] [rbp-40h] BYREF

  v38[0] = __readfsqword(0x28u);
  sub_7E7BD0(a2, (const void *)a1, 6u);
  v5 = pack_dd(v36, v37, *(unsigned int *)(a1 + 8)) - (_QWORD)v36;
  if ( v5 )
    sub_7E7BD0(a2, v36, v5);
  v6 = pack_dd(v36, v37, *(unsigned int *)(a1 + 12)) - (_QWORD)v36;
  if ( v6 )
    sub_7E7BD0(a2, v36, v6);
  v7 = pack_dd(v36, v37, *(unsigned int *)(a1 + 16)) - (_QWORD)v36;
  if ( v7 )
    sub_7E7BD0(a2, v36, v7);
  if ( a3 > 1 )
  {
    v35 = pack_dd(v36, v37, *(unsigned int *)(a1 + 20)) - (_QWORD)v36;
    if ( v35 )
      sub_7E7BD0(a2, v36, v35);
  }
  v10 = pack_dq(v36, v38, *(_QWORD *)(a1 + 24), v8, v9) - (_QWORD)v36;
  if ( v10 )
    sub_7E7BD0(a2, v36, v10);
  v11 = haystack;
  if ( *(_QWORD *)(a1 + 40) )
    v11 = *(const char **)(a1 + 32);
  if ( v11 )
  {
    v12 = strlen(v11) + 1;
  }
  else
  {
    v12 = 1;
    v11 = &byte_22CD811;
  }
  sub_7E7BD0(a2, v11, v12);
  v13 = *(_QWORD *)(a1 + 64);
  v14 = pack_dd(v36, v37, (unsigned int)v13) - (_QWORD)v36;
  if ( v14 )
    sub_7E7BD0(a2, v36, v14);
  v15 = 0;
  if ( v13 )
  {
    do
    {
      v16 = 5 * v15++;
      sub_7EB370(*(_QWORD *)(a1 + 56) + 8 * v16, a2);
    }
    while ( v13 != v15 );
  }
  v17 = *(_QWORD *)(a1 + 88);
  v18 = pack_dd(v36, v37, (unsigned int)v17) - (_QWORD)v36;
  if ( v18 )
    sub_7E7BD0(a2, v36, v18);
  v21 = 0;
  if ( v17 )
  {
    do
    {
      v23 = haystack;
      v24 = *(_QWORD *)(a1 + 80) + 24 * v21;
      if ( *(_QWORD *)(v24 + 8) )
        v23 = *(const char **)v24;
      if ( v23 )
      {
        v22 = strlen(v23) + 1;
      }
      else
      {
        v22 = 1;
        v23 = &byte_22CD811;
      }
      ++v21;
      sub_7E7BD0(a2, v23, v22);
    }
    while ( v21 != v17 );
  }
  v25 = pack_dq(v36, v38, *(_QWORD *)(a1 + 104), v19, v20) - (_QWORD)v36;
  if ( v25 )
    sub_7E7BD0(a2, v36, v25);
  v28 = pack_dq(v36, v38, *(_QWORD *)(a1 + 112), v26, v27) - (_QWORD)v36;
  if ( v28 )
    sub_7E7BD0(a2, v36, v28);
  v31 = pack_dq(v36, v38, *(_QWORD *)(a1 + 120), v29, v30) - (_QWORD)v36;
  if ( v31 )
    sub_7E7BD0(a2, v36, v31);
  v32 = haystack;
  if ( *(_QWORD *)(a1 + 136) )
    v32 = *(const char **)(a1 + 128);
  if ( v32 )
  {
    v33 = strlen(v32) + 1;
  }
  else
  {
    v33 = 1;
    v32 = &byte_22CD811;
  }
  return sub_7E7BD0(a2, v32, v33);
}

