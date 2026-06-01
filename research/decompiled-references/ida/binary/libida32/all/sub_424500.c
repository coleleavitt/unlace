void __fastcall sub_424500(__int64 a1, _DWORD *a2, unsigned __int64 a3, _DWORD *a4)
{
  _DWORD *v6; // rbp
  _DWORD *v8; // r14
  int v9; // r15d
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rbx
  _DWORD *v14; // rax
  char *v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // cf
  unsigned __int64 v19; // rax
  signed __int64 v20; // rdx
  unsigned __int64 v21; // r15
  _DWORD *v22; // r8
  _DWORD *v23; // rax
  __int64 v24; // rbx
  int v25; // esi
  _DWORD *v26; // rdi
  _DWORD *v27; // rax
  signed __int64 v28; // r14
  _DWORD *v29; // rbx
  char *v30; // rbx
  signed __int64 v31; // rbx
  char *v32; // rcx
  __int64 v33; // rax
  signed __int64 v34; // rcx
  _DWORD *v35; // rbx
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  signed __int64 v38; // [rsp+0h] [rbp-48h]
  _DWORD *v39; // [rsp+0h] [rbp-48h]
  _DWORD *v40; // [rsp+0h] [rbp-48h]
  _DWORD *v41; // [rsp+8h] [rbp-40h]

  if ( !a3 )
    return;
  v6 = a2;
  v8 = *(_DWORD **)(a1 + 8);
  if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v8) >> 2 >= a3 )
  {
    v9 = *a4;
    v10 = (char *)v8 - (char *)a2;
    v11 = v8 - a2;
    if ( a3 < v11 )
    {
      v31 = 4 * a3;
      v32 = (char *)&v8[v31 / 0xFFFFFFFFFFFFFFFCLL];
      if ( v31 <= 4 )
      {
        v33 = *(_QWORD *)(a1 + 8);
        if ( v31 == 4 )
        {
          *v8 = *(_DWORD *)v32;
          v33 = *(_QWORD *)(a1 + 8);
        }
      }
      else
      {
        memmove(*(void **)(a1 + 8), &v8[v31 / 0xFFFFFFFFFFFFFFFCLL], v31);
        v33 = *(_QWORD *)(a1 + 8);
        v32 = (char *)&v8[v31 / 0xFFFFFFFFFFFFFFFCLL];
      }
      v34 = v32 - (char *)a2;
      *(_QWORD *)(a1 + 8) = v31 + v33;
      if ( v34 <= 4 )
      {
        if ( v34 == 4 )
          *(v8 - 1) = *a2;
      }
      else
      {
        memmove((char *)v8 - v34, a2, v34);
      }
      v35 = &a2[(unsigned __int64)v31 / 4];
      if ( v35 != a2 )
      {
        if ( (((_BYTE)v35 - (_BYTE)a2) & 4) == 0 || (v6 = a2 + 1, *a2 = v9, v35 != a2 + 1) )
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
      v12 = *(_DWORD **)(a1 + 8);
      v13 = a3 - v11;
      if ( v13 )
      {
        v12 = &v8[v13];
        if ( v8 != v12 )
        {
          v14 = v8;
          if ( ((4 * (_BYTE)v13) & 4) == 0 || (v14 = v8 + 1, *v8 = v9, v12 != v8 + 1) )
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
      if ( v10 <= 4 )
      {
        if ( v10 == 4 )
        {
          *v12 = *a2;
          v12 = *(_DWORD **)(a1 + 8);
        }
      }
      else
      {
        memmove(v12, a2, v10);
        v12 = *(_DWORD **)(a1 + 8);
        v10 = (char *)v8 - (char *)a2;
      }
      *(_QWORD *)(a1 + 8) = (char *)v12 + v10;
      if ( v8 != a2 )
      {
        if ( (((_BYTE)v8 - (_BYTE)a2) & 4) == 0 || (v6 = a2 + 1, *a2 = v9, v8 != a2 + 1) )
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
  v16 = ((__int64)v8 - *(_QWORD *)a1) >> 2;
  if ( 0x1FFFFFFFFFFFFFFFLL - v16 < a3 )
    std::__throw_length_error("vector::_M_fill_insert");
  v17 = ((__int64)v8 - *(_QWORD *)a1) >> 2;
  if ( a3 >= v16 )
    v17 = a3;
  v18 = __CFADD__(v17, v16);
  v19 = v17 + v16;
  v20 = (char *)a2 - v15;
  if ( v18 )
  {
    v36 = 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    v21 = 0;
    v22 = nullptr;
    if ( !v19 )
      goto LABEL_22;
    if ( v19 > 0x1FFFFFFFFFFFFFFFLL )
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    v36 = 4 * v19;
  }
  v41 = a4;
  v37 = operator new(v36);
  a4 = v41;
  v20 = (char *)a2 - v15;
  v22 = (_DWORD *)v37;
  v21 = v37 + v36;
LABEL_22:
  v23 = (_DWORD *)((char *)v22 + v20);
  v24 = 4 * a3;
  v25 = *a4;
  v26 = (_DWORD *)((char *)v22 + v20 + v24);
  if ( (v24 & 4) == 0 || (*v23 = v25, ++v23, v26 != v23) )
  {
    do
    {
      *v23 = v25;
      v23 += 2;
      *(v23 - 1) = v25;
    }
    while ( v26 != v23 );
  }
  if ( v20 <= 4 )
  {
    if ( v20 == 4 )
      *v22 = *(_DWORD *)v15;
  }
  else
  {
    v38 = v20;
    v27 = memmove(v22, v15, v20);
    v20 = v38;
    v22 = v27;
  }
  v28 = (char *)v8 - (char *)a2;
  v29 = (_DWORD *)((char *)v22 + v20 + v24);
  if ( v28 <= 4 )
  {
    if ( v28 == 4 )
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

