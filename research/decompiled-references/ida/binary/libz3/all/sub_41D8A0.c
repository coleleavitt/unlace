unsigned __int64 *__fastcall sub_41D8A0(__int64 a1, unsigned __int64 *a2, double a3)
{
  unsigned __int64 *v3; // rax
  _BYTE *v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 *v11; // r13
  bool v12; // dl
  signed __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // cf
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  char *v19; // r13
  char *v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 *result; // rax

  v3 = *(unsigned __int64 **)(a1 + 8);
  v4 = *(_BYTE **)a1;
  if ( v3 != *(unsigned __int64 **)(a1 + 16) )
  {
    v5 = *a2;
    v6 = (__int64)(v3 + 1);
    *v3 = *a2;
    *(_QWORD *)(a1 + 8) = v3 + 1;
    goto LABEL_3;
  }
  v13 = (char *)v3 - v4;
  v14 = ((char *)v3 - v4) >> 3;
  if ( v14 == 0xFFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v15 = 1;
  if ( v14 )
    v15 = v14;
  v16 = __CFADD__(v15, v14);
  v17 = v15 + v14;
  if ( v16 )
  {
    v18 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v17 > 0xFFFFFFFFFFFFFFFLL )
      v17 = 0xFFFFFFFFFFFFFFFLL;
    v18 = 8 * v17;
  }
  v19 = (char *)operator new(v18);
  v6 = (__int64)&v19[v13 + 8];
  *(_QWORD *)&v19[v13] = *a2;
  if ( v13 > 0 )
  {
    memcpy(v19, v4, v13);
    v21 = *(_QWORD *)(a1 + 16) - (_QWORD)v4;
LABEL_21:
    operator delete(v4, v21);
    goto LABEL_19;
  }
  if ( v4 )
  {
    v21 = *(_QWORD *)(a1 + 16) - (_QWORD)v4;
    goto LABEL_21;
  }
LABEL_19:
  v20 = &v19[v18];
  *(_QWORD *)a1 = v19;
  v5 = *(_QWORD *)&v19[v13];
  v4 = v19;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v20;
LABEL_3:
  v7 = v6 - (_QWORD)v4;
  v8 = (v6 - (__int64)v4) >> 3;
  v9 = v8 - 1;
  v10 = (v8 - 2) / 2;
  if ( v8 - 1 > 0 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int64 *)&v4[8 * v10];
      v12 = sub_3FDA00(v5, *v11, a3);
      result = (unsigned __int64 *)&v4[8 * v9];
      if ( !v12 )
        break;
      v9 = v10;
      *result = *v11;
      if ( !v10 )
      {
        result = (unsigned __int64 *)v4;
        break;
      }
      v10 = (v10 - 1) / 2;
    }
  }
  else
  {
    result = (unsigned __int64 *)&v4[v7 - 8];
  }
  *result = v5;
  return result;
}

