unsigned __int64 __fastcall sub_7C5560(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  size_t v4; // rdx
  const char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r8
  _QWORD *v10; // r15
  size_t v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // r15
  size_t v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v24; // rax
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  _BYTE v28[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _QWORD v29[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  v29[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)a1);
  v3 = *(_QWORD *)(a1 + 16);
  sub_407AD0(a2, v3);
  if ( v3 )
  {
    do
    {
      v5 = haystack;
      v6 = *(_QWORD *)(a1 + 8) + 24 * v2;
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      if ( v5 )
      {
        v4 = strlen(v5) + 1;
      }
      else
      {
        v4 = 1;
        v5 = &byte_22CD811;
      }
      ++v2;
      sub_7BB300(a2, v5, v4);
    }
    while ( v3 != v2 );
  }
  v7 = *(_QWORD *)(a1 + 40);
  v8 = 0;
  v26 = v7;
  sub_407AD0(a2, v7);
  if ( v7 )
  {
    do
    {
      v10 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 16 * v8);
      v11 = pack_dq(v28, v29, *v10, v10, v9) - (_QWORD)v28;
      if ( v11 )
        sub_7BB300(a2, v28, v11);
      v14 = pack_dq(v28, v29, v10[1], v12, v13) - (_QWORD)v28;
      if ( v14 )
        sub_7BB300(a2, v28, v14);
      ++v8;
    }
    while ( v8 != v26 );
  }
  v15 = *(_QWORD *)(a1 + 64);
  v16 = 0;
  v27 = v15;
  sub_407AD0(a2, v15);
  if ( v15 )
  {
    do
    {
      v20 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 16 * v16);
      v21 = pack_dq(v28, v29, *v20, v20, v19) - (_QWORD)v28;
      if ( v21 )
        sub_7BB300(a2, v28, v21);
      v24 = pack_dq(v28, v29, v20[1], v22, v23) - (_QWORD)v28;
      if ( v24 )
        sub_7BB300(a2, v28, v24);
      ++v16;
    }
    while ( v16 != v27 );
  }
  return sub_7BE190(a2, *(_QWORD *)(a1 + 80), v17, v18, v19);
}

