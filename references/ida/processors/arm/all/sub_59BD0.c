unsigned __int64 __fastcall sub_59BD0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r8
  size_t v8; // rax
  __int64 v9; // r15
  size_t v10; // rax
  size_t v11; // rax
  __int64 v12; // rsi
  char v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r15
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+0h] [rbp-78h]
  char v31; // [rsp+8h] [rbp-70h]
  _BYTE v32[3]; // [rsp+2Eh] [rbp-4Ah] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v3 = a2[1];
  v4 = *a2;
  v33 = __readfsqword(0x28u);
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v28 = qvector_reserve((__int64)a2, v4, v3 + 1, 1);
    *a2 = v28;
    v4 = v28;
    v3 = a2[1];
  }
  *(_BYTE *)(v4 + v3) = 2;
  ++a2[1];
  v5 = pack_dd() - (_QWORD)v32;
  if ( v5 )
    sub_59B10(a2, v32, v5);
  v6 = pack_dw() - (_QWORD)v32;
  if ( v6 )
    sub_59B10(a2, v32, v6);
  if ( a1[1] )
  {
    v29 = 0;
    v7 = 0;
    do
    {
      v9 = *a1 + 32 * v7;
      v10 = pack_dq() - (_QWORD)v32;
      if ( v10 )
        sub_59B10(a2, v32, v10);
      v11 = pack_dq() - (_QWORD)v32;
      if ( v11 )
        sub_59B10(a2, v32, v11);
      v12 = *a2;
      v13 = *(_BYTE *)(v9 + 24) + 1;
      v14 = a2[1];
      if ( a2[2] < (unsigned __int64)(v14 + 1) )
      {
        v31 = *(_BYTE *)(v9 + 24) + 1;
        v15 = qvector_reserve((__int64)a2, v12, v14 + 1, 1);
        v13 = v31;
        *a2 = v15;
        v12 = v15;
        v14 = a2[1];
      }
      *(_BYTE *)(v12 + v14) = v13;
      ++a2[1];
      v8 = pack_dq() - (_QWORD)v32;
      if ( v8 )
        sub_59B10(a2, v32, v8);
      v7 = ++v29;
    }
    while ( (unsigned __int64)v29 < a1[1] );
  }
  v16 = pack_dq() - (_QWORD)v32;
  if ( v16 )
    sub_59B10(a2, v32, v16);
  v17 = a1[6];
  v18 = pack_dw() - (_QWORD)v32;
  if ( v18 )
    sub_59B10(a2, v32, v18);
  if ( (int)v17 > 0 )
  {
    v19 = (unsigned int)(v17 - 1);
    v20 = 0;
    v30 = 8 * v19 + 8;
    do
    {
      v21 = pack_dq() - (_QWORD)v32;
      if ( v21 )
        sub_59B10(a2, v32, v21);
      v20 += 8;
    }
    while ( v30 != v20 );
  }
  v22 = pack_dq() - (_QWORD)v32;
  if ( v22 )
    sub_59B10(a2, v32, v22);
  v23 = pack_dq() - (_QWORD)v32;
  if ( v23 )
    sub_59B10(a2, v32, v23);
  v24 = pack_dq() - (_QWORD)v32;
  if ( v24 )
    sub_59B10(a2, v32, v24);
  v25 = pack_dq() - (_QWORD)v32;
  if ( v25 )
    sub_59B10(a2, v32, v25);
  v26 = pack_dq() - (_QWORD)v32;
  if ( v26 )
    sub_59B10(a2, v32, v26);
  return v33 - __readfsqword(0x28u);
}
