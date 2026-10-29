unsigned __int64 __fastcall sub_7ECE90(__int64 a1, __int64 *a2, int a3)
{
  size_t v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  size_t v7; // rdx
  const char *v8; // rsi
  size_t v9; // rdx
  const char *v10; // rsi
  size_t v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  size_t v17; // rax
  const char *v18; // rsi
  __int64 v19; // rbp
  __int64 v21; // [rsp+10h] [rbp-68h]
  _BYTE v22[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v23[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v24[8]; // [rsp+38h] [rbp-40h] BYREF

  v24[0] = __readfsqword(0x28u);
  sub_7EB860(a1, a2, a3);
  v21 = *(_QWORD *)(a1 + 160);
  v4 = pack_dd(v22, v23, (unsigned int)v21) - (_QWORD)v22;
  if ( v4 )
    sub_7E7BD0(a2, v22, v4);
  v5 = 0;
  v6 = 0;
  if ( v21 )
  {
    do
    {
      v18 = haystack;
      v19 = v5 + *(_QWORD *)(a1 + 152);
      if ( *(_QWORD *)(v19 + 8) )
        v18 = *(const char **)v19;
      if ( v18 )
      {
        v7 = strlen(v18) + 1;
      }
      else
      {
        v7 = 1;
        v18 = &byte_22CD811;
      }
      sub_7E7BD0(a2, v18, v7);
      v8 = haystack;
      if ( *(_QWORD *)(v19 + 32) )
        v8 = *(const char **)(v19 + 24);
      if ( v8 )
      {
        v9 = strlen(v8) + 1;
      }
      else
      {
        v9 = 1;
        v8 = &byte_22CD811;
      }
      sub_7E7BD0(a2, v8, v9);
      v10 = haystack;
      if ( *(_QWORD *)(v19 + 56) )
        v10 = *(const char **)(v19 + 48);
      if ( v10 )
      {
        v11 = strlen(v10) + 1;
      }
      else
      {
        v11 = 1;
        v10 = &byte_22CD811;
      }
      sub_7E7BD0(a2, v10, v11);
      v14 = pack_dq(v22, v24, *(_QWORD *)(v19 + 72), v12, v13) - (_QWORD)v22;
      if ( v14 )
        sub_7E7BD0(a2, v22, v14);
      v17 = pack_dq(v22, v24, *(_QWORD *)(v19 + 80), v15, v16) - (_QWORD)v22;
      if ( v17 )
        sub_7E7BD0(a2, v22, v17);
      ++v6;
      v5 += 88;
    }
    while ( v21 != v6 );
  }
  return v24[0] - __readfsqword(0x28u);
}

