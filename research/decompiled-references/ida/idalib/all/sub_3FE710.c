__int64 __fastcall sub_3FE710(__int64 a1, _QWORD *a2)
{
  __int64 strlist_api; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int8 *v6; // r15
  int v7; // edi
  int v8; // ebp
  signed int v9; // r13d
  _BYTE *v10; // rax
  unsigned __int8 v11; // dl
  _BYTE *v12; // rsi
  signed int v13; // r14d
  int max_strlit_length; // eax
  __int64 v15; // r9
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // rsi
  _QWORD *v21; // rbp
  unsigned __int64 v22; // rbx
  size_t v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // r13
  size_t v28; // r15
  __int64 v29; // rsi
  unsigned __int8 *v30; // [rsp+8h] [rbp-80h]
  int v31; // [rsp+14h] [rbp-74h]
  __int64 v33; // [rsp+28h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) == -1 )
    return 0;
  strlist_api = get_strlist_api();
  v31 = 64;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 24LL))(strlist_api);
  if ( *(_BYTE *)(v4 + 34) )
    v31 = 65;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)strlist_api + 16LL))(strlist_api);
  v6 = *(unsigned __int8 **)v5;
  v30 = (unsigned __int8 *)(*(_QWORD *)v5 + *(_QWORD *)(v5 + 8));
  if ( v30 == *(unsigned __int8 **)v5 )
  {
    v15 = 0;
    v7 = 0;
    v9 = 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = *(_BYTE **)v4;
      v11 = *v6;
      v12 = (_BYTE *)(*(_QWORD *)v4 + *(_QWORD *)(v4 + 8));
      if ( *(_BYTE **)v4 != v12 )
      {
        while ( v11 != *v10 )
        {
          if ( v12 == ++v10 )
            goto LABEL_13;
        }
        if ( v12 != v10 )
        {
          v13 = v11;
          max_strlit_length = get_max_strlit_length(*(_QWORD *)(a1 + 16), v11, v31);
          v7 = max_strlit_length;
          if ( max_strlit_length > v8 )
          {
            v9 = v13;
            v8 = max_strlit_length;
          }
        }
      }
LABEL_13:
      ++v6;
    }
    while ( v30 != v6 );
    v15 = v8;
  }
  if ( *(_QWORD *)(v4 + 24) >= v15 )
    return 0;
  v17 = *(_QWORD *)(a1 + 16);
  src = nullptr;
  v33 = 64;
  v35 = 0;
  get_strlit_contents((__int64 *)&src, v17, v7, v9, &v33, 1);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 64LL))(a2, 29);
  v18 = a2[4];
  v19 = 2;
  if ( v18 )
    v19 = v18-- + 1;
  v20 = a2[3];
  v21 = a2 + 3;
  if ( a2[5] < v19 )
  {
    v20 = qvector_reserve(a2 + 3, v20, v19, 1);
    a2[3] = v20;
  }
  a2[4] = v19;
  *(_BYTE *)(v20 + v18) = 34;
  *(_BYTE *)(a2[3] + v18 + 1) = 0;
  v22 = v35;
  if ( (_QWORD)v35 )
  {
    v23 = v35 - 1;
    if ( (_QWORD)v35 != 1 )
    {
      v27 = a2[4];
      v28 = v35 - 1;
      if ( v27 )
      {
        --v27;
        v28 = v23 + v27;
        v22 = v35 + v27;
      }
      v29 = a2[3];
      if ( a2[5] < v22 )
      {
        v29 = qvector_reserve(v21, v29, v22, 1);
        a2[3] = v29;
      }
      a2[4] = v22;
      *(_BYTE *)(v29 + v28) = 0;
      memcpy((void *)(v27 + a2[3]), src, v23);
    }
  }
  v24 = 2;
  v25 = a2[4];
  if ( v25 )
    v24 = v25-- + 1;
  v26 = a2[3];
  if ( a2[5] < v24 )
  {
    v26 = qvector_reserve(v21, v26, v24, 1);
    a2[3] = v26;
  }
  a2[4] = v24;
  *(_BYTE *)(v26 + v25) = 34;
  *(_BYTE *)(a2[3] + v25 + 1) = 0;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 29);
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    qfree(src);
  }
  return 1;
}
