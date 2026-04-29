__int64 __fastcall sub_63C20(__int64 *a1, __int64 *a2)
{
  const void *v3; // r12
  unsigned __int64 v4; // rbx
  unsigned int v5; // r12d
  void *v7; // rdi
  __int64 v8; // r13
  __int64 *v9; // r14
  void *v10; // r8
  void *v11; // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  const void *v14; // rbx
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v3 = (const void *)a1[3];
  v22 = __readfsqword(0x28u);
  if ( v3 )
  {
    if ( a2 != a1 + 3 )
    {
      v4 = a1[4];
      if ( v4 > 1 )
      {
        v7 = (void *)*a2;
        if ( a2[2] < v4 )
        {
          v13 = qvector_reserve(a2, *a2, v4, 1);
          *a2 = v13;
          v7 = (void *)v13;
        }
        a2[1] = v4;
        memmove(v7, v3, v4 - 1);
        *(_BYTE *)(*a2 + v4 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    return 0;
  }
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a1 + 248))(a1, &v19);
  if ( v5 )
    return v5;
  src = nullptr;
  v21 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 144LL))(v19, &src);
  if ( !v5 )
  {
    v8 = v21;
    v9 = a1 + 3;
    if ( (unsigned __int64)v21 < 2 )
    {
      a1[4] = 0;
      if ( v9 == a2 )
        goto LABEL_9;
    }
    else
    {
      v10 = src;
      v11 = (void *)a1[3];
      if ( a1[5] < (unsigned __int64)v21 )
      {
        v18 = src;
        v16 = qvector_reserve(a1 + 3, a1[3], v21, 1);
        a1[3] = v16;
        v10 = v18;
        v11 = (void *)v16;
      }
      a1[4] = v8;
      memmove(v11, v10, v8 - 1);
      *(_BYTE *)(a1[3] + v8 - 1) = 0;
      if ( v9 == a2 )
        goto LABEL_9;
      v12 = a1[4];
      if ( v12 > 1 )
      {
        v14 = (const void *)a1[3];
        v15 = (void *)*a2;
        if ( a2[2] < v12 )
        {
          v17 = qvector_reserve(a2, *a2, v12, 1);
          *a2 = v17;
          v15 = (void *)v17;
        }
        a2[1] = v12;
        memmove(v15, v14, v12 - 1);
        *(_BYTE *)(*a2 + v12 - 1) = 0;
        goto LABEL_9;
      }
    }
    a2[1] = 0;
  }
LABEL_9:
  if ( src )
  {
    *(_QWORD *)&v21 = 0;
    qfree(src);
  }
  return v5;
}
