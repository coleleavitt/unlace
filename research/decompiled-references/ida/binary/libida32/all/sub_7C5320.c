unsigned __int64 __fastcall sub_7C5320(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  size_t v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  size_t v12; // rdx
  const char *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rdi
  _BYTE v20[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v21[8]; // [rsp+28h] [rbp-40h] BYREF

  v21[0] = __readfsqword(0x28u);
  v3 = a1[1];
  sub_407AD0(a2, v3);
  if ( v3 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = v7;
      v7 = *(_QWORD *)(*a1 + 8 * v6);
      v9 = pack_dq(v20, v21, v7 - v8, v4, v5) - (_QWORD)v20;
      if ( v9 )
        sub_7BB300(a2, v20, v9);
      ++v6;
    }
    while ( v3 != v6 );
  }
  v10 = a1[4];
  v11 = 0;
  sub_407AD0(a2, v10);
  if ( v10 )
  {
    do
    {
      v13 = haystack;
      v14 = a1[3] + 24 * v11;
      if ( *(_QWORD *)(v14 + 8) )
        v13 = *(const char **)v14;
      if ( v13 )
      {
        v12 = strlen(v13) + 1;
      }
      else
      {
        v12 = 1;
        v13 = &byte_22CD811;
      }
      ++v11;
      sub_7BB300(a2, v13, v12);
    }
    while ( v11 != v10 );
  }
  v15 = a1[7];
  v16 = 0;
  v17 = 0;
  sub_407AD0(a2, v15);
  if ( v15 )
  {
    do
    {
      ++v17;
      v18 = v16 + a1[6];
      v16 += 56;
      sub_7C5210(v18, a2);
    }
    while ( v17 != v15 );
  }
  return v21[0] - __readfsqword(0x28u);
}

