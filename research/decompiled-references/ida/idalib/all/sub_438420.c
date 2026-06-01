void __fastcall sub_438420(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v6; // rbp
  _QWORD *v8; // r14
  __int64 v9; // r15
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  char *v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // cf
  unsigned __int64 v19; // rax
  signed __int64 v20; // rdx
  _QWORD *v21; // r15
  _QWORD *v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  signed __int64 v28; // r14
  _QWORD *v29; // rbx
  char *v30; // rbx
  signed __int64 v31; // rbx
  char *v32; // rcx
  __int64 v33; // rax
  signed __int64 v34; // rcx
  _QWORD *v35; // rbx
  unsigned __int64 v36; // r15
  _QWORD *v37; // rax
  signed __int64 v38; // [rsp+0h] [rbp-48h]
  _QWORD *v39; // [rsp+0h] [rbp-48h]
  _QWORD *v40; // [rsp+0h] [rbp-48h]
  _QWORD *v41; // [rsp+8h] [rbp-40h]

  if ( !a3 )
    return;
  v6 = a2;
  v8 = *(_QWORD **)(a1 + 8);
  if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v8) >> 3 >= a3 )
  {
    v9 = *a4;
    v10 = (char *)v8 - (char *)a2;
    v11 = v8 - a2;
    if ( a3 < v11 )
    {
      v31 = 8 * a3;
      v32 = (char *)&v8[v31 / 0xFFFFFFFFFFFFFFF8LL];
      if ( v31 <= 8 )
      {
        v33 = *(_QWORD *)(a1 + 8);
        if ( v31 == 8 )
        {
          *v8 = *(_QWORD *)v32;
          v33 = *(_QWORD *)(a1 + 8);
        }
      }
      else
      {
        memmove(*(void **)(a1 + 8), &v8[v31 / 0xFFFFFFFFFFFFFFF8LL], v31);
        v33 = *(_QWORD *)(a1 + 8);
        v32 = (char *)&v8[v31 / 0xFFFFFFFFFFFFFFF8LL];
      }
      v34 = v32 - (char *)a2;
      *(_QWORD *)(a1 + 8) = v31 + v33;
      if ( v34 <= 8 )
      {
        if ( v34 == 8 )
          *(v8 - 1) = *a2;
      }
      else
      {
        memmove((char *)v8 - v34, a2, v34);
      }
      v35 = &a2[(unsigned __int64)v31 / 8];
      if ( v35 != a2 )
      {
        if ( (((_BYTE)v35 - (_BYTE)a2) & 8) == 0 || (v6 = a2 + 1, *a2 = v9, v35 != a2 + 1) )
        {
          do
          {
            *v6 = v9;
            v6 += 2;
            *(v6 - 1) = v9;
          }
          while ( v35 != v6 );
        }
      }
    }
    else
    {
      v12 = *(_QWORD **)(a1 + 8);
      v13 = a3 - v11;
      if ( v13 )
      {
        v12 = &v8[v13];
        if ( v8 != v12 )
        {
          v14 = v8;
          if ( ((8 * (_BYTE)v13) & 8) == 0 || (v14 = v8 + 1, *v8 = v9, v12 != v8 + 1) )
          {
            do
            {
              *v14 = v9;
              v14 += 2;
              *(v14 - 1) = v9;
            }
            while ( v12 != v14 );
          }
        }
      }
      *(_QWORD *)(a1 + 8) = v12;
      if ( v10 <= 8 )
      {
        if ( v10 == 8 )
        {
          *v12 = *a2;
          v12 = *(_QWORD **)(a1 + 8);
        }
      }
      else
      {
        memmove(v12, a2, v10);
        v12 = *(_QWORD **)(a1 + 8);
        v10 = (char *)v8 - (char *)a2;
      }
      *(_QWORD *)(a1 + 8) = (char *)v12 + v10;
      if ( v8 != a2 )
      {
        if ( (((_BYTE)v8 - (_BYTE)a2) & 8) == 0 || (v6 = a2 + 1, *a2 = v9, v8 != a2 + 1) )
        {
          do
          {
            *v6 = v9;
            v6 += 2;
            *(v6 - 1) = v9;
          }
          while ( v8 != v6 );
        }
      }
    }
    return;
  }
  v15 = *(char **)a1;
  v16 = ((__int64)v8 - *(_QWORD *)a1) >> 3;
  if ( 0xFFFFFFFFFFFFFFFLL - v16 < a3 )
    std::__throw_length_error("vector::_M_fill_insert");
  v17 = ((__int64)v8 - *(_QWORD *)a1) >> 3;
  if ( a3 >= v16 )
    v17 = a3;
  v18 = __CFADD__(v17, v16);
  v19 = v17 + v16;
  v20 = (char *)a2 - v15;
  if ( v18 )
  {
    v36 = 0xFFFFFFFFFFFFFFFLL;
  }
  else
  {
    v21 = nullptr;
    v22 = nullptr;
    if ( !v19 )
      goto LABEL_22;
    if ( v19 > 0xFFFFFFFFFFFFFFFLL )
      v19 = 0xFFFFFFFFFFFFFFFLL;
    v36 = v19;
  }
  v41 = a4;
  v37 = (_QWORD *)operator new(v36 * 8);
  a4 = v41;
  v20 = (char *)a2 - v15;
  v22 = v37;
  v21 = &v37[v36];
LABEL_22:
  v23 = (_QWORD *)((char *)v22 + v20);
  v24 = 8 * a3;
  v25 = *a4;
  v26 = (_QWORD *)((char *)v22 + v20 + v24);
  if ( (v24 & 8) == 0 || (*v23 = v25, ++v23, v26 != v23) )
  {
    do
    {
      *v23 = v25;
      v23 += 2;
      *(v23 - 1) = v25;
    }
    while ( v26 != v23 );
  }
  if ( v20 <= 8 )
  {
    if ( v20 == 8 )
      *v22 = *(_QWORD *)v15;
  }
  else
  {
    v38 = v20;
    v27 = memmove(v22, v15, v20);
    v20 = v38;
    v22 = v27;
  }
  v28 = (char *)v8 - (char *)a2;
  v29 = (_QWORD *)((char *)v22 + v20 + v24);
  if ( v28 <= 8 )
  {
    if ( v28 == 8 )
      *v29 = *a2;
  }
  else
  {
    v39 = v22;
    memmove(v29, a2, v28);
    v22 = v39;
  }
  v30 = (char *)v29 + v28;
  if ( v15 )
  {
    v40 = v22;
    operator delete(v15, *(_QWORD *)(a1 + 16) - (_QWORD)v15);
    v22 = v40;
  }
  *(_QWORD *)a1 = v22;
  *(_QWORD *)(a1 + 8) = v30;
  *(_QWORD *)(a1 + 16) = v21;
}
