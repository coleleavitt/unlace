unsigned __int64 __fastcall sub_A7EC0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v5; // rax
  __int128 i; // xmm0
  __int64 v7; // rbx
  int v8; // eax
  size_t v9; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdi
  bool v15; // cc
  void *v16; // rax
  void *v17; // rsi
  int v18; // [rsp+0h] [rbp-88h] BYREF
  void *src; // [rsp+8h] [rbp-80h]
  size_t n[2]; // [rsp+10h] [rbp-78h]
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v24 - __readfsqword(0x28u);
  v18 = -2;
  src = (void *)-1LL;
  *(_OWORD *)n = 0;
  if ( a2 < v2 )
  {
    v11 = a2;
    do
    {
      v12 = *a1 + 32 * v11;
      if ( *(int *)v12 >= -1 && *(_QWORD *)(v12 + 8) )
      {
        *(_QWORD *)(v12 + 16) = 0;
        qfree();
      }
      ++v11;
    }
    while ( v2 != v11 );
  }
  else
  {
    v5 = a1[2];
    if ( (unsigned __int64)&v18 >= *a1 && (unsigned __int64)&v18 < *a1 + 32 * v5 )
    {
      v21 = -2;
      v22 = 0;
      v23 = 0;
      sub_9CC30((__int64)&v21, (__int64)&v18);
      if ( a1[2] < a2 )
        *a1 = qvector_reserve();
      v13 = a1[1];
      if ( v13 < a2 )
      {
        do
        {
          v14 = *a1 + 32 * v13;
          *(_DWORD *)v14 = -2;
          *(_QWORD *)(v14 + 24) = 0;
          *(_OWORD *)(v14 + 8) = 0;
          sub_9CC30(v14, (__int64)&v21);
          ++v13;
        }
        while ( a2 != v13 );
      }
      v15 = v21 < -1;
      a1[1] = a2;
      if ( !v15 && (_QWORD)v22 )
      {
        *((_QWORD *)&v22 + 1) = 0;
        qfree();
      }
      goto LABEL_14;
    }
    if ( v5 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    for ( i = 0; v2 < a2; ++v2 )
    {
      v7 = *a1 + 32 * v2;
      *(_DWORD *)v7 = -2;
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 8) = i;
      if ( (int *)v7 != &v18 )
      {
        v8 = v18;
        if ( v18 < -1 )
        {
          *(_QWORD *)(v7 + 8) = src;
        }
        else
        {
          *(_QWORD *)(v7 + 8) = 0;
          *(_OWORD *)(v7 + 16) = 0;
          v9 = n[0];
          if ( n[0] )
          {
            v16 = (void *)qalloc_or_throw();
            *(_QWORD *)(v7 + 8) = v16;
            v17 = src;
            *(_QWORD *)(v7 + 24) = v9;
            memcpy(v16, v17, v9);
            *(_QWORD *)(v7 + 16) = v9;
            v8 = v18;
            i = 0;
          }
        }
        *(_DWORD *)v7 = v8;
      }
    }
  }
  a1[1] = a2;
LABEL_14:
  if ( v18 >= -1 && src )
  {
    n[0] = 0;
    qfree();
  }
  return v24 - __readfsqword(0x28u);
}

