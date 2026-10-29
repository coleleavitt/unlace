unsigned __int64 __fastcall sub_39D920(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1344);
  v36 = __readfsqword(0x28u);
  v33 = v4 + 72;
  if ( (unsigned __int8)sub_79B370(a2, v4 + 72) )
  {
    ptr = nullptr;
    v35 = 0;
    sub_79BD30(v33, a2, &ptr);
    v13 = a3[1];
    v14 = *a3;
    if ( a3[2] < (unsigned __int64)(v13 + 1) )
    {
      v30 = qvector_reserve(a3, v14, v13 + 1, 24);
      *a3 = v30;
      v13 = a3[1];
      v14 = v30;
    }
    v15 = v14 + 24 * v13;
    *(_QWORD *)v15 = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v15);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  if ( (unsigned __int8)sub_79B370(a2, v4 + 76) )
  {
    ptr = nullptr;
    v35 = 0;
    sub_79BD30(v4 + 76, a2, &ptr);
    v25 = a3[1];
    v26 = *a3;
    if ( a3[2] < (unsigned __int64)(v25 + 1) )
    {
      v31 = qvector_reserve(a3, v26, v25 + 1, 24);
      *a3 = v31;
      v25 = a3[1];
      v26 = v31;
    }
    v27 = v26 + 24 * v25;
    *(_QWORD *)v27 = 0;
    *(_OWORD *)(v27 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v27);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  if ( (unsigned __int8)sub_79B370(a2, v4 + 88) )
  {
    ptr = nullptr;
    v35 = 0;
    sub_79BD30(v4 + 88, a2, &ptr);
    v22 = a3[1];
    v23 = *a3;
    if ( a3[2] < (unsigned __int64)(v22 + 1) )
    {
      v28 = qvector_reserve(a3, v23, v22 + 1, 24);
      *a3 = v28;
      v22 = a3[1];
      v23 = v28;
    }
    v24 = v23 + 24 * v22;
    *(_QWORD *)v24 = 0;
    *(_OWORD *)(v24 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v24);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  if ( (unsigned __int8)sub_79B370(a2, v4 + 80) )
  {
    ptr = nullptr;
    v35 = 0;
    sub_79BD30(v4 + 80, a2, &ptr);
    v19 = a3[1];
    v20 = *a3;
    if ( a3[2] < (unsigned __int64)(v19 + 1) )
    {
      v32 = qvector_reserve(a3, v20, v19 + 1, 24);
      *a3 = v32;
      v19 = a3[1];
      v20 = v32;
    }
    v21 = v20 + 24 * v19;
    *(_QWORD *)v21 = 0;
    *(_OWORD *)(v21 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v21);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  if ( (unsigned __int8)sub_79B370(a2, v4 + 84) )
  {
    ptr = nullptr;
    v35 = 0;
    sub_79BD30(v4 + 84, a2, &ptr);
    v16 = a3[1];
    v17 = *a3;
    if ( a3[2] < (unsigned __int64)(v16 + 1) )
    {
      v29 = qvector_reserve(a3, v17, v16 + 1, 24);
      *a3 = v29;
      v16 = a3[1];
      v17 = v29;
    }
    v18 = v17 + 24 * v16;
    *(_QWORD *)v18 = 0;
    *(_OWORD *)(v18 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v18);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
  }
  v6 = (_DWORD *)(v4 + 128);
  v7 = 0;
  while ( !(unsigned __int8)sub_79B370(a2, v6) )
  {
LABEL_8:
    ++v7;
    v6 += 26;
    if ( v7 == 14 )
      return v36 - __readfsqword(0x28u);
  }
  if ( *v6 == (unsigned int)sub_79B3A0(v33, a2, (unsigned int)dword_2389780[v7], 65) )
  {
    v9 = a3[1];
    v10 = *a3;
    if ( a3[2] < (unsigned __int64)(v9 + 1) )
    {
      v11 = qvector_reserve(a3, v10, v9 + 1, 24);
      v9 = a3[1];
      *a3 = v11;
      v10 = v11;
    }
    v8 = v10 + 24 * v9;
    *(_QWORD *)v8 = 0;
    *(_OWORD *)(v8 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v8);
    goto LABEL_8;
  }
  return v36 - __readfsqword(0x28u);
}

