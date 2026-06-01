unsigned __int64 __fastcall sub_67FE60(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v10; // ebp
  int v11; // ebp
  __int64 v12; // rax
  _DWORD *v13; // r15
  __int64 v14; // r14
  char *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v22 = a1;
  v23 = a2;
  v26 = __readfsqword(0x28u);
  v6 = unpack_dq(&v22, a2);
  v7 = unpack_dq(&v22, v23);
  v8 = v7;
  if ( a4 )
  {
    ptr = nullptr;
    v25 = 0;
    if ( v7 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v7, 4);
      v11 = 0;
      memset((char *)ptr + 4 * v25, 0, 4 * (v8 - v25));
      *(_QWORD *)&v25 = v8;
      v12 = 0;
      do
      {
        v13 = (char *)ptr + 4 * v12;
        ++v11;
        *v13 = unpack_dd(&v22);
        v12 = v11;
      }
      while ( v11 < v8 );
      v14 = 4 * v6;
      v15 = (char *)ptr;
      v16 = *a3;
      v17 = 4 * v25;
      v18 = (4 * (__int64)v25) >> 2;
      if ( v18 )
      {
        v19 = a3[1];
        if ( a3[2] < (unsigned __int64)(v18 + v19) )
        {
          v21 = qvector_reserve(a3, v16, v18 + v19, 4);
          *a3 = v21;
          v19 = a3[1];
          v16 = v21;
        }
        memmove((void *)(v16 + v14 + v17), (const void *)(v16 + v14), 4 * v19 - v14);
        v20 = 0;
        if ( v17 )
        {
          do
          {
            *(_DWORD *)(v16 + v14 + v20) = *(_DWORD *)&v15[v20];
            v20 += 4;
          }
          while ( v17 != v20 );
        }
        a3[1] += v18;
        v15 = (char *)ptr;
      }
      if ( v15 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v15);
      }
    }
  }
  else
  {
    v10 = 0;
    memmove((void *)(*a3 + 4 * v6), (const void *)(*a3 + 4 * (v6 + v7)), 4 * (a3[1] - (v6 + v7)));
    a3[1] -= (__int64)(4 * v8) >> 2;
    if ( v8 )
    {
      do
      {
        ++v10;
        unpack_dd(&v22);
      }
      while ( v10 < v8 );
    }
  }
  return v26 - __readfsqword(0x28u);
}

