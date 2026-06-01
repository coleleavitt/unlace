void __fastcall sub_212EF10(__int64 **a1, unsigned __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char *v15; // r8
  _OWORD *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 *v20; // r13
  __int64 *v21; // r15
  _OWORD *v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // r14
  void *v30; // rdi
  unsigned __int64 v31; // [rsp+0h] [rbp-50h]
  _OWORD *v32; // [rsp+8h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-40h]

  if ( !a2 )
    return;
  v2 = a1[1];
  if ( a2 <= 0xAAAAAAAAAAAAAAABLL * (a1[2] - v2) )
  {
    if ( a2 - 1 <= 2 )
    {
      v8 = a2;
      v7 = a1[1];
    }
    else
    {
      v3 = a1[1];
      v4 = 0;
      v5 = ((a2 - 2) >> 1) + 1;
      do
      {
        ++v4;
        *(_OWORD *)v3 = 0;
        v3 += 6;
        *((_OWORD *)v3 - 2) = 0;
        *((_OWORD *)v3 - 1) = 0;
      }
      while ( v4 < v5 );
      v6 = 2 * v5;
      v7 = &v2[6 * v5];
      v8 = a2 - 2 * v5;
      if ( a2 == v6 )
      {
LABEL_10:
        a1[1] = &v2[3 * a2];
        return;
      }
    }
    v7[2] = 0;
    *(_OWORD *)v7 = 0;
    if ( v8 != 1 )
    {
      *(_OWORD *)(v7 + 3) = 0;
      v7[5] = 0;
      if ( v8 != 2 )
      {
        v7[8] = 0;
        *((_OWORD *)v7 + 3) = 0;
      }
    }
    goto LABEL_10;
  }
  v11 = (char *)v2 - (char *)*a1;
  v12 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
  v31 = v12;
  if ( 0xAAAAAAAAAAAAAAALL - v12 < a2 )
    std::__throw_length_error("vector::_M_default_append");
  v13 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
  if ( a2 >= v12 )
    v13 = a2;
  v14 = v12 + v13;
  if ( v14 > 0xAAAAAAAAAAAAAAALL )
    v14 = 0xAAAAAAAAAAAAAAALL;
  v33 = 24 * v14;
  v32 = (_OWORD *)operator new(24 * v14);
  v15 = (char *)v32 + v11;
  if ( a2 - 1 <= 2 )
  {
    v19 = a2;
    goto LABEL_21;
  }
  v16 = (_OWORD *)((char *)v32 + v11);
  v17 = 0;
  v18 = ((a2 - 2) >> 1) + 1;
  do
  {
    ++v17;
    *v16 = 0;
    v16 += 3;
    *(v16 - 2) = 0;
    *(v16 - 1) = 0;
  }
  while ( v18 > v17 );
  v19 = a2 - 2 * v18;
  v15 += 48 * v18;
  if ( a2 != 2 * v18 )
  {
LABEL_21:
    *((_QWORD *)v15 + 2) = 0;
    *(_OWORD *)v15 = 0;
    if ( v19 != 1 )
    {
      *(_OWORD *)(v15 + 24) = 0;
      *((_QWORD *)v15 + 5) = 0;
      if ( v19 != 2 )
      {
        *((_QWORD *)v15 + 8) = 0;
        *((_OWORD *)v15 + 3) = 0;
      }
    }
  }
  v20 = a1[1];
  v21 = *a1;
  if ( v20 != *a1 )
  {
    v22 = v32;
    v23 = *a1;
    do
    {
      *v22 = 0;
      v23 += 3;
      v22 = (_OWORD *)((char *)v22 + 24);
      *((_QWORD *)v22 - 1) = 0;
      *((_QWORD *)v22 - 3) = *(v23 - 3);
      v24 = *(v23 - 2);
      *(v23 - 3) = 0;
      v25 = *((_QWORD *)v22 - 2);
      *((_QWORD *)v22 - 2) = v24;
      v26 = *(v23 - 1);
      *(v23 - 2) = v25;
      v27 = *((_QWORD *)v22 - 1);
      *((_QWORD *)v22 - 1) = v26;
      *(v23 - 1) = v27;
    }
    while ( v20 != v23 );
    do
    {
      while ( 1 )
      {
        v28 = v21[1];
        v29 = *v21;
        if ( v28 != *v21 )
        {
          do
          {
            if ( *(_DWORD *)(v29 + 32) > 0x40u )
            {
              v30 = *(void **)(v29 + 24);
              if ( v30 )
                operator delete[](v30);
            }
            v29 += 40;
          }
          while ( v28 != v29 );
          v29 = *v21;
        }
        if ( !v29 )
          break;
        v21 += 3;
        operator delete((void *)v29);
        if ( v20 == v21 )
          goto LABEL_35;
      }
      v21 += 3;
    }
    while ( v20 != v21 );
LABEL_35:
    v21 = *a1;
  }
  if ( v21 )
    operator delete(v21);
  *a1 = (__int64 *)v32;
  a1[1] = (__int64 *)v32 + 3 * v31 + 3 * a2;
  a1[2] = (__int64 *)((char *)v32 + v33);
}
