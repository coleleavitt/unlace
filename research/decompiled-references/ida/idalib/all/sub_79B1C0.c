__int64 __fastcall sub_79B1C0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  __int64 v13; // rax
  void *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  const char *v22; // rbp
  size_t v23; // r13
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *ptr; // [rsp+8h] [rbp-A8h] BYREF
  int v31[4]; // [rsp+10h] [rbp-A0h]
  void *v32[2]; // [rsp+28h] [rbp-88h] BYREF
  int v33[4]; // [rsp+38h] [rbp-78h]
  __int64 v34; // [rsp+48h] [rbp-68h] BYREF
  void *v35; // [rsp+50h] [rbp-60h] BYREF
  __int128 v36; // [rsp+58h] [rbp-58h]
  unsigned __int64 v37; // [rsp+70h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  *(_OWORD *)v31 = 0;
  ptr = nullptr;
  v7 = sub_7980D0((__int64)a1, (__int64)&ptr, a3, a4, a5, a6);
  v8 = v7;
  if ( v7 )
  {
    v9 = sub_7921C0(v7, (__int64)&ptr);
    if ( v9 == (_QWORD *)(v8 + 8) )
    {
      v11 = sub_799550(a1, v8, (__int64)&ptr, a2);
    }
    else
    {
      v10 = v9 + 7;
      copy_idcv(*a2);
      *a2 = (__int64)v10;
      v11 = 1;
    }
  }
  else
  {
    v13 = a1[3] + 32LL * a1[4] - 32;
    if ( *(_BYTE *)v13 == 2 && dword_2C7C674[1] > 0 )
    {
      v14 = *(void **)(v13 + 8);
      v15 = *a2;
      *a2 = 0;
      v16 = a1[10];
      v17 = a1[4];
      v18 = a1[9];
      if ( a1[11] < (unsigned __int64)(v16 + 1) )
      {
        v28 = qvector_reserve(a1 + 9, v18, v16 + 1, 4);
        a1[9] = v28;
        v18 = v28;
        v16 = a1[10];
      }
      *(_DWORD *)(v18 + 4 * v16) = v17;
      v19 = a1[4];
      ++a1[10];
      v20 = a1[3];
      LOBYTE(v32[0]) = 2;
      v32[1] = v14;
      *(_OWORD *)v33 = 0;
      if ( a1[5] < (unsigned __int64)(v19 + 1) )
      {
        v27 = qvector_reserve(a1 + 3, v20, v19 + 1, 32);
        a1[3] = v27;
        v20 = v27;
        v19 = a1[4];
      }
      v21 = v20 + 32 * v19;
      *(_BYTE *)v21 = 2;
      *(_QWORD *)(v21 + 24) = 0;
      *(_OWORD *)(v21 + 8) = 0;
      ++a1[4];
      move_idcv(v21, v32);
      v22 = haystack;
      if ( *(_QWORD *)v31 )
        v22 = (const char *)ptr;
      v34 = 7;
      v35 = nullptr;
      v36 = 0;
      if ( v22 )
      {
        v23 = strlen(v22);
        v35 = (void *)qvector_reserve(&v35, 0, v23 + 1, 1);
        *(_QWORD *)&v36 = v23 + 1;
        memmove(v35, v22, v23);
        *((_BYTE *)v35 + v23) = 0;
      }
      v24 = a1[4];
      v25 = a1[3];
      if ( a1[5] < (unsigned __int64)(v24 + 1) )
      {
        v29 = qvector_reserve(a1 + 3, v25, v24 + 1, 32);
        a1[3] = v29;
        v25 = v29;
        v24 = a1[4];
      }
      v26 = v25 + 32 * v24;
      *(_BYTE *)v26 = 2;
      *(_QWORD *)(v26 + 24) = 0;
      *(_OWORD *)(v26 + 8) = 0;
      ++a1[4];
      move_idcv(v26, &v34);
      v11 = sub_795CA0(a1, v15, nullptr, -dword_2C7C674[1]);
      free_idcv(&v34);
      free_idcv(v32);
    }
    else
    {
      sub_799390(a1);
      v11 = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)v31 = 0;
    qfree(ptr);
  }
  return v11;
}
