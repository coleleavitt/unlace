__int64 __fastcall sub_77AD50(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  const char *v18; // rbp
  size_t v19; // r13
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *ptr; // [rsp+8h] [rbp-A8h] BYREF
  int v27[4]; // [rsp+10h] [rbp-A0h]
  void *v28; // [rsp+28h] [rbp-88h] BYREF
  _BYTE v29[24]; // [rsp+30h] [rbp-80h] BYREF
  __int64 v30; // [rsp+48h] [rbp-68h] BYREF
  void *v31; // [rsp+50h] [rbp-60h] BYREF
  __int128 v32; // [rsp+58h] [rbp-58h]
  unsigned __int64 v33; // [rsp+70h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  *(_OWORD *)v27 = 0;
  ptr = nullptr;
  v3 = sub_777CA0((__int64)a1, (__int64)&ptr);
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_771D80(v3, (__int64)&ptr);
    if ( v5 == (_QWORD *)(v4 + 8) )
    {
      v7 = sub_779110(a1, v4, (__int64)&ptr, a2);
    }
    else
    {
      v6 = v5 + 7;
      copy_idcv(*a2);
      *a2 = (__int64)v6;
      v7 = 1;
    }
  }
  else
  {
    v9 = a1[3] + 32LL * a1[4] - 32;
    if ( *(_BYTE *)v9 == 2 && dword_2C52654[1] > 0 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      v11 = *a2;
      *a2 = 0;
      v12 = a1[10];
      v13 = a1[4];
      v14 = a1[9];
      if ( a1[11] < (unsigned __int64)(v12 + 1) )
      {
        v24 = qvector_reserve(a1 + 9, v14, v12 + 1, 4);
        a1[9] = v24;
        v14 = v24;
        v12 = a1[10];
      }
      *(_DWORD *)(v14 + 4 * v12) = v13;
      v15 = a1[4];
      ++a1[10];
      v16 = a1[3];
      LOBYTE(v28) = 2;
      *(_DWORD *)v29 = v10;
      memset(&v29[4], 0, 20);
      if ( a1[5] < (unsigned __int64)(v15 + 1) )
      {
        v23 = qvector_reserve(a1 + 3, v16, v15 + 1, 32);
        a1[3] = v23;
        v16 = v23;
        v15 = a1[4];
      }
      v17 = v16 + 32 * v15;
      *(_BYTE *)v17 = 2;
      *(_QWORD *)(v17 + 24) = 0;
      *(_OWORD *)(v17 + 8) = 0;
      ++a1[4];
      move_idcv(v17, &v28);
      v18 = haystack;
      if ( *(_QWORD *)v27 )
        v18 = (const char *)ptr;
      v30 = 7;
      v31 = nullptr;
      v32 = 0;
      if ( v18 )
      {
        v19 = strlen(v18);
        v31 = (void *)qvector_reserve(&v31, 0, v19 + 1, 1);
        *(_QWORD *)&v32 = v19 + 1;
        memmove(v31, v18, v19);
        *((_BYTE *)v31 + v19) = 0;
      }
      v20 = a1[4];
      v21 = a1[3];
      if ( a1[5] < (unsigned __int64)(v20 + 1) )
      {
        v25 = qvector_reserve(a1 + 3, v21, v20 + 1, 32);
        a1[3] = v25;
        v21 = v25;
        v20 = a1[4];
      }
      v22 = v21 + 32 * v20;
      *(_BYTE *)v22 = 2;
      *(_QWORD *)(v22 + 24) = 0;
      *(_OWORD *)(v22 + 8) = 0;
      ++a1[4];
      move_idcv(v22, &v30);
      v7 = sub_775860(a1, v11, nullptr, -dword_2C52654[1]);
      free_idcv(&v30);
      free_idcv(&v28);
    }
    else
    {
      sub_778F50(a1);
      v7 = 0;
    }
  }
  if ( ptr )
  {
    *(_QWORD *)v27 = 0;
    qfree(ptr);
  }
  return v7;
}

