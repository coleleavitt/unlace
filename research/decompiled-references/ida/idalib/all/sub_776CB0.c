__int64 __fastcall sub_776CB0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rcx
  __int128 v12; // kr00_16
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // r15
  size_t v17; // r9
  __int64 v18; // r8
  size_t v19; // r10
  _BYTE *v20; // rsi
  __int64 v22; // r13
  unsigned __int64 v23; // r15
  _BYTE *v24; // rsi
  _BYTE *v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // r12
  _BYTE *v28; // rsi
  size_t v29; // [rsp+0h] [rbp-90h]
  size_t v30; // [rsp+8h] [rbp-88h]
  __int64 v31; // [rsp+10h] [rbp-80h]
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  __int128 v33; // [rsp+20h] [rbp-70h]
  void *v34; // [rsp+38h] [rbp-58h] BYREF
  __int128 v35; // [rsp+40h] [rbp-50h]
  unsigned __int64 v36; // [rsp+50h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v33 = 0;
  ptr = nullptr;
  if ( a3 >= *(_QWORD *)(a2 + 56) )
  {
    v11 = nullptr;
    v12 = 0u;
LABEL_9:
    *(_QWORD *)a1 = v11;
    *(_OWORD *)(a1 + 8) = v12;
    return a1;
  }
  v4 = a3;
  if ( a3 )
  {
    v35 = 0;
    v7 = nullptr;
    v34 = nullptr;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 < v9 + 1 )
      {
        v34 = (void *)qvector_reserve(&v34, v7, v9 + 1, 8);
        v9 = v35;
        v7 = v34;
      }
      v7[v9] = v4;
      v10 = v35;
      v9 = v35 + 1;
      v4 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 176 * v4 + 160);
      *(_QWORD *)&v35 = v35 + 1;
      if ( !v4 )
        break;
      v8 = *((_QWORD *)&v35 + 1);
      v7 = v34;
    }
    v14 = v10;
    if ( v10 >= 0 )
    {
      do
      {
        v22 = v33;
        v23 = 2;
        if ( (_QWORD)v33 )
        {
          v23 = v33 + 1;
          v22 = v33 - 1;
        }
        v24 = ptr;
        if ( *((_QWORD *)&v33 + 1) < v23 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
          v24 = ptr;
        }
        *(_QWORD *)&v33 = v23;
        v24[v22] = 47;
        *((_BYTE *)ptr + v22 + 1) = 0;
        v15 = *(_QWORD *)(a2 + 48) + 176LL * *((_QWORD *)v34 + v14);
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v16 != 1 )
          {
            v18 = v33;
            v19 = v16 - 1;
            if ( (_QWORD)v33 )
            {
              v18 = v33 - 1;
              v19 = v17 + v33 - 1;
              v16 += v33 - 1;
            }
            v20 = ptr;
            if ( *((_QWORD *)&v33 + 1) < v16 )
            {
              v31 = v18;
              v30 = v17;
              v29 = v19;
              ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
              v18 = v31;
              v20 = ptr;
              v17 = v30;
              v19 = v29;
            }
            *(_QWORD *)&v33 = v16;
            v20[v19] = 0;
            memcpy((char *)ptr + v18, *(const void **)v15, v17);
          }
        }
      }
      while ( v14-- != 0 );
    }
    if ( a4 )
    {
      v26 = v33;
      v27 = 2;
      if ( (_QWORD)v33 )
      {
        v27 = v33 + 1;
        v26 = v33 - 1;
      }
      v28 = ptr;
      if ( *((_QWORD *)&v33 + 1) < v27 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
        v28 = ptr;
      }
      *(_QWORD *)&v33 = v27;
      v28[v26] = 47;
      *((_BYTE *)ptr + v26 + 1) = 0;
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    v11 = ptr;
    v12 = v33;
    goto LABEL_9;
  }
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v25 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 8) = 2;
  *v25 = 47;
  *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    qfree(ptr);
  }
  return a1;
}
