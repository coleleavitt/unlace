unsigned __int64 __fastcall sub_6A0580(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v10; // ebp
  int v11; // ebp
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // r14
  char *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v22[0] = a1;
  v22[1] = a2;
  v25 = __readfsqword(0x28u);
  v6 = unpack_dq(v22);
  v7 = unpack_dq(v22);
  v8 = v7;
  if ( a4 )
  {
    ptr = nullptr;
    v24 = 0;
    if ( v7 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v7, 8);
      v11 = 0;
      memset((char *)ptr + 8 * v24, 0, 8 * (v8 - v24));
      *(_QWORD *)&v24 = v8;
      v12 = 0;
      do
      {
        v13 = (char *)ptr + 8 * v12;
        ++v11;
        *v13 = unpack_dq(v22);
        v12 = v11;
      }
      while ( v11 < v8 );
      v14 = 8 * v6;
      v15 = (char *)ptr;
      v16 = *a3;
      v17 = 8 * v24;
      v18 = (8 * (__int64)v24) >> 3;
      if ( v18 )
      {
        v19 = a3[1];
        if ( a3[2] < (unsigned __int64)(v18 + v19) )
        {
          v21 = qvector_reserve(a3, v16, v18 + v19, 8);
          *a3 = v21;
          v19 = a3[1];
          v16 = v21;
        }
        memmove((void *)(v16 + v14 + v17), (const void *)(v16 + v14), 8 * v19 - v14);
        v20 = 0;
        if ( v17 )
        {
          do
          {
            *(_QWORD *)(v16 + v14 + v20) = *(_QWORD *)&v15[v20];
            v20 += 8;
          }
          while ( v17 != v20 );
        }
        a3[1] += v18;
        v15 = (char *)ptr;
      }
      if ( v15 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v15);
      }
    }
  }
  else
  {
    v10 = 0;
    memmove((void *)(*a3 + 8 * v6), (const void *)(*a3 + 8 * (v6 + v7)), 8 * (a3[1] - (v6 + v7)));
    a3[1] -= (__int64)(8 * v8) >> 3;
    if ( v8 )
    {
      do
      {
        ++v10;
        unpack_dq(v22);
      }
      while ( v10 < v8 );
    }
  }
  return v25 - __readfsqword(0x28u);
}
