void __fastcall sub_42EC60(__int64 a1, _WORD *a2, unsigned __int64 a3, _WORD *a4)
{
  _WORD *v5; // rbp
  _WORD *v7; // r14
  __int16 v8; // ax
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  _WORD *v11; // rdi
  unsigned __int64 v12; // rbx
  _WORD *v13; // rdx
  char *v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // cf
  unsigned __int64 v18; // rax
  signed __int64 v19; // r9
  unsigned __int64 v20; // r15
  _WORD *v21; // rbp
  _WORD *v22; // rax
  __int64 v23; // rbx
  signed __int64 v24; // r14
  _WORD *v25; // r9
  _WORD *v26; // rax
  char *v27; // r14
  signed __int64 v28; // rbx
  char *v29; // r15
  __int64 v30; // rax
  _WORD *v31; // rbx
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  char *v34; // [rsp+0h] [rbp-60h]
  char *v35; // [rsp+0h] [rbp-60h]
  char *v36; // [rsp+0h] [rbp-60h]
  signed __int64 v37; // [rsp+8h] [rbp-58h]
  signed __int64 v38; // [rsp+8h] [rbp-58h]
  _WORD *v39; // [rsp+10h] [rbp-50h]
  __int16 v40; // [rsp+20h] [rbp-40h]

  if ( !a3 )
    return;
  v5 = a2;
  v7 = *(_WORD **)(a1 + 8);
  if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 1 >= a3 )
  {
    v8 = *a4;
    v9 = (char *)v7 - (char *)a2;
    v40 = *a4;
    v10 = v7 - a2;
    if ( a3 < v10 )
    {
      v28 = 2 * a3;
      v29 = (char *)&v7[v28 / 0xFFFFFFFFFFFFFFFELL];
      if ( v28 <= 2 )
      {
        v30 = *(_QWORD *)(a1 + 8);
        if ( v28 == 2 )
        {
          *v7 = *(_WORD *)v29;
          v30 = *(_QWORD *)(a1 + 8);
        }
      }
      else
      {
        memmove(v7, &v7[v28 / 0xFFFFFFFFFFFFFFFELL], v28);
        v30 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = v28 + v30;
      if ( v29 - (char *)a2 <= 2 )
      {
        if ( v29 - (char *)a2 == 2 )
          *(v7 - 1) = *a2;
      }
      else
      {
        memmove(&a2[(unsigned __int64)v28 / 2], a2, (char *)&v7[v28 / 0xFFFFFFFFFFFFFFFELL] - (char *)a2);
      }
      v31 = &a2[(unsigned __int64)v28 / 2];
      if ( v31 != a2 )
      {
        if ( (((_BYTE)v31 - (_BYTE)a2) & 2) == 0 || (v5 = a2 + 1, *a2 = v40, v31 != a2 + 1) )
        {
          do
          {
            *v5 = v40;
            v5 += 2;
            *(v5 - 1) = v40;
          }
          while ( v31 != v5 );
        }
      }
    }
    else
    {
      v11 = *(_WORD **)(a1 + 8);
      v12 = a3 - v10;
      if ( v12 )
      {
        v11 = &v7[v12];
        if ( v7 != v11 )
        {
          v13 = v7;
          if ( ((2 * (_BYTE)v12) & 2) == 0 || (v13 = v7 + 1, *v7 = v8, v11 != v7 + 1) )
          {
            do
            {
              *v13 = v8;
              v13 += 2;
              *(v13 - 1) = v8;
            }
            while ( v11 != v13 );
          }
        }
      }
      *(_QWORD *)(a1 + 8) = v11;
      if ( v9 <= 2 )
      {
        if ( v9 == 2 )
        {
          *v11 = *a2;
          v11 = *(_WORD **)(a1 + 8);
        }
      }
      else
      {
        memmove(v11, a2, (char *)v7 - (char *)a2);
        v11 = *(_WORD **)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = (char *)v11 + v9;
      if ( v7 != a2 )
      {
        if ( (((_BYTE)v7 - (_BYTE)a2) & 2) == 0 || (v5 = a2 + 1, *a2 = v40, v7 != a2 + 1) )
        {
          do
          {
            *v5 = v40;
            v5 += 2;
            *(v5 - 1) = v40;
          }
          while ( v7 != v5 );
        }
      }
    }
    return;
  }
  v14 = *(char **)a1;
  v15 = ((__int64)v7 - *(_QWORD *)a1) >> 1;
  if ( 0x3FFFFFFFFFFFFFFFLL - v15 < a3 )
    std::__throw_length_error("vector::_M_fill_insert");
  v16 = ((__int64)v7 - *(_QWORD *)a1) >> 1;
  if ( a3 >= v15 )
    v16 = a3;
  v17 = __CFADD__(v16, v15);
  v18 = v16 + v15;
  v19 = (char *)a2 - v14;
  if ( v17 )
  {
    v32 = 0x7FFFFFFFFFFFFFFELL;
  }
  else
  {
    v20 = 0;
    v21 = nullptr;
    if ( !v18 )
      goto LABEL_22;
    if ( v18 > 0x3FFFFFFFFFFFFFFFLL )
      v18 = 0x3FFFFFFFFFFFFFFFLL;
    v32 = 2 * v18;
  }
  v39 = a4;
  v38 = (char *)a2 - v14;
  v36 = *(char **)a1;
  v33 = operator new(v32);
  a4 = v39;
  v19 = v38;
  v14 = v36;
  v21 = (_WORD *)v33;
  v20 = v33 + v32;
LABEL_22:
  v22 = (_WORD *)((char *)v21 + v19);
  v23 = a3;
  do
    *v22++ = *a4;
  while ( (_WORD *)((char *)v21 + v19 + v23 * 2) != v22 );
  if ( v19 <= 2 )
  {
    if ( v19 == 2 )
      *v21 = *(_WORD *)v14;
  }
  else
  {
    v37 = v19;
    v34 = v14;
    memmove(v21, v14, v19);
    v14 = v34;
    v19 = v37;
  }
  v24 = (char *)v7 - (char *)a2;
  v25 = (_WORD *)((char *)&v21[v23] + v19);
  if ( v24 <= 2 )
  {
    if ( v24 == 2 )
      *v25 = *a2;
  }
  else
  {
    v35 = v14;
    v26 = memmove(v25, a2, v24);
    v14 = v35;
    v25 = v26;
  }
  v27 = (char *)v25 + v24;
  if ( v14 )
    operator delete(v14, *(_QWORD *)(a1 + 16) - (_QWORD)v14);
  *(_QWORD *)a1 = v21;
  *(_QWORD *)(a1 + 8) = v27;
  *(_QWORD *)(a1 + 16) = v20;
}

