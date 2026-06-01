unsigned __int64 __fastcall sub_21C6C70(void ***a1, unsigned __int64 a2)
{
  void **v2; // r14
  unsigned __int64 result; // rax
  void **v5; // r8
  __int64 v6; // r12
  void **v7; // rax
  void **v8; // rbx
  void **v9; // rbp
  void **v10; // r15
  void **v11; // rdx
  void **v12; // rax
  void *v13; // rdi
  void *v14; // rsi
  void *v15; // rdi
  void *v16; // rsi
  signed __int64 v17; // [rsp+0h] [rbp-48h]
  void **v18; // [rsp+8h] [rbp-40h]

  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::__throw_length_error("vector::reserve");
  v2 = *a1;
  result = 0xAAAAAAAAAAAAAAABLL * (a1[2] - *a1);
  if ( a2 > result )
  {
    v5 = a1[1];
    v6 = 3 * a2;
    v17 = (char *)v5 - (char *)v2;
    if ( a2 )
    {
      v18 = a1[1];
      v7 = (void **)operator new(24 * a2);
      v5 = v18;
      v8 = a1[1];
      v9 = v7;
      v10 = *a1;
      if ( v18 == v2 )
        goto LABEL_7;
    }
    else
    {
      v10 = *a1;
      v8 = a1[1];
      v9 = nullptr;
      if ( v5 == v2 )
      {
LABEL_11:
        if ( v10 )
          operator delete(v10);
        *a1 = v9;
        a1[1] = (void **)((char *)v9 + v17);
        a1[2] = &v9[v6];
        return (unsigned __int64)v9 + v17;
      }
    }
    v11 = v2;
    v12 = v9;
    do
    {
      *(_OWORD *)v12 = 0;
      v11 += 3;
      v12 += 3;
      *(v12 - 1) = nullptr;
      *(v12 - 3) = *(v11 - 3);
      v13 = *(v11 - 2);
      *(v11 - 3) = nullptr;
      v14 = *(v12 - 2);
      *(v12 - 2) = v13;
      v15 = *(v11 - 1);
      *(v11 - 2) = v14;
      v16 = *(v12 - 1);
      *(v12 - 1) = v15;
      *(v11 - 1) = v16;
    }
    while ( v5 != v11 );
LABEL_7:
    if ( v8 != v10 )
    {
      do
      {
        while ( *v10 )
        {
          operator delete(*v10);
          v10 += 3;
          if ( v10 == v8 )
            goto LABEL_10;
        }
        v10 += 3;
      }
      while ( v10 != v8 );
LABEL_10:
      v10 = *a1;
    }
    goto LABEL_11;
  }
  return result;
}
