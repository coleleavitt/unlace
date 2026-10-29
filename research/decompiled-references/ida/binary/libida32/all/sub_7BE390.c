unsigned __int64 __fastcall sub_7BE390(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 i; // r14
  size_t v9; // rdx
  size_t v10; // rax
  unsigned __int64 v11; // rdx
  size_t v12; // rax
  unsigned __int64 v13; // rdx
  const void *v14; // rbp
  const char *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // rax
  size_t v23; // [rsp+8h] [rbp-70h]
  size_t v24; // [rsp+8h] [rbp-70h]
  const void *v25; // [rsp+10h] [rbp-68h]
  _BYTE v26[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v27[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v28[8]; // [rsp+38h] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)(a1 + 12));
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v3 = *(const char **)(a1 + 16);
  sub_62C910(a2, v3);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v4 = *(const char **)(a1 + 40);
  sub_62C910(a2, v4);
  sub_7BB300(a2, (const void *)(a1 + 64), 0x10u);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 88) )
    v5 = *(const char **)(a1 + 80);
  sub_62C910(a2, v5);
  v6 = *(_QWORD *)(a1 + 112);
  sub_407AD0(a2, v6);
  if ( v6 )
  {
    v7 = 0;
    for ( i = 0; i != v6; ++i )
    {
      v15 = haystack;
      v16 = v7 + *(_QWORD *)(a1 + 104);
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      if ( v15 )
      {
        v9 = strlen(v15) + 1;
      }
      else
      {
        v9 = 1;
        v15 = &byte_22CD811;
      }
      sub_7BB300(a2, v15, v9);
      v10 = pack_dd(v26, v27, *(unsigned int *)(v16 + 24)) - (_QWORD)v26;
      if ( v10 )
        sub_7BB300(a2, v26, v10);
      v11 = *(_QWORD *)(v16 + 40);
      v25 = *(const void **)(v16 + 32);
      if ( v11 > 0xFFFFFFFF )
        goto LABEL_30;
      v23 = *(_QWORD *)(v16 + 40);
      sub_407AD0(a2, v11);
      if ( v23 )
        sub_7BB300(a2, v25, v23);
      v12 = pack_dd(v26, v27, *(unsigned int *)(v16 + 56)) - (_QWORD)v26;
      if ( v12 )
        sub_7BB300(a2, v26, v12);
      v13 = *(_QWORD *)(v16 + 72);
      v14 = *(const void **)(v16 + 64);
      if ( v13 > 0xFFFFFFFF )
      {
LABEL_30:
        if ( !under_debugger )
          interr(5);
        BUG();
      }
      v24 = v13;
      sub_407AD0(a2, v13);
      if ( v24 )
        sub_7BB300(a2, v14, v24);
      v7 += 88;
    }
  }
  v17 = 0;
  v18 = *(_QWORD *)(a1 + 136);
  sub_407AD0(a2, v18);
  if ( v18 )
  {
    do
    {
      v21 = pack_dq(v26, v28, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v17) + 1LL, v19, v20) - (_QWORD)v26;
      if ( v21 )
        sub_7BB300(a2, v26, v21);
      ++v17;
    }
    while ( v17 != v18 );
  }
  return v28[0] - __readfsqword(0x28u);
}

